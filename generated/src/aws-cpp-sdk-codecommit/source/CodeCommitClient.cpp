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

BatchAssociateApprovalRuleTemplateWithRepositoriesOutcome CodeCommitClient::BatchAssociateApprovalRuleTemplateWithRepositories(const BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchAssociateApprovalRuleTemplateWithRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchAssociateApprovalRuleTemplateWithRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchAssociateApprovalRuleTemplateWithRepositoriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDescribeMergeConflictsOutcome CodeCommitClient::BatchDescribeMergeConflicts(const BatchDescribeMergeConflictsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDescribeMergeConflicts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDescribeMergeConflicts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchDescribeMergeConflictsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcome CodeCommitClient::BatchDisassociateApprovalRuleTemplateFromRepositories(const BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDisassociateApprovalRuleTemplateFromRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDisassociateApprovalRuleTemplateFromRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetCommitsOutcome CodeCommitClient::BatchGetCommits(const BatchGetCommitsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetCommits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetCommits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetCommitsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetRepositoriesOutcome CodeCommitClient::BatchGetRepositories(const BatchGetRepositoriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetRepositoriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApprovalRuleTemplateOutcome CodeCommitClient::CreateApprovalRuleTemplate(const CreateApprovalRuleTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApprovalRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApprovalRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateApprovalRuleTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBranchOutcome CodeCommitClient::CreateBranch(const CreateBranchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateBranchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCommitOutcome CodeCommitClient::CreateCommit(const CreateCommitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCommitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePullRequestOutcome CodeCommitClient::CreatePullRequest(const CreatePullRequestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePullRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePullRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePullRequestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePullRequestApprovalRuleOutcome CodeCommitClient::CreatePullRequestApprovalRule(const CreatePullRequestApprovalRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePullRequestApprovalRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePullRequestApprovalRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePullRequestApprovalRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRepositoryOutcome CodeCommitClient::CreateRepository(const CreateRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUnreferencedMergeCommitOutcome CodeCommitClient::CreateUnreferencedMergeCommit(const CreateUnreferencedMergeCommitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUnreferencedMergeCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUnreferencedMergeCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUnreferencedMergeCommitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApprovalRuleTemplateOutcome CodeCommitClient::DeleteApprovalRuleTemplate(const DeleteApprovalRuleTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApprovalRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApprovalRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteApprovalRuleTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBranchOutcome CodeCommitClient::DeleteBranch(const DeleteBranchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteBranchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCommentContentOutcome CodeCommitClient::DeleteCommentContent(const DeleteCommentContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCommentContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCommentContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCommentContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFileOutcome CodeCommitClient::DeleteFile(const DeleteFileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePullRequestApprovalRuleOutcome CodeCommitClient::DeletePullRequestApprovalRule(const DeletePullRequestApprovalRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePullRequestApprovalRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePullRequestApprovalRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePullRequestApprovalRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRepositoryOutcome CodeCommitClient::DeleteRepository(const DeleteRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMergeConflictsOutcome CodeCommitClient::DescribeMergeConflicts(const DescribeMergeConflictsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMergeConflicts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMergeConflicts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMergeConflictsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePullRequestEventsOutcome CodeCommitClient::DescribePullRequestEvents(const DescribePullRequestEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePullRequestEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePullRequestEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePullRequestEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateApprovalRuleTemplateFromRepositoryOutcome CodeCommitClient::DisassociateApprovalRuleTemplateFromRepository(const DisassociateApprovalRuleTemplateFromRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateApprovalRuleTemplateFromRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateApprovalRuleTemplateFromRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateApprovalRuleTemplateFromRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EvaluatePullRequestApprovalRulesOutcome CodeCommitClient::EvaluatePullRequestApprovalRules(const EvaluatePullRequestApprovalRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EvaluatePullRequestApprovalRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EvaluatePullRequestApprovalRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EvaluatePullRequestApprovalRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetApprovalRuleTemplateOutcome CodeCommitClient::GetApprovalRuleTemplate(const GetApprovalRuleTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApprovalRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApprovalRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetApprovalRuleTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBlobOutcome CodeCommitClient::GetBlob(const GetBlobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBlob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBlob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBlobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBranchOutcome CodeCommitClient::GetBranch(const GetBranchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBranchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCommentOutcome CodeCommitClient::GetComment(const GetCommentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetComment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetComment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCommentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCommentReactionsOutcome CodeCommitClient::GetCommentReactions(const GetCommentReactionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCommentReactions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCommentReactions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCommentReactionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCommentsForComparedCommitOutcome CodeCommitClient::GetCommentsForComparedCommit(const GetCommentsForComparedCommitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCommentsForComparedCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCommentsForComparedCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCommentsForComparedCommitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCommentsForPullRequestOutcome CodeCommitClient::GetCommentsForPullRequest(const GetCommentsForPullRequestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCommentsForPullRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCommentsForPullRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCommentsForPullRequestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCommitOutcome CodeCommitClient::GetCommit(const GetCommitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCommitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDifferencesOutcome CodeCommitClient::GetDifferences(const GetDifferencesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDifferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDifferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDifferencesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFileOutcome CodeCommitClient::GetFile(const GetFileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetFileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFolderOutcome CodeCommitClient::GetFolder(const GetFolderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMergeCommitOutcome CodeCommitClient::GetMergeCommit(const GetMergeCommitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMergeCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMergeCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMergeCommitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMergeConflictsOutcome CodeCommitClient::GetMergeConflicts(const GetMergeConflictsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMergeConflicts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMergeConflicts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMergeConflictsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMergeOptionsOutcome CodeCommitClient::GetMergeOptions(const GetMergeOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMergeOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMergeOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMergeOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPullRequestOutcome CodeCommitClient::GetPullRequest(const GetPullRequestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPullRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPullRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetPullRequestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPullRequestApprovalStatesOutcome CodeCommitClient::GetPullRequestApprovalStates(const GetPullRequestApprovalStatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPullRequestApprovalStates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPullRequestApprovalStates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetPullRequestApprovalStatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPullRequestOverrideStateOutcome CodeCommitClient::GetPullRequestOverrideState(const GetPullRequestOverrideStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPullRequestOverrideState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPullRequestOverrideState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetPullRequestOverrideStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRepositoryOutcome CodeCommitClient::GetRepository(const GetRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRepositoryTriggersOutcome CodeCommitClient::GetRepositoryTriggers(const GetRepositoryTriggersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRepositoryTriggers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRepositoryTriggers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRepositoryTriggersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListApprovalRuleTemplatesOutcome CodeCommitClient::ListApprovalRuleTemplates(const ListApprovalRuleTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApprovalRuleTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApprovalRuleTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListApprovalRuleTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssociatedApprovalRuleTemplatesForRepositoryOutcome CodeCommitClient::ListAssociatedApprovalRuleTemplatesForRepository(const ListAssociatedApprovalRuleTemplatesForRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssociatedApprovalRuleTemplatesForRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssociatedApprovalRuleTemplatesForRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAssociatedApprovalRuleTemplatesForRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBranchesOutcome CodeCommitClient::ListBranches(const ListBranchesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBranches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBranches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListBranchesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPullRequestsOutcome CodeCommitClient::ListPullRequests(const ListPullRequestsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPullRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPullRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPullRequestsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRepositoriesOutcome CodeCommitClient::ListRepositories(const ListRepositoriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRepositoriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRepositoriesForApprovalRuleTemplateOutcome CodeCommitClient::ListRepositoriesForApprovalRuleTemplate(const ListRepositoriesForApprovalRuleTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRepositoriesForApprovalRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRepositoriesForApprovalRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRepositoriesForApprovalRuleTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome CodeCommitClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergeBranchesByFastForwardOutcome CodeCommitClient::MergeBranchesByFastForward(const MergeBranchesByFastForwardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MergeBranchesByFastForward, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MergeBranchesByFastForward, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MergeBranchesByFastForwardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergeBranchesBySquashOutcome CodeCommitClient::MergeBranchesBySquash(const MergeBranchesBySquashRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MergeBranchesBySquash, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MergeBranchesBySquash, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MergeBranchesBySquashOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergeBranchesByThreeWayOutcome CodeCommitClient::MergeBranchesByThreeWay(const MergeBranchesByThreeWayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MergeBranchesByThreeWay, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MergeBranchesByThreeWay, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MergeBranchesByThreeWayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergePullRequestByFastForwardOutcome CodeCommitClient::MergePullRequestByFastForward(const MergePullRequestByFastForwardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MergePullRequestByFastForward, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MergePullRequestByFastForward, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MergePullRequestByFastForwardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergePullRequestBySquashOutcome CodeCommitClient::MergePullRequestBySquash(const MergePullRequestBySquashRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MergePullRequestBySquash, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MergePullRequestBySquash, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MergePullRequestBySquashOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergePullRequestByThreeWayOutcome CodeCommitClient::MergePullRequestByThreeWay(const MergePullRequestByThreeWayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MergePullRequestByThreeWay, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MergePullRequestByThreeWay, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MergePullRequestByThreeWayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

OverridePullRequestApprovalRulesOutcome CodeCommitClient::OverridePullRequestApprovalRules(const OverridePullRequestApprovalRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, OverridePullRequestApprovalRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, OverridePullRequestApprovalRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return OverridePullRequestApprovalRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PostCommentForComparedCommitOutcome CodeCommitClient::PostCommentForComparedCommit(const PostCommentForComparedCommitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PostCommentForComparedCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PostCommentForComparedCommit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PostCommentForComparedCommitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PostCommentForPullRequestOutcome CodeCommitClient::PostCommentForPullRequest(const PostCommentForPullRequestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PostCommentForPullRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PostCommentForPullRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PostCommentForPullRequestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PostCommentReplyOutcome CodeCommitClient::PostCommentReply(const PostCommentReplyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PostCommentReply, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PostCommentReply, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PostCommentReplyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutCommentReactionOutcome CodeCommitClient::PutCommentReaction(const PutCommentReactionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutCommentReaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutCommentReaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutCommentReactionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutFileOutcome CodeCommitClient::PutFile(const PutFileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutFile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutFile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutFileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRepositoryTriggersOutcome CodeCommitClient::PutRepositoryTriggers(const PutRepositoryTriggersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRepositoryTriggers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRepositoryTriggers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutRepositoryTriggersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome CodeCommitClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestRepositoryTriggersOutcome CodeCommitClient::TestRepositoryTriggers(const TestRepositoryTriggersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestRepositoryTriggers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestRepositoryTriggers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TestRepositoryTriggersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome CodeCommitClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApprovalRuleTemplateContentOutcome CodeCommitClient::UpdateApprovalRuleTemplateContent(const UpdateApprovalRuleTemplateContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApprovalRuleTemplateContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApprovalRuleTemplateContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateApprovalRuleTemplateContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApprovalRuleTemplateDescriptionOutcome CodeCommitClient::UpdateApprovalRuleTemplateDescription(const UpdateApprovalRuleTemplateDescriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApprovalRuleTemplateDescription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApprovalRuleTemplateDescription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateApprovalRuleTemplateDescriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApprovalRuleTemplateNameOutcome CodeCommitClient::UpdateApprovalRuleTemplateName(const UpdateApprovalRuleTemplateNameRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApprovalRuleTemplateName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApprovalRuleTemplateName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateApprovalRuleTemplateNameOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCommentOutcome CodeCommitClient::UpdateComment(const UpdateCommentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateComment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateComment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateCommentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDefaultBranchOutcome CodeCommitClient::UpdateDefaultBranch(const UpdateDefaultBranchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDefaultBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDefaultBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDefaultBranchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePullRequestApprovalRuleContentOutcome CodeCommitClient::UpdatePullRequestApprovalRuleContent(const UpdatePullRequestApprovalRuleContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePullRequestApprovalRuleContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePullRequestApprovalRuleContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePullRequestApprovalRuleContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePullRequestApprovalStateOutcome CodeCommitClient::UpdatePullRequestApprovalState(const UpdatePullRequestApprovalStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePullRequestApprovalState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePullRequestApprovalState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePullRequestApprovalStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePullRequestDescriptionOutcome CodeCommitClient::UpdatePullRequestDescription(const UpdatePullRequestDescriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePullRequestDescription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePullRequestDescription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePullRequestDescriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePullRequestStatusOutcome CodeCommitClient::UpdatePullRequestStatus(const UpdatePullRequestStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePullRequestStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePullRequestStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePullRequestStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePullRequestTitleOutcome CodeCommitClient::UpdatePullRequestTitle(const UpdatePullRequestTitleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePullRequestTitle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePullRequestTitle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePullRequestTitleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRepositoryDescriptionOutcome CodeCommitClient::UpdateRepositoryDescription(const UpdateRepositoryDescriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRepositoryDescription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRepositoryDescription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRepositoryDescriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRepositoryNameOutcome CodeCommitClient::UpdateRepositoryName(const UpdateRepositoryNameRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRepositoryName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRepositoryName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRepositoryNameOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

