/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/codecommit/CodeCommitClient.h>
#include <aws/codecommit/CodeCommitEndpoint.h>
#include <aws/codecommit/CodeCommitErrorMarshaller.h>
#include <aws/codecommit/model/BatchGetRepositoriesRequest.h>
#include <aws/codecommit/model/CreateBranchRequest.h>
#include <aws/codecommit/model/CreateCommitRequest.h>
#include <aws/codecommit/model/CreatePullRequestRequest.h>
#include <aws/codecommit/model/CreateRepositoryRequest.h>
#include <aws/codecommit/model/DeleteBranchRequest.h>
#include <aws/codecommit/model/DeleteCommentContentRequest.h>
#include <aws/codecommit/model/DeleteFileRequest.h>
#include <aws/codecommit/model/DeleteRepositoryRequest.h>
#include <aws/codecommit/model/DescribePullRequestEventsRequest.h>
#include <aws/codecommit/model/GetBlobRequest.h>
#include <aws/codecommit/model/GetBranchRequest.h>
#include <aws/codecommit/model/GetCommentRequest.h>
#include <aws/codecommit/model/GetCommentsForComparedCommitRequest.h>
#include <aws/codecommit/model/GetCommentsForPullRequestRequest.h>
#include <aws/codecommit/model/GetCommitRequest.h>
#include <aws/codecommit/model/GetDifferencesRequest.h>
#include <aws/codecommit/model/GetFileRequest.h>
#include <aws/codecommit/model/GetFolderRequest.h>
#include <aws/codecommit/model/GetMergeConflictsRequest.h>
#include <aws/codecommit/model/GetPullRequestRequest.h>
#include <aws/codecommit/model/GetRepositoryRequest.h>
#include <aws/codecommit/model/GetRepositoryTriggersRequest.h>
#include <aws/codecommit/model/ListBranchesRequest.h>
#include <aws/codecommit/model/ListPullRequestsRequest.h>
#include <aws/codecommit/model/ListRepositoriesRequest.h>
#include <aws/codecommit/model/MergePullRequestByFastForwardRequest.h>
#include <aws/codecommit/model/PostCommentForComparedCommitRequest.h>
#include <aws/codecommit/model/PostCommentForPullRequestRequest.h>
#include <aws/codecommit/model/PostCommentReplyRequest.h>
#include <aws/codecommit/model/PutFileRequest.h>
#include <aws/codecommit/model/PutRepositoryTriggersRequest.h>
#include <aws/codecommit/model/TestRepositoryTriggersRequest.h>
#include <aws/codecommit/model/UpdateCommentRequest.h>
#include <aws/codecommit/model/UpdateDefaultBranchRequest.h>
#include <aws/codecommit/model/UpdatePullRequestDescriptionRequest.h>
#include <aws/codecommit/model/UpdatePullRequestStatusRequest.h>
#include <aws/codecommit/model/UpdatePullRequestTitleRequest.h>
#include <aws/codecommit/model/UpdateRepositoryDescriptionRequest.h>
#include <aws/codecommit/model/UpdateRepositoryNameRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodeCommit;
using namespace Aws::CodeCommit::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "codecommit";
static const char* ALLOCATION_TAG = "CodeCommitClient";


CodeCommitClient::CodeCommitClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeCommitClient::CodeCommitClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeCommitClient::CodeCommitClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeCommitClient::~CodeCommitClient()
{
}

void CodeCommitClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CodeCommitEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CodeCommitClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}
BatchGetRepositoriesOutcome CodeCommitClient::BatchGetRepositories(const BatchGetRepositoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchGetRepositoriesOutcome(BatchGetRepositoriesResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetRepositoriesOutcome(outcome.GetError());
  }
}

BatchGetRepositoriesOutcomeCallable CodeCommitClient::BatchGetRepositoriesCallable(const BatchGetRepositoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetRepositoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetRepositories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::BatchGetRepositoriesAsync(const BatchGetRepositoriesRequest& request, const BatchGetRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetRepositoriesAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::BatchGetRepositoriesAsyncHelper(const BatchGetRepositoriesRequest& request, const BatchGetRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetRepositories(request), context);
}

CreateBranchOutcome CodeCommitClient::CreateBranch(const CreateBranchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateBranchOutcome(NoResult());
  }
  else
  {
    return CreateBranchOutcome(outcome.GetError());
  }
}

