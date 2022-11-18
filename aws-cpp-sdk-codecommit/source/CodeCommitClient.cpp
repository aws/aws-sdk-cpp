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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/codecommit/CodeCommitClient.h>
#include <aws/codecommit/CodeCommitErrorMarshaller.h>
#include <aws/codecommit/CodeCommitEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* CodeCommitClient::SERVICE_NAME = "codecommit";
const char* CodeCommitClient::ALLOCATION_TAG = "CodeCommitClient";

CodeCommitClient::CodeCommitClient(const CodeCommit::CodeCommitClientConfiguration& clientConfiguration,
                                   std::shared_ptr<CodeCommitEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CodeCommitClient::CodeCommitClient(const AWSCredentials& credentials,
                                   std::shared_ptr<CodeCommitEndpointProviderBase> endpointProvider,
                                   const CodeCommit::CodeCommitClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CodeCommitClient::CodeCommitClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<CodeCommitEndpointProviderBase> endpointProvider,
                                   const CodeCommit::CodeCommitClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CodeCommitClient::CodeCommitClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CodeCommitEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CodeCommitClient::CodeCommitClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CodeCommitEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CodeCommitClient::CodeCommitClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CodeCommitEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CodeCommitClient::~CodeCommitClient()
{
}

std::shared_ptr<CodeCommitEndpointProviderBase>& CodeCommitClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CodeCommitClient::init(const CodeCommit::CodeCommitClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CodeCommit");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CodeCommitClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateApprovalRuleTemplateWithRepositoryOutcome CodeCommitClient::AssociateApprovalRuleTemplateWithRepository(const AssociateApprovalRuleTemplateWithRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateApprovalRuleTemplateWithRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateApprovalRuleTemplateWithRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateApprovalRuleTemplateWithRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateApprovalRuleTemplateWithRepositoryOutcomeCallable CodeCommitClient::AssociateApprovalRuleTemplateWithRepositoryCallable(const AssociateApprovalRuleTemplateWithRepositoryRequest& request) const
{
  std::shared_ptr<AssociateApprovalRuleTemplateWithRepositoryRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateApprovalRuleTemplateWithRepositoryOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateApprovalRuleTemplateWithRepository(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::AssociateApprovalRuleTemplateWithRepositoryAsync(const AssociateApprovalRuleTemplateWithRepositoryRequest& request, const AssociateApprovalRuleTemplateWithRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateApprovalRuleTemplateWithRepositoryRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateApprovalRuleTemplateWithRepository(*pRequest), context);
    } );
}

BatchAssociateApprovalRuleTemplateWithRepositoriesOutcome CodeCommitClient::BatchAssociateApprovalRuleTemplateWithRepositories(const BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchAssociateApprovalRuleTemplateWithRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchAssociateApprovalRuleTemplateWithRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchAssociateApprovalRuleTemplateWithRepositoriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchAssociateApprovalRuleTemplateWithRepositoriesOutcomeCallable CodeCommitClient::BatchAssociateApprovalRuleTemplateWithRepositoriesCallable(const BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& request) const
{
  std::shared_ptr<BatchAssociateApprovalRuleTemplateWithRepositoriesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< BatchAssociateApprovalRuleTemplateWithRepositoriesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->BatchAssociateApprovalRuleTemplateWithRepositories(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::BatchAssociateApprovalRuleTemplateWithRepositoriesAsync(const BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& request, const BatchAssociateApprovalRuleTemplateWithRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<BatchAssociateApprovalRuleTemplateWithRepositoriesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, BatchAssociateApprovalRuleTemplateWithRepositories(*pRequest), context);
    } );
}

BatchDescribeMergeConflictsOutcome CodeCommitClient::BatchDescribeMergeConflicts(const BatchDescribeMergeConflictsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDescribeMergeConflicts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDescribeMergeConflicts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchDescribeMergeConflictsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDescribeMergeConflictsOutcomeCallable CodeCommitClient::BatchDescribeMergeConflictsCallable(const BatchDescribeMergeConflictsRequest& request) const
{
  std::shared_ptr<BatchDescribeMergeConflictsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< BatchDescribeMergeConflictsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->BatchDescribeMergeConflicts(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::BatchDescribeMergeConflictsAsync(const BatchDescribeMergeConflictsRequest& request, const BatchDescribeMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<BatchDescribeMergeConflictsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, BatchDescribeMergeConflicts(*pRequest), context);
    } );
}

BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcome CodeCommitClient::BatchDisassociateApprovalRuleTemplateFromRepositories(const BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDisassociateApprovalRuleTemplateFromRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDisassociateApprovalRuleTemplateFromRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcomeCallable CodeCommitClient::BatchDisassociateApprovalRuleTemplateFromRepositoriesCallable(const BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest& request) const
{
  std::shared_ptr<BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->BatchDisassociateApprovalRuleTemplateFromRepositories(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::BatchDisassociateApprovalRuleTemplateFromRepositoriesAsync(const BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest& request, const BatchDisassociateApprovalRuleTemplateFromRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, BatchDisassociateApprovalRuleTemplateFromRepositories(*pRequest), context);
    } );
}

BatchGetCommitsOutcome CodeCommitClient::BatchGetCommits(const BatchGetCommitsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetCommits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetCommits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetCommitsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetCommitsOutcomeCallable CodeCommitClient::BatchGetCommitsCallable(const BatchGetCommitsRequest& request) const
{
  std::shared_ptr<BatchGetCommitsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< BatchGetCommitsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->BatchGetCommits(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::BatchGetCommitsAsync(const BatchGetCommitsRequest& request, const BatchGetCommitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<BatchGetCommitsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, BatchGetCommits(*pRequest), context);
    } );
}

BatchGetRepositoriesOutcome CodeCommitClient::BatchGetRepositories(const BatchGetRepositoriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetRepositoriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetRepositoriesOutcomeCallable CodeCommitClient::BatchGetRepositoriesCallable(const BatchGetRepositoriesRequest& request) const
{
  std::shared_ptr<BatchGetRepositoriesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< BatchGetRepositoriesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->BatchGetRepositories(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::BatchGetRepositoriesAsync(const BatchGetRepositoriesRequest& request, const BatchGetRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<BatchGetRepositoriesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, BatchGetRepositories(*pRequest), context);
    } );
}

CreateApprovalRuleTemplateOutcome CodeCommitClient::CreateApprovalRuleTemplate(const CreateApprovalRuleTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApprovalRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApprovalRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateApprovalRuleTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApprovalRuleTemplateOutcomeCallable CodeCommitClient::CreateApprovalRuleTemplateCallable(const CreateApprovalRuleTemplateRequest& request) const
{
  std::shared_ptr<CreateApprovalRuleTemplateRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateApprovalRuleTemplateOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateApprovalRuleTemplate(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::CreateApprovalRuleTemplateAsync(const CreateApprovalRuleTemplateRequest& request, const CreateApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateApprovalRuleTemplateRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateApprovalRuleTemplate(*pRequest), context);
    } );
}

CreateBranchOutcome CodeCommitClient::CreateBranch(const CreateBranchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateBranchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBranchOutcomeCallable CodeCommitClient::CreateBranchCallable(const CreateBranchRequest& request) const
{
  std::shared_ptr<CreateBranchRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateBranchOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateBranch(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::CreateBranchAsync(const CreateBranchRequest& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateBranchRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateBranch(*pRequest), context);
    } );
}

CreateCommitOutcome CodeCommitClient::CreateCommit(const CreateCommitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCommitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCommitOutcomeCallable CodeCommitClient::CreateCommitCallable(const CreateCommitRequest& request) const
{
  std::shared_ptr<CreateCommitRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateCommitOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateCommit(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::CreateCommitAsync(const CreateCommitRequest& request, const CreateCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateCommitRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateCommit(*pRequest), context);
    } );
}

CreatePullRequestOutcome CodeCommitClient::CreatePullRequest(const CreatePullRequestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePullRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePullRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePullRequestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePullRequestOutcomeCallable CodeCommitClient::CreatePullRequestCallable(const CreatePullRequestRequest& request) const
{
  std::shared_ptr<CreatePullRequestRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreatePullRequestOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreatePullRequest(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::CreatePullRequestAsync(const CreatePullRequestRequest& request, const CreatePullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreatePullRequestRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreatePullRequest(*pRequest), context);
    } );
}

CreatePullRequestApprovalRuleOutcome CodeCommitClient::CreatePullRequestApprovalRule(const CreatePullRequestApprovalRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePullRequestApprovalRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePullRequestApprovalRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePullRequestApprovalRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePullRequestApprovalRuleOutcomeCallable CodeCommitClient::CreatePullRequestApprovalRuleCallable(const CreatePullRequestApprovalRuleRequest& request) const
{
  std::shared_ptr<CreatePullRequestApprovalRuleRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreatePullRequestApprovalRuleOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreatePullRequestApprovalRule(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::CreatePullRequestApprovalRuleAsync(const CreatePullRequestApprovalRuleRequest& request, const CreatePullRequestApprovalRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreatePullRequestApprovalRuleRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreatePullRequestApprovalRule(*pRequest), context);
    } );
}

CreateRepositoryOutcome CodeCommitClient::CreateRepository(const CreateRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRepositoryOutcomeCallable CodeCommitClient::CreateRepositoryCallable(const CreateRepositoryRequest& request) const
{
  std::shared_ptr<CreateRepositoryRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateRepositoryOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateRepository(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::CreateRepositoryAsync(const CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateRepositoryRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateRepository(*pRequest), context);
    } );
}

CreateUnreferencedMergeCommitOutcome CodeCommitClient::CreateUnreferencedMergeCommit(const CreateUnreferencedMergeCommitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUnreferencedMergeCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUnreferencedMergeCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUnreferencedMergeCommitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUnreferencedMergeCommitOutcomeCallable CodeCommitClient::CreateUnreferencedMergeCommitCallable(const CreateUnreferencedMergeCommitRequest& request) const
{
  std::shared_ptr<CreateUnreferencedMergeCommitRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateUnreferencedMergeCommitOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateUnreferencedMergeCommit(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::CreateUnreferencedMergeCommitAsync(const CreateUnreferencedMergeCommitRequest& request, const CreateUnreferencedMergeCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateUnreferencedMergeCommitRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateUnreferencedMergeCommit(*pRequest), context);
    } );
}

DeleteApprovalRuleTemplateOutcome CodeCommitClient::DeleteApprovalRuleTemplate(const DeleteApprovalRuleTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApprovalRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApprovalRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteApprovalRuleTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApprovalRuleTemplateOutcomeCallable CodeCommitClient::DeleteApprovalRuleTemplateCallable(const DeleteApprovalRuleTemplateRequest& request) const
{
  std::shared_ptr<DeleteApprovalRuleTemplateRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteApprovalRuleTemplateOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteApprovalRuleTemplate(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::DeleteApprovalRuleTemplateAsync(const DeleteApprovalRuleTemplateRequest& request, const DeleteApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteApprovalRuleTemplateRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteApprovalRuleTemplate(*pRequest), context);
    } );
}

DeleteBranchOutcome CodeCommitClient::DeleteBranch(const DeleteBranchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteBranchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBranchOutcomeCallable CodeCommitClient::DeleteBranchCallable(const DeleteBranchRequest& request) const
{
  std::shared_ptr<DeleteBranchRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteBranchOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteBranch(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::DeleteBranchAsync(const DeleteBranchRequest& request, const DeleteBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteBranchRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteBranch(*pRequest), context);
    } );
}

DeleteCommentContentOutcome CodeCommitClient::DeleteCommentContent(const DeleteCommentContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCommentContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCommentContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCommentContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCommentContentOutcomeCallable CodeCommitClient::DeleteCommentContentCallable(const DeleteCommentContentRequest& request) const
{
  std::shared_ptr<DeleteCommentContentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteCommentContentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteCommentContent(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::DeleteCommentContentAsync(const DeleteCommentContentRequest& request, const DeleteCommentContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteCommentContentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteCommentContent(*pRequest), context);
    } );
}

DeleteFileOutcome CodeCommitClient::DeleteFile(const DeleteFileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFileOutcomeCallable CodeCommitClient::DeleteFileCallable(const DeleteFileRequest& request) const
{
  std::shared_ptr<DeleteFileRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteFileOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteFile(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::DeleteFileAsync(const DeleteFileRequest& request, const DeleteFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteFileRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteFile(*pRequest), context);
    } );
}

DeletePullRequestApprovalRuleOutcome CodeCommitClient::DeletePullRequestApprovalRule(const DeletePullRequestApprovalRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePullRequestApprovalRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePullRequestApprovalRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePullRequestApprovalRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePullRequestApprovalRuleOutcomeCallable CodeCommitClient::DeletePullRequestApprovalRuleCallable(const DeletePullRequestApprovalRuleRequest& request) const
{
  std::shared_ptr<DeletePullRequestApprovalRuleRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeletePullRequestApprovalRuleOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeletePullRequestApprovalRule(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::DeletePullRequestApprovalRuleAsync(const DeletePullRequestApprovalRuleRequest& request, const DeletePullRequestApprovalRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeletePullRequestApprovalRuleRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeletePullRequestApprovalRule(*pRequest), context);
    } );
}

DeleteRepositoryOutcome CodeCommitClient::DeleteRepository(const DeleteRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRepositoryOutcomeCallable CodeCommitClient::DeleteRepositoryCallable(const DeleteRepositoryRequest& request) const
{
  std::shared_ptr<DeleteRepositoryRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteRepositoryOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteRepository(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::DeleteRepositoryAsync(const DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteRepositoryRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteRepository(*pRequest), context);
    } );
}

DescribeMergeConflictsOutcome CodeCommitClient::DescribeMergeConflicts(const DescribeMergeConflictsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMergeConflicts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMergeConflicts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMergeConflictsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMergeConflictsOutcomeCallable CodeCommitClient::DescribeMergeConflictsCallable(const DescribeMergeConflictsRequest& request) const
{
  std::shared_ptr<DescribeMergeConflictsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeMergeConflictsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeMergeConflicts(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::DescribeMergeConflictsAsync(const DescribeMergeConflictsRequest& request, const DescribeMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeMergeConflictsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeMergeConflicts(*pRequest), context);
    } );
}

DescribePullRequestEventsOutcome CodeCommitClient::DescribePullRequestEvents(const DescribePullRequestEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePullRequestEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePullRequestEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePullRequestEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePullRequestEventsOutcomeCallable CodeCommitClient::DescribePullRequestEventsCallable(const DescribePullRequestEventsRequest& request) const
{
  std::shared_ptr<DescribePullRequestEventsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribePullRequestEventsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribePullRequestEvents(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::DescribePullRequestEventsAsync(const DescribePullRequestEventsRequest& request, const DescribePullRequestEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribePullRequestEventsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribePullRequestEvents(*pRequest), context);
    } );
}

DisassociateApprovalRuleTemplateFromRepositoryOutcome CodeCommitClient::DisassociateApprovalRuleTemplateFromRepository(const DisassociateApprovalRuleTemplateFromRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateApprovalRuleTemplateFromRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateApprovalRuleTemplateFromRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateApprovalRuleTemplateFromRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateApprovalRuleTemplateFromRepositoryOutcomeCallable CodeCommitClient::DisassociateApprovalRuleTemplateFromRepositoryCallable(const DisassociateApprovalRuleTemplateFromRepositoryRequest& request) const
{
  std::shared_ptr<DisassociateApprovalRuleTemplateFromRepositoryRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociateApprovalRuleTemplateFromRepositoryOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociateApprovalRuleTemplateFromRepository(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::DisassociateApprovalRuleTemplateFromRepositoryAsync(const DisassociateApprovalRuleTemplateFromRepositoryRequest& request, const DisassociateApprovalRuleTemplateFromRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociateApprovalRuleTemplateFromRepositoryRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociateApprovalRuleTemplateFromRepository(*pRequest), context);
    } );
}

EvaluatePullRequestApprovalRulesOutcome CodeCommitClient::EvaluatePullRequestApprovalRules(const EvaluatePullRequestApprovalRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EvaluatePullRequestApprovalRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EvaluatePullRequestApprovalRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EvaluatePullRequestApprovalRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EvaluatePullRequestApprovalRulesOutcomeCallable CodeCommitClient::EvaluatePullRequestApprovalRulesCallable(const EvaluatePullRequestApprovalRulesRequest& request) const
{
  std::shared_ptr<EvaluatePullRequestApprovalRulesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< EvaluatePullRequestApprovalRulesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->EvaluatePullRequestApprovalRules(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::EvaluatePullRequestApprovalRulesAsync(const EvaluatePullRequestApprovalRulesRequest& request, const EvaluatePullRequestApprovalRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<EvaluatePullRequestApprovalRulesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, EvaluatePullRequestApprovalRules(*pRequest), context);
    } );
}

GetApprovalRuleTemplateOutcome CodeCommitClient::GetApprovalRuleTemplate(const GetApprovalRuleTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApprovalRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApprovalRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetApprovalRuleTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetApprovalRuleTemplateOutcomeCallable CodeCommitClient::GetApprovalRuleTemplateCallable(const GetApprovalRuleTemplateRequest& request) const
{
  std::shared_ptr<GetApprovalRuleTemplateRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetApprovalRuleTemplateOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetApprovalRuleTemplate(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetApprovalRuleTemplateAsync(const GetApprovalRuleTemplateRequest& request, const GetApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetApprovalRuleTemplateRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetApprovalRuleTemplate(*pRequest), context);
    } );
}

GetBlobOutcome CodeCommitClient::GetBlob(const GetBlobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBlob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBlob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBlobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBlobOutcomeCallable CodeCommitClient::GetBlobCallable(const GetBlobRequest& request) const
{
  std::shared_ptr<GetBlobRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetBlobOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetBlob(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetBlobAsync(const GetBlobRequest& request, const GetBlobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetBlobRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetBlob(*pRequest), context);
    } );
}

GetBranchOutcome CodeCommitClient::GetBranch(const GetBranchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBranchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBranchOutcomeCallable CodeCommitClient::GetBranchCallable(const GetBranchRequest& request) const
{
  std::shared_ptr<GetBranchRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetBranchOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetBranch(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetBranchAsync(const GetBranchRequest& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetBranchRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetBranch(*pRequest), context);
    } );
}

GetCommentOutcome CodeCommitClient::GetComment(const GetCommentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetComment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetComment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCommentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCommentOutcomeCallable CodeCommitClient::GetCommentCallable(const GetCommentRequest& request) const
{
  std::shared_ptr<GetCommentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetCommentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetComment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetCommentAsync(const GetCommentRequest& request, const GetCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetCommentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetComment(*pRequest), context);
    } );
}

GetCommentReactionsOutcome CodeCommitClient::GetCommentReactions(const GetCommentReactionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCommentReactions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCommentReactions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCommentReactionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCommentReactionsOutcomeCallable CodeCommitClient::GetCommentReactionsCallable(const GetCommentReactionsRequest& request) const
{
  std::shared_ptr<GetCommentReactionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetCommentReactionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetCommentReactions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetCommentReactionsAsync(const GetCommentReactionsRequest& request, const GetCommentReactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetCommentReactionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetCommentReactions(*pRequest), context);
    } );
}

