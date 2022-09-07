/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/codecommit/model/AssociateApprovalRuleTemplateWithRepositoryRequest.h>
#include <aws/codecommit/model/BatchAssociateApprovalRuleTemplateWithRepositoriesRequest.h>
#include <aws/codecommit/model/BatchDescribeMergeConflictsRequest.h>
#include <aws/codecommit/model/BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest.h>
#include <aws/codecommit/model/BatchGetCommitsRequest.h>
#include <aws/codecommit/model/BatchGetRepositoriesRequest.h>
#include <aws/codecommit/model/CreateApprovalRuleTemplateRequest.h>
#include <aws/codecommit/model/CreateBranchRequest.h>
#include <aws/codecommit/model/CreateCommitRequest.h>
#include <aws/codecommit/model/CreatePullRequestRequest.h>
#include <aws/codecommit/model/CreatePullRequestApprovalRuleRequest.h>
#include <aws/codecommit/model/CreateRepositoryRequest.h>
#include <aws/codecommit/model/CreateUnreferencedMergeCommitRequest.h>
#include <aws/codecommit/model/DeleteApprovalRuleTemplateRequest.h>
#include <aws/codecommit/model/DeleteBranchRequest.h>
#include <aws/codecommit/model/DeleteCommentContentRequest.h>
#include <aws/codecommit/model/DeleteFileRequest.h>
#include <aws/codecommit/model/DeletePullRequestApprovalRuleRequest.h>
#include <aws/codecommit/model/DeleteRepositoryRequest.h>
#include <aws/codecommit/model/DescribeMergeConflictsRequest.h>
#include <aws/codecommit/model/DescribePullRequestEventsRequest.h>
#include <aws/codecommit/model/DisassociateApprovalRuleTemplateFromRepositoryRequest.h>
#include <aws/codecommit/model/EvaluatePullRequestApprovalRulesRequest.h>
#include <aws/codecommit/model/GetApprovalRuleTemplateRequest.h>
#include <aws/codecommit/model/GetBlobRequest.h>
#include <aws/codecommit/model/GetBranchRequest.h>
#include <aws/codecommit/model/GetCommentRequest.h>
#include <aws/codecommit/model/GetCommentReactionsRequest.h>
#include <aws/codecommit/model/GetCommentsForComparedCommitRequest.h>
#include <aws/codecommit/model/GetCommentsForPullRequestRequest.h>
#include <aws/codecommit/model/GetCommitRequest.h>
#include <aws/codecommit/model/GetDifferencesRequest.h>
#include <aws/codecommit/model/GetFileRequest.h>
#include <aws/codecommit/model/GetFolderRequest.h>
#include <aws/codecommit/model/GetMergeCommitRequest.h>
#include <aws/codecommit/model/GetMergeConflictsRequest.h>
#include <aws/codecommit/model/GetMergeOptionsRequest.h>
#include <aws/codecommit/model/GetPullRequestRequest.h>
#include <aws/codecommit/model/GetPullRequestApprovalStatesRequest.h>
#include <aws/codecommit/model/GetPullRequestOverrideStateRequest.h>
#include <aws/codecommit/model/GetRepositoryRequest.h>
#include <aws/codecommit/model/GetRepositoryTriggersRequest.h>
#include <aws/codecommit/model/ListApprovalRuleTemplatesRequest.h>
#include <aws/codecommit/model/ListAssociatedApprovalRuleTemplatesForRepositoryRequest.h>
#include <aws/codecommit/model/ListBranchesRequest.h>
#include <aws/codecommit/model/ListPullRequestsRequest.h>
#include <aws/codecommit/model/ListRepositoriesRequest.h>
#include <aws/codecommit/model/ListRepositoriesForApprovalRuleTemplateRequest.h>
#include <aws/codecommit/model/ListTagsForResourceRequest.h>
#include <aws/codecommit/model/MergeBranchesByFastForwardRequest.h>
#include <aws/codecommit/model/MergeBranchesBySquashRequest.h>
#include <aws/codecommit/model/MergeBranchesByThreeWayRequest.h>
#include <aws/codecommit/model/MergePullRequestByFastForwardRequest.h>
#include <aws/codecommit/model/MergePullRequestBySquashRequest.h>
#include <aws/codecommit/model/MergePullRequestByThreeWayRequest.h>
#include <aws/codecommit/model/OverridePullRequestApprovalRulesRequest.h>
#include <aws/codecommit/model/PostCommentForComparedCommitRequest.h>
#include <aws/codecommit/model/PostCommentForPullRequestRequest.h>
#include <aws/codecommit/model/PostCommentReplyRequest.h>
#include <aws/codecommit/model/PutCommentReactionRequest.h>
#include <aws/codecommit/model/PutFileRequest.h>
#include <aws/codecommit/model/PutRepositoryTriggersRequest.h>
#include <aws/codecommit/model/TagResourceRequest.h>
#include <aws/codecommit/model/TestRepositoryTriggersRequest.h>
#include <aws/codecommit/model/UntagResourceRequest.h>
#include <aws/codecommit/model/UpdateApprovalRuleTemplateContentRequest.h>
#include <aws/codecommit/model/UpdateApprovalRuleTemplateDescriptionRequest.h>
#include <aws/codecommit/model/UpdateApprovalRuleTemplateNameRequest.h>
#include <aws/codecommit/model/UpdateCommentRequest.h>
#include <aws/codecommit/model/UpdateDefaultBranchRequest.h>
#include <aws/codecommit/model/UpdatePullRequestApprovalRuleContentRequest.h>
#include <aws/codecommit/model/UpdatePullRequestApprovalStateRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeCommitClient::CodeCommitClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeCommitClient::CodeCommitClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeCommitClient::~CodeCommitClient()
{
}

void CodeCommitClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CodeCommit");
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

AssociateApprovalRuleTemplateWithRepositoryOutcome CodeCommitClient::AssociateApprovalRuleTemplateWithRepository(const AssociateApprovalRuleTemplateWithRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateApprovalRuleTemplateWithRepositoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateApprovalRuleTemplateWithRepositoryOutcomeCallable CodeCommitClient::AssociateApprovalRuleTemplateWithRepositoryCallable(const AssociateApprovalRuleTemplateWithRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateApprovalRuleTemplateWithRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateApprovalRuleTemplateWithRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientAssociateApprovalRuleTemplateWithRepositoryAsyncHelper(CodeCommitClient const * const clientThis, const AssociateApprovalRuleTemplateWithRepositoryRequest& request, const AssociateApprovalRuleTemplateWithRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateApprovalRuleTemplateWithRepository(request), context);
}

void CodeCommitClient::AssociateApprovalRuleTemplateWithRepositoryAsync(const AssociateApprovalRuleTemplateWithRepositoryRequest& request, const AssociateApprovalRuleTemplateWithRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientAssociateApprovalRuleTemplateWithRepositoryAsyncHelper( this, request, handler, context ); } );
}

BatchAssociateApprovalRuleTemplateWithRepositoriesOutcome CodeCommitClient::BatchAssociateApprovalRuleTemplateWithRepositories(const BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchAssociateApprovalRuleTemplateWithRepositoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchAssociateApprovalRuleTemplateWithRepositoriesOutcomeCallable CodeCommitClient::BatchAssociateApprovalRuleTemplateWithRepositoriesCallable(const BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchAssociateApprovalRuleTemplateWithRepositoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchAssociateApprovalRuleTemplateWithRepositories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientBatchAssociateApprovalRuleTemplateWithRepositoriesAsyncHelper(CodeCommitClient const * const clientThis, const BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& request, const BatchAssociateApprovalRuleTemplateWithRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchAssociateApprovalRuleTemplateWithRepositories(request), context);
}

void CodeCommitClient::BatchAssociateApprovalRuleTemplateWithRepositoriesAsync(const BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& request, const BatchAssociateApprovalRuleTemplateWithRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientBatchAssociateApprovalRuleTemplateWithRepositoriesAsyncHelper( this, request, handler, context ); } );
}

