/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/TransferClient.h>
#include <aws/awstransfer/TransferEndpointProvider.h>
#include <aws/awstransfer/TransferErrorMarshaller.h>
#include <aws/awstransfer/model/CreateAccessRequest.h>
#include <aws/awstransfer/model/CreateAgreementRequest.h>
#include <aws/awstransfer/model/CreateConnectorRequest.h>
#include <aws/awstransfer/model/CreateProfileRequest.h>
#include <aws/awstransfer/model/CreateServerRequest.h>
#include <aws/awstransfer/model/CreateUserRequest.h>
#include <aws/awstransfer/model/CreateWebAppRequest.h>
#include <aws/awstransfer/model/CreateWorkflowRequest.h>
#include <aws/awstransfer/model/DeleteAccessRequest.h>
#include <aws/awstransfer/model/DeleteAgreementRequest.h>
#include <aws/awstransfer/model/DeleteCertificateRequest.h>
#include <aws/awstransfer/model/DeleteConnectorRequest.h>
#include <aws/awstransfer/model/DeleteHostKeyRequest.h>
#include <aws/awstransfer/model/DeleteProfileRequest.h>
#include <aws/awstransfer/model/DeleteServerRequest.h>
#include <aws/awstransfer/model/DeleteSshPublicKeyRequest.h>
#include <aws/awstransfer/model/DeleteUserRequest.h>
#include <aws/awstransfer/model/DeleteWebAppCustomizationRequest.h>
#include <aws/awstransfer/model/DeleteWebAppRequest.h>
#include <aws/awstransfer/model/DeleteWorkflowRequest.h>
#include <aws/awstransfer/model/DescribeAccessRequest.h>
#include <aws/awstransfer/model/DescribeAgreementRequest.h>
#include <aws/awstransfer/model/DescribeCertificateRequest.h>
#include <aws/awstransfer/model/DescribeConnectorRequest.h>
#include <aws/awstransfer/model/DescribeExecutionRequest.h>
#include <aws/awstransfer/model/DescribeHostKeyRequest.h>
#include <aws/awstransfer/model/DescribeProfileRequest.h>
#include <aws/awstransfer/model/DescribeSecurityPolicyRequest.h>
#include <aws/awstransfer/model/DescribeServerRequest.h>
#include <aws/awstransfer/model/DescribeUserRequest.h>
#include <aws/awstransfer/model/DescribeWebAppCustomizationRequest.h>
#include <aws/awstransfer/model/DescribeWebAppRequest.h>
#include <aws/awstransfer/model/DescribeWorkflowRequest.h>
#include <aws/awstransfer/model/ImportCertificateRequest.h>
#include <aws/awstransfer/model/ImportHostKeyRequest.h>
#include <aws/awstransfer/model/ImportSshPublicKeyRequest.h>
#include <aws/awstransfer/model/ListAccessesRequest.h>
#include <aws/awstransfer/model/ListAgreementsRequest.h>
#include <aws/awstransfer/model/ListCertificatesRequest.h>
#include <aws/awstransfer/model/ListConnectorsRequest.h>
#include <aws/awstransfer/model/ListExecutionsRequest.h>
#include <aws/awstransfer/model/ListFileTransferResultsRequest.h>
#include <aws/awstransfer/model/ListHostKeysRequest.h>
#include <aws/awstransfer/model/ListProfilesRequest.h>
#include <aws/awstransfer/model/ListSecurityPoliciesRequest.h>
#include <aws/awstransfer/model/ListServersRequest.h>
#include <aws/awstransfer/model/ListTagsForResourceRequest.h>
#include <aws/awstransfer/model/ListUsersRequest.h>
#include <aws/awstransfer/model/ListWebAppsRequest.h>
#include <aws/awstransfer/model/ListWorkflowsRequest.h>
#include <aws/awstransfer/model/SendWorkflowStepStateRequest.h>
#include <aws/awstransfer/model/StartDirectoryListingRequest.h>
#include <aws/awstransfer/model/StartFileTransferRequest.h>
#include <aws/awstransfer/model/StartRemoteDeleteRequest.h>
#include <aws/awstransfer/model/StartRemoteMoveRequest.h>
#include <aws/awstransfer/model/StartServerRequest.h>
#include <aws/awstransfer/model/StopServerRequest.h>
#include <aws/awstransfer/model/TagResourceRequest.h>
#include <aws/awstransfer/model/TestConnectionRequest.h>
#include <aws/awstransfer/model/TestIdentityProviderRequest.h>
#include <aws/awstransfer/model/UntagResourceRequest.h>
#include <aws/awstransfer/model/UpdateAccessRequest.h>
#include <aws/awstransfer/model/UpdateAgreementRequest.h>
#include <aws/awstransfer/model/UpdateCertificateRequest.h>
#include <aws/awstransfer/model/UpdateConnectorRequest.h>
#include <aws/awstransfer/model/UpdateHostKeyRequest.h>
#include <aws/awstransfer/model/UpdateProfileRequest.h>
#include <aws/awstransfer/model/UpdateServerRequest.h>
#include <aws/awstransfer/model/UpdateUserRequest.h>
#include <aws/awstransfer/model/UpdateWebAppCustomizationRequest.h>
#include <aws/awstransfer/model/UpdateWebAppRequest.h>
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
using namespace Aws::Transfer;
using namespace Aws::Transfer::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Transfer {
const char SERVICE_NAME[] = "transfer";
const char ALLOCATION_TAG[] = "TransferClient";
}  // namespace Transfer
}  // namespace Aws
const char* TransferClient::GetServiceName() { return SERVICE_NAME; }
const char* TransferClient::GetAllocationTag() { return ALLOCATION_TAG; }