GetCommentsForComparedCommitOutcome CodeCommitClient::GetCommentsForComparedCommit(const GetCommentsForComparedCommitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCommentsForComparedCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCommentsForComparedCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCommentsForComparedCommitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCommentsForComparedCommitOutcomeCallable CodeCommitClient::GetCommentsForComparedCommitCallable(const GetCommentsForComparedCommitRequest& request) const
{
  std::shared_ptr<GetCommentsForComparedCommitRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetCommentsForComparedCommitOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetCommentsForComparedCommit(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetCommentsForComparedCommitAsync(const GetCommentsForComparedCommitRequest& request, const GetCommentsForComparedCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetCommentsForComparedCommitRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetCommentsForComparedCommit(*pRequest), context);
    } );
}

GetCommentsForPullRequestOutcome CodeCommitClient::GetCommentsForPullRequest(const GetCommentsForPullRequestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCommentsForPullRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCommentsForPullRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCommentsForPullRequestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCommentsForPullRequestOutcomeCallable CodeCommitClient::GetCommentsForPullRequestCallable(const GetCommentsForPullRequestRequest& request) const
{
  std::shared_ptr<GetCommentsForPullRequestRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetCommentsForPullRequestOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetCommentsForPullRequest(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetCommentsForPullRequestAsync(const GetCommentsForPullRequestRequest& request, const GetCommentsForPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetCommentsForPullRequestRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetCommentsForPullRequest(*pRequest), context);
    } );
}

