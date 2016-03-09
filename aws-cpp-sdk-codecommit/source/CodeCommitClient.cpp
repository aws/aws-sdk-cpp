/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codecommit/CodeCommitClient.h>
#include <aws/codecommit/CodeCommitEndpoint.h>
#include <aws/codecommit/CodeCommitErrorMarshaller.h>
#include <aws/codecommit/model/BatchGetRepositoriesRequest.h>
#include <aws/codecommit/model/CreateBranchRequest.h>
#include <aws/codecommit/model/CreateRepositoryRequest.h>
#include <aws/codecommit/model/DeleteRepositoryRequest.h>
#include <aws/codecommit/model/GetBranchRequest.h>
#include <aws/codecommit/model/GetCommitRequest.h>
#include <aws/codecommit/model/GetRepositoryRequest.h>
#include <aws/codecommit/model/GetRepositoryTriggersRequest.h>
#include <aws/codecommit/model/ListBranchesRequest.h>
#include <aws/codecommit/model/ListRepositoriesRequest.h>
#include <aws/codecommit/model/PutRepositoryTriggersRequest.h>
#include <aws/codecommit/model/TestRepositoryTriggersRequest.h>
#include <aws/codecommit/model/UpdateDefaultBranchRequest.h>
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
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeCommitClient::CodeCommitClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeCommitClient::CodeCommitClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << CodeCommitEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
BatchGetRepositoriesOutcome CodeCommitClient::BatchGetRepositories(const BatchGetRepositoriesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CodeCommitClient::BatchGetRepositories, this, request);
}

void CodeCommitClient::BatchGetRepositoriesAsync(const BatchGetRepositoriesRequest& request, const BatchGetRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeCommitClient::BatchGetRepositoriesAsyncHelper, this, request, handler, context);
}

void CodeCommitClient::BatchGetRepositoriesAsyncHelper(const BatchGetRepositoriesRequest& request, const BatchGetRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetRepositories(request), context);
}

CreateBranchOutcome CodeCommitClient::CreateBranch(const CreateBranchRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CodeCommitClient::CreateBranch, this, request);
}

void CodeCommitClient::CreateBranchAsync(const CreateBranchRequest& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeCommitClient::CreateBranchAsyncHelper, this, request, handler, context);
}

void CodeCommitClient::CreateBranchAsyncHelper(const CreateBranchRequest& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBranch(request), context);
}

CreateRepositoryOutcome CodeCommitClient::CreateRepository(const CreateRepositoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CodeCommitClient::CreateRepository, this, request);
}

void CodeCommitClient::CreateRepositoryAsync(const CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeCommitClient::CreateRepositoryAsyncHelper, this, request, handler, context);
}

void CodeCommitClient::CreateRepositoryAsyncHelper(const CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRepository(request), context);
}

DeleteRepositoryOutcome CodeCommitClient::DeleteRepository(const DeleteRepositoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CodeCommitClient::DeleteRepository, this, request);
}

void CodeCommitClient::DeleteRepositoryAsync(const DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeCommitClient::DeleteRepositoryAsyncHelper, this, request, handler, context);
}

void CodeCommitClient::DeleteRepositoryAsyncHelper(const DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRepository(request), context);
}

GetBranchOutcome CodeCommitClient::GetBranch(const GetBranchRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CodeCommitClient::GetBranch, this, request);
}

void CodeCommitClient::GetBranchAsync(const GetBranchRequest& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeCommitClient::GetBranchAsyncHelper, this, request, handler, context);
}

void CodeCommitClient::GetBranchAsyncHelper(const GetBranchRequest& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBranch(request), context);
}

GetCommitOutcome CodeCommitClient::GetCommit(const GetCommitRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CodeCommitClient::GetCommit, this, request);
}

void CodeCommitClient::GetCommitAsync(const GetCommitRequest& request, const GetCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeCommitClient::GetCommitAsyncHelper, this, request, handler, context);
}

void CodeCommitClient::GetCommitAsyncHelper(const GetCommitRequest& request, const GetCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCommit(request), context);
}

GetRepositoryOutcome CodeCommitClient::GetRepository(const GetRepositoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CodeCommitClient::GetRepository, this, request);
}

void CodeCommitClient::GetRepositoryAsync(const GetRepositoryRequest& request, const GetRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeCommitClient::GetRepositoryAsyncHelper, this, request, handler, context);
}

void CodeCommitClient::GetRepositoryAsyncHelper(const GetRepositoryRequest& request, const GetRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRepository(request), context);
}