BatchDescribeMergeConflictsOutcome CodeCommitClient::BatchDescribeMergeConflicts(const BatchDescribeMergeConflictsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDescribeMergeConflictsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDescribeMergeConflictsOutcomeCallable CodeCommitClient::BatchDescribeMergeConflictsCallable(const BatchDescribeMergeConflictsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDescribeMergeConflictsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDescribeMergeConflicts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientBatchDescribeMergeConflictsAsyncHelper(CodeCommitClient const * const clientThis, const BatchDescribeMergeConflictsRequest& request, const BatchDescribeMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDescribeMergeConflicts(request), context);
}

void CodeCommitClient::BatchDescribeMergeConflictsAsync(const BatchDescribeMergeConflictsRequest& request, const BatchDescribeMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientBatchDescribeMergeConflictsAsyncHelper( this, request, handler, context ); } );
}

BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcome CodeCommitClient::BatchDisassociateApprovalRuleTemplateFromRepositories(const BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcomeCallable CodeCommitClient::BatchDisassociateApprovalRuleTemplateFromRepositoriesCallable(const BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDisassociateApprovalRuleTemplateFromRepositories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientBatchDisassociateApprovalRuleTemplateFromRepositoriesAsyncHelper(CodeCommitClient const * const clientThis, const BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest& request, const BatchDisassociateApprovalRuleTemplateFromRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDisassociateApprovalRuleTemplateFromRepositories(request), context);
}

void CodeCommitClient::BatchDisassociateApprovalRuleTemplateFromRepositoriesAsync(const BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest& request, const BatchDisassociateApprovalRuleTemplateFromRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientBatchDisassociateApprovalRuleTemplateFromRepositoriesAsyncHelper( this, request, handler, context ); } );
}

BatchGetCommitsOutcome CodeCommitClient::BatchGetCommits(const BatchGetCommitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetCommitsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetCommitsOutcomeCallable CodeCommitClient::BatchGetCommitsCallable(const BatchGetCommitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetCommitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetCommits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientBatchGetCommitsAsyncHelper(CodeCommitClient const * const clientThis, const BatchGetCommitsRequest& request, const BatchGetCommitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetCommits(request), context);
}

void CodeCommitClient::BatchGetCommitsAsync(const BatchGetCommitsRequest& request, const BatchGetCommitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientBatchGetCommitsAsyncHelper( this, request, handler, context ); } );
}

BatchGetRepositoriesOutcome CodeCommitClient::BatchGetRepositories(const BatchGetRepositoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetRepositoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetRepositoriesOutcomeCallable CodeCommitClient::BatchGetRepositoriesCallable(const BatchGetRepositoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetRepositoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetRepositories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientBatchGetRepositoriesAsyncHelper(CodeCommitClient const * const clientThis, const BatchGetRepositoriesRequest& request, const BatchGetRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetRepositories(request), context);
}

void CodeCommitClient::BatchGetRepositoriesAsync(const BatchGetRepositoriesRequest& request, const BatchGetRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientBatchGetRepositoriesAsyncHelper( this, request, handler, context ); } );
}

CreateApprovalRuleTemplateOutcome CodeCommitClient::CreateApprovalRuleTemplate(const CreateApprovalRuleTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateApprovalRuleTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApprovalRuleTemplateOutcomeCallable CodeCommitClient::CreateApprovalRuleTemplateCallable(const CreateApprovalRuleTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApprovalRuleTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApprovalRuleTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientCreateApprovalRuleTemplateAsyncHelper(CodeCommitClient const * const clientThis, const CreateApprovalRuleTemplateRequest& request, const CreateApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApprovalRuleTemplate(request), context);
}

void CodeCommitClient::CreateApprovalRuleTemplateAsync(const CreateApprovalRuleTemplateRequest& request, const CreateApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientCreateApprovalRuleTemplateAsyncHelper( this, request, handler, context ); } );
}

CreateBranchOutcome CodeCommitClient::CreateBranch(const CreateBranchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateBranchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBranchOutcomeCallable CodeCommitClient::CreateBranchCallable(const CreateBranchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBranchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBranch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientCreateBranchAsyncHelper(CodeCommitClient const * const clientThis, const CreateBranchRequest& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateBranch(request), context);
}

void CodeCommitClient::CreateBranchAsync(const CreateBranchRequest& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientCreateBranchAsyncHelper( this, request, handler, context ); } );
}

CreateCommitOutcome CodeCommitClient::CreateCommit(const CreateCommitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCommitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCommitOutcomeCallable CodeCommitClient::CreateCommitCallable(const CreateCommitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCommitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCommit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientCreateCommitAsyncHelper(CodeCommitClient const * const clientThis, const CreateCommitRequest& request, const CreateCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCommit(request), context);
}

void CodeCommitClient::CreateCommitAsync(const CreateCommitRequest& request, const CreateCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientCreateCommitAsyncHelper( this, request, handler, context ); } );
}

CreatePullRequestOutcome CodeCommitClient::CreatePullRequest(const CreatePullRequestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePullRequestOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePullRequestOutcomeCallable CodeCommitClient::CreatePullRequestCallable(const CreatePullRequestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePullRequestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePullRequest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientCreatePullRequestAsyncHelper(CodeCommitClient const * const clientThis, const CreatePullRequestRequest& request, const CreatePullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePullRequest(request), context);
}

void CodeCommitClient::CreatePullRequestAsync(const CreatePullRequestRequest& request, const CreatePullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientCreatePullRequestAsyncHelper( this, request, handler, context ); } );
}

CreatePullRequestApprovalRuleOutcome CodeCommitClient::CreatePullRequestApprovalRule(const CreatePullRequestApprovalRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePullRequestApprovalRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePullRequestApprovalRuleOutcomeCallable CodeCommitClient::CreatePullRequestApprovalRuleCallable(const CreatePullRequestApprovalRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePullRequestApprovalRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePullRequestApprovalRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientCreatePullRequestApprovalRuleAsyncHelper(CodeCommitClient const * const clientThis, const CreatePullRequestApprovalRuleRequest& request, const CreatePullRequestApprovalRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePullRequestApprovalRule(request), context);
}

void CodeCommitClient::CreatePullRequestApprovalRuleAsync(const CreatePullRequestApprovalRuleRequest& request, const CreatePullRequestApprovalRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientCreatePullRequestApprovalRuleAsyncHelper( this, request, handler, context ); } );
}

CreateRepositoryOutcome CodeCommitClient::CreateRepository(const CreateRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRepositoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRepositoryOutcomeCallable CodeCommitClient::CreateRepositoryCallable(const CreateRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientCreateRepositoryAsyncHelper(CodeCommitClient const * const clientThis, const CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRepository(request), context);
}

void CodeCommitClient::CreateRepositoryAsync(const CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientCreateRepositoryAsyncHelper( this, request, handler, context ); } );
}

CreateUnreferencedMergeCommitOutcome CodeCommitClient::CreateUnreferencedMergeCommit(const CreateUnreferencedMergeCommitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUnreferencedMergeCommitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUnreferencedMergeCommitOutcomeCallable CodeCommitClient::CreateUnreferencedMergeCommitCallable(const CreateUnreferencedMergeCommitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUnreferencedMergeCommitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUnreferencedMergeCommit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientCreateUnreferencedMergeCommitAsyncHelper(CodeCommitClient const * const clientThis, const CreateUnreferencedMergeCommitRequest& request, const CreateUnreferencedMergeCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUnreferencedMergeCommit(request), context);
}

void CodeCommitClient::CreateUnreferencedMergeCommitAsync(const CreateUnreferencedMergeCommitRequest& request, const CreateUnreferencedMergeCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientCreateUnreferencedMergeCommitAsyncHelper( this, request, handler, context ); } );
}