GetCommitOutcome CodeCommitClient::GetCommit(const GetCommitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCommitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCommitOutcomeCallable CodeCommitClient::GetCommitCallable(const GetCommitRequest& request) const
{
  std::shared_ptr<GetCommitRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetCommitOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetCommit(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetCommitAsync(const GetCommitRequest& request, const GetCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetCommitRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetCommit(*pRequest), context);
    } );
}

GetDifferencesOutcome CodeCommitClient::GetDifferences(const GetDifferencesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDifferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDifferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDifferencesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDifferencesOutcomeCallable CodeCommitClient::GetDifferencesCallable(const GetDifferencesRequest& request) const
{
  std::shared_ptr<GetDifferencesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetDifferencesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetDifferences(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetDifferencesAsync(const GetDifferencesRequest& request, const GetDifferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetDifferencesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetDifferences(*pRequest), context);
    } );
}

GetFileOutcome CodeCommitClient::GetFile(const GetFileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetFileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFileOutcomeCallable CodeCommitClient::GetFileCallable(const GetFileRequest& request) const
{
  std::shared_ptr<GetFileRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetFileOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetFile(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetFileAsync(const GetFileRequest& request, const GetFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetFileRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetFile(*pRequest), context);
    } );
}

GetFolderOutcome CodeCommitClient::GetFolder(const GetFolderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFolderOutcomeCallable CodeCommitClient::GetFolderCallable(const GetFolderRequest& request) const
{
  std::shared_ptr<GetFolderRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetFolderOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetFolder(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetFolderAsync(const GetFolderRequest& request, const GetFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetFolderRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetFolder(*pRequest), context);
    } );
}

