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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAccessOutcome(result.GetResultWithOwnership()) : CreateAccessOutcome(std::move(result.GetError()));
}

CreateAgreementOutcome TransferClient::CreateAgreement(const CreateAgreementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAgreementOutcome(result.GetResultWithOwnership())
                            : CreateAgreementOutcome(std::move(result.GetError()));
}

CreateConnectorOutcome TransferClient::CreateConnector(const CreateConnectorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConnectorOutcome(result.GetResultWithOwnership())
                            : CreateConnectorOutcome(std::move(result.GetError()));
}

CreateProfileOutcome TransferClient::CreateProfile(const CreateProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProfileOutcome(result.GetResultWithOwnership()) : CreateProfileOutcome(std::move(result.GetError()));
}

CreateServerOutcome TransferClient::CreateServer(const CreateServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateServerOutcome(result.GetResultWithOwnership()) : CreateServerOutcome(std::move(result.GetError()));
}

CreateUserOutcome TransferClient::CreateUser(const CreateUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUserOutcome(result.GetResultWithOwnership()) : CreateUserOutcome(std::move(result.GetError()));
}

CreateWebAppOutcome TransferClient::CreateWebApp(const CreateWebAppRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWebAppOutcome(result.GetResultWithOwnership()) : CreateWebAppOutcome(std::move(result.GetError()));
}

CreateWorkflowOutcome TransferClient::CreateWorkflow(const CreateWorkflowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkflowOutcome(result.GetResultWithOwnership()) : CreateWorkflowOutcome(std::move(result.GetError()));
}

DeleteAccessOutcome TransferClient::DeleteAccess(const DeleteAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAccessOutcome(result.GetResultWithOwnership()) : DeleteAccessOutcome(std::move(result.GetError()));
}

DeleteAgreementOutcome TransferClient::DeleteAgreement(const DeleteAgreementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAgreementOutcome(result.GetResultWithOwnership())
                            : DeleteAgreementOutcome(std::move(result.GetError()));
}

DeleteCertificateOutcome TransferClient::DeleteCertificate(const DeleteCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCertificateOutcome(result.GetResultWithOwnership())
                            : DeleteCertificateOutcome(std::move(result.GetError()));
}

DeleteConnectorOutcome TransferClient::DeleteConnector(const DeleteConnectorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteConnectorOutcome(result.GetResultWithOwnership())
                            : DeleteConnectorOutcome(std::move(result.GetError()));
}

DeleteHostKeyOutcome TransferClient::DeleteHostKey(const DeleteHostKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteHostKeyOutcome(result.GetResultWithOwnership()) : DeleteHostKeyOutcome(std::move(result.GetError()));
}

DeleteProfileOutcome TransferClient::DeleteProfile(const DeleteProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteProfileOutcome(result.GetResultWithOwnership()) : DeleteProfileOutcome(std::move(result.GetError()));
}

DeleteServerOutcome TransferClient::DeleteServer(const DeleteServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteServerOutcome(result.GetResultWithOwnership()) : DeleteServerOutcome(std::move(result.GetError()));
}

DeleteSshPublicKeyOutcome TransferClient::DeleteSshPublicKey(const DeleteSshPublicKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSshPublicKeyOutcome(result.GetResultWithOwnership())
                            : DeleteSshPublicKeyOutcome(std::move(result.GetError()));
}

DeleteUserOutcome TransferClient::DeleteUser(const DeleteUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUserOutcome(result.GetResultWithOwnership()) : DeleteUserOutcome(std::move(result.GetError()));
}

DeleteWebAppOutcome TransferClient::DeleteWebApp(const DeleteWebAppRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteWebAppOutcome(result.GetResultWithOwnership()) : DeleteWebAppOutcome(std::move(result.GetError()));
}

DeleteWebAppCustomizationOutcome TransferClient::DeleteWebAppCustomization(const DeleteWebAppCustomizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteWebAppCustomizationOutcome(result.GetResultWithOwnership())
                            : DeleteWebAppCustomizationOutcome(std::move(result.GetError()));
}

DeleteWorkflowOutcome TransferClient::DeleteWorkflow(const DeleteWorkflowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteWorkflowOutcome(result.GetResultWithOwnership()) : DeleteWorkflowOutcome(std::move(result.GetError()));
}

DescribeAccessOutcome TransferClient::DescribeAccess(const DescribeAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAccessOutcome(result.GetResultWithOwnership()) : DescribeAccessOutcome(std::move(result.GetError()));
}

DescribeAgreementOutcome TransferClient::DescribeAgreement(const DescribeAgreementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAgreementOutcome(result.GetResultWithOwnership())
                            : DescribeAgreementOutcome(std::move(result.GetError()));
}

DescribeCertificateOutcome TransferClient::DescribeCertificate(const DescribeCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCertificateOutcome(result.GetResultWithOwnership())
                            : DescribeCertificateOutcome(std::move(result.GetError()));
}