DeleteApprovalRuleTemplateOutcome CodeCommitClient::DeleteApprovalRuleTemplate(const DeleteApprovalRuleTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApprovalRuleTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApprovalRuleTemplateOutcomeCallable CodeCommitClient::DeleteApprovalRuleTemplateCallable(const DeleteApprovalRuleTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApprovalRuleTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApprovalRuleTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientDeleteApprovalRuleTemplateAsyncHelper(CodeCommitClient const * const clientThis, const DeleteApprovalRuleTemplateRequest& request, const DeleteApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApprovalRuleTemplate(request), context);
}

void CodeCommitClient::DeleteApprovalRuleTemplateAsync(const DeleteApprovalRuleTemplateRequest& request, const DeleteApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientDeleteApprovalRuleTemplateAsyncHelper( this, request, handler, context ); } );
}

DeleteBranchOutcome CodeCommitClient::DeleteBranch(const DeleteBranchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteBranchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBranchOutcomeCallable CodeCommitClient::DeleteBranchCallable(const DeleteBranchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBranchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBranch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientDeleteBranchAsyncHelper(CodeCommitClient const * const clientThis, const DeleteBranchRequest& request, const DeleteBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBranch(request), context);
}

void CodeCommitClient::DeleteBranchAsync(const DeleteBranchRequest& request, const DeleteBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientDeleteBranchAsyncHelper( this, request, handler, context ); } );
}

DeleteCommentContentOutcome CodeCommitClient::DeleteCommentContent(const DeleteCommentContentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCommentContentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCommentContentOutcomeCallable CodeCommitClient::DeleteCommentContentCallable(const DeleteCommentContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCommentContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCommentContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientDeleteCommentContentAsyncHelper(CodeCommitClient const * const clientThis, const DeleteCommentContentRequest& request, const DeleteCommentContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCommentContent(request), context);
}

void CodeCommitClient::DeleteCommentContentAsync(const DeleteCommentContentRequest& request, const DeleteCommentContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientDeleteCommentContentAsyncHelper( this, request, handler, context ); } );
}

DeleteFileOutcome CodeCommitClient::DeleteFile(const DeleteFileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFileOutcomeCallable CodeCommitClient::DeleteFileCallable(const DeleteFileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientDeleteFileAsyncHelper(CodeCommitClient const * const clientThis, const DeleteFileRequest& request, const DeleteFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFile(request), context);
}

void CodeCommitClient::DeleteFileAsync(const DeleteFileRequest& request, const DeleteFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientDeleteFileAsyncHelper( this, request, handler, context ); } );
}

DeletePullRequestApprovalRuleOutcome CodeCommitClient::DeletePullRequestApprovalRule(const DeletePullRequestApprovalRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePullRequestApprovalRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePullRequestApprovalRuleOutcomeCallable CodeCommitClient::DeletePullRequestApprovalRuleCallable(const DeletePullRequestApprovalRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePullRequestApprovalRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePullRequestApprovalRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientDeletePullRequestApprovalRuleAsyncHelper(CodeCommitClient const * const clientThis, const DeletePullRequestApprovalRuleRequest& request, const DeletePullRequestApprovalRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePullRequestApprovalRule(request), context);
}

void CodeCommitClient::DeletePullRequestApprovalRuleAsync(const DeletePullRequestApprovalRuleRequest& request, const DeletePullRequestApprovalRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientDeletePullRequestApprovalRuleAsyncHelper( this, request, handler, context ); } );
}

DeleteRepositoryOutcome CodeCommitClient::DeleteRepository(const DeleteRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRepositoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRepositoryOutcomeCallable CodeCommitClient::DeleteRepositoryCallable(const DeleteRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientDeleteRepositoryAsyncHelper(CodeCommitClient const * const clientThis, const DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRepository(request), context);
}

void CodeCommitClient::DeleteRepositoryAsync(const DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientDeleteRepositoryAsyncHelper( this, request, handler, context ); } );
}

DescribeMergeConflictsOutcome CodeCommitClient::DescribeMergeConflicts(const DescribeMergeConflictsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMergeConflictsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMergeConflictsOutcomeCallable CodeCommitClient::DescribeMergeConflictsCallable(const DescribeMergeConflictsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMergeConflictsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMergeConflicts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientDescribeMergeConflictsAsyncHelper(CodeCommitClient const * const clientThis, const DescribeMergeConflictsRequest& request, const DescribeMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMergeConflicts(request), context);
}

void CodeCommitClient::DescribeMergeConflictsAsync(const DescribeMergeConflictsRequest& request, const DescribeMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientDescribeMergeConflictsAsyncHelper( this, request, handler, context ); } );
}

DescribePullRequestEventsOutcome CodeCommitClient::DescribePullRequestEvents(const DescribePullRequestEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePullRequestEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePullRequestEventsOutcomeCallable CodeCommitClient::DescribePullRequestEventsCallable(const DescribePullRequestEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePullRequestEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePullRequestEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientDescribePullRequestEventsAsyncHelper(CodeCommitClient const * const clientThis, const DescribePullRequestEventsRequest& request, const DescribePullRequestEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePullRequestEvents(request), context);
}

void CodeCommitClient::DescribePullRequestEventsAsync(const DescribePullRequestEventsRequest& request, const DescribePullRequestEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientDescribePullRequestEventsAsyncHelper( this, request, handler, context ); } );
}

DisassociateApprovalRuleTemplateFromRepositoryOutcome CodeCommitClient::DisassociateApprovalRuleTemplateFromRepository(const DisassociateApprovalRuleTemplateFromRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateApprovalRuleTemplateFromRepositoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateApprovalRuleTemplateFromRepositoryOutcomeCallable CodeCommitClient::DisassociateApprovalRuleTemplateFromRepositoryCallable(const DisassociateApprovalRuleTemplateFromRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateApprovalRuleTemplateFromRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateApprovalRuleTemplateFromRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientDisassociateApprovalRuleTemplateFromRepositoryAsyncHelper(CodeCommitClient const * const clientThis, const DisassociateApprovalRuleTemplateFromRepositoryRequest& request, const DisassociateApprovalRuleTemplateFromRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateApprovalRuleTemplateFromRepository(request), context);
}

void CodeCommitClient::DisassociateApprovalRuleTemplateFromRepositoryAsync(const DisassociateApprovalRuleTemplateFromRepositoryRequest& request, const DisassociateApprovalRuleTemplateFromRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientDisassociateApprovalRuleTemplateFromRepositoryAsyncHelper( this, request, handler, context ); } );
}

EvaluatePullRequestApprovalRulesOutcome CodeCommitClient::EvaluatePullRequestApprovalRules(const EvaluatePullRequestApprovalRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EvaluatePullRequestApprovalRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EvaluatePullRequestApprovalRulesOutcomeCallable CodeCommitClient::EvaluatePullRequestApprovalRulesCallable(const EvaluatePullRequestApprovalRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EvaluatePullRequestApprovalRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EvaluatePullRequestApprovalRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientEvaluatePullRequestApprovalRulesAsyncHelper(CodeCommitClient const * const clientThis, const EvaluatePullRequestApprovalRulesRequest& request, const EvaluatePullRequestApprovalRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EvaluatePullRequestApprovalRules(request), context);
}

void CodeCommitClient::EvaluatePullRequestApprovalRulesAsync(const EvaluatePullRequestApprovalRulesRequest& request, const EvaluatePullRequestApprovalRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientEvaluatePullRequestApprovalRulesAsyncHelper( this, request, handler, context ); } );
}