GetMergeCommitOutcome CodeCommitClient::GetMergeCommit(const GetMergeCommitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMergeCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMergeCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMergeCommitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMergeCommitOutcomeCallable CodeCommitClient::GetMergeCommitCallable(const GetMergeCommitRequest& request) const
{
  std::shared_ptr<GetMergeCommitRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetMergeCommitOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetMergeCommit(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetMergeCommitAsync(const GetMergeCommitRequest& request, const GetMergeCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetMergeCommitRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetMergeCommit(*pRequest), context);
    } );
}

GetMergeConflictsOutcome CodeCommitClient::GetMergeConflicts(const GetMergeConflictsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMergeConflicts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMergeConflicts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMergeConflictsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMergeConflictsOutcomeCallable CodeCommitClient::GetMergeConflictsCallable(const GetMergeConflictsRequest& request) const
{
  std::shared_ptr<GetMergeConflictsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetMergeConflictsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetMergeConflicts(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetMergeConflictsAsync(const GetMergeConflictsRequest& request, const GetMergeConflictsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetMergeConflictsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetMergeConflicts(*pRequest), context);
    } );
}

GetMergeOptionsOutcome CodeCommitClient::GetMergeOptions(const GetMergeOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMergeOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMergeOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMergeOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMergeOptionsOutcomeCallable CodeCommitClient::GetMergeOptionsCallable(const GetMergeOptionsRequest& request) const
{
  std::shared_ptr<GetMergeOptionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetMergeOptionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetMergeOptions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetMergeOptionsAsync(const GetMergeOptionsRequest& request, const GetMergeOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetMergeOptionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetMergeOptions(*pRequest), context);
    } );
}

GetPullRequestOutcome CodeCommitClient::GetPullRequest(const GetPullRequestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPullRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPullRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetPullRequestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPullRequestOutcomeCallable CodeCommitClient::GetPullRequestCallable(const GetPullRequestRequest& request) const
{
  std::shared_ptr<GetPullRequestRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetPullRequestOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetPullRequest(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetPullRequestAsync(const GetPullRequestRequest& request, const GetPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetPullRequestRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetPullRequest(*pRequest), context);
    } );
}

GetPullRequestApprovalStatesOutcome CodeCommitClient::GetPullRequestApprovalStates(const GetPullRequestApprovalStatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPullRequestApprovalStates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPullRequestApprovalStates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetPullRequestApprovalStatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPullRequestApprovalStatesOutcomeCallable CodeCommitClient::GetPullRequestApprovalStatesCallable(const GetPullRequestApprovalStatesRequest& request) const
{
  std::shared_ptr<GetPullRequestApprovalStatesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetPullRequestApprovalStatesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetPullRequestApprovalStates(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetPullRequestApprovalStatesAsync(const GetPullRequestApprovalStatesRequest& request, const GetPullRequestApprovalStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetPullRequestApprovalStatesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetPullRequestApprovalStates(*pRequest), context);
    } );
}

