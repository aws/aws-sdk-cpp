/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

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
#include <aws/invoicing/InvoicingClient.h>
#include <aws/invoicing/InvoicingEndpointProvider.h>
#include <aws/invoicing/InvoicingErrorMarshaller.h>
#include <aws/invoicing/model/BatchGetInvoiceProfileRequest.h>
#include <aws/invoicing/model/CreateInvoiceUnitRequest.h>
#include <aws/invoicing/model/CreateProcurementPortalPreferenceRequest.h>
#include <aws/invoicing/model/DeleteInvoiceUnitRequest.h>
#include <aws/invoicing/model/DeleteProcurementPortalPreferenceRequest.h>
#include <aws/invoicing/model/GetInvoicePDFRequest.h>
#include <aws/invoicing/model/GetInvoiceUnitRequest.h>
#include <aws/invoicing/model/GetProcurementPortalPreferenceRequest.h>
#include <aws/invoicing/model/ListInvoiceSummariesRequest.h>
#include <aws/invoicing/model/ListInvoiceUnitsRequest.h>
#include <aws/invoicing/model/ListProcurementPortalPreferencesRequest.h>
#include <aws/invoicing/model/ListTagsForResourceRequest.h>
#include <aws/invoicing/model/PutProcurementPortalPreferenceRequest.h>
#include <aws/invoicing/model/TagResourceRequest.h>
#include <aws/invoicing/model/UntagResourceRequest.h>
#include <aws/invoicing/model/UpdateInvoiceUnitRequest.h>
#include <aws/invoicing/model/UpdateProcurementPortalPreferenceStatusRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Invoicing;
using namespace Aws::Invoicing::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Invoicing {
const char SERVICE_NAME[] = "invoicing";
const char ALLOCATION_TAG[] = "InvoicingClient";
}  // namespace Invoicing
}  // namespace Aws
const char* InvoicingClient::GetServiceName() { return SERVICE_NAME; }
const char* InvoicingClient::GetAllocationTag() { return ALLOCATION_TAG; }

InvoicingClient::InvoicingClient(const Invoicing::InvoicingClientConfiguration& clientConfiguration,
                                 std::shared_ptr<InvoicingEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<InvoicingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<InvoicingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

InvoicingClient::InvoicingClient(const AWSCredentials& credentials, std::shared_ptr<InvoicingEndpointProviderBase> endpointProvider,
                                 const Invoicing::InvoicingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<InvoicingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<InvoicingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

InvoicingClient::InvoicingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<InvoicingEndpointProviderBase> endpointProvider,
                                 const Invoicing::InvoicingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<InvoicingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<InvoicingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
InvoicingClient::InvoicingClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<InvoicingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<InvoicingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

InvoicingClient::InvoicingClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<InvoicingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<InvoicingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

InvoicingClient::InvoicingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<InvoicingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<InvoicingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
InvoicingClient::~InvoicingClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<InvoicingEndpointProviderBase>& InvoicingClient::accessEndpointProvider() { return m_endpointProvider; }

void InvoicingClient::init(const Invoicing::InvoicingClientConfiguration& config) {
  AWSClient::SetServiceClientName("Invoicing");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "invoicing");
}

void InvoicingClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
InvoicingClient::InvokeOperationOutcome InvoicingClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

BatchGetInvoiceProfileOutcome InvoicingClient::BatchGetInvoiceProfile(const BatchGetInvoiceProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetInvoiceProfileOutcome(result.GetResultWithOwnership())
                            : BatchGetInvoiceProfileOutcome(std::move(result.GetError()));
}

CreateInvoiceUnitOutcome InvoicingClient::CreateInvoiceUnit(const CreateInvoiceUnitRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInvoiceUnitOutcome(result.GetResultWithOwnership())
                            : CreateInvoiceUnitOutcome(std::move(result.GetError()));
}

CreateProcurementPortalPreferenceOutcome InvoicingClient::CreateProcurementPortalPreference(
    const CreateProcurementPortalPreferenceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProcurementPortalPreferenceOutcome(result.GetResultWithOwnership())
                            : CreateProcurementPortalPreferenceOutcome(std::move(result.GetError()));
}

DeleteInvoiceUnitOutcome InvoicingClient::DeleteInvoiceUnit(const DeleteInvoiceUnitRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteInvoiceUnitOutcome(result.GetResultWithOwnership())
                            : DeleteInvoiceUnitOutcome(std::move(result.GetError()));
}

DeleteProcurementPortalPreferenceOutcome InvoicingClient::DeleteProcurementPortalPreference(
    const DeleteProcurementPortalPreferenceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteProcurementPortalPreferenceOutcome(result.GetResultWithOwnership())
                            : DeleteProcurementPortalPreferenceOutcome(std::move(result.GetError()));
}

GetInvoicePDFOutcome InvoicingClient::GetInvoicePDF(const GetInvoicePDFRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInvoicePDFOutcome(result.GetResultWithOwnership()) : GetInvoicePDFOutcome(std::move(result.GetError()));
}

GetInvoiceUnitOutcome InvoicingClient::GetInvoiceUnit(const GetInvoiceUnitRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInvoiceUnitOutcome(result.GetResultWithOwnership()) : GetInvoiceUnitOutcome(std::move(result.GetError()));
}

GetProcurementPortalPreferenceOutcome InvoicingClient::GetProcurementPortalPreference(
    const GetProcurementPortalPreferenceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetProcurementPortalPreferenceOutcome(result.GetResultWithOwnership())
                            : GetProcurementPortalPreferenceOutcome(std::move(result.GetError()));
}

ListInvoiceSummariesOutcome InvoicingClient::ListInvoiceSummaries(const ListInvoiceSummariesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListInvoiceSummariesOutcome(result.GetResultWithOwnership())
                            : ListInvoiceSummariesOutcome(std::move(result.GetError()));
}

ListInvoiceUnitsOutcome InvoicingClient::ListInvoiceUnits(const ListInvoiceUnitsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListInvoiceUnitsOutcome(result.GetResultWithOwnership())
                            : ListInvoiceUnitsOutcome(std::move(result.GetError()));
}

ListProcurementPortalPreferencesOutcome InvoicingClient::ListProcurementPortalPreferences(
    const ListProcurementPortalPreferencesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListProcurementPortalPreferencesOutcome(result.GetResultWithOwnership())
                            : ListProcurementPortalPreferencesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome InvoicingClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutProcurementPortalPreferenceOutcome InvoicingClient::PutProcurementPortalPreference(
    const PutProcurementPortalPreferenceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutProcurementPortalPreferenceOutcome(result.GetResultWithOwnership())
                            : PutProcurementPortalPreferenceOutcome(std::move(result.GetError()));
}

TagResourceOutcome InvoicingClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome InvoicingClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateInvoiceUnitOutcome InvoicingClient::UpdateInvoiceUnit(const UpdateInvoiceUnitRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateInvoiceUnitOutcome(result.GetResultWithOwnership())
                            : UpdateInvoiceUnitOutcome(std::move(result.GetError()));
}

UpdateProcurementPortalPreferenceStatusOutcome InvoicingClient::UpdateProcurementPortalPreferenceStatus(
    const UpdateProcurementPortalPreferenceStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateProcurementPortalPreferenceStatusOutcome(result.GetResultWithOwnership())
                            : UpdateProcurementPortalPreferenceStatusOutcome(std::move(result.GetError()));
}