GetRepositoryTriggersOutcome CodeCommitClient::GetRepositoryTriggers(const GetRepositoryTriggersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CodeCommitClient::GetRepositoryTriggers, this, request);
}

void CodeCommitClient::GetRepositoryTriggersAsync(const GetRepositoryTriggersRequest& request, const GetRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeCommitClient::GetRepositoryTriggersAsyncHelper, this, request, handler, context);
}

void CodeCommitClient::GetRepositoryTriggersAsyncHelper(const GetRepositoryTriggersRequest& request, const GetRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRepositoryTriggers(request), context);
}

ListBranchesOutcome CodeCommitClient::ListBranches(const ListBranchesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CodeCommitClient::ListBranches, this, request);
}

void CodeCommitClient::ListBranchesAsync(const ListBranchesRequest& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeCommitClient::ListBranchesAsyncHelper, this, request, handler, context);
}

void CodeCommitClient::ListBranchesAsyncHelper(const ListBranchesRequest& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBranches(request), context);
}

ListRepositoriesOutcome CodeCommitClient::ListRepositories(const ListRepositoriesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CodeCommitClient::ListRepositories, this, request);
}

void CodeCommitClient::ListRepositoriesAsync(const ListRepositoriesRequest& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeCommitClient::ListRepositoriesAsyncHelper, this, request, handler, context);
}

void CodeCommitClient::ListRepositoriesAsyncHelper(const ListRepositoriesRequest& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRepositories(request), context);
}

PutRepositoryTriggersOutcome CodeCommitClient::PutRepositoryTriggers(const PutRepositoryTriggersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CodeCommitClient::PutRepositoryTriggers, this, request);
}

void CodeCommitClient::PutRepositoryTriggersAsync(const PutRepositoryTriggersRequest& request, const PutRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeCommitClient::PutRepositoryTriggersAsyncHelper, this, request, handler, context);
}

void CodeCommitClient::PutRepositoryTriggersAsyncHelper(const PutRepositoryTriggersRequest& request, const PutRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRepositoryTriggers(request), context);
}

TestRepositoryTriggersOutcome CodeCommitClient::TestRepositoryTriggers(const TestRepositoryTriggersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CodeCommitClient::TestRepositoryTriggers, this, request);
}

void CodeCommitClient::TestRepositoryTriggersAsync(const TestRepositoryTriggersRequest& request, const TestRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeCommitClient::TestRepositoryTriggersAsyncHelper, this, request, handler, context);
}

void CodeCommitClient::TestRepositoryTriggersAsyncHelper(const TestRepositoryTriggersRequest& request, const TestRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TestRepositoryTriggers(request), context);
}

UpdateDefaultBranchOutcome CodeCommitClient::UpdateDefaultBranch(const UpdateDefaultBranchRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CodeCommitClient::UpdateDefaultBranch, this, request);
}

void CodeCommitClient::UpdateDefaultBranchAsync(const UpdateDefaultBranchRequest& request, const UpdateDefaultBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeCommitClient::UpdateDefaultBranchAsyncHelper, this, request, handler, context);
}

void CodeCommitClient::UpdateDefaultBranchAsyncHelper(const UpdateDefaultBranchRequest& request, const UpdateDefaultBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDefaultBranch(request), context);
}

UpdateRepositoryDescriptionOutcome CodeCommitClient::UpdateRepositoryDescription(const UpdateRepositoryDescriptionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CodeCommitClient::UpdateRepositoryDescription, this, request);
}

void CodeCommitClient::UpdateRepositoryDescriptionAsync(const UpdateRepositoryDescriptionRequest& request, const UpdateRepositoryDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeCommitClient::UpdateRepositoryDescriptionAsyncHelper, this, request, handler, context);
}

void CodeCommitClient::UpdateRepositoryDescriptionAsyncHelper(const UpdateRepositoryDescriptionRequest& request, const UpdateRepositoryDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRepositoryDescription(request), context);
}

UpdateRepositoryNameOutcome CodeCommitClient::UpdateRepositoryName(const UpdateRepositoryNameRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CodeCommitClient::UpdateRepositoryName, this, request);
}

void CodeCommitClient::UpdateRepositoryNameAsync(const UpdateRepositoryNameRequest& request, const UpdateRepositoryNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeCommitClient::UpdateRepositoryNameAsyncHelper, this, request, handler, context);
}

void CodeCommitClient::UpdateRepositoryNameAsyncHelper(const UpdateRepositoryNameRequest& request, const UpdateRepositoryNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRepositoryName(request), context);
}

