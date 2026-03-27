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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BuildSuggestersOutcome(result.GetResultWithOwnership())
                            : BuildSuggestersOutcome(std::move(result.GetError()));
}

CreateDomainOutcome CloudSearchClient::CreateDomain(const CreateDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDomainOutcome(result.GetResultWithOwnership()) : CreateDomainOutcome(std::move(result.GetError()));
}

DefineAnalysisSchemeOutcome CloudSearchClient::DefineAnalysisScheme(const DefineAnalysisSchemeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DefineAnalysisSchemeOutcome(result.GetResultWithOwnership())
                            : DefineAnalysisSchemeOutcome(std::move(result.GetError()));
}

DefineExpressionOutcome CloudSearchClient::DefineExpression(const DefineExpressionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DefineExpressionOutcome(result.GetResultWithOwnership())
                            : DefineExpressionOutcome(std::move(result.GetError()));
}

DefineIndexFieldOutcome CloudSearchClient::DefineIndexField(const DefineIndexFieldRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DefineIndexFieldOutcome(result.GetResultWithOwnership())
                            : DefineIndexFieldOutcome(std::move(result.GetError()));
}

DefineSuggesterOutcome CloudSearchClient::DefineSuggester(const DefineSuggesterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DefineSuggesterOutcome(result.GetResultWithOwnership())
                            : DefineSuggesterOutcome(std::move(result.GetError()));
}

DeleteAnalysisSchemeOutcome CloudSearchClient::DeleteAnalysisScheme(const DeleteAnalysisSchemeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAnalysisSchemeOutcome(result.GetResultWithOwnership())
                            : DeleteAnalysisSchemeOutcome(std::move(result.GetError()));
}

DeleteDomainOutcome CloudSearchClient::DeleteDomain(const DeleteDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDomainOutcome(result.GetResultWithOwnership()) : DeleteDomainOutcome(std::move(result.GetError()));
}

DeleteExpressionOutcome CloudSearchClient::DeleteExpression(const DeleteExpressionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteExpressionOutcome(result.GetResultWithOwnership())
                            : DeleteExpressionOutcome(std::move(result.GetError()));
}

DeleteIndexFieldOutcome CloudSearchClient::DeleteIndexField(const DeleteIndexFieldRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIndexFieldOutcome(result.GetResultWithOwnership())
                            : DeleteIndexFieldOutcome(std::move(result.GetError()));
}

DeleteSuggesterOutcome CloudSearchClient::DeleteSuggester(const DeleteSuggesterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSuggesterOutcome(result.GetResultWithOwnership())
                            : DeleteSuggesterOutcome(std::move(result.GetError()));
}

DescribeAnalysisSchemesOutcome CloudSearchClient::DescribeAnalysisSchemes(const DescribeAnalysisSchemesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAnalysisSchemesOutcome(result.GetResultWithOwnership())
                            : DescribeAnalysisSchemesOutcome(std::move(result.GetError()));
}

DescribeAvailabilityOptionsOutcome CloudSearchClient::DescribeAvailabilityOptions(const DescribeAvailabilityOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAvailabilityOptionsOutcome(result.GetResultWithOwnership())
                            : DescribeAvailabilityOptionsOutcome(std::move(result.GetError()));
}

DescribeDomainEndpointOptionsOutcome CloudSearchClient::DescribeDomainEndpointOptions(
    const DescribeDomainEndpointOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDomainEndpointOptionsOutcome(result.GetResultWithOwnership())
                            : DescribeDomainEndpointOptionsOutcome(std::move(result.GetError()));
}

DescribeDomainsOutcome CloudSearchClient::DescribeDomains(const DescribeDomainsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDomainsOutcome(result.GetResultWithOwnership())
                            : DescribeDomainsOutcome(std::move(result.GetError()));
}

DescribeExpressionsOutcome CloudSearchClient::DescribeExpressions(const DescribeExpressionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeExpressionsOutcome(result.GetResultWithOwnership())
                            : DescribeExpressionsOutcome(std::move(result.GetError()));
}

DescribeIndexFieldsOutcome CloudSearchClient::DescribeIndexFields(const DescribeIndexFieldsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIndexFieldsOutcome(result.GetResultWithOwnership())
                            : DescribeIndexFieldsOutcome(std::move(result.GetError()));
}

DescribeScalingParametersOutcome CloudSearchClient::DescribeScalingParameters(const DescribeScalingParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeScalingParametersOutcome(result.GetResultWithOwnership())
                            : DescribeScalingParametersOutcome(std::move(result.GetError()));
}

DescribeServiceAccessPoliciesOutcome CloudSearchClient::DescribeServiceAccessPolicies(
    const DescribeServiceAccessPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeServiceAccessPoliciesOutcome(result.GetResultWithOwnership())
                            : DescribeServiceAccessPoliciesOutcome(std::move(result.GetError()));
}

DescribeSuggestersOutcome CloudSearchClient::DescribeSuggesters(const DescribeSuggestersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSuggestersOutcome(result.GetResultWithOwnership())
                            : DescribeSuggestersOutcome(std::move(result.GetError()));
}

IndexDocumentsOutcome CloudSearchClient::IndexDocuments(const IndexDocumentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? IndexDocumentsOutcome(result.GetResultWithOwnership()) : IndexDocumentsOutcome(std::move(result.GetError()));
}

ListDomainNamesOutcome CloudSearchClient::ListDomainNames(const ListDomainNamesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDomainNamesOutcome(result.GetResultWithOwnership())
                            : ListDomainNamesOutcome(std::move(result.GetError()));
}

UpdateAvailabilityOptionsOutcome CloudSearchClient::UpdateAvailabilityOptions(const UpdateAvailabilityOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAvailabilityOptionsOutcome(result.GetResultWithOwnership())
                            : UpdateAvailabilityOptionsOutcome(std::move(result.GetError()));
}

UpdateDomainEndpointOptionsOutcome CloudSearchClient::UpdateDomainEndpointOptions(const UpdateDomainEndpointOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDomainEndpointOptionsOutcome(result.GetResultWithOwnership())
                            : UpdateDomainEndpointOptionsOutcome(std::move(result.GetError()));
}

UpdateScalingParametersOutcome CloudSearchClient::UpdateScalingParameters(const UpdateScalingParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateScalingParametersOutcome(result.GetResultWithOwnership())
                            : UpdateScalingParametersOutcome(std::move(result.GetError()));
}

UpdateServiceAccessPoliciesOutcome CloudSearchClient::UpdateServiceAccessPolicies(const UpdateServiceAccessPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateServiceAccessPoliciesOutcome(result.GetResultWithOwnership())
                            : UpdateServiceAccessPoliciesOutcome(std::move(result.GetError()));
}