TransferClient::TransferClient(const Transfer::TransferClientConfiguration& clientConfiguration,
                               std::shared_ptr<TransferEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TransferErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TransferEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TransferClient::TransferClient(const AWSCredentials& credentials, std::shared_ptr<TransferEndpointProviderBase> endpointProvider,
                               const Transfer::TransferClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TransferErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TransferEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TransferClient::TransferClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<TransferEndpointProviderBase> endpointProvider,
                               const Transfer::TransferClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TransferErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TransferEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
TransferClient::TransferClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TransferErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TransferEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TransferClient::TransferClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TransferErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TransferEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TransferClient::TransferClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TransferErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TransferEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
TransferClient::~TransferClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<TransferEndpointProviderBase>& TransferClient::accessEndpointProvider() { return m_endpointProvider; }

void TransferClient::init(const Transfer::TransferClientConfiguration& config) {
  AWSClient::SetServiceClientName("Transfer");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "transfer");
}

void TransferClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
TransferClient::InvokeOperationOutcome TransferClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateAccessOutcome TransferClient::CreateAccess(const CreateAccessRequest& request) const {
  return CreateAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAgreementOutcome TransferClient::CreateAgreement(const CreateAgreementRequest& request) const {
  return CreateAgreementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConnectorOutcome TransferClient::CreateConnector(const CreateConnectorRequest& request) const {
  return CreateConnectorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProfileOutcome TransferClient::CreateProfile(const CreateProfileRequest& request) const {
  return CreateProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateServerOutcome TransferClient::CreateServer(const CreateServerRequest& request) const {
  return CreateServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserOutcome TransferClient::CreateUser(const CreateUserRequest& request) const {
  return CreateUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWebAppOutcome TransferClient::CreateWebApp(const CreateWebAppRequest& request) const {
  return CreateWebAppOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkflowOutcome TransferClient::CreateWorkflow(const CreateWorkflowRequest& request) const {
  return CreateWorkflowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAccessOutcome TransferClient::DeleteAccess(const DeleteAccessRequest& request) const {
  return DeleteAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAgreementOutcome TransferClient::DeleteAgreement(const DeleteAgreementRequest& request) const {
  return DeleteAgreementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCertificateOutcome TransferClient::DeleteCertificate(const DeleteCertificateRequest& request) const {
  return DeleteCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConnectorOutcome TransferClient::DeleteConnector(const DeleteConnectorRequest& request) const {
  return DeleteConnectorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteHostKeyOutcome TransferClient::DeleteHostKey(const DeleteHostKeyRequest& request) const {
  return DeleteHostKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProfileOutcome TransferClient::DeleteProfile(const DeleteProfileRequest& request) const {
  return DeleteProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteServerOutcome TransferClient::DeleteServer(const DeleteServerRequest& request) const {
  return DeleteServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSshPublicKeyOutcome TransferClient::DeleteSshPublicKey(const DeleteSshPublicKeyRequest& request) const {
  return DeleteSshPublicKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUserOutcome TransferClient::DeleteUser(const DeleteUserRequest& request) const {
  return DeleteUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWebAppOutcome TransferClient::DeleteWebApp(const DeleteWebAppRequest& request) const {
  return DeleteWebAppOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWebAppCustomizationOutcome TransferClient::DeleteWebAppCustomization(const DeleteWebAppCustomizationRequest& request) const {
  return DeleteWebAppCustomizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWorkflowOutcome TransferClient::DeleteWorkflow(const DeleteWorkflowRequest& request) const {
  return DeleteWorkflowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccessOutcome TransferClient::DescribeAccess(const DescribeAccessRequest& request) const {
  return DescribeAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAgreementOutcome TransferClient::DescribeAgreement(const DescribeAgreementRequest& request) const {
  return DescribeAgreementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCertificateOutcome TransferClient::DescribeCertificate(const DescribeCertificateRequest& request) const {
  return DescribeCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConnectorOutcome TransferClient::DescribeConnector(const DescribeConnectorRequest& request) const {
  return DescribeConnectorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeExecutionOutcome TransferClient::DescribeExecution(const DescribeExecutionRequest& request) const {
  return DescribeExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeHostKeyOutcome TransferClient::DescribeHostKey(const DescribeHostKeyRequest& request) const {
  return DescribeHostKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeProfileOutcome TransferClient::DescribeProfile(const DescribeProfileRequest& request) const {
  return DescribeProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSecurityPolicyOutcome TransferClient::DescribeSecurityPolicy(const DescribeSecurityPolicyRequest& request) const {
  return DescribeSecurityPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeServerOutcome TransferClient::DescribeServer(const DescribeServerRequest& request) const {
  return DescribeServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeUserOutcome TransferClient::DescribeUser(const DescribeUserRequest& request) const {
  return DescribeUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWebAppOutcome TransferClient::DescribeWebApp(const DescribeWebAppRequest& request) const {
  return DescribeWebAppOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWebAppCustomizationOutcome TransferClient::DescribeWebAppCustomization(const DescribeWebAppCustomizationRequest& request) const {
  return DescribeWebAppCustomizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWorkflowOutcome TransferClient::DescribeWorkflow(const DescribeWorkflowRequest& request) const {
  return DescribeWorkflowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportCertificateOutcome TransferClient::ImportCertificate(const ImportCertificateRequest& request) const {
  return ImportCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportHostKeyOutcome TransferClient::ImportHostKey(const ImportHostKeyRequest& request) const {
  return ImportHostKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportSshPublicKeyOutcome TransferClient::ImportSshPublicKey(const ImportSshPublicKeyRequest& request) const {
  return ImportSshPublicKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAccessesOutcome TransferClient::ListAccesses(const ListAccessesRequest& request) const {
  return ListAccessesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAgreementsOutcome TransferClient::ListAgreements(const ListAgreementsRequest& request) const {
  return ListAgreementsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCertificatesOutcome TransferClient::ListCertificates(const ListCertificatesRequest& request) const {
  return ListCertificatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListConnectorsOutcome TransferClient::ListConnectors(const ListConnectorsRequest& request) const {
  return ListConnectorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListExecutionsOutcome TransferClient::ListExecutions(const ListExecutionsRequest& request) const {
  return ListExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFileTransferResultsOutcome TransferClient::ListFileTransferResults(const ListFileTransferResultsRequest& request) const {
  return ListFileTransferResultsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListHostKeysOutcome TransferClient::ListHostKeys(const ListHostKeysRequest& request) const {
  return ListHostKeysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProfilesOutcome TransferClient::ListProfiles(const ListProfilesRequest& request) const {
  return ListProfilesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSecurityPoliciesOutcome TransferClient::ListSecurityPolicies(const ListSecurityPoliciesRequest& request) const {
  return ListSecurityPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListServersOutcome TransferClient::ListServers(const ListServersRequest& request) const {
  return ListServersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome TransferClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListUsersOutcome TransferClient::ListUsers(const ListUsersRequest& request) const {
  return ListUsersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWebAppsOutcome TransferClient::ListWebApps(const ListWebAppsRequest& request) const {
  return ListWebAppsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkflowsOutcome TransferClient::ListWorkflows(const ListWorkflowsRequest& request) const {
  return ListWorkflowsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendWorkflowStepStateOutcome TransferClient::SendWorkflowStepState(const SendWorkflowStepStateRequest& request) const {
  return SendWorkflowStepStateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDirectoryListingOutcome TransferClient::StartDirectoryListing(const StartDirectoryListingRequest& request) const {
  return StartDirectoryListingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartFileTransferOutcome TransferClient::StartFileTransfer(const StartFileTransferRequest& request) const {
  return StartFileTransferOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartRemoteDeleteOutcome TransferClient::StartRemoteDelete(const StartRemoteDeleteRequest& request) const {
  return StartRemoteDeleteOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartRemoteMoveOutcome TransferClient::StartRemoteMove(const StartRemoteMoveRequest& request) const {
  return StartRemoteMoveOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartServerOutcome TransferClient::StartServer(const StartServerRequest& request) const {
  return StartServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopServerOutcome TransferClient::StopServer(const StopServerRequest& request) const {
  return StopServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome TransferClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestConnectionOutcome TransferClient::TestConnection(const TestConnectionRequest& request) const {
  return TestConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestIdentityProviderOutcome TransferClient::TestIdentityProvider(const TestIdentityProviderRequest& request) const {
  return TestIdentityProviderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome TransferClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAccessOutcome TransferClient::UpdateAccess(const UpdateAccessRequest& request) const {
  return UpdateAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAgreementOutcome TransferClient::UpdateAgreement(const UpdateAgreementRequest& request) const {
  return UpdateAgreementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCertificateOutcome TransferClient::UpdateCertificate(const UpdateCertificateRequest& request) const {
  return UpdateCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateConnectorOutcome TransferClient::UpdateConnector(const UpdateConnectorRequest& request) const {
  return UpdateConnectorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateHostKeyOutcome TransferClient::UpdateHostKey(const UpdateHostKeyRequest& request) const {
  return UpdateHostKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateProfileOutcome TransferClient::UpdateProfile(const UpdateProfileRequest& request) const {
  return UpdateProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateServerOutcome TransferClient::UpdateServer(const UpdateServerRequest& request) const {
  return UpdateServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateUserOutcome TransferClient::UpdateUser(const UpdateUserRequest& request) const {
  return UpdateUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWebAppOutcome TransferClient::UpdateWebApp(const UpdateWebAppRequest& request) const {
  return UpdateWebAppOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWebAppCustomizationOutcome TransferClient::UpdateWebAppCustomization(const UpdateWebAppCustomizationRequest& request) const {
  return UpdateWebAppCustomizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