GetApprovalRuleTemplateOutcome CodeCommitClient::GetApprovalRuleTemplate(const GetApprovalRuleTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetApprovalRuleTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetApprovalRuleTemplateOutcomeCallable CodeCommitClient::GetApprovalRuleTemplateCallable(const GetApprovalRuleTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApprovalRuleTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApprovalRuleTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetApprovalRuleTemplateAsyncHelper(CodeCommitClient const * const clientThis, const GetApprovalRuleTemplateRequest& request, const GetApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApprovalRuleTemplate(request), context);
}

void CodeCommitClient::GetApprovalRuleTemplateAsync(const GetApprovalRuleTemplateRequest& request, const GetApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetApprovalRuleTemplateAsyncHelper( this, request, handler, context ); } );
}

GetBlobOutcome CodeCommitClient::GetBlob(const GetBlobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetBlobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBlobOutcomeCallable CodeCommitClient::GetBlobCallable(const GetBlobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBlobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBlob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetBlobAsyncHelper(CodeCommitClient const * const clientThis, const GetBlobRequest& request, const GetBlobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBlob(request), context);
}

void CodeCommitClient::GetBlobAsync(const GetBlobRequest& request, const GetBlobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetBlobAsyncHelper( this, request, handler, context ); } );
}

GetBranchOutcome CodeCommitClient::GetBranch(const GetBranchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetBranchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBranchOutcomeCallable CodeCommitClient::GetBranchCallable(const GetBranchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBranchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBranch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetBranchAsyncHelper(CodeCommitClient const * const clientThis, const GetBranchRequest& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBranch(request), context);
}

void CodeCommitClient::GetBranchAsync(const GetBranchRequest& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetBranchAsyncHelper( this, request, handler, context ); } );
}

GetCommentOutcome CodeCommitClient::GetComment(const GetCommentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCommentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCommentOutcomeCallable CodeCommitClient::GetCommentCallable(const GetCommentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCommentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetCommentAsyncHelper(CodeCommitClient const * const clientThis, const GetCommentRequest& request, const GetCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetComment(request), context);
}

void CodeCommitClient::GetCommentAsync(const GetCommentRequest& request, const GetCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetCommentAsyncHelper( this, request, handler, context ); } );
}

GetCommentReactionsOutcome CodeCommitClient::GetCommentReactions(const GetCommentReactionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCommentReactionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCommentReactionsOutcomeCallable CodeCommitClient::GetCommentReactionsCallable(const GetCommentReactionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCommentReactionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCommentReactions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetCommentReactionsAsyncHelper(CodeCommitClient const * const clientThis, const GetCommentReactionsRequest& request, const GetCommentReactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCommentReactions(request), context);
}

void CodeCommitClient::GetCommentReactionsAsync(const GetCommentReactionsRequest& request, const GetCommentReactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetCommentReactionsAsyncHelper( this, request, handler, context ); } );
}

GetCommentsForComparedCommitOutcome CodeCommitClient::GetCommentsForComparedCommit(const GetCommentsForComparedCommitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCommentsForComparedCommitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCommentsForComparedCommitOutcomeCallable CodeCommitClient::GetCommentsForComparedCommitCallable(const GetCommentsForComparedCommitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCommentsForComparedCommitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCommentsForComparedCommit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetCommentsForComparedCommitAsyncHelper(CodeCommitClient const * const clientThis, const GetCommentsForComparedCommitRequest& request, const GetCommentsForComparedCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCommentsForComparedCommit(request), context);
}

void CodeCommitClient::GetCommentsForComparedCommitAsync(const GetCommentsForComparedCommitRequest& request, const GetCommentsForComparedCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetCommentsForComparedCommitAsyncHelper( this, request, handler, context ); } );
}

GetCommentsForPullRequestOutcome CodeCommitClient::GetCommentsForPullRequest(const GetCommentsForPullRequestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCommentsForPullRequestOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCommentsForPullRequestOutcomeCallable CodeCommitClient::GetCommentsForPullRequestCallable(const GetCommentsForPullRequestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCommentsForPullRequestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCommentsForPullRequest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetCommentsForPullRequestAsyncHelper(CodeCommitClient const * const clientThis, const GetCommentsForPullRequestRequest& request, const GetCommentsForPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCommentsForPullRequest(request), context);
}

void CodeCommitClient::GetCommentsForPullRequestAsync(const GetCommentsForPullRequestRequest& request, const GetCommentsForPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetCommentsForPullRequestAsyncHelper( this, request, handler, context ); } );
}

GetCommitOutcome CodeCommitClient::GetCommit(const GetCommitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCommitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCommitOutcomeCallable CodeCommitClient::GetCommitCallable(const GetCommitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCommitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCommit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetCommitAsyncHelper(CodeCommitClient const * const clientThis, const GetCommitRequest& request, const GetCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCommit(request), context);
}

void CodeCommitClient::GetCommitAsync(const GetCommitRequest& request, const GetCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetCommitAsyncHelper( this, request, handler, context ); } );
}

GetDifferencesOutcome CodeCommitClient::GetDifferences(const GetDifferencesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDifferencesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDifferencesOutcomeCallable CodeCommitClient::GetDifferencesCallable(const GetDifferencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDifferencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDifferences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetDifferencesAsyncHelper(CodeCommitClient const * const clientThis, const GetDifferencesRequest& request, const GetDifferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDifferences(request), context);
}

void CodeCommitClient::GetDifferencesAsync(const GetDifferencesRequest& request, const GetDifferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetDifferencesAsyncHelper( this, request, handler, context ); } );
}

GetFileOutcome CodeCommitClient::GetFile(const GetFileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetFileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFileOutcomeCallable CodeCommitClient::GetFileCallable(const GetFileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetFileAsyncHelper(CodeCommitClient const * const clientThis, const GetFileRequest& request, const GetFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFile(request), context);
}

void CodeCommitClient::GetFileAsync(const GetFileRequest& request, const GetFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetFileAsyncHelper( this, request, handler, context ); } );
}

GetFolderOutcome CodeCommitClient::GetFolder(const GetFolderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetFolderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFolderOutcomeCallable CodeCommitClient::GetFolderCallable(const GetFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetFolderAsyncHelper(CodeCommitClient const * const clientThis, const GetFolderRequest& request, const GetFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFolder(request), context);
}

void CodeCommitClient::GetFolderAsync(const GetFolderRequest& request, const GetFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetFolderAsyncHelper( this, request, handler, context ); } );
}

GetMergeCommitOutcome CodeCommitClient::GetMergeCommit(const GetMergeCommitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMergeCommitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMergeCommitOutcomeCallable CodeCommitClient::GetMergeCommitCallable(const GetMergeCommitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMergeCommitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMergeCommit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetMergeCommitAsyncHelper(CodeCommitClient const * const clientThis, const GetMergeCommitRequest& request, const GetMergeCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMergeCommit(request), context);
}

void CodeCommitClient::GetMergeCommitAsync(const GetMergeCommitRequest& request, const GetMergeCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetMergeCommitAsyncHelper( this, request, handler, context ); } );
}

GetMergeConflictsOutcome CodeCommitClient::GetMergeConflicts(const GetMergeConflictsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMergeConflictsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMergeConflictsOutcomeCallable CodeCommitClient::GetMergeConflictsCallable(const GetMergeConflictsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMergeConflictsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMergeConflicts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetMergeConflictsAsyncHelper(CodeCommitClient const * const clientThis, const GetMergeConflictsRequest& request, const GetMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMergeConflicts(request), context);
}

void CodeCommitClient::GetMergeConflictsAsync(const GetMergeConflictsRequest& request, const GetMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetMergeConflictsAsyncHelper( this, request, handler, context ); } );
}

