/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/CloudSearchClient.h>
#include <aws/cloudsearch/CloudSearchEndpointProvider.h>
#include <aws/cloudsearch/CloudSearchErrorMarshaller.h>
#include <aws/cloudsearch/model/BuildSuggestersRequest.h>
#include <aws/cloudsearch/model/CreateDomainRequest.h>
#include <aws/cloudsearch/model/DefineAnalysisSchemeRequest.h>
#include <aws/cloudsearch/model/DefineExpressionRequest.h>
#include <aws/cloudsearch/model/DefineIndexFieldRequest.h>
#include <aws/cloudsearch/model/DefineSuggesterRequest.h>
#include <aws/cloudsearch/model/DeleteAnalysisSchemeRequest.h>
#include <aws/cloudsearch/model/DeleteDomainRequest.h>
#include <aws/cloudsearch/model/DeleteExpressionRequest.h>
#include <aws/cloudsearch/model/DeleteIndexFieldRequest.h>
#include <aws/cloudsearch/model/DeleteSuggesterRequest.h>
#include <aws/cloudsearch/model/DescribeAnalysisSchemesRequest.h>
#include <aws/cloudsearch/model/DescribeAvailabilityOptionsRequest.h>
#include <aws/cloudsearch/model/DescribeDomainEndpointOptionsRequest.h>
#include <aws/cloudsearch/model/DescribeDomainsRequest.h>
#include <aws/cloudsearch/model/DescribeExpressionsRequest.h>
#include <aws/cloudsearch/model/DescribeIndexFieldsRequest.h>
#include <aws/cloudsearch/model/DescribeScalingParametersRequest.h>
#include <aws/cloudsearch/model/DescribeServiceAccessPoliciesRequest.h>
#include <aws/cloudsearch/model/DescribeSuggestersRequest.h>
#include <aws/cloudsearch/model/IndexDocumentsRequest.h>
#include <aws/cloudsearch/model/ListDomainNamesRequest.h>
#include <aws/cloudsearch/model/UpdateAvailabilityOptionsRequest.h>
#include <aws/cloudsearch/model/UpdateDomainEndpointOptionsRequest.h>
#include <aws/cloudsearch/model/UpdateScalingParametersRequest.h>
#include <aws/cloudsearch/model/UpdateServiceAccessPoliciesRequest.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudSearch;
using namespace Aws::CloudSearch::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CloudSearch {
const char SERVICE_NAME[] = "cloudsearch";
const char ALLOCATION_TAG[] = "CloudSearchClient";
}  // namespace CloudSearch
}  // namespace Aws
const char* CloudSearchClient::GetServiceName() { return SERVICE_NAME; }
const char* CloudSearchClient::GetAllocationTag() { return ALLOCATION_TAG; }