GetPullRequestOverrideStateOutcome CodeCommitClient::GetPullRequestOverrideState(const GetPullRequestOverrideStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPullRequestOverrideState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPullRequestOverrideState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetPullRequestOverrideStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPullRequestOverrideStateOutcomeCallable CodeCommitClient::GetPullRequestOverrideStateCallable(const GetPullRequestOverrideStateRequest& request) const
{
  std::shared_ptr<GetPullRequestOverrideStateRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetPullRequestOverrideStateOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetPullRequestOverrideState(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetPullRequestOverrideStateAsync(const GetPullRequestOverrideStateRequest& request, const GetPullRequestOverrideStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetPullRequestOverrideStateRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetPullRequestOverrideState(*pRequest), context);
    } );
}

GetRepositoryOutcome CodeCommitClient::GetRepository(const GetRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRepositoryOutcomeCallable CodeCommitClient::GetRepositoryCallable(const GetRepositoryRequest& request) const
{
  std::shared_ptr<GetRepositoryRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetRepositoryOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetRepository(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetRepositoryAsync(const GetRepositoryRequest& request, const GetRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetRepositoryRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetRepository(*pRequest), context);
    } );
}

GetRepositoryTriggersOutcome CodeCommitClient::GetRepositoryTriggers(const GetRepositoryTriggersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRepositoryTriggers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRepositoryTriggers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRepositoryTriggersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRepositoryTriggersOutcomeCallable CodeCommitClient::GetRepositoryTriggersCallable(const GetRepositoryTriggersRequest& request) const
{
  std::shared_ptr<GetRepositoryTriggersRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetRepositoryTriggersOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetRepositoryTriggers(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::GetRepositoryTriggersAsync(const GetRepositoryTriggersRequest& request, const GetRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetRepositoryTriggersRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetRepositoryTriggers(*pRequest), context);
    } );
}

ListApprovalRuleTemplatesOutcome CodeCommitClient::ListApprovalRuleTemplates(const ListApprovalRuleTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApprovalRuleTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApprovalRuleTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListApprovalRuleTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListApprovalRuleTemplatesOutcomeCallable CodeCommitClient::ListApprovalRuleTemplatesCallable(const ListApprovalRuleTemplatesRequest& request) const
{
  std::shared_ptr<ListApprovalRuleTemplatesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListApprovalRuleTemplatesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListApprovalRuleTemplates(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::ListApprovalRuleTemplatesAsync(const ListApprovalRuleTemplatesRequest& request, const ListApprovalRuleTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListApprovalRuleTemplatesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListApprovalRuleTemplates(*pRequest), context);
    } );
}

ListAssociatedApprovalRuleTemplatesForRepositoryOutcome CodeCommitClient::ListAssociatedApprovalRuleTemplatesForRepository(const ListAssociatedApprovalRuleTemplatesForRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssociatedApprovalRuleTemplatesForRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssociatedApprovalRuleTemplatesForRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAssociatedApprovalRuleTemplatesForRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssociatedApprovalRuleTemplatesForRepositoryOutcomeCallable CodeCommitClient::ListAssociatedApprovalRuleTemplatesForRepositoryCallable(const ListAssociatedApprovalRuleTemplatesForRepositoryRequest& request) const
{
  std::shared_ptr<ListAssociatedApprovalRuleTemplatesForRepositoryRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListAssociatedApprovalRuleTemplatesForRepositoryOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListAssociatedApprovalRuleTemplatesForRepository(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::ListAssociatedApprovalRuleTemplatesForRepositoryAsync(const ListAssociatedApprovalRuleTemplatesForRepositoryRequest& request, const ListAssociatedApprovalRuleTemplatesForRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListAssociatedApprovalRuleTemplatesForRepositoryRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListAssociatedApprovalRuleTemplatesForRepository(*pRequest), context);
    } );
}

ListBranchesOutcome CodeCommitClient::ListBranches(const ListBranchesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBranches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBranches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListBranchesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBranchesOutcomeCallable CodeCommitClient::ListBranchesCallable(const ListBranchesRequest& request) const
{
  std::shared_ptr<ListBranchesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListBranchesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListBranches(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::ListBranchesAsync(const ListBranchesRequest& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListBranchesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListBranches(*pRequest), context);
    } );
}

ListPullRequestsOutcome CodeCommitClient::ListPullRequests(const ListPullRequestsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPullRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPullRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPullRequestsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPullRequestsOutcomeCallable CodeCommitClient::ListPullRequestsCallable(const ListPullRequestsRequest& request) const
{
  std::shared_ptr<ListPullRequestsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListPullRequestsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListPullRequests(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::ListPullRequestsAsync(const ListPullRequestsRequest& request, const ListPullRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListPullRequestsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListPullRequests(*pRequest), context);
    } );
}

ListRepositoriesOutcome CodeCommitClient::ListRepositories(const ListRepositoriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRepositoriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRepositoriesOutcomeCallable CodeCommitClient::ListRepositoriesCallable(const ListRepositoriesRequest& request) const
{
  std::shared_ptr<ListRepositoriesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListRepositoriesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListRepositories(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::ListRepositoriesAsync(const ListRepositoriesRequest& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListRepositoriesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListRepositories(*pRequest), context);
    } );
}

ListRepositoriesForApprovalRuleTemplateOutcome CodeCommitClient::ListRepositoriesForApprovalRuleTemplate(const ListRepositoriesForApprovalRuleTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRepositoriesForApprovalRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRepositoriesForApprovalRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRepositoriesForApprovalRuleTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRepositoriesForApprovalRuleTemplateOutcomeCallable CodeCommitClient::ListRepositoriesForApprovalRuleTemplateCallable(const ListRepositoriesForApprovalRuleTemplateRequest& request) const
{
  std::shared_ptr<ListRepositoriesForApprovalRuleTemplateRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListRepositoriesForApprovalRuleTemplateOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListRepositoriesForApprovalRuleTemplate(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::ListRepositoriesForApprovalRuleTemplateAsync(const ListRepositoriesForApprovalRuleTemplateRequest& request, const ListRepositoriesForApprovalRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListRepositoriesForApprovalRuleTemplateRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListRepositoriesForApprovalRuleTemplate(*pRequest), context);
    } );
}

ListTagsForResourceOutcome CodeCommitClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CodeCommitClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  std::shared_ptr<ListTagsForResourceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListTagsForResource(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListTagsForResourceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListTagsForResource(*pRequest), context);
    } );
}