GetMergeOptionsOutcome CodeCommitClient::GetMergeOptions(const GetMergeOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMergeOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMergeOptionsOutcomeCallable CodeCommitClient::GetMergeOptionsCallable(const GetMergeOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMergeOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMergeOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetMergeOptionsAsyncHelper(CodeCommitClient const * const clientThis, const GetMergeOptionsRequest& request, const GetMergeOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMergeOptions(request), context);
}

void CodeCommitClient::GetMergeOptionsAsync(const GetMergeOptionsRequest& request, const GetMergeOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetMergeOptionsAsyncHelper( this, request, handler, context ); } );
}

GetPullRequestOutcome CodeCommitClient::GetPullRequest(const GetPullRequestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPullRequestOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPullRequestOutcomeCallable CodeCommitClient::GetPullRequestCallable(const GetPullRequestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPullRequestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPullRequest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetPullRequestAsyncHelper(CodeCommitClient const * const clientThis, const GetPullRequestRequest& request, const GetPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPullRequest(request), context);
}

void CodeCommitClient::GetPullRequestAsync(const GetPullRequestRequest& request, const GetPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetPullRequestAsyncHelper( this, request, handler, context ); } );
}

GetPullRequestApprovalStatesOutcome CodeCommitClient::GetPullRequestApprovalStates(const GetPullRequestApprovalStatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPullRequestApprovalStatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPullRequestApprovalStatesOutcomeCallable CodeCommitClient::GetPullRequestApprovalStatesCallable(const GetPullRequestApprovalStatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPullRequestApprovalStatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPullRequestApprovalStates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetPullRequestApprovalStatesAsyncHelper(CodeCommitClient const * const clientThis, const GetPullRequestApprovalStatesRequest& request, const GetPullRequestApprovalStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPullRequestApprovalStates(request), context);
}

void CodeCommitClient::GetPullRequestApprovalStatesAsync(const GetPullRequestApprovalStatesRequest& request, const GetPullRequestApprovalStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetPullRequestApprovalStatesAsyncHelper( this, request, handler, context ); } );
}

GetPullRequestOverrideStateOutcome CodeCommitClient::GetPullRequestOverrideState(const GetPullRequestOverrideStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPullRequestOverrideStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPullRequestOverrideStateOutcomeCallable CodeCommitClient::GetPullRequestOverrideStateCallable(const GetPullRequestOverrideStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPullRequestOverrideStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPullRequestOverrideState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetPullRequestOverrideStateAsyncHelper(CodeCommitClient const * const clientThis, const GetPullRequestOverrideStateRequest& request, const GetPullRequestOverrideStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPullRequestOverrideState(request), context);
}

void CodeCommitClient::GetPullRequestOverrideStateAsync(const GetPullRequestOverrideStateRequest& request, const GetPullRequestOverrideStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetPullRequestOverrideStateAsyncHelper( this, request, handler, context ); } );
}

GetRepositoryOutcome CodeCommitClient::GetRepository(const GetRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRepositoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRepositoryOutcomeCallable CodeCommitClient::GetRepositoryCallable(const GetRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetRepositoryAsyncHelper(CodeCommitClient const * const clientThis, const GetRepositoryRequest& request, const GetRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRepository(request), context);
}

void CodeCommitClient::GetRepositoryAsync(const GetRepositoryRequest& request, const GetRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetRepositoryAsyncHelper( this, request, handler, context ); } );
}

GetRepositoryTriggersOutcome CodeCommitClient::GetRepositoryTriggers(const GetRepositoryTriggersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRepositoryTriggersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRepositoryTriggersOutcomeCallable CodeCommitClient::GetRepositoryTriggersCallable(const GetRepositoryTriggersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRepositoryTriggersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRepositoryTriggers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientGetRepositoryTriggersAsyncHelper(CodeCommitClient const * const clientThis, const GetRepositoryTriggersRequest& request, const GetRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRepositoryTriggers(request), context);
}

void CodeCommitClient::GetRepositoryTriggersAsync(const GetRepositoryTriggersRequest& request, const GetRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientGetRepositoryTriggersAsyncHelper( this, request, handler, context ); } );
}

ListApprovalRuleTemplatesOutcome CodeCommitClient::ListApprovalRuleTemplates(const ListApprovalRuleTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListApprovalRuleTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListApprovalRuleTemplatesOutcomeCallable CodeCommitClient::ListApprovalRuleTemplatesCallable(const ListApprovalRuleTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApprovalRuleTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApprovalRuleTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientListApprovalRuleTemplatesAsyncHelper(CodeCommitClient const * const clientThis, const ListApprovalRuleTemplatesRequest& request, const ListApprovalRuleTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApprovalRuleTemplates(request), context);
}

void CodeCommitClient::ListApprovalRuleTemplatesAsync(const ListApprovalRuleTemplatesRequest& request, const ListApprovalRuleTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientListApprovalRuleTemplatesAsyncHelper( this, request, handler, context ); } );
}

ListAssociatedApprovalRuleTemplatesForRepositoryOutcome CodeCommitClient::ListAssociatedApprovalRuleTemplatesForRepository(const ListAssociatedApprovalRuleTemplatesForRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAssociatedApprovalRuleTemplatesForRepositoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssociatedApprovalRuleTemplatesForRepositoryOutcomeCallable CodeCommitClient::ListAssociatedApprovalRuleTemplatesForRepositoryCallable(const ListAssociatedApprovalRuleTemplatesForRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociatedApprovalRuleTemplatesForRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociatedApprovalRuleTemplatesForRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientListAssociatedApprovalRuleTemplatesForRepositoryAsyncHelper(CodeCommitClient const * const clientThis, const ListAssociatedApprovalRuleTemplatesForRepositoryRequest& request, const ListAssociatedApprovalRuleTemplatesForRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAssociatedApprovalRuleTemplatesForRepository(request), context);
}

void CodeCommitClient::ListAssociatedApprovalRuleTemplatesForRepositoryAsync(const ListAssociatedApprovalRuleTemplatesForRepositoryRequest& request, const ListAssociatedApprovalRuleTemplatesForRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientListAssociatedApprovalRuleTemplatesForRepositoryAsyncHelper( this, request, handler, context ); } );
}

ListBranchesOutcome CodeCommitClient::ListBranches(const ListBranchesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListBranchesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBranchesOutcomeCallable CodeCommitClient::ListBranchesCallable(const ListBranchesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBranchesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBranches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientListBranchesAsyncHelper(CodeCommitClient const * const clientThis, const ListBranchesRequest& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBranches(request), context);
}

void CodeCommitClient::ListBranchesAsync(const ListBranchesRequest& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientListBranchesAsyncHelper( this, request, handler, context ); } );
}

ListPullRequestsOutcome CodeCommitClient::ListPullRequests(const ListPullRequestsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPullRequestsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPullRequestsOutcomeCallable CodeCommitClient::ListPullRequestsCallable(const ListPullRequestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPullRequestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPullRequests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientListPullRequestsAsyncHelper(CodeCommitClient const * const clientThis, const ListPullRequestsRequest& request, const ListPullRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPullRequests(request), context);
}

void CodeCommitClient::ListPullRequestsAsync(const ListPullRequestsRequest& request, const ListPullRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientListPullRequestsAsyncHelper( this, request, handler, context ); } );
}

