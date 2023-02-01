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
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/cloudsearch/CloudSearchClient.h>
#include <aws/cloudsearch/CloudSearchErrorMarshaller.h>
#include <aws/cloudsearch/CloudSearchEndpointProvider.h>
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

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudSearch;
using namespace Aws::CloudSearch::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


const char* CloudSearchClient::SERVICE_NAME = "cloudsearch";
const char* CloudSearchClient::ALLOCATION_TAG = "CloudSearchClient";

CloudSearchClient::CloudSearchClient(const CloudSearch::CloudSearchClientConfiguration& clientConfiguration,
                                     std::shared_ptr<CloudSearchEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudSearchErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CloudSearchClient::CloudSearchClient(const AWSCredentials& credentials,
                                     std::shared_ptr<CloudSearchEndpointProviderBase> endpointProvider,
                                     const CloudSearch::CloudSearchClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudSearchErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CloudSearchClient::CloudSearchClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<CloudSearchEndpointProviderBase> endpointProvider,
                                     const CloudSearch::CloudSearchClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudSearchErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CloudSearchClient::CloudSearchClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudSearchErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CloudSearchEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CloudSearchClient::CloudSearchClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudSearchErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CloudSearchEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CloudSearchClient::CloudSearchClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudSearchErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CloudSearchEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CloudSearchClient::~CloudSearchClient()
{
}

std::shared_ptr<CloudSearchEndpointProviderBase>& CloudSearchClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CloudSearchClient::init(const CloudSearch::CloudSearchClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CloudSearch");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CloudSearchClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String CloudSearchClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  if (!m_endpointProvider)
  {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return "";
  }
  Aws::Endpoint::EndpointParameters endpointParameters;
  endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", Aws::String(region)));
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
  if (!endpointResolutionOutcome.IsSuccess())
  {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Endpoint resolution failed: " << endpointResolutionOutcome.GetError().GetMessage());
    return "";
  }
  Aws::StringStream ss;
  ss << "?" << requestToConvert.SerializePayload();
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());

  return GeneratePresignedUrl(endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

BuildSuggestersOutcome CloudSearchClient::BuildSuggesters(const BuildSuggestersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BuildSuggesters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BuildSuggesters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BuildSuggestersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateDomainOutcome CloudSearchClient::CreateDomain(const CreateDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DefineAnalysisSchemeOutcome CloudSearchClient::DefineAnalysisScheme(const DefineAnalysisSchemeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DefineAnalysisScheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DefineAnalysisScheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DefineAnalysisSchemeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DefineExpressionOutcome CloudSearchClient::DefineExpression(const DefineExpressionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DefineExpression, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DefineExpression, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DefineExpressionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DefineIndexFieldOutcome CloudSearchClient::DefineIndexField(const DefineIndexFieldRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DefineIndexField, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DefineIndexField, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DefineIndexFieldOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DefineSuggesterOutcome CloudSearchClient::DefineSuggester(const DefineSuggesterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DefineSuggester, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DefineSuggester, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DefineSuggesterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteAnalysisSchemeOutcome CloudSearchClient::DeleteAnalysisScheme(const DeleteAnalysisSchemeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAnalysisScheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAnalysisScheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAnalysisSchemeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDomainOutcome CloudSearchClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteExpressionOutcome CloudSearchClient::DeleteExpression(const DeleteExpressionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteExpression, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteExpression, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteExpressionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteIndexFieldOutcome CloudSearchClient::DeleteIndexField(const DeleteIndexFieldRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIndexField, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIndexField, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteIndexFieldOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSuggesterOutcome CloudSearchClient::DeleteSuggester(const DeleteSuggesterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSuggester, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSuggester, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSuggesterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAnalysisSchemesOutcome CloudSearchClient::DescribeAnalysisSchemes(const DescribeAnalysisSchemesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAnalysisSchemes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAnalysisSchemes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAnalysisSchemesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAvailabilityOptionsOutcome CloudSearchClient::DescribeAvailabilityOptions(const DescribeAvailabilityOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAvailabilityOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAvailabilityOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAvailabilityOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDomainEndpointOptionsOutcome CloudSearchClient::DescribeDomainEndpointOptions(const DescribeDomainEndpointOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDomainEndpointOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDomainEndpointOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDomainEndpointOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDomainsOutcome CloudSearchClient::DescribeDomains(const DescribeDomainsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDomainsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeExpressionsOutcome CloudSearchClient::DescribeExpressions(const DescribeExpressionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeExpressions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeExpressions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeExpressionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeIndexFieldsOutcome CloudSearchClient::DescribeIndexFields(const DescribeIndexFieldsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIndexFields, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIndexFields, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIndexFieldsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeScalingParametersOutcome CloudSearchClient::DescribeScalingParameters(const DescribeScalingParametersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeScalingParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeScalingParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeScalingParametersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeServiceAccessPoliciesOutcome CloudSearchClient::DescribeServiceAccessPolicies(const DescribeServiceAccessPoliciesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeServiceAccessPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeServiceAccessPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeServiceAccessPoliciesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSuggestersOutcome CloudSearchClient::DescribeSuggesters(const DescribeSuggestersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSuggesters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSuggesters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSuggestersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

IndexDocumentsOutcome CloudSearchClient::IndexDocuments(const IndexDocumentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, IndexDocuments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, IndexDocuments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return IndexDocumentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListDomainNamesOutcome CloudSearchClient::ListDomainNames(const ListDomainNamesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomainNames, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDomainNames, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDomainNamesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateAvailabilityOptionsOutcome CloudSearchClient::UpdateAvailabilityOptions(const UpdateAvailabilityOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAvailabilityOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAvailabilityOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateAvailabilityOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateDomainEndpointOptionsOutcome CloudSearchClient::UpdateDomainEndpointOptions(const UpdateDomainEndpointOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDomainEndpointOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDomainEndpointOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDomainEndpointOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateScalingParametersOutcome CloudSearchClient::UpdateScalingParameters(const UpdateScalingParametersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateScalingParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateScalingParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateScalingParametersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateServiceAccessPoliciesOutcome CloudSearchClient::UpdateServiceAccessPolicies(const UpdateServiceAccessPoliciesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateServiceAccessPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateServiceAccessPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateServiceAccessPoliciesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