MergeBranchesByFastForwardOutcome CodeCommitClient::MergeBranchesByFastForward(const MergeBranchesByFastForwardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MergeBranchesByFastForward, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MergeBranchesByFastForward, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MergeBranchesByFastForwardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergeBranchesByFastForwardOutcomeCallable CodeCommitClient::MergeBranchesByFastForwardCallable(const MergeBranchesByFastForwardRequest& request) const
{
  std::shared_ptr<MergeBranchesByFastForwardRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< MergeBranchesByFastForwardOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->MergeBranchesByFastForward(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::MergeBranchesByFastForwardAsync(const MergeBranchesByFastForwardRequest& request, const MergeBranchesByFastForwardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<MergeBranchesByFastForwardRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, MergeBranchesByFastForward(*pRequest), context);
    } );
}

MergeBranchesBySquashOutcome CodeCommitClient::MergeBranchesBySquash(const MergeBranchesBySquashRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MergeBranchesBySquash, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MergeBranchesBySquash, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MergeBranchesBySquashOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergeBranchesBySquashOutcomeCallable CodeCommitClient::MergeBranchesBySquashCallable(const MergeBranchesBySquashRequest& request) const
{
  std::shared_ptr<MergeBranchesBySquashRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< MergeBranchesBySquashOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->MergeBranchesBySquash(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::MergeBranchesBySquashAsync(const MergeBranchesBySquashRequest& request, const MergeBranchesBySquashResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<MergeBranchesBySquashRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, MergeBranchesBySquash(*pRequest), context);
    } );
}

MergeBranchesByThreeWayOutcome CodeCommitClient::MergeBranchesByThreeWay(const MergeBranchesByThreeWayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MergeBranchesByThreeWay, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MergeBranchesByThreeWay, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MergeBranchesByThreeWayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergeBranchesByThreeWayOutcomeCallable CodeCommitClient::MergeBranchesByThreeWayCallable(const MergeBranchesByThreeWayRequest& request) const
{
  std::shared_ptr<MergeBranchesByThreeWayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< MergeBranchesByThreeWayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->MergeBranchesByThreeWay(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::MergeBranchesByThreeWayAsync(const MergeBranchesByThreeWayRequest& request, const MergeBranchesByThreeWayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<MergeBranchesByThreeWayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, MergeBranchesByThreeWay(*pRequest), context);
    } );
}

MergePullRequestByFastForwardOutcome CodeCommitClient::MergePullRequestByFastForward(const MergePullRequestByFastForwardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MergePullRequestByFastForward, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MergePullRequestByFastForward, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MergePullRequestByFastForwardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergePullRequestByFastForwardOutcomeCallable CodeCommitClient::MergePullRequestByFastForwardCallable(const MergePullRequestByFastForwardRequest& request) const
{
  std::shared_ptr<MergePullRequestByFastForwardRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< MergePullRequestByFastForwardOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->MergePullRequestByFastForward(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::MergePullRequestByFastForwardAsync(const MergePullRequestByFastForwardRequest& request, const MergePullRequestByFastForwardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<MergePullRequestByFastForwardRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, MergePullRequestByFastForward(*pRequest), context);
    } );
}

MergePullRequestBySquashOutcome CodeCommitClient::MergePullRequestBySquash(const MergePullRequestBySquashRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MergePullRequestBySquash, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MergePullRequestBySquash, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MergePullRequestBySquashOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergePullRequestBySquashOutcomeCallable CodeCommitClient::MergePullRequestBySquashCallable(const MergePullRequestBySquashRequest& request) const
{
  std::shared_ptr<MergePullRequestBySquashRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< MergePullRequestBySquashOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->MergePullRequestBySquash(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::MergePullRequestBySquashAsync(const MergePullRequestBySquashRequest& request, const MergePullRequestBySquashResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<MergePullRequestBySquashRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, MergePullRequestBySquash(*pRequest), context);
    } );
}

MergePullRequestByThreeWayOutcome CodeCommitClient::MergePullRequestByThreeWay(const MergePullRequestByThreeWayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MergePullRequestByThreeWay, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MergePullRequestByThreeWay, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MergePullRequestByThreeWayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergePullRequestByThreeWayOutcomeCallable CodeCommitClient::MergePullRequestByThreeWayCallable(const MergePullRequestByThreeWayRequest& request) const
{
  std::shared_ptr<MergePullRequestByThreeWayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< MergePullRequestByThreeWayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->MergePullRequestByThreeWay(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::MergePullRequestByThreeWayAsync(const MergePullRequestByThreeWayRequest& request, const MergePullRequestByThreeWayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<MergePullRequestByThreeWayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, MergePullRequestByThreeWay(*pRequest), context);
    } );
}

OverridePullRequestApprovalRulesOutcome CodeCommitClient::OverridePullRequestApprovalRules(const OverridePullRequestApprovalRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, OverridePullRequestApprovalRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, OverridePullRequestApprovalRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return OverridePullRequestApprovalRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

OverridePullRequestApprovalRulesOutcomeCallable CodeCommitClient::OverridePullRequestApprovalRulesCallable(const OverridePullRequestApprovalRulesRequest& request) const
{
  std::shared_ptr<OverridePullRequestApprovalRulesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< OverridePullRequestApprovalRulesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->OverridePullRequestApprovalRules(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::OverridePullRequestApprovalRulesAsync(const OverridePullRequestApprovalRulesRequest& request, const OverridePullRequestApprovalRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<OverridePullRequestApprovalRulesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, OverridePullRequestApprovalRules(*pRequest), context);
    } );
}

PostCommentForComparedCommitOutcome CodeCommitClient::PostCommentForComparedCommit(const PostCommentForComparedCommitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PostCommentForComparedCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PostCommentForComparedCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PostCommentForComparedCommitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PostCommentForComparedCommitOutcomeCallable CodeCommitClient::PostCommentForComparedCommitCallable(const PostCommentForComparedCommitRequest& request) const
{
  std::shared_ptr<PostCommentForComparedCommitRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< PostCommentForComparedCommitOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->PostCommentForComparedCommit(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::PostCommentForComparedCommitAsync(const PostCommentForComparedCommitRequest& request, const PostCommentForComparedCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<PostCommentForComparedCommitRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, PostCommentForComparedCommit(*pRequest), context);
    } );
}