ListRepositoriesOutcome CodeCommitClient::ListRepositories(const ListRepositoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRepositoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRepositoriesOutcomeCallable CodeCommitClient::ListRepositoriesCallable(const ListRepositoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRepositoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRepositories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientListRepositoriesAsyncHelper(CodeCommitClient const * const clientThis, const ListRepositoriesRequest& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRepositories(request), context);
}

void CodeCommitClient::ListRepositoriesAsync(const ListRepositoriesRequest& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientListRepositoriesAsyncHelper( this, request, handler, context ); } );
}

ListRepositoriesForApprovalRuleTemplateOutcome CodeCommitClient::ListRepositoriesForApprovalRuleTemplate(const ListRepositoriesForApprovalRuleTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRepositoriesForApprovalRuleTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRepositoriesForApprovalRuleTemplateOutcomeCallable CodeCommitClient::ListRepositoriesForApprovalRuleTemplateCallable(const ListRepositoriesForApprovalRuleTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRepositoriesForApprovalRuleTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRepositoriesForApprovalRuleTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientListRepositoriesForApprovalRuleTemplateAsyncHelper(CodeCommitClient const * const clientThis, const ListRepositoriesForApprovalRuleTemplateRequest& request, const ListRepositoriesForApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRepositoriesForApprovalRuleTemplate(request), context);
}

void CodeCommitClient::ListRepositoriesForApprovalRuleTemplateAsync(const ListRepositoriesForApprovalRuleTemplateRequest& request, const ListRepositoriesForApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientListRepositoriesForApprovalRuleTemplateAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome CodeCommitClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CodeCommitClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientListTagsForResourceAsyncHelper(CodeCommitClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void CodeCommitClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

MergeBranchesByFastForwardOutcome CodeCommitClient::MergeBranchesByFastForward(const MergeBranchesByFastForwardRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return MergeBranchesByFastForwardOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergeBranchesByFastForwardOutcomeCallable CodeCommitClient::MergeBranchesByFastForwardCallable(const MergeBranchesByFastForwardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MergeBranchesByFastForwardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MergeBranchesByFastForward(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientMergeBranchesByFastForwardAsyncHelper(CodeCommitClient const * const clientThis, const MergeBranchesByFastForwardRequest& request, const MergeBranchesByFastForwardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->MergeBranchesByFastForward(request), context);
}

void CodeCommitClient::MergeBranchesByFastForwardAsync(const MergeBranchesByFastForwardRequest& request, const MergeBranchesByFastForwardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientMergeBranchesByFastForwardAsyncHelper( this, request, handler, context ); } );
}

MergeBranchesBySquashOutcome CodeCommitClient::MergeBranchesBySquash(const MergeBranchesBySquashRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return MergeBranchesBySquashOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergeBranchesBySquashOutcomeCallable CodeCommitClient::MergeBranchesBySquashCallable(const MergeBranchesBySquashRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MergeBranchesBySquashOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MergeBranchesBySquash(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientMergeBranchesBySquashAsyncHelper(CodeCommitClient const * const clientThis, const MergeBranchesBySquashRequest& request, const MergeBranchesBySquashResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->MergeBranchesBySquash(request), context);
}

void CodeCommitClient::MergeBranchesBySquashAsync(const MergeBranchesBySquashRequest& request, const MergeBranchesBySquashResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientMergeBranchesBySquashAsyncHelper( this, request, handler, context ); } );
}

MergeBranchesByThreeWayOutcome CodeCommitClient::MergeBranchesByThreeWay(const MergeBranchesByThreeWayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return MergeBranchesByThreeWayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergeBranchesByThreeWayOutcomeCallable CodeCommitClient::MergeBranchesByThreeWayCallable(const MergeBranchesByThreeWayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MergeBranchesByThreeWayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MergeBranchesByThreeWay(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientMergeBranchesByThreeWayAsyncHelper(CodeCommitClient const * const clientThis, const MergeBranchesByThreeWayRequest& request, const MergeBranchesByThreeWayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->MergeBranchesByThreeWay(request), context);
}

void CodeCommitClient::MergeBranchesByThreeWayAsync(const MergeBranchesByThreeWayRequest& request, const MergeBranchesByThreeWayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientMergeBranchesByThreeWayAsyncHelper( this, request, handler, context ); } );
}

MergePullRequestByFastForwardOutcome CodeCommitClient::MergePullRequestByFastForward(const MergePullRequestByFastForwardRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return MergePullRequestByFastForwardOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergePullRequestByFastForwardOutcomeCallable CodeCommitClient::MergePullRequestByFastForwardCallable(const MergePullRequestByFastForwardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MergePullRequestByFastForwardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MergePullRequestByFastForward(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientMergePullRequestByFastForwardAsyncHelper(CodeCommitClient const * const clientThis, const MergePullRequestByFastForwardRequest& request, const MergePullRequestByFastForwardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->MergePullRequestByFastForward(request), context);
}

void CodeCommitClient::MergePullRequestByFastForwardAsync(const MergePullRequestByFastForwardRequest& request, const MergePullRequestByFastForwardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientMergePullRequestByFastForwardAsyncHelper( this, request, handler, context ); } );
}

MergePullRequestBySquashOutcome CodeCommitClient::MergePullRequestBySquash(const MergePullRequestBySquashRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return MergePullRequestBySquashOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergePullRequestBySquashOutcomeCallable CodeCommitClient::MergePullRequestBySquashCallable(const MergePullRequestBySquashRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MergePullRequestBySquashOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MergePullRequestBySquash(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientMergePullRequestBySquashAsyncHelper(CodeCommitClient const * const clientThis, const MergePullRequestBySquashRequest& request, const MergePullRequestBySquashResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->MergePullRequestBySquash(request), context);
}

void CodeCommitClient::MergePullRequestBySquashAsync(const MergePullRequestBySquashRequest& request, const MergePullRequestBySquashResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientMergePullRequestBySquashAsyncHelper( this, request, handler, context ); } );
}

MergePullRequestByThreeWayOutcome CodeCommitClient::MergePullRequestByThreeWay(const MergePullRequestByThreeWayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return MergePullRequestByThreeWayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergePullRequestByThreeWayOutcomeCallable CodeCommitClient::MergePullRequestByThreeWayCallable(const MergePullRequestByThreeWayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MergePullRequestByThreeWayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MergePullRequestByThreeWay(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientMergePullRequestByThreeWayAsyncHelper(CodeCommitClient const * const clientThis, const MergePullRequestByThreeWayRequest& request, const MergePullRequestByThreeWayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->MergePullRequestByThreeWay(request), context);
}

void CodeCommitClient::MergePullRequestByThreeWayAsync(const MergePullRequestByThreeWayRequest& request, const MergePullRequestByThreeWayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientMergePullRequestByThreeWayAsyncHelper( this, request, handler, context ); } );
}

OverridePullRequestApprovalRulesOutcome CodeCommitClient::OverridePullRequestApprovalRules(const OverridePullRequestApprovalRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return OverridePullRequestApprovalRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

OverridePullRequestApprovalRulesOutcomeCallable CodeCommitClient::OverridePullRequestApprovalRulesCallable(const OverridePullRequestApprovalRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< OverridePullRequestApprovalRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->OverridePullRequestApprovalRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientOverridePullRequestApprovalRulesAsyncHelper(CodeCommitClient const * const clientThis, const OverridePullRequestApprovalRulesRequest& request, const OverridePullRequestApprovalRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->OverridePullRequestApprovalRules(request), context);
}

void CodeCommitClient::OverridePullRequestApprovalRulesAsync(const OverridePullRequestApprovalRulesRequest& request, const OverridePullRequestApprovalRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientOverridePullRequestApprovalRulesAsyncHelper( this, request, handler, context ); } );
}

PostCommentForComparedCommitOutcome CodeCommitClient::PostCommentForComparedCommit(const PostCommentForComparedCommitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PostCommentForComparedCommitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PostCommentForComparedCommitOutcomeCallable CodeCommitClient::PostCommentForComparedCommitCallable(const PostCommentForComparedCommitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PostCommentForComparedCommitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PostCommentForComparedCommit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientPostCommentForComparedCommitAsyncHelper(CodeCommitClient const * const clientThis, const PostCommentForComparedCommitRequest& request, const PostCommentForComparedCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PostCommentForComparedCommit(request), context);
}

void CodeCommitClient::PostCommentForComparedCommitAsync(const PostCommentForComparedCommitRequest& request, const PostCommentForComparedCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientPostCommentForComparedCommitAsyncHelper( this, request, handler, context ); } );
}

PostCommentForPullRequestOutcome CodeCommitClient::PostCommentForPullRequest(const PostCommentForPullRequestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PostCommentForPullRequestOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PostCommentForPullRequestOutcomeCallable CodeCommitClient::PostCommentForPullRequestCallable(const PostCommentForPullRequestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PostCommentForPullRequestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PostCommentForPullRequest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientPostCommentForPullRequestAsyncHelper(CodeCommitClient const * const clientThis, const PostCommentForPullRequestRequest& request, const PostCommentForPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PostCommentForPullRequest(request), context);
}

void CodeCommitClient::PostCommentForPullRequestAsync(const PostCommentForPullRequestRequest& request, const PostCommentForPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientPostCommentForPullRequestAsyncHelper( this, request, handler, context ); } );
}