DescribeConnectorOutcome TransferClient::DescribeConnector(const DescribeConnectorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConnectorOutcome(result.GetResultWithOwnership())
                            : DescribeConnectorOutcome(std::move(result.GetError()));
}

DescribeExecutionOutcome TransferClient::DescribeExecution(const DescribeExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeExecutionOutcome(result.GetResultWithOwnership())
                            : DescribeExecutionOutcome(std::move(result.GetError()));
}

DescribeHostKeyOutcome TransferClient::DescribeHostKey(const DescribeHostKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeHostKeyOutcome(result.GetResultWithOwnership())
                            : DescribeHostKeyOutcome(std::move(result.GetError()));
}

DescribeProfileOutcome TransferClient::DescribeProfile(const DescribeProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeProfileOutcome(result.GetResultWithOwnership())
                            : DescribeProfileOutcome(std::move(result.GetError()));
}

DescribeSecurityPolicyOutcome TransferClient::DescribeSecurityPolicy(const DescribeSecurityPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSecurityPolicyOutcome(result.GetResultWithOwnership())
                            : DescribeSecurityPolicyOutcome(std::move(result.GetError()));
}

DescribeServerOutcome TransferClient::DescribeServer(const DescribeServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeServerOutcome(result.GetResultWithOwnership()) : DescribeServerOutcome(std::move(result.GetError()));
}

DescribeUserOutcome TransferClient::DescribeUser(const DescribeUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeUserOutcome(result.GetResultWithOwnership()) : DescribeUserOutcome(std::move(result.GetError()));
}

DescribeWebAppOutcome TransferClient::DescribeWebApp(const DescribeWebAppRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeWebAppOutcome(result.GetResultWithOwnership()) : DescribeWebAppOutcome(std::move(result.GetError()));
}

DescribeWebAppCustomizationOutcome TransferClient::DescribeWebAppCustomization(const DescribeWebAppCustomizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeWebAppCustomizationOutcome(result.GetResultWithOwnership())
                            : DescribeWebAppCustomizationOutcome(std::move(result.GetError()));
}

DescribeWorkflowOutcome TransferClient::DescribeWorkflow(const DescribeWorkflowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeWorkflowOutcome(result.GetResultWithOwnership())
                            : DescribeWorkflowOutcome(std::move(result.GetError()));
}

ImportCertificateOutcome TransferClient::ImportCertificate(const ImportCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportCertificateOutcome(result.GetResultWithOwnership())
                            : ImportCertificateOutcome(std::move(result.GetError()));
}

ImportHostKeyOutcome TransferClient::ImportHostKey(const ImportHostKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportHostKeyOutcome(result.GetResultWithOwnership()) : ImportHostKeyOutcome(std::move(result.GetError()));
}

ImportSshPublicKeyOutcome TransferClient::ImportSshPublicKey(const ImportSshPublicKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportSshPublicKeyOutcome(result.GetResultWithOwnership())
                            : ImportSshPublicKeyOutcome(std::move(result.GetError()));
}

ListAccessesOutcome TransferClient::ListAccesses(const ListAccessesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAccessesOutcome(result.GetResultWithOwnership()) : ListAccessesOutcome(std::move(result.GetError()));
}

ListAgreementsOutcome TransferClient::ListAgreements(const ListAgreementsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAgreementsOutcome(result.GetResultWithOwnership()) : ListAgreementsOutcome(std::move(result.GetError()));
}

ListCertificatesOutcome TransferClient::ListCertificates(const ListCertificatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCertificatesOutcome(result.GetResultWithOwnership())
                            : ListCertificatesOutcome(std::move(result.GetError()));
}

ListConnectorsOutcome TransferClient::ListConnectors(const ListConnectorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListConnectorsOutcome(result.GetResultWithOwnership()) : ListConnectorsOutcome(std::move(result.GetError()));
}

ListExecutionsOutcome TransferClient::ListExecutions(const ListExecutionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListExecutionsOutcome(result.GetResultWithOwnership()) : ListExecutionsOutcome(std::move(result.GetError()));
}

ListFileTransferResultsOutcome TransferClient::ListFileTransferResults(const ListFileTransferResultsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFileTransferResultsOutcome(result.GetResultWithOwnership())
                            : ListFileTransferResultsOutcome(std::move(result.GetError()));
}

ListHostKeysOutcome TransferClient::ListHostKeys(const ListHostKeysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListHostKeysOutcome(result.GetResultWithOwnership()) : ListHostKeysOutcome(std::move(result.GetError()));
}

ListProfilesOutcome TransferClient::ListProfiles(const ListProfilesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListProfilesOutcome(result.GetResultWithOwnership()) : ListProfilesOutcome(std::move(result.GetError()));
}

ListSecurityPoliciesOutcome TransferClient::ListSecurityPolicies(const ListSecurityPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSecurityPoliciesOutcome(result.GetResultWithOwnership())
                            : ListSecurityPoliciesOutcome(std::move(result.GetError()));
}