PostCommentForPullRequestOutcome CodeCommitClient::PostCommentForPullRequest(const PostCommentForPullRequestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PostCommentForPullRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PostCommentForPullRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PostCommentForPullRequestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PostCommentForPullRequestOutcomeCallable CodeCommitClient::PostCommentForPullRequestCallable(const PostCommentForPullRequestRequest& request) const
{
  std::shared_ptr<PostCommentForPullRequestRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< PostCommentForPullRequestOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->PostCommentForPullRequest(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::PostCommentForPullRequestAsync(const PostCommentForPullRequestRequest& request, const PostCommentForPullRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<PostCommentForPullRequestRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, PostCommentForPullRequest(*pRequest), context);
    } );
}

PostCommentReplyOutcome CodeCommitClient::PostCommentReply(const PostCommentReplyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PostCommentReply, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PostCommentReply, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PostCommentReplyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PostCommentReplyOutcomeCallable CodeCommitClient::PostCommentReplyCallable(const PostCommentReplyRequest& request) const
{
  std::shared_ptr<PostCommentReplyRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< PostCommentReplyOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->PostCommentReply(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::PostCommentReplyAsync(const PostCommentReplyRequest& request, const PostCommentReplyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<PostCommentReplyRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, PostCommentReply(*pRequest), context);
    } );
}

PutCommentReactionOutcome CodeCommitClient::PutCommentReaction(const PutCommentReactionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutCommentReaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutCommentReaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutCommentReactionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutCommentReactionOutcomeCallable CodeCommitClient::PutCommentReactionCallable(const PutCommentReactionRequest& request) const
{
  std::shared_ptr<PutCommentReactionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< PutCommentReactionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->PutCommentReaction(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::PutCommentReactionAsync(const PutCommentReactionRequest& request, const PutCommentReactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<PutCommentReactionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, PutCommentReaction(*pRequest), context);
    } );
}

PutFileOutcome CodeCommitClient::PutFile(const PutFileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutFile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutFile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutFileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutFileOutcomeCallable CodeCommitClient::PutFileCallable(const PutFileRequest& request) const
{
  std::shared_ptr<PutFileRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< PutFileOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->PutFile(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::PutFileAsync(const PutFileRequest& request, const PutFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<PutFileRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, PutFile(*pRequest), context);
    } );
}

PutRepositoryTriggersOutcome CodeCommitClient::PutRepositoryTriggers(const PutRepositoryTriggersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRepositoryTriggers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRepositoryTriggers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutRepositoryTriggersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRepositoryTriggersOutcomeCallable CodeCommitClient::PutRepositoryTriggersCallable(const PutRepositoryTriggersRequest& request) const
{
  std::shared_ptr<PutRepositoryTriggersRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< PutRepositoryTriggersOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->PutRepositoryTriggers(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::PutRepositoryTriggersAsync(const PutRepositoryTriggersRequest& request, const PutRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<PutRepositoryTriggersRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, PutRepositoryTriggers(*pRequest), context);
    } );
}

TagResourceOutcome CodeCommitClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CodeCommitClient::TagResourceCallable(const TagResourceRequest& request) const
{
  std::shared_ptr<TagResourceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->TagResource(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<TagResourceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, TagResource(*pRequest), context);
    } );
}

TestRepositoryTriggersOutcome CodeCommitClient::TestRepositoryTriggers(const TestRepositoryTriggersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestRepositoryTriggers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestRepositoryTriggers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TestRepositoryTriggersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestRepositoryTriggersOutcomeCallable CodeCommitClient::TestRepositoryTriggersCallable(const TestRepositoryTriggersRequest& request) const
{
  std::shared_ptr<TestRepositoryTriggersRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< TestRepositoryTriggersOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->TestRepositoryTriggers(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::TestRepositoryTriggersAsync(const TestRepositoryTriggersRequest& request, const TestRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<TestRepositoryTriggersRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, TestRepositoryTriggers(*pRequest), context);
    } );
}

UntagResourceOutcome CodeCommitClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CodeCommitClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  std::shared_ptr<UntagResourceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UntagResource(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UntagResourceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UntagResource(*pRequest), context);
    } );
}

UpdateApprovalRuleTemplateContentOutcome CodeCommitClient::UpdateApprovalRuleTemplateContent(const UpdateApprovalRuleTemplateContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApprovalRuleTemplateContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApprovalRuleTemplateContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateApprovalRuleTemplateContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApprovalRuleTemplateContentOutcomeCallable CodeCommitClient::UpdateApprovalRuleTemplateContentCallable(const UpdateApprovalRuleTemplateContentRequest& request) const
{
  std::shared_ptr<UpdateApprovalRuleTemplateContentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateApprovalRuleTemplateContentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateApprovalRuleTemplateContent(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::UpdateApprovalRuleTemplateContentAsync(const UpdateApprovalRuleTemplateContentRequest& request, const UpdateApprovalRuleTemplateContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateApprovalRuleTemplateContentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateApprovalRuleTemplateContent(*pRequest), context);
    } );
}

UpdateApprovalRuleTemplateDescriptionOutcome CodeCommitClient::UpdateApprovalRuleTemplateDescription(const UpdateApprovalRuleTemplateDescriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApprovalRuleTemplateDescription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApprovalRuleTemplateDescription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateApprovalRuleTemplateDescriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApprovalRuleTemplateDescriptionOutcomeCallable CodeCommitClient::UpdateApprovalRuleTemplateDescriptionCallable(const UpdateApprovalRuleTemplateDescriptionRequest& request) const
{
  std::shared_ptr<UpdateApprovalRuleTemplateDescriptionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateApprovalRuleTemplateDescriptionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateApprovalRuleTemplateDescription(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::UpdateApprovalRuleTemplateDescriptionAsync(const UpdateApprovalRuleTemplateDescriptionRequest& request, const UpdateApprovalRuleTemplateDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateApprovalRuleTemplateDescriptionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateApprovalRuleTemplateDescription(*pRequest), context);
    } );
}

UpdateApprovalRuleTemplateNameOutcome CodeCommitClient::UpdateApprovalRuleTemplateName(const UpdateApprovalRuleTemplateNameRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApprovalRuleTemplateName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApprovalRuleTemplateName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateApprovalRuleTemplateNameOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApprovalRuleTemplateNameOutcomeCallable CodeCommitClient::UpdateApprovalRuleTemplateNameCallable(const UpdateApprovalRuleTemplateNameRequest& request) const
{
  std::shared_ptr<UpdateApprovalRuleTemplateNameRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateApprovalRuleTemplateNameOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateApprovalRuleTemplateName(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::UpdateApprovalRuleTemplateNameAsync(const UpdateApprovalRuleTemplateNameRequest& request, const UpdateApprovalRuleTemplateNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateApprovalRuleTemplateNameRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateApprovalRuleTemplateName(*pRequest), context);
    } );
}