PostCommentReplyOutcome CodeCommitClient::PostCommentReply(const PostCommentReplyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PostCommentReplyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PostCommentReplyOutcomeCallable CodeCommitClient::PostCommentReplyCallable(const PostCommentReplyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PostCommentReplyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PostCommentReply(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientPostCommentReplyAsyncHelper(CodeCommitClient const * const clientThis, const PostCommentReplyRequest& request, const PostCommentReplyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PostCommentReply(request), context);
}

void CodeCommitClient::PostCommentReplyAsync(const PostCommentReplyRequest& request, const PostCommentReplyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientPostCommentReplyAsyncHelper( this, request, handler, context ); } );
}

PutCommentReactionOutcome CodeCommitClient::PutCommentReaction(const PutCommentReactionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutCommentReactionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutCommentReactionOutcomeCallable CodeCommitClient::PutCommentReactionCallable(const PutCommentReactionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutCommentReactionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutCommentReaction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientPutCommentReactionAsyncHelper(CodeCommitClient const * const clientThis, const PutCommentReactionRequest& request, const PutCommentReactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutCommentReaction(request), context);
}

void CodeCommitClient::PutCommentReactionAsync(const PutCommentReactionRequest& request, const PutCommentReactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientPutCommentReactionAsyncHelper( this, request, handler, context ); } );
}

PutFileOutcome CodeCommitClient::PutFile(const PutFileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutFileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutFileOutcomeCallable CodeCommitClient::PutFileCallable(const PutFileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutFileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutFile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientPutFileAsyncHelper(CodeCommitClient const * const clientThis, const PutFileRequest& request, const PutFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutFile(request), context);
}

void CodeCommitClient::PutFileAsync(const PutFileRequest& request, const PutFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientPutFileAsyncHelper( this, request, handler, context ); } );
}

PutRepositoryTriggersOutcome CodeCommitClient::PutRepositoryTriggers(const PutRepositoryTriggersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRepositoryTriggersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRepositoryTriggersOutcomeCallable CodeCommitClient::PutRepositoryTriggersCallable(const PutRepositoryTriggersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRepositoryTriggersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRepositoryTriggers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientPutRepositoryTriggersAsyncHelper(CodeCommitClient const * const clientThis, const PutRepositoryTriggersRequest& request, const PutRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRepositoryTriggers(request), context);
}

void CodeCommitClient::PutRepositoryTriggersAsync(const PutRepositoryTriggersRequest& request, const PutRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientPutRepositoryTriggersAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome CodeCommitClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CodeCommitClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientTagResourceAsyncHelper(CodeCommitClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void CodeCommitClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

TestRepositoryTriggersOutcome CodeCommitClient::TestRepositoryTriggers(const TestRepositoryTriggersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TestRepositoryTriggersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestRepositoryTriggersOutcomeCallable CodeCommitClient::TestRepositoryTriggersCallable(const TestRepositoryTriggersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestRepositoryTriggersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestRepositoryTriggers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientTestRepositoryTriggersAsyncHelper(CodeCommitClient const * const clientThis, const TestRepositoryTriggersRequest& request, const TestRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TestRepositoryTriggers(request), context);
}

void CodeCommitClient::TestRepositoryTriggersAsync(const TestRepositoryTriggersRequest& request, const TestRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientTestRepositoryTriggersAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome CodeCommitClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CodeCommitClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientUntagResourceAsyncHelper(CodeCommitClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void CodeCommitClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateApprovalRuleTemplateContentOutcome CodeCommitClient::UpdateApprovalRuleTemplateContent(const UpdateApprovalRuleTemplateContentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateApprovalRuleTemplateContentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApprovalRuleTemplateContentOutcomeCallable CodeCommitClient::UpdateApprovalRuleTemplateContentCallable(const UpdateApprovalRuleTemplateContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApprovalRuleTemplateContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApprovalRuleTemplateContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientUpdateApprovalRuleTemplateContentAsyncHelper(CodeCommitClient const * const clientThis, const UpdateApprovalRuleTemplateContentRequest& request, const UpdateApprovalRuleTemplateContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApprovalRuleTemplateContent(request), context);
}

void CodeCommitClient::UpdateApprovalRuleTemplateContentAsync(const UpdateApprovalRuleTemplateContentRequest& request, const UpdateApprovalRuleTemplateContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientUpdateApprovalRuleTemplateContentAsyncHelper( this, request, handler, context ); } );
}

UpdateApprovalRuleTemplateDescriptionOutcome CodeCommitClient::UpdateApprovalRuleTemplateDescription(const UpdateApprovalRuleTemplateDescriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateApprovalRuleTemplateDescriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApprovalRuleTemplateDescriptionOutcomeCallable CodeCommitClient::UpdateApprovalRuleTemplateDescriptionCallable(const UpdateApprovalRuleTemplateDescriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApprovalRuleTemplateDescriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApprovalRuleTemplateDescription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientUpdateApprovalRuleTemplateDescriptionAsyncHelper(CodeCommitClient const * const clientThis, const UpdateApprovalRuleTemplateDescriptionRequest& request, const UpdateApprovalRuleTemplateDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApprovalRuleTemplateDescription(request), context);
}

void CodeCommitClient::UpdateApprovalRuleTemplateDescriptionAsync(const UpdateApprovalRuleTemplateDescriptionRequest& request, const UpdateApprovalRuleTemplateDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientUpdateApprovalRuleTemplateDescriptionAsyncHelper( this, request, handler, context ); } );
}

UpdateApprovalRuleTemplateNameOutcome CodeCommitClient::UpdateApprovalRuleTemplateName(const UpdateApprovalRuleTemplateNameRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateApprovalRuleTemplateNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApprovalRuleTemplateNameOutcomeCallable CodeCommitClient::UpdateApprovalRuleTemplateNameCallable(const UpdateApprovalRuleTemplateNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApprovalRuleTemplateNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApprovalRuleTemplateName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientUpdateApprovalRuleTemplateNameAsyncHelper(CodeCommitClient const * const clientThis, const UpdateApprovalRuleTemplateNameRequest& request, const UpdateApprovalRuleTemplateNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApprovalRuleTemplateName(request), context);
}

void CodeCommitClient::UpdateApprovalRuleTemplateNameAsync(const UpdateApprovalRuleTemplateNameRequest& request, const UpdateApprovalRuleTemplateNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientUpdateApprovalRuleTemplateNameAsyncHelper( this, request, handler, context ); } );
}

UpdateCommentOutcome CodeCommitClient::UpdateComment(const UpdateCommentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateCommentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCommentOutcomeCallable CodeCommitClient::UpdateCommentCallable(const UpdateCommentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCommentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateComment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientUpdateCommentAsyncHelper(CodeCommitClient const * const clientThis, const UpdateCommentRequest& request, const UpdateCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateComment(request), context);
}

void CodeCommitClient::UpdateCommentAsync(const UpdateCommentRequest& request, const UpdateCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientUpdateCommentAsyncHelper( this, request, handler, context ); } );
}

UpdateDefaultBranchOutcome CodeCommitClient::UpdateDefaultBranch(const UpdateDefaultBranchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDefaultBranchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDefaultBranchOutcomeCallable CodeCommitClient::UpdateDefaultBranchCallable(const UpdateDefaultBranchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDefaultBranchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDefaultBranch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientUpdateDefaultBranchAsyncHelper(CodeCommitClient const * const clientThis, const UpdateDefaultBranchRequest& request, const UpdateDefaultBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDefaultBranch(request), context);
}

void CodeCommitClient::UpdateDefaultBranchAsync(const UpdateDefaultBranchRequest& request, const UpdateDefaultBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientUpdateDefaultBranchAsyncHelper( this, request, handler, context ); } );
}

UpdatePullRequestApprovalRuleContentOutcome CodeCommitClient::UpdatePullRequestApprovalRuleContent(const UpdatePullRequestApprovalRuleContentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePullRequestApprovalRuleContentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePullRequestApprovalRuleContentOutcomeCallable CodeCommitClient::UpdatePullRequestApprovalRuleContentCallable(const UpdatePullRequestApprovalRuleContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePullRequestApprovalRuleContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePullRequestApprovalRuleContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientUpdatePullRequestApprovalRuleContentAsyncHelper(CodeCommitClient const * const clientThis, const UpdatePullRequestApprovalRuleContentRequest& request, const UpdatePullRequestApprovalRuleContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePullRequestApprovalRuleContent(request), context);
}

void CodeCommitClient::UpdatePullRequestApprovalRuleContentAsync(const UpdatePullRequestApprovalRuleContentRequest& request, const UpdatePullRequestApprovalRuleContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientUpdatePullRequestApprovalRuleContentAsyncHelper( this, request, handler, context ); } );
}

