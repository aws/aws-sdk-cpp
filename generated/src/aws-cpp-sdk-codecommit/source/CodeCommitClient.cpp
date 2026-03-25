/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/CodeCommitClient.h>
#include <aws/codecommit/CodeCommitEndpointProvider.h>
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
#include <aws/codecommit/model/CreatePullRequestApprovalRuleRequest.h>
#include <aws/codecommit/model/CreatePullRequestRequest.h>
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
#include <aws/codecommit/model/GetCommentReactionsRequest.h>
#include <aws/codecommit/model/GetCommentRequest.h>
#include <aws/codecommit/model/GetCommentsForComparedCommitRequest.h>
#include <aws/codecommit/model/GetCommentsForPullRequestRequest.h>
#include <aws/codecommit/model/GetCommitRequest.h>
#include <aws/codecommit/model/GetDifferencesRequest.h>
#include <aws/codecommit/model/GetFileRequest.h>
#include <aws/codecommit/model/GetFolderRequest.h>
#include <aws/codecommit/model/GetMergeCommitRequest.h>
#include <aws/codecommit/model/GetMergeConflictsRequest.h>
#include <aws/codecommit/model/GetMergeOptionsRequest.h>
#include <aws/codecommit/model/GetPullRequestApprovalStatesRequest.h>
#include <aws/codecommit/model/GetPullRequestOverrideStateRequest.h>
#include <aws/codecommit/model/GetPullRequestRequest.h>
#include <aws/codecommit/model/GetRepositoryRequest.h>
#include <aws/codecommit/model/GetRepositoryTriggersRequest.h>
#include <aws/codecommit/model/ListApprovalRuleTemplatesRequest.h>
#include <aws/codecommit/model/ListAssociatedApprovalRuleTemplatesForRepositoryRequest.h>
#include <aws/codecommit/model/ListBranchesRequest.h>
#include <aws/codecommit/model/ListFileCommitHistoryRequest.h>
#include <aws/codecommit/model/ListPullRequestsRequest.h>
#include <aws/codecommit/model/ListRepositoriesForApprovalRuleTemplateRequest.h>
#include <aws/codecommit/model/ListRepositoriesRequest.h>
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
#include <aws/codecommit/model/UpdateRepositoryEncryptionKeyRequest.h>
#include <aws/codecommit/model/UpdateRepositoryNameRequest.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodeCommit;
using namespace Aws::CodeCommit::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CodeCommit {
const char SERVICE_NAME[] = "codecommit";
const char ALLOCATION_TAG[] = "CodeCommitClient";
}  // namespace CodeCommit
}  // namespace Aws
const char* CodeCommitClient::GetServiceName() { return SERVICE_NAME; }
const char* CodeCommitClient::GetAllocationTag() { return ALLOCATION_TAG; }