UpdateCommentOutcome CodeCommitClient::UpdateComment(const UpdateCommentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateComment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateComment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateCommentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCommentOutcomeCallable CodeCommitClient::UpdateCommentCallable(const UpdateCommentRequest& request) const
{
  std::shared_ptr<UpdateCommentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateCommentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateComment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::UpdateCommentAsync(const UpdateCommentRequest& request, const UpdateCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateCommentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateComment(*pRequest), context);
    } );
}

UpdateDefaultBranchOutcome CodeCommitClient::UpdateDefaultBranch(const UpdateDefaultBranchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDefaultBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDefaultBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDefaultBranchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDefaultBranchOutcomeCallable CodeCommitClient::UpdateDefaultBranchCallable(const UpdateDefaultBranchRequest& request) const
{
  std::shared_ptr<UpdateDefaultBranchRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateDefaultBranchOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateDefaultBranch(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::UpdateDefaultBranchAsync(const UpdateDefaultBranchRequest& request, const UpdateDefaultBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateDefaultBranchRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateDefaultBranch(*pRequest), context);
    } );
}

UpdatePullRequestApprovalRuleContentOutcome CodeCommitClient::UpdatePullRequestApprovalRuleContent(const UpdatePullRequestApprovalRuleContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePullRequestApprovalRuleContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePullRequestApprovalRuleContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePullRequestApprovalRuleContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePullRequestApprovalRuleContentOutcomeCallable CodeCommitClient::UpdatePullRequestApprovalRuleContentCallable(const UpdatePullRequestApprovalRuleContentRequest& request) const
{
  std::shared_ptr<UpdatePullRequestApprovalRuleContentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdatePullRequestApprovalRuleContentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdatePullRequestApprovalRuleContent(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::UpdatePullRequestApprovalRuleContentAsync(const UpdatePullRequestApprovalRuleContentRequest& request, const UpdatePullRequestApprovalRuleContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdatePullRequestApprovalRuleContentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdatePullRequestApprovalRuleContent(*pRequest), context);
    } );
}

UpdatePullRequestApprovalStateOutcome CodeCommitClient::UpdatePullRequestApprovalState(const UpdatePullRequestApprovalStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePullRequestApprovalState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePullRequestApprovalState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePullRequestApprovalStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePullRequestApprovalStateOutcomeCallable CodeCommitClient::UpdatePullRequestApprovalStateCallable(const UpdatePullRequestApprovalStateRequest& request) const
{
  std::shared_ptr<UpdatePullRequestApprovalStateRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdatePullRequestApprovalStateOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdatePullRequestApprovalState(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::UpdatePullRequestApprovalStateAsync(const UpdatePullRequestApprovalStateRequest& request, const UpdatePullRequestApprovalStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdatePullRequestApprovalStateRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdatePullRequestApprovalState(*pRequest), context);
    } );
}

UpdatePullRequestDescriptionOutcome CodeCommitClient::UpdatePullRequestDescription(const UpdatePullRequestDescriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePullRequestDescription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePullRequestDescription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePullRequestDescriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePullRequestDescriptionOutcomeCallable CodeCommitClient::UpdatePullRequestDescriptionCallable(const UpdatePullRequestDescriptionRequest& request) const
{
  std::shared_ptr<UpdatePullRequestDescriptionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdatePullRequestDescriptionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdatePullRequestDescription(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::UpdatePullRequestDescriptionAsync(const UpdatePullRequestDescriptionRequest& request, const UpdatePullRequestDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdatePullRequestDescriptionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdatePullRequestDescription(*pRequest), context);
    } );
}

UpdatePullRequestStatusOutcome CodeCommitClient::UpdatePullRequestStatus(const UpdatePullRequestStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePullRequestStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePullRequestStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePullRequestStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePullRequestStatusOutcomeCallable CodeCommitClient::UpdatePullRequestStatusCallable(const UpdatePullRequestStatusRequest& request) const
{
  std::shared_ptr<UpdatePullRequestStatusRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdatePullRequestStatusOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdatePullRequestStatus(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::UpdatePullRequestStatusAsync(const UpdatePullRequestStatusRequest& request, const UpdatePullRequestStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdatePullRequestStatusRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdatePullRequestStatus(*pRequest), context);
    } );
}

UpdatePullRequestTitleOutcome CodeCommitClient::UpdatePullRequestTitle(const UpdatePullRequestTitleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePullRequestTitle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePullRequestTitle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePullRequestTitleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePullRequestTitleOutcomeCallable CodeCommitClient::UpdatePullRequestTitleCallable(const UpdatePullRequestTitleRequest& request) const
{
  std::shared_ptr<UpdatePullRequestTitleRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdatePullRequestTitleOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdatePullRequestTitle(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::UpdatePullRequestTitleAsync(const UpdatePullRequestTitleRequest& request, const UpdatePullRequestTitleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdatePullRequestTitleRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdatePullRequestTitle(*pRequest), context);
    } );
}

UpdateRepositoryDescriptionOutcome CodeCommitClient::UpdateRepositoryDescription(const UpdateRepositoryDescriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRepositoryDescription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRepositoryDescription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRepositoryDescriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRepositoryDescriptionOutcomeCallable CodeCommitClient::UpdateRepositoryDescriptionCallable(const UpdateRepositoryDescriptionRequest& request) const
{
  std::shared_ptr<UpdateRepositoryDescriptionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateRepositoryDescriptionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateRepositoryDescription(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::UpdateRepositoryDescriptionAsync(const UpdateRepositoryDescriptionRequest& request, const UpdateRepositoryDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateRepositoryDescriptionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateRepositoryDescription(*pRequest), context);
    } );
}

UpdateRepositoryNameOutcome CodeCommitClient::UpdateRepositoryName(const UpdateRepositoryNameRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRepositoryName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRepositoryName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRepositoryNameOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRepositoryNameOutcomeCallable CodeCommitClient::UpdateRepositoryNameCallable(const UpdateRepositoryNameRequest& request) const
{
  std::shared_ptr<UpdateRepositoryNameRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateRepositoryNameOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateRepositoryName(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CodeCommitClient::UpdateRepositoryNameAsync(const UpdateRepositoryNameRequest& request, const UpdateRepositoryNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateRepositoryNameRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateRepositoryName(*pRequest), context);
    } );
}