UpdatePullRequestApprovalStateOutcome CodeCommitClient::UpdatePullRequestApprovalState(const UpdatePullRequestApprovalStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePullRequestApprovalStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePullRequestApprovalStateOutcomeCallable CodeCommitClient::UpdatePullRequestApprovalStateCallable(const UpdatePullRequestApprovalStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePullRequestApprovalStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePullRequestApprovalState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientUpdatePullRequestApprovalStateAsyncHelper(CodeCommitClient const * const clientThis, const UpdatePullRequestApprovalStateRequest& request, const UpdatePullRequestApprovalStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePullRequestApprovalState(request), context);
}

void CodeCommitClient::UpdatePullRequestApprovalStateAsync(const UpdatePullRequestApprovalStateRequest& request, const UpdatePullRequestApprovalStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientUpdatePullRequestApprovalStateAsyncHelper( this, request, handler, context ); } );
}

UpdatePullRequestDescriptionOutcome CodeCommitClient::UpdatePullRequestDescription(const UpdatePullRequestDescriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePullRequestDescriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePullRequestDescriptionOutcomeCallable CodeCommitClient::UpdatePullRequestDescriptionCallable(const UpdatePullRequestDescriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePullRequestDescriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePullRequestDescription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientUpdatePullRequestDescriptionAsyncHelper(CodeCommitClient const * const clientThis, const UpdatePullRequestDescriptionRequest& request, const UpdatePullRequestDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePullRequestDescription(request), context);
}

void CodeCommitClient::UpdatePullRequestDescriptionAsync(const UpdatePullRequestDescriptionRequest& request, const UpdatePullRequestDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientUpdatePullRequestDescriptionAsyncHelper( this, request, handler, context ); } );
}

UpdatePullRequestStatusOutcome CodeCommitClient::UpdatePullRequestStatus(const UpdatePullRequestStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePullRequestStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePullRequestStatusOutcomeCallable CodeCommitClient::UpdatePullRequestStatusCallable(const UpdatePullRequestStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePullRequestStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePullRequestStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientUpdatePullRequestStatusAsyncHelper(CodeCommitClient const * const clientThis, const UpdatePullRequestStatusRequest& request, const UpdatePullRequestStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePullRequestStatus(request), context);
}

void CodeCommitClient::UpdatePullRequestStatusAsync(const UpdatePullRequestStatusRequest& request, const UpdatePullRequestStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientUpdatePullRequestStatusAsyncHelper( this, request, handler, context ); } );
}

UpdatePullRequestTitleOutcome CodeCommitClient::UpdatePullRequestTitle(const UpdatePullRequestTitleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePullRequestTitleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePullRequestTitleOutcomeCallable CodeCommitClient::UpdatePullRequestTitleCallable(const UpdatePullRequestTitleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePullRequestTitleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePullRequestTitle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientUpdatePullRequestTitleAsyncHelper(CodeCommitClient const * const clientThis, const UpdatePullRequestTitleRequest& request, const UpdatePullRequestTitleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePullRequestTitle(request), context);
}

void CodeCommitClient::UpdatePullRequestTitleAsync(const UpdatePullRequestTitleRequest& request, const UpdatePullRequestTitleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientUpdatePullRequestTitleAsyncHelper( this, request, handler, context ); } );
}

UpdateRepositoryDescriptionOutcome CodeCommitClient::UpdateRepositoryDescription(const UpdateRepositoryDescriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRepositoryDescriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRepositoryDescriptionOutcomeCallable CodeCommitClient::UpdateRepositoryDescriptionCallable(const UpdateRepositoryDescriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRepositoryDescriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRepositoryDescription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientUpdateRepositoryDescriptionAsyncHelper(CodeCommitClient const * const clientThis, const UpdateRepositoryDescriptionRequest& request, const UpdateRepositoryDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRepositoryDescription(request), context);
}

void CodeCommitClient::UpdateRepositoryDescriptionAsync(const UpdateRepositoryDescriptionRequest& request, const UpdateRepositoryDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientUpdateRepositoryDescriptionAsyncHelper( this, request, handler, context ); } );
}

UpdateRepositoryNameOutcome CodeCommitClient::UpdateRepositoryName(const UpdateRepositoryNameRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRepositoryNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRepositoryNameOutcomeCallable CodeCommitClient::UpdateRepositoryNameCallable(const UpdateRepositoryNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRepositoryNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRepositoryName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeCommitClientUpdateRepositoryNameAsyncHelper(CodeCommitClient const * const clientThis, const UpdateRepositoryNameRequest& request, const UpdateRepositoryNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRepositoryName(request), context);
}

void CodeCommitClient::UpdateRepositoryNameAsync(const UpdateRepositoryNameRequest& request, const UpdateRepositoryNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeCommitClientUpdateRepositoryNameAsyncHelper( this, request, handler, context ); } );
}