CloudSearchClient::CloudSearchClient(const CloudSearch::CloudSearchClientConfiguration& clientConfiguration,
                                     std::shared_ptr<CloudSearchEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudSearchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudSearchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudSearchClient::CloudSearchClient(const AWSCredentials& credentials, std::shared_ptr<CloudSearchEndpointProviderBase> endpointProvider,
                                     const CloudSearch::CloudSearchClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudSearchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudSearchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudSearchClient::CloudSearchClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<CloudSearchEndpointProviderBase> endpointProvider,
                                     const CloudSearch::CloudSearchClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudSearchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudSearchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CloudSearchClient::CloudSearchClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudSearchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudSearchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudSearchClient::CloudSearchClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudSearchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudSearchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudSearchClient::CloudSearchClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudSearchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudSearchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CloudSearchClient::~CloudSearchClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CloudSearchEndpointProviderBase>& CloudSearchClient::accessEndpointProvider() { return m_endpointProvider; }

void CloudSearchClient::init(const CloudSearch::CloudSearchClientConfiguration& config) {
  AWSClient::SetServiceClientName("CloudSearch");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "cloudsearch");
}

void CloudSearchClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String CloudSearchClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert,
                                                            const char* region) const {
  if (!m_endpointProvider) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return "";
  }
  Aws::Endpoint::EndpointParameters endpointParameters;
  endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", Aws::String(region)));
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
  if (!endpointResolutionOutcome.IsSuccess()) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Endpoint resolution failed: " << endpointResolutionOutcome.GetError().GetMessage());
    return "";
  }
  Aws::StringStream ss;
  ss << "?" << requestToConvert.SerializePayload();
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());

  return GeneratePresignedUrl(endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

CloudSearchClient::InvokeOperationOutcome CloudSearchClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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
BuildSuggestersOutcome CloudSearchClient::BuildSuggesters(const BuildSuggestersRequest& request) const {
  return BuildSuggestersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDomainOutcome CloudSearchClient::CreateDomain(const CreateDomainRequest& request) const {
  return CreateDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DefineAnalysisSchemeOutcome CloudSearchClient::DefineAnalysisScheme(const DefineAnalysisSchemeRequest& request) const {
  return DefineAnalysisSchemeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DefineExpressionOutcome CloudSearchClient::DefineExpression(const DefineExpressionRequest& request) const {
  return DefineExpressionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DefineIndexFieldOutcome CloudSearchClient::DefineIndexField(const DefineIndexFieldRequest& request) const {
  return DefineIndexFieldOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DefineSuggesterOutcome CloudSearchClient::DefineSuggester(const DefineSuggesterRequest& request) const {
  return DefineSuggesterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAnalysisSchemeOutcome CloudSearchClient::DeleteAnalysisScheme(const DeleteAnalysisSchemeRequest& request) const {
  return DeleteAnalysisSchemeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDomainOutcome CloudSearchClient::DeleteDomain(const DeleteDomainRequest& request) const {
  return DeleteDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteExpressionOutcome CloudSearchClient::DeleteExpression(const DeleteExpressionRequest& request) const {
  return DeleteExpressionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIndexFieldOutcome CloudSearchClient::DeleteIndexField(const DeleteIndexFieldRequest& request) const {
  return DeleteIndexFieldOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSuggesterOutcome CloudSearchClient::DeleteSuggester(const DeleteSuggesterRequest& request) const {
  return DeleteSuggesterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAnalysisSchemesOutcome CloudSearchClient::DescribeAnalysisSchemes(const DescribeAnalysisSchemesRequest& request) const {
  return DescribeAnalysisSchemesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAvailabilityOptionsOutcome CloudSearchClient::DescribeAvailabilityOptions(const DescribeAvailabilityOptionsRequest& request) const {
  return DescribeAvailabilityOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDomainEndpointOptionsOutcome CloudSearchClient::DescribeDomainEndpointOptions(
    const DescribeDomainEndpointOptionsRequest& request) const {
  return DescribeDomainEndpointOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDomainsOutcome CloudSearchClient::DescribeDomains(const DescribeDomainsRequest& request) const {
  return DescribeDomainsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeExpressionsOutcome CloudSearchClient::DescribeExpressions(const DescribeExpressionsRequest& request) const {
  return DescribeExpressionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIndexFieldsOutcome CloudSearchClient::DescribeIndexFields(const DescribeIndexFieldsRequest& request) const {
  return DescribeIndexFieldsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeScalingParametersOutcome CloudSearchClient::DescribeScalingParameters(const DescribeScalingParametersRequest& request) const {
  return DescribeScalingParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeServiceAccessPoliciesOutcome CloudSearchClient::DescribeServiceAccessPolicies(
    const DescribeServiceAccessPoliciesRequest& request) const {
  return DescribeServiceAccessPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSuggestersOutcome CloudSearchClient::DescribeSuggesters(const DescribeSuggestersRequest& request) const {
  return DescribeSuggestersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

IndexDocumentsOutcome CloudSearchClient::IndexDocuments(const IndexDocumentsRequest& request) const {
  return IndexDocumentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDomainNamesOutcome CloudSearchClient::ListDomainNames(const ListDomainNamesRequest& request) const {
  return ListDomainNamesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAvailabilityOptionsOutcome CloudSearchClient::UpdateAvailabilityOptions(const UpdateAvailabilityOptionsRequest& request) const {
  return UpdateAvailabilityOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDomainEndpointOptionsOutcome CloudSearchClient::UpdateDomainEndpointOptions(const UpdateDomainEndpointOptionsRequest& request) const {
  return UpdateDomainEndpointOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateScalingParametersOutcome CloudSearchClient::UpdateScalingParameters(const UpdateScalingParametersRequest& request) const {
  return UpdateScalingParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateServiceAccessPoliciesOutcome CloudSearchClient::UpdateServiceAccessPolicies(const UpdateServiceAccessPoliciesRequest& request) const {
  return UpdateServiceAccessPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