CreateBranchOutcomeCallable CodeCommitClient::CreateBranchCallable(const CreateBranchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBranchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBranch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::CreateBranchAsync(const CreateBranchRequest& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBranchAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::CreateBranchAsyncHelper(const CreateBranchRequest& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBranch(request), context);
}

CreateCommitOutcome CodeCommitClient::CreateCommit(const CreateCommitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateCommitOutcome(CreateCommitResult(outcome.GetResult()));
  }
  else
  {
    return CreateCommitOutcome(outcome.GetError());
  }
}

CreateCommitOutcomeCallable CodeCommitClient::CreateCommitCallable(const CreateCommitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCommitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCommit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::CreateCommitAsync(const CreateCommitRequest& request, const CreateCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCommitAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::CreateCommitAsyncHelper(const CreateCommitRequest& request, const CreateCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCommit(request), context);
}

CreatePullRequestOutcome CodeCommitClient::CreatePullRequest(const CreatePullRequestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePullRequestOutcome(CreatePullRequestResult(outcome.GetResult()));
  }
  else
  {
    return CreatePullRequestOutcome(outcome.GetError());
  }
}

CreatePullRequestOutcomeCallable CodeCommitClient::CreatePullRequestCallable(const CreatePullRequestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePullRequestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePullRequest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::CreatePullRequestAsync(const CreatePullRequestRequest& request, const CreatePullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePullRequestAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::CreatePullRequestAsyncHelper(const CreatePullRequestRequest& request, const CreatePullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePullRequest(request), context);
}

CreateRepositoryOutcome CodeCommitClient::CreateRepository(const CreateRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRepositoryOutcome(CreateRepositoryResult(outcome.GetResult()));
  }
  else
  {
    return CreateRepositoryOutcome(outcome.GetError());
  }
}

CreateRepositoryOutcomeCallable CodeCommitClient::CreateRepositoryCallable(const CreateRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::CreateRepositoryAsync(const CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRepositoryAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::CreateRepositoryAsyncHelper(const CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRepository(request), context);
}

DeleteBranchOutcome CodeCommitClient::DeleteBranch(const DeleteBranchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteBranchOutcome(DeleteBranchResult(outcome.GetResult()));
  }
  else
  {
    return DeleteBranchOutcome(outcome.GetError());
  }
}

DeleteBranchOutcomeCallable CodeCommitClient::DeleteBranchCallable(const DeleteBranchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBranchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBranch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::DeleteBranchAsync(const DeleteBranchRequest& request, const DeleteBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBranchAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::DeleteBranchAsyncHelper(const DeleteBranchRequest& request, const DeleteBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBranch(request), context);
}

DeleteCommentContentOutcome CodeCommitClient::DeleteCommentContent(const DeleteCommentContentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteCommentContentOutcome(DeleteCommentContentResult(outcome.GetResult()));
  }
  else
  {
    return DeleteCommentContentOutcome(outcome.GetError());
  }
}

DeleteCommentContentOutcomeCallable CodeCommitClient::DeleteCommentContentCallable(const DeleteCommentContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCommentContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCommentContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::DeleteCommentContentAsync(const DeleteCommentContentRequest& request, const DeleteCommentContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCommentContentAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::DeleteCommentContentAsyncHelper(const DeleteCommentContentRequest& request, const DeleteCommentContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCommentContent(request), context);
}

DeleteFileOutcome CodeCommitClient::DeleteFile(const DeleteFileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteFileOutcome(DeleteFileResult(outcome.GetResult()));
  }
  else
  {
    return DeleteFileOutcome(outcome.GetError());
  }
}

