/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/ACMPCAClient.h>
#include <aws/acm-pca/ACMPCAEndpointProvider.h>
#include <aws/acm-pca/ACMPCAErrorMarshaller.h>
#include <aws/acm-pca/model/CreateCertificateAuthorityAuditReportRequest.h>
#include <aws/acm-pca/model/CreateCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/CreatePermissionRequest.h>
#include <aws/acm-pca/model/DeleteCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/DeletePermissionRequest.h>
#include <aws/acm-pca/model/DeletePolicyRequest.h>
#include <aws/acm-pca/model/DescribeCertificateAuthorityAuditReportRequest.h>
#include <aws/acm-pca/model/DescribeCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/GetCertificateAuthorityCertificateRequest.h>
#include <aws/acm-pca/model/GetCertificateAuthorityCsrRequest.h>
#include <aws/acm-pca/model/GetCertificateRequest.h>
#include <aws/acm-pca/model/GetPolicyRequest.h>
#include <aws/acm-pca/model/ImportCertificateAuthorityCertificateRequest.h>
#include <aws/acm-pca/model/IssueCertificateRequest.h>
#include <aws/acm-pca/model/ListCertificateAuthoritiesRequest.h>
#include <aws/acm-pca/model/ListPermissionsRequest.h>
#include <aws/acm-pca/model/ListTagsRequest.h>
#include <aws/acm-pca/model/PutPolicyRequest.h>
#include <aws/acm-pca/model/RestoreCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/RevokeCertificateRequest.h>
#include <aws/acm-pca/model/TagCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/UntagCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/UpdateCertificateAuthorityRequest.h>
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
using namespace Aws::ACMPCA;
using namespace Aws::ACMPCA::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ACMPCA {
const char SERVICE_NAME[] = "acm-pca";
const char ALLOCATION_TAG[] = "ACMPCAClient";
}  // namespace ACMPCA
}  // namespace Aws
const char* ACMPCAClient::GetServiceName() { return SERVICE_NAME; }
const char* ACMPCAClient::GetAllocationTag() { return ALLOCATION_TAG; }

ACMPCAClient::ACMPCAClient(const ACMPCA::ACMPCAClientConfiguration& clientConfiguration,
                           std::shared_ptr<ACMPCAEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ACMPCAErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ACMPCAEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ACMPCAClient::ACMPCAClient(const AWSCredentials& credentials, std::shared_ptr<ACMPCAEndpointProviderBase> endpointProvider,
                           const ACMPCA::ACMPCAClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ACMPCAErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ACMPCAEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ACMPCAClient::ACMPCAClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<ACMPCAEndpointProviderBase> endpointProvider,
                           const ACMPCA::ACMPCAClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ACMPCAErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ACMPCAEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ACMPCAClient::ACMPCAClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ACMPCAErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ACMPCAEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ACMPCAClient::ACMPCAClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ACMPCAErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ACMPCAEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ACMPCAClient::ACMPCAClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ACMPCAErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ACMPCAEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ACMPCAClient::~ACMPCAClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ACMPCAEndpointProviderBase>& ACMPCAClient::accessEndpointProvider() { return m_endpointProvider; }

void ACMPCAClient::init(const ACMPCA::ACMPCAClientConfiguration& config) {
  AWSClient::SetServiceClientName("ACM PCA");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "acm-pca");
}

void ACMPCAClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ACMPCAClient::InvokeOperationOutcome ACMPCAClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateCertificateAuthorityOutcome ACMPCAClient::CreateCertificateAuthority(const CreateCertificateAuthorityRequest& request) const {
  return CreateCertificateAuthorityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCertificateAuthorityAuditReportOutcome ACMPCAClient::CreateCertificateAuthorityAuditReport(
    const CreateCertificateAuthorityAuditReportRequest& request) const {
  return CreateCertificateAuthorityAuditReportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePermissionOutcome ACMPCAClient::CreatePermission(const CreatePermissionRequest& request) const {
  return CreatePermissionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCertificateAuthorityOutcome ACMPCAClient::DeleteCertificateAuthority(const DeleteCertificateAuthorityRequest& request) const {
  return DeleteCertificateAuthorityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePermissionOutcome ACMPCAClient::DeletePermission(const DeletePermissionRequest& request) const {
  return DeletePermissionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePolicyOutcome ACMPCAClient::DeletePolicy(const DeletePolicyRequest& request) const {
  return DeletePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCertificateAuthorityOutcome ACMPCAClient::DescribeCertificateAuthority(const DescribeCertificateAuthorityRequest& request) const {
  return DescribeCertificateAuthorityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCertificateAuthorityAuditReportOutcome ACMPCAClient::DescribeCertificateAuthorityAuditReport(
    const DescribeCertificateAuthorityAuditReportRequest& request) const {
  return DescribeCertificateAuthorityAuditReportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCertificateOutcome ACMPCAClient::GetCertificate(const GetCertificateRequest& request) const {
  return GetCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCertificateAuthorityCertificateOutcome ACMPCAClient::GetCertificateAuthorityCertificate(
    const GetCertificateAuthorityCertificateRequest& request) const {
  return GetCertificateAuthorityCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCertificateAuthorityCsrOutcome ACMPCAClient::GetCertificateAuthorityCsr(const GetCertificateAuthorityCsrRequest& request) const {
  return GetCertificateAuthorityCsrOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPolicyOutcome ACMPCAClient::GetPolicy(const GetPolicyRequest& request) const {
  return GetPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportCertificateAuthorityCertificateOutcome ACMPCAClient::ImportCertificateAuthorityCertificate(
    const ImportCertificateAuthorityCertificateRequest& request) const {
  return ImportCertificateAuthorityCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

IssueCertificateOutcome ACMPCAClient::IssueCertificate(const IssueCertificateRequest& request) const {
  return IssueCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCertificateAuthoritiesOutcome ACMPCAClient::ListCertificateAuthorities(const ListCertificateAuthoritiesRequest& request) const {
  return ListCertificateAuthoritiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPermissionsOutcome ACMPCAClient::ListPermissions(const ListPermissionsRequest& request) const {
  return ListPermissionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsOutcome ACMPCAClient::ListTags(const ListTagsRequest& request) const {
  return ListTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutPolicyOutcome ACMPCAClient::PutPolicy(const PutPolicyRequest& request) const {
  return PutPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreCertificateAuthorityOutcome ACMPCAClient::RestoreCertificateAuthority(const RestoreCertificateAuthorityRequest& request) const {
  return RestoreCertificateAuthorityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RevokeCertificateOutcome ACMPCAClient::RevokeCertificate(const RevokeCertificateRequest& request) const {
  return RevokeCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagCertificateAuthorityOutcome ACMPCAClient::TagCertificateAuthority(const TagCertificateAuthorityRequest& request) const {
  return TagCertificateAuthorityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagCertificateAuthorityOutcome ACMPCAClient::UntagCertificateAuthority(const UntagCertificateAuthorityRequest& request) const {
  return UntagCertificateAuthorityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCertificateAuthorityOutcome ACMPCAClient::UpdateCertificateAuthority(const UpdateCertificateAuthorityRequest& request) const {
  return UpdateCertificateAuthorityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