ListServersOutcome TransferClient::ListServers(const ListServersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListServersOutcome(result.GetResultWithOwnership()) : ListServersOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome TransferClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListUsersOutcome TransferClient::ListUsers(const ListUsersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUsersOutcome(result.GetResultWithOwnership()) : ListUsersOutcome(std::move(result.GetError()));
}

ListWebAppsOutcome TransferClient::ListWebApps(const ListWebAppsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWebAppsOutcome(result.GetResultWithOwnership()) : ListWebAppsOutcome(std::move(result.GetError()));
}

ListWorkflowsOutcome TransferClient::ListWorkflows(const ListWorkflowsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWorkflowsOutcome(result.GetResultWithOwnership()) : ListWorkflowsOutcome(std::move(result.GetError()));
}

SendWorkflowStepStateOutcome TransferClient::SendWorkflowStepState(const SendWorkflowStepStateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendWorkflowStepStateOutcome(result.GetResultWithOwnership())
                            : SendWorkflowStepStateOutcome(std::move(result.GetError()));
}

StartDirectoryListingOutcome TransferClient::StartDirectoryListing(const StartDirectoryListingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartDirectoryListingOutcome(result.GetResultWithOwnership())
                            : StartDirectoryListingOutcome(std::move(result.GetError()));
}

StartFileTransferOutcome TransferClient::StartFileTransfer(const StartFileTransferRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartFileTransferOutcome(result.GetResultWithOwnership())
                            : StartFileTransferOutcome(std::move(result.GetError()));
}

StartRemoteDeleteOutcome TransferClient::StartRemoteDelete(const StartRemoteDeleteRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartRemoteDeleteOutcome(result.GetResultWithOwnership())
                            : StartRemoteDeleteOutcome(std::move(result.GetError()));
}

StartRemoteMoveOutcome TransferClient::StartRemoteMove(const StartRemoteMoveRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartRemoteMoveOutcome(result.GetResultWithOwnership())
                            : StartRemoteMoveOutcome(std::move(result.GetError()));
}

StartServerOutcome TransferClient::StartServer(const StartServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartServerOutcome(result.GetResultWithOwnership()) : StartServerOutcome(std::move(result.GetError()));
}

StopServerOutcome TransferClient::StopServer(const StopServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopServerOutcome(result.GetResultWithOwnership()) : StopServerOutcome(std::move(result.GetError()));
}

TagResourceOutcome TransferClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

TestConnectionOutcome TransferClient::TestConnection(const TestConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestConnectionOutcome(result.GetResultWithOwnership()) : TestConnectionOutcome(std::move(result.GetError()));
}

TestIdentityProviderOutcome TransferClient::TestIdentityProvider(const TestIdentityProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestIdentityProviderOutcome(result.GetResultWithOwnership())
                            : TestIdentityProviderOutcome(std::move(result.GetError()));
}

UntagResourceOutcome TransferClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAccessOutcome TransferClient::UpdateAccess(const UpdateAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAccessOutcome(result.GetResultWithOwnership()) : UpdateAccessOutcome(std::move(result.GetError()));
}

UpdateAgreementOutcome TransferClient::UpdateAgreement(const UpdateAgreementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAgreementOutcome(result.GetResultWithOwnership())
                            : UpdateAgreementOutcome(std::move(result.GetError()));
}

UpdateCertificateOutcome TransferClient::UpdateCertificate(const UpdateCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCertificateOutcome(result.GetResultWithOwnership())
                            : UpdateCertificateOutcome(std::move(result.GetError()));
}

UpdateConnectorOutcome TransferClient::UpdateConnector(const UpdateConnectorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateConnectorOutcome(result.GetResultWithOwnership())
                            : UpdateConnectorOutcome(std::move(result.GetError()));
}

UpdateHostKeyOutcome TransferClient::UpdateHostKey(const UpdateHostKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateHostKeyOutcome(result.GetResultWithOwnership()) : UpdateHostKeyOutcome(std::move(result.GetError()));
}

UpdateProfileOutcome TransferClient::UpdateProfile(const UpdateProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateProfileOutcome(result.GetResultWithOwnership()) : UpdateProfileOutcome(std::move(result.GetError()));
}

UpdateServerOutcome TransferClient::UpdateServer(const UpdateServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateServerOutcome(result.GetResultWithOwnership()) : UpdateServerOutcome(std::move(result.GetError()));
}

UpdateUserOutcome TransferClient::UpdateUser(const UpdateUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateUserOutcome(result.GetResultWithOwnership()) : UpdateUserOutcome(std::move(result.GetError()));
}

UpdateWebAppOutcome TransferClient::UpdateWebApp(const UpdateWebAppRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWebAppOutcome(result.GetResultWithOwnership()) : UpdateWebAppOutcome(std::move(result.GetError()));
}

UpdateWebAppCustomizationOutcome TransferClient::UpdateWebAppCustomization(const UpdateWebAppCustomizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWebAppCustomizationOutcome(result.GetResultWithOwnership())
                            : UpdateWebAppCustomizationOutcome(std::move(result.GetError()));
}