CodeCommitClient::CodeCommitClient(const CodeCommit::CodeCommitClientConfiguration& clientConfiguration,
                                   std::shared_ptr<CodeCommitEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CodeCommitEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeCommitClient::CodeCommitClient(const AWSCredentials& credentials, std::shared_ptr<CodeCommitEndpointProviderBase> endpointProvider,
                                   const CodeCommit::CodeCommitClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CodeCommitEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeCommitClient::CodeCommitClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<CodeCommitEndpointProviderBase> endpointProvider,
                                   const CodeCommit::CodeCommitClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CodeCommitEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CodeCommitClient::CodeCommitClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeCommitEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeCommitClient::CodeCommitClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeCommitEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeCommitClient::CodeCommitClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeCommitErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeCommitEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CodeCommitClient::~CodeCommitClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CodeCommitEndpointProviderBase>& CodeCommitClient::accessEndpointProvider() { return m_endpointProvider; }

void CodeCommitClient::init(const CodeCommit::CodeCommitClientConfiguration& config) {
  AWSClient::SetServiceClientName("CodeCommit");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "codecommit");
}

void CodeCommitClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CodeCommitClient::InvokeOperationOutcome CodeCommitClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                                  Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AssociateApprovalRuleTemplateWithRepositoryOutcome CodeCommitClient::AssociateApprovalRuleTemplateWithRepository(
    const AssociateApprovalRuleTemplateWithRepositoryRequest& request) const {
  return AssociateApprovalRuleTemplateWithRepositoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchAssociateApprovalRuleTemplateWithRepositoriesOutcome CodeCommitClient::BatchAssociateApprovalRuleTemplateWithRepositories(
    const BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& request) const {
  return BatchAssociateApprovalRuleTemplateWithRepositoriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDescribeMergeConflictsOutcome CodeCommitClient::BatchDescribeMergeConflicts(const BatchDescribeMergeConflictsRequest& request) const {
  return BatchDescribeMergeConflictsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcome CodeCommitClient::BatchDisassociateApprovalRuleTemplateFromRepositories(
    const BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest& request) const {
  return BatchDisassociateApprovalRuleTemplateFromRepositoriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetCommitsOutcome CodeCommitClient::BatchGetCommits(const BatchGetCommitsRequest& request) const {
  return BatchGetCommitsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetRepositoriesOutcome CodeCommitClient::BatchGetRepositories(const BatchGetRepositoriesRequest& request) const {
  return BatchGetRepositoriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApprovalRuleTemplateOutcome CodeCommitClient::CreateApprovalRuleTemplate(const CreateApprovalRuleTemplateRequest& request) const {
  return CreateApprovalRuleTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBranchOutcome CodeCommitClient::CreateBranch(const CreateBranchRequest& request) const {
  return CreateBranchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCommitOutcome CodeCommitClient::CreateCommit(const CreateCommitRequest& request) const {
  return CreateCommitOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePullRequestOutcome CodeCommitClient::CreatePullRequest(const CreatePullRequestRequest& request) const {
  return CreatePullRequestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePullRequestApprovalRuleOutcome CodeCommitClient::CreatePullRequestApprovalRule(
    const CreatePullRequestApprovalRuleRequest& request) const {
  return CreatePullRequestApprovalRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRepositoryOutcome CodeCommitClient::CreateRepository(const CreateRepositoryRequest& request) const {
  return CreateRepositoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUnreferencedMergeCommitOutcome CodeCommitClient::CreateUnreferencedMergeCommit(
    const CreateUnreferencedMergeCommitRequest& request) const {
  return CreateUnreferencedMergeCommitOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApprovalRuleTemplateOutcome CodeCommitClient::DeleteApprovalRuleTemplate(const DeleteApprovalRuleTemplateRequest& request) const {
  return DeleteApprovalRuleTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBranchOutcome CodeCommitClient::DeleteBranch(const DeleteBranchRequest& request) const {
  return DeleteBranchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCommentContentOutcome CodeCommitClient::DeleteCommentContent(const DeleteCommentContentRequest& request) const {
  return DeleteCommentContentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFileOutcome CodeCommitClient::DeleteFile(const DeleteFileRequest& request) const {
  return DeleteFileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePullRequestApprovalRuleOutcome CodeCommitClient::DeletePullRequestApprovalRule(
    const DeletePullRequestApprovalRuleRequest& request) const {
  return DeletePullRequestApprovalRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRepositoryOutcome CodeCommitClient::DeleteRepository(const DeleteRepositoryRequest& request) const {
  return DeleteRepositoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMergeConflictsOutcome CodeCommitClient::DescribeMergeConflicts(const DescribeMergeConflictsRequest& request) const {
  return DescribeMergeConflictsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePullRequestEventsOutcome CodeCommitClient::DescribePullRequestEvents(const DescribePullRequestEventsRequest& request) const {
  return DescribePullRequestEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateApprovalRuleTemplateFromRepositoryOutcome CodeCommitClient::DisassociateApprovalRuleTemplateFromRepository(
    const DisassociateApprovalRuleTemplateFromRepositoryRequest& request) const {
  return DisassociateApprovalRuleTemplateFromRepositoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EvaluatePullRequestApprovalRulesOutcome CodeCommitClient::EvaluatePullRequestApprovalRules(
    const EvaluatePullRequestApprovalRulesRequest& request) const {
  return EvaluatePullRequestApprovalRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetApprovalRuleTemplateOutcome CodeCommitClient::GetApprovalRuleTemplate(const GetApprovalRuleTemplateRequest& request) const {
  return GetApprovalRuleTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBlobOutcome CodeCommitClient::GetBlob(const GetBlobRequest& request) const {
  return GetBlobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBranchOutcome CodeCommitClient::GetBranch(const GetBranchRequest& request) const {
  return GetBranchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCommentOutcome CodeCommitClient::GetComment(const GetCommentRequest& request) const {
  return GetCommentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCommentReactionsOutcome CodeCommitClient::GetCommentReactions(const GetCommentReactionsRequest& request) const {
  return GetCommentReactionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCommentsForComparedCommitOutcome CodeCommitClient::GetCommentsForComparedCommit(
    const GetCommentsForComparedCommitRequest& request) const {
  return GetCommentsForComparedCommitOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCommentsForPullRequestOutcome CodeCommitClient::GetCommentsForPullRequest(const GetCommentsForPullRequestRequest& request) const {
  return GetCommentsForPullRequestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCommitOutcome CodeCommitClient::GetCommit(const GetCommitRequest& request) const {
  return GetCommitOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDifferencesOutcome CodeCommitClient::GetDifferences(const GetDifferencesRequest& request) const {
  return GetDifferencesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFileOutcome CodeCommitClient::GetFile(const GetFileRequest& request) const {
  return GetFileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFolderOutcome CodeCommitClient::GetFolder(const GetFolderRequest& request) const {
  return GetFolderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMergeCommitOutcome CodeCommitClient::GetMergeCommit(const GetMergeCommitRequest& request) const {
  return GetMergeCommitOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMergeConflictsOutcome CodeCommitClient::GetMergeConflicts(const GetMergeConflictsRequest& request) const {
  return GetMergeConflictsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMergeOptionsOutcome CodeCommitClient::GetMergeOptions(const GetMergeOptionsRequest& request) const {
  return GetMergeOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPullRequestOutcome CodeCommitClient::GetPullRequest(const GetPullRequestRequest& request) const {
  return GetPullRequestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPullRequestApprovalStatesOutcome CodeCommitClient::GetPullRequestApprovalStates(
    const GetPullRequestApprovalStatesRequest& request) const {
  return GetPullRequestApprovalStatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPullRequestOverrideStateOutcome CodeCommitClient::GetPullRequestOverrideState(const GetPullRequestOverrideStateRequest& request) const {
  return GetPullRequestOverrideStateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRepositoryOutcome CodeCommitClient::GetRepository(const GetRepositoryRequest& request) const {
  return GetRepositoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRepositoryTriggersOutcome CodeCommitClient::GetRepositoryTriggers(const GetRepositoryTriggersRequest& request) const {
  return GetRepositoryTriggersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApprovalRuleTemplatesOutcome CodeCommitClient::ListApprovalRuleTemplates(const ListApprovalRuleTemplatesRequest& request) const {
  return ListApprovalRuleTemplatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAssociatedApprovalRuleTemplatesForRepositoryOutcome CodeCommitClient::ListAssociatedApprovalRuleTemplatesForRepository(
    const ListAssociatedApprovalRuleTemplatesForRepositoryRequest& request) const {
  return ListAssociatedApprovalRuleTemplatesForRepositoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBranchesOutcome CodeCommitClient::ListBranches(const ListBranchesRequest& request) const {
  return ListBranchesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFileCommitHistoryOutcome CodeCommitClient::ListFileCommitHistory(const ListFileCommitHistoryRequest& request) const {
  return ListFileCommitHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPullRequestsOutcome CodeCommitClient::ListPullRequests(const ListPullRequestsRequest& request) const {
  return ListPullRequestsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRepositoriesOutcome CodeCommitClient::ListRepositories(const ListRepositoriesRequest& request) const {
  return ListRepositoriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRepositoriesForApprovalRuleTemplateOutcome CodeCommitClient::ListRepositoriesForApprovalRuleTemplate(
    const ListRepositoriesForApprovalRuleTemplateRequest& request) const {
  return ListRepositoriesForApprovalRuleTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome CodeCommitClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

MergeBranchesByFastForwardOutcome CodeCommitClient::MergeBranchesByFastForward(const MergeBranchesByFastForwardRequest& request) const {
  return MergeBranchesByFastForwardOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

MergeBranchesBySquashOutcome CodeCommitClient::MergeBranchesBySquash(const MergeBranchesBySquashRequest& request) const {
  return MergeBranchesBySquashOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

MergeBranchesByThreeWayOutcome CodeCommitClient::MergeBranchesByThreeWay(const MergeBranchesByThreeWayRequest& request) const {
  return MergeBranchesByThreeWayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

MergePullRequestByFastForwardOutcome CodeCommitClient::MergePullRequestByFastForward(
    const MergePullRequestByFastForwardRequest& request) const {
  return MergePullRequestByFastForwardOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

MergePullRequestBySquashOutcome CodeCommitClient::MergePullRequestBySquash(const MergePullRequestBySquashRequest& request) const {
  return MergePullRequestBySquashOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

MergePullRequestByThreeWayOutcome CodeCommitClient::MergePullRequestByThreeWay(const MergePullRequestByThreeWayRequest& request) const {
  return MergePullRequestByThreeWayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

OverridePullRequestApprovalRulesOutcome CodeCommitClient::OverridePullRequestApprovalRules(
    const OverridePullRequestApprovalRulesRequest& request) const {
  return OverridePullRequestApprovalRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PostCommentForComparedCommitOutcome CodeCommitClient::PostCommentForComparedCommit(
    const PostCommentForComparedCommitRequest& request) const {
  return PostCommentForComparedCommitOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PostCommentForPullRequestOutcome CodeCommitClient::PostCommentForPullRequest(const PostCommentForPullRequestRequest& request) const {
  return PostCommentForPullRequestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PostCommentReplyOutcome CodeCommitClient::PostCommentReply(const PostCommentReplyRequest& request) const {
  return PostCommentReplyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutCommentReactionOutcome CodeCommitClient::PutCommentReaction(const PutCommentReactionRequest& request) const {
  return PutCommentReactionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutFileOutcome CodeCommitClient::PutFile(const PutFileRequest& request) const {
  return PutFileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRepositoryTriggersOutcome CodeCommitClient::PutRepositoryTriggers(const PutRepositoryTriggersRequest& request) const {
  return PutRepositoryTriggersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome CodeCommitClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestRepositoryTriggersOutcome CodeCommitClient::TestRepositoryTriggers(const TestRepositoryTriggersRequest& request) const {
  return TestRepositoryTriggersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome CodeCommitClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateApprovalRuleTemplateContentOutcome CodeCommitClient::UpdateApprovalRuleTemplateContent(
    const UpdateApprovalRuleTemplateContentRequest& request) const {
  return UpdateApprovalRuleTemplateContentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateApprovalRuleTemplateDescriptionOutcome CodeCommitClient::UpdateApprovalRuleTemplateDescription(
    const UpdateApprovalRuleTemplateDescriptionRequest& request) const {
  return UpdateApprovalRuleTemplateDescriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateApprovalRuleTemplateNameOutcome CodeCommitClient::UpdateApprovalRuleTemplateName(
    const UpdateApprovalRuleTemplateNameRequest& request) const {
  return UpdateApprovalRuleTemplateNameOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCommentOutcome CodeCommitClient::UpdateComment(const UpdateCommentRequest& request) const {
  return UpdateCommentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDefaultBranchOutcome CodeCommitClient::UpdateDefaultBranch(const UpdateDefaultBranchRequest& request) const {
  return UpdateDefaultBranchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePullRequestApprovalRuleContentOutcome CodeCommitClient::UpdatePullRequestApprovalRuleContent(
    const UpdatePullRequestApprovalRuleContentRequest& request) const {
  return UpdatePullRequestApprovalRuleContentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePullRequestApprovalStateOutcome CodeCommitClient::UpdatePullRequestApprovalState(
    const UpdatePullRequestApprovalStateRequest& request) const {
  return UpdatePullRequestApprovalStateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePullRequestDescriptionOutcome CodeCommitClient::UpdatePullRequestDescription(
    const UpdatePullRequestDescriptionRequest& request) const {
  return UpdatePullRequestDescriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePullRequestStatusOutcome CodeCommitClient::UpdatePullRequestStatus(const UpdatePullRequestStatusRequest& request) const {
  return UpdatePullRequestStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePullRequestTitleOutcome CodeCommitClient::UpdatePullRequestTitle(const UpdatePullRequestTitleRequest& request) const {
  return UpdatePullRequestTitleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRepositoryDescriptionOutcome CodeCommitClient::UpdateRepositoryDescription(const UpdateRepositoryDescriptionRequest& request) const {
  return UpdateRepositoryDescriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRepositoryEncryptionKeyOutcome CodeCommitClient::UpdateRepositoryEncryptionKey(
    const UpdateRepositoryEncryptionKeyRequest& request) const {
  return UpdateRepositoryEncryptionKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRepositoryNameOutcome CodeCommitClient::UpdateRepositoryName(const UpdateRepositoryNameRequest& request) const {
  return UpdateRepositoryNameOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