DeleteFileOutcomeCallable CodeCommitClient::DeleteFileCallable(const DeleteFileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::DeleteFileAsync(const DeleteFileRequest& request, const DeleteFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFileAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::DeleteFileAsyncHelper(const DeleteFileRequest& request, const DeleteFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFile(request), context);
}

DeleteRepositoryOutcome CodeCommitClient::DeleteRepository(const DeleteRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRepositoryOutcome(DeleteRepositoryResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRepositoryOutcome(outcome.GetError());
  }
}

DeleteRepositoryOutcomeCallable CodeCommitClient::DeleteRepositoryCallable(const DeleteRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::DeleteRepositoryAsync(const DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRepositoryAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::DeleteRepositoryAsyncHelper(const DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRepository(request), context);
}

DescribePullRequestEventsOutcome CodeCommitClient::DescribePullRequestEvents(const DescribePullRequestEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribePullRequestEventsOutcome(DescribePullRequestEventsResult(outcome.GetResult()));
  }
  else
  {
    return DescribePullRequestEventsOutcome(outcome.GetError());
  }
}

DescribePullRequestEventsOutcomeCallable CodeCommitClient::DescribePullRequestEventsCallable(const DescribePullRequestEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePullRequestEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePullRequestEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::DescribePullRequestEventsAsync(const DescribePullRequestEventsRequest& request, const DescribePullRequestEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePullRequestEventsAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::DescribePullRequestEventsAsyncHelper(const DescribePullRequestEventsRequest& request, const DescribePullRequestEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePullRequestEvents(request), context);
}

GetBlobOutcome CodeCommitClient::GetBlob(const GetBlobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetBlobOutcome(GetBlobResult(outcome.GetResult()));
  }
  else
  {
    return GetBlobOutcome(outcome.GetError());
  }
}

GetBlobOutcomeCallable CodeCommitClient::GetBlobCallable(const GetBlobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBlobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBlob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::GetBlobAsync(const GetBlobRequest& request, const GetBlobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBlobAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::GetBlobAsyncHelper(const GetBlobRequest& request, const GetBlobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBlob(request), context);
}

GetBranchOutcome CodeCommitClient::GetBranch(const GetBranchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetBranchOutcome(GetBranchResult(outcome.GetResult()));
  }
  else
  {
    return GetBranchOutcome(outcome.GetError());
  }
}

GetBranchOutcomeCallable CodeCommitClient::GetBranchCallable(const GetBranchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBranchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBranch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::GetBranchAsync(const GetBranchRequest& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBranchAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::GetBranchAsyncHelper(const GetBranchRequest& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBranch(request), context);
}

GetCommentOutcome CodeCommitClient::GetComment(const GetCommentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCommentOutcome(GetCommentResult(outcome.GetResult()));
  }
  else
  {
    return GetCommentOutcome(outcome.GetError());
  }
}

GetCommentOutcomeCallable CodeCommitClient::GetCommentCallable(const GetCommentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCommentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::GetCommentAsync(const GetCommentRequest& request, const GetCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCommentAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::GetCommentAsyncHelper(const GetCommentRequest& request, const GetCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetComment(request), context);
}

GetCommentsForComparedCommitOutcome CodeCommitClient::GetCommentsForComparedCommit(const GetCommentsForComparedCommitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCommentsForComparedCommitOutcome(GetCommentsForComparedCommitResult(outcome.GetResult()));
  }
  else
  {
    return GetCommentsForComparedCommitOutcome(outcome.GetError());
  }
}

GetCommentsForComparedCommitOutcomeCallable CodeCommitClient::GetCommentsForComparedCommitCallable(const GetCommentsForComparedCommitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCommentsForComparedCommitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCommentsForComparedCommit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::GetCommentsForComparedCommitAsync(const GetCommentsForComparedCommitRequest& request, const GetCommentsForComparedCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCommentsForComparedCommitAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::GetCommentsForComparedCommitAsyncHelper(const GetCommentsForComparedCommitRequest& request, const GetCommentsForComparedCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCommentsForComparedCommit(request), context);
}

GetCommentsForPullRequestOutcome CodeCommitClient::GetCommentsForPullRequest(const GetCommentsForPullRequestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCommentsForPullRequestOutcome(GetCommentsForPullRequestResult(outcome.GetResult()));
  }
  else
  {
    return GetCommentsForPullRequestOutcome(outcome.GetError());
  }
}

GetCommentsForPullRequestOutcomeCallable CodeCommitClient::GetCommentsForPullRequestCallable(const GetCommentsForPullRequestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCommentsForPullRequestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCommentsForPullRequest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::GetCommentsForPullRequestAsync(const GetCommentsForPullRequestRequest& request, const GetCommentsForPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCommentsForPullRequestAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::GetCommentsForPullRequestAsyncHelper(const GetCommentsForPullRequestRequest& request, const GetCommentsForPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCommentsForPullRequest(request), context);
}

GetCommitOutcome CodeCommitClient::GetCommit(const GetCommitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCommitOutcome(GetCommitResult(outcome.GetResult()));
  }
  else
  {
    return GetCommitOutcome(outcome.GetError());
  }
}

GetCommitOutcomeCallable CodeCommitClient::GetCommitCallable(const GetCommitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCommitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCommit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::GetCommitAsync(const GetCommitRequest& request, const GetCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCommitAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::GetCommitAsyncHelper(const GetCommitRequest& request, const GetCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCommit(request), context);
}

GetDifferencesOutcome CodeCommitClient::GetDifferences(const GetDifferencesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDifferencesOutcome(GetDifferencesResult(outcome.GetResult()));
  }
  else
  {
    return GetDifferencesOutcome(outcome.GetError());
  }
}

GetDifferencesOutcomeCallable CodeCommitClient::GetDifferencesCallable(const GetDifferencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDifferencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDifferences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::GetDifferencesAsync(const GetDifferencesRequest& request, const GetDifferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDifferencesAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::GetDifferencesAsyncHelper(const GetDifferencesRequest& request, const GetDifferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDifferences(request), context);
}

GetFileOutcome CodeCommitClient::GetFile(const GetFileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetFileOutcome(GetFileResult(outcome.GetResult()));
  }
  else
  {
    return GetFileOutcome(outcome.GetError());
  }
}

GetFileOutcomeCallable CodeCommitClient::GetFileCallable(const GetFileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::GetFileAsync(const GetFileRequest& request, const GetFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFileAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::GetFileAsyncHelper(const GetFileRequest& request, const GetFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFile(request), context);
}

GetFolderOutcome CodeCommitClient::GetFolder(const GetFolderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetFolderOutcome(GetFolderResult(outcome.GetResult()));
  }
  else
  {
    return GetFolderOutcome(outcome.GetError());
  }
}

GetFolderOutcomeCallable CodeCommitClient::GetFolderCallable(const GetFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::GetFolderAsync(const GetFolderRequest& request, const GetFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFolderAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::GetFolderAsyncHelper(const GetFolderRequest& request, const GetFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFolder(request), context);
}

GetMergeConflictsOutcome CodeCommitClient::GetMergeConflicts(const GetMergeConflictsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetMergeConflictsOutcome(GetMergeConflictsResult(outcome.GetResult()));
  }
  else
  {
    return GetMergeConflictsOutcome(outcome.GetError());
  }
}

GetMergeConflictsOutcomeCallable CodeCommitClient::GetMergeConflictsCallable(const GetMergeConflictsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMergeConflictsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMergeConflicts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::GetMergeConflictsAsync(const GetMergeConflictsRequest& request, const GetMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMergeConflictsAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::GetMergeConflictsAsyncHelper(const GetMergeConflictsRequest& request, const GetMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMergeConflicts(request), context);
}

GetPullRequestOutcome CodeCommitClient::GetPullRequest(const GetPullRequestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetPullRequestOutcome(GetPullRequestResult(outcome.GetResult()));
  }
  else
  {
    return GetPullRequestOutcome(outcome.GetError());
  }
}

GetPullRequestOutcomeCallable CodeCommitClient::GetPullRequestCallable(const GetPullRequestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPullRequestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPullRequest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::GetPullRequestAsync(const GetPullRequestRequest& request, const GetPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPullRequestAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::GetPullRequestAsyncHelper(const GetPullRequestRequest& request, const GetPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPullRequest(request), context);
}

GetRepositoryOutcome CodeCommitClient::GetRepository(const GetRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRepositoryOutcome(GetRepositoryResult(outcome.GetResult()));
  }
  else
  {
    return GetRepositoryOutcome(outcome.GetError());
  }
}

GetRepositoryOutcomeCallable CodeCommitClient::GetRepositoryCallable(const GetRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::GetRepositoryAsync(const GetRepositoryRequest& request, const GetRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRepositoryAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::GetRepositoryAsyncHelper(const GetRepositoryRequest& request, const GetRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRepository(request), context);
}

GetRepositoryTriggersOutcome CodeCommitClient::GetRepositoryTriggers(const GetRepositoryTriggersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRepositoryTriggersOutcome(GetRepositoryTriggersResult(outcome.GetResult()));
  }
  else
  {
    return GetRepositoryTriggersOutcome(outcome.GetError());
  }
}

GetRepositoryTriggersOutcomeCallable CodeCommitClient::GetRepositoryTriggersCallable(const GetRepositoryTriggersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRepositoryTriggersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRepositoryTriggers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::GetRepositoryTriggersAsync(const GetRepositoryTriggersRequest& request, const GetRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRepositoryTriggersAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::GetRepositoryTriggersAsyncHelper(const GetRepositoryTriggersRequest& request, const GetRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRepositoryTriggers(request), context);
}

ListBranchesOutcome CodeCommitClient::ListBranches(const ListBranchesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListBranchesOutcome(ListBranchesResult(outcome.GetResult()));
  }
  else
  {
    return ListBranchesOutcome(outcome.GetError());
  }
}

ListBranchesOutcomeCallable CodeCommitClient::ListBranchesCallable(const ListBranchesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBranchesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBranches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::ListBranchesAsync(const ListBranchesRequest& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBranchesAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::ListBranchesAsyncHelper(const ListBranchesRequest& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBranches(request), context);
}

ListPullRequestsOutcome CodeCommitClient::ListPullRequests(const ListPullRequestsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPullRequestsOutcome(ListPullRequestsResult(outcome.GetResult()));
  }
  else
  {
    return ListPullRequestsOutcome(outcome.GetError());
  }
}

ListPullRequestsOutcomeCallable CodeCommitClient::ListPullRequestsCallable(const ListPullRequestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPullRequestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPullRequests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::ListPullRequestsAsync(const ListPullRequestsRequest& request, const ListPullRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPullRequestsAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::ListPullRequestsAsyncHelper(const ListPullRequestsRequest& request, const ListPullRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPullRequests(request), context);
}

ListRepositoriesOutcome CodeCommitClient::ListRepositories(const ListRepositoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRepositoriesOutcome(ListRepositoriesResult(outcome.GetResult()));
  }
  else
  {
    return ListRepositoriesOutcome(outcome.GetError());
  }
}

ListRepositoriesOutcomeCallable CodeCommitClient::ListRepositoriesCallable(const ListRepositoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRepositoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRepositories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::ListRepositoriesAsync(const ListRepositoriesRequest& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRepositoriesAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::ListRepositoriesAsyncHelper(const ListRepositoriesRequest& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRepositories(request), context);
}

MergePullRequestByFastForwardOutcome CodeCommitClient::MergePullRequestByFastForward(const MergePullRequestByFastForwardRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return MergePullRequestByFastForwardOutcome(MergePullRequestByFastForwardResult(outcome.GetResult()));
  }
  else
  {
    return MergePullRequestByFastForwardOutcome(outcome.GetError());
  }
}

MergePullRequestByFastForwardOutcomeCallable CodeCommitClient::MergePullRequestByFastForwardCallable(const MergePullRequestByFastForwardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MergePullRequestByFastForwardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MergePullRequestByFastForward(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::MergePullRequestByFastForwardAsync(const MergePullRequestByFastForwardRequest& request, const MergePullRequestByFastForwardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->MergePullRequestByFastForwardAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::MergePullRequestByFastForwardAsyncHelper(const MergePullRequestByFastForwardRequest& request, const MergePullRequestByFastForwardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, MergePullRequestByFastForward(request), context);
}

PostCommentForComparedCommitOutcome CodeCommitClient::PostCommentForComparedCommit(const PostCommentForComparedCommitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PostCommentForComparedCommitOutcome(PostCommentForComparedCommitResult(outcome.GetResult()));
  }
  else
  {
    return PostCommentForComparedCommitOutcome(outcome.GetError());
  }
}

PostCommentForComparedCommitOutcomeCallable CodeCommitClient::PostCommentForComparedCommitCallable(const PostCommentForComparedCommitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PostCommentForComparedCommitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PostCommentForComparedCommit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::PostCommentForComparedCommitAsync(const PostCommentForComparedCommitRequest& request, const PostCommentForComparedCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PostCommentForComparedCommitAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::PostCommentForComparedCommitAsyncHelper(const PostCommentForComparedCommitRequest& request, const PostCommentForComparedCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PostCommentForComparedCommit(request), context);
}

PostCommentForPullRequestOutcome CodeCommitClient::PostCommentForPullRequest(const PostCommentForPullRequestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PostCommentForPullRequestOutcome(PostCommentForPullRequestResult(outcome.GetResult()));
  }
  else
  {
    return PostCommentForPullRequestOutcome(outcome.GetError());
  }
}

PostCommentForPullRequestOutcomeCallable CodeCommitClient::PostCommentForPullRequestCallable(const PostCommentForPullRequestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PostCommentForPullRequestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PostCommentForPullRequest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::PostCommentForPullRequestAsync(const PostCommentForPullRequestRequest& request, const PostCommentForPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PostCommentForPullRequestAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::PostCommentForPullRequestAsyncHelper(const PostCommentForPullRequestRequest& request, const PostCommentForPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PostCommentForPullRequest(request), context);
}

PostCommentReplyOutcome CodeCommitClient::PostCommentReply(const PostCommentReplyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PostCommentReplyOutcome(PostCommentReplyResult(outcome.GetResult()));
  }
  else
  {
    return PostCommentReplyOutcome(outcome.GetError());
  }
}

PostCommentReplyOutcomeCallable CodeCommitClient::PostCommentReplyCallable(const PostCommentReplyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PostCommentReplyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PostCommentReply(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::PostCommentReplyAsync(const PostCommentReplyRequest& request, const PostCommentReplyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PostCommentReplyAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::PostCommentReplyAsyncHelper(const PostCommentReplyRequest& request, const PostCommentReplyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PostCommentReply(request), context);
}

PutFileOutcome CodeCommitClient::PutFile(const PutFileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutFileOutcome(PutFileResult(outcome.GetResult()));
  }
  else
  {
    return PutFileOutcome(outcome.GetError());
  }
}

PutFileOutcomeCallable CodeCommitClient::PutFileCallable(const PutFileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutFileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutFile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::PutFileAsync(const PutFileRequest& request, const PutFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutFileAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::PutFileAsyncHelper(const PutFileRequest& request, const PutFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutFile(request), context);
}

PutRepositoryTriggersOutcome CodeCommitClient::PutRepositoryTriggers(const PutRepositoryTriggersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutRepositoryTriggersOutcome(PutRepositoryTriggersResult(outcome.GetResult()));
  }
  else
  {
    return PutRepositoryTriggersOutcome(outcome.GetError());
  }
}

PutRepositoryTriggersOutcomeCallable CodeCommitClient::PutRepositoryTriggersCallable(const PutRepositoryTriggersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRepositoryTriggersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRepositoryTriggers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::PutRepositoryTriggersAsync(const PutRepositoryTriggersRequest& request, const PutRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutRepositoryTriggersAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::PutRepositoryTriggersAsyncHelper(const PutRepositoryTriggersRequest& request, const PutRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRepositoryTriggers(request), context);
}

TestRepositoryTriggersOutcome CodeCommitClient::TestRepositoryTriggers(const TestRepositoryTriggersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TestRepositoryTriggersOutcome(TestRepositoryTriggersResult(outcome.GetResult()));
  }
  else
  {
    return TestRepositoryTriggersOutcome(outcome.GetError());
  }
}

TestRepositoryTriggersOutcomeCallable CodeCommitClient::TestRepositoryTriggersCallable(const TestRepositoryTriggersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestRepositoryTriggersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestRepositoryTriggers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::TestRepositoryTriggersAsync(const TestRepositoryTriggersRequest& request, const TestRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TestRepositoryTriggersAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::TestRepositoryTriggersAsyncHelper(const TestRepositoryTriggersRequest& request, const TestRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TestRepositoryTriggers(request), context);
}

UpdateCommentOutcome CodeCommitClient::UpdateComment(const UpdateCommentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateCommentOutcome(UpdateCommentResult(outcome.GetResult()));
  }
  else
  {
    return UpdateCommentOutcome(outcome.GetError());
  }
}

UpdateCommentOutcomeCallable CodeCommitClient::UpdateCommentCallable(const UpdateCommentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCommentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateComment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::UpdateCommentAsync(const UpdateCommentRequest& request, const UpdateCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCommentAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::UpdateCommentAsyncHelper(const UpdateCommentRequest& request, const UpdateCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateComment(request), context);
}

UpdateDefaultBranchOutcome CodeCommitClient::UpdateDefaultBranch(const UpdateDefaultBranchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDefaultBranchOutcome(NoResult());
  }
  else
  {
    return UpdateDefaultBranchOutcome(outcome.GetError());
  }
}

UpdateDefaultBranchOutcomeCallable CodeCommitClient::UpdateDefaultBranchCallable(const UpdateDefaultBranchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDefaultBranchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDefaultBranch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::UpdateDefaultBranchAsync(const UpdateDefaultBranchRequest& request, const UpdateDefaultBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDefaultBranchAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::UpdateDefaultBranchAsyncHelper(const UpdateDefaultBranchRequest& request, const UpdateDefaultBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDefaultBranch(request), context);
}

UpdatePullRequestDescriptionOutcome CodeCommitClient::UpdatePullRequestDescription(const UpdatePullRequestDescriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdatePullRequestDescriptionOutcome(UpdatePullRequestDescriptionResult(outcome.GetResult()));
  }
  else
  {
    return UpdatePullRequestDescriptionOutcome(outcome.GetError());
  }
}

UpdatePullRequestDescriptionOutcomeCallable CodeCommitClient::UpdatePullRequestDescriptionCallable(const UpdatePullRequestDescriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePullRequestDescriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePullRequestDescription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::UpdatePullRequestDescriptionAsync(const UpdatePullRequestDescriptionRequest& request, const UpdatePullRequestDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePullRequestDescriptionAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::UpdatePullRequestDescriptionAsyncHelper(const UpdatePullRequestDescriptionRequest& request, const UpdatePullRequestDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePullRequestDescription(request), context);
}

UpdatePullRequestStatusOutcome CodeCommitClient::UpdatePullRequestStatus(const UpdatePullRequestStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdatePullRequestStatusOutcome(UpdatePullRequestStatusResult(outcome.GetResult()));
  }
  else
  {
    return UpdatePullRequestStatusOutcome(outcome.GetError());
  }
}

UpdatePullRequestStatusOutcomeCallable CodeCommitClient::UpdatePullRequestStatusCallable(const UpdatePullRequestStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePullRequestStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePullRequestStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::UpdatePullRequestStatusAsync(const UpdatePullRequestStatusRequest& request, const UpdatePullRequestStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePullRequestStatusAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::UpdatePullRequestStatusAsyncHelper(const UpdatePullRequestStatusRequest& request, const UpdatePullRequestStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePullRequestStatus(request), context);
}

UpdatePullRequestTitleOutcome CodeCommitClient::UpdatePullRequestTitle(const UpdatePullRequestTitleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdatePullRequestTitleOutcome(UpdatePullRequestTitleResult(outcome.GetResult()));
  }
  else
  {
    return UpdatePullRequestTitleOutcome(outcome.GetError());
  }
}

UpdatePullRequestTitleOutcomeCallable CodeCommitClient::UpdatePullRequestTitleCallable(const UpdatePullRequestTitleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePullRequestTitleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePullRequestTitle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::UpdatePullRequestTitleAsync(const UpdatePullRequestTitleRequest& request, const UpdatePullRequestTitleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePullRequestTitleAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::UpdatePullRequestTitleAsyncHelper(const UpdatePullRequestTitleRequest& request, const UpdatePullRequestTitleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePullRequestTitle(request), context);
}

UpdateRepositoryDescriptionOutcome CodeCommitClient::UpdateRepositoryDescription(const UpdateRepositoryDescriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRepositoryDescriptionOutcome(NoResult());
  }
  else
  {
    return UpdateRepositoryDescriptionOutcome(outcome.GetError());
  }
}

UpdateRepositoryDescriptionOutcomeCallable CodeCommitClient::UpdateRepositoryDescriptionCallable(const UpdateRepositoryDescriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRepositoryDescriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRepositoryDescription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::UpdateRepositoryDescriptionAsync(const UpdateRepositoryDescriptionRequest& request, const UpdateRepositoryDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRepositoryDescriptionAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::UpdateRepositoryDescriptionAsyncHelper(const UpdateRepositoryDescriptionRequest& request, const UpdateRepositoryDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRepositoryDescription(request), context);
}

UpdateRepositoryNameOutcome CodeCommitClient::UpdateRepositoryName(const UpdateRepositoryNameRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRepositoryNameOutcome(NoResult());
  }
  else
  {
    return UpdateRepositoryNameOutcome(outcome.GetError());
  }
}

UpdateRepositoryNameOutcomeCallable CodeCommitClient::UpdateRepositoryNameCallable(const UpdateRepositoryNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRepositoryNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRepositoryName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClient::UpdateRepositoryNameAsync(const UpdateRepositoryNameRequest& request, const UpdateRepositoryNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRepositoryNameAsyncHelper( request, handler, context ); } );
}

void CodeCommitClient::UpdateRepositoryNameAsyncHelper(const UpdateRepositoryNameRequest& request, const UpdateRepositoryNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRepositoryName(request), context);
}

