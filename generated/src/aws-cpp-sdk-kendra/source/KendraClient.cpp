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
#include <aws/kendra/KendraClient.h>
#include <aws/kendra/KendraEndpointProvider.h>
#include <aws/kendra/KendraErrorMarshaller.h>
#include <aws/kendra/model/AssociateEntitiesToExperienceRequest.h>
#include <aws/kendra/model/AssociatePersonasToEntitiesRequest.h>
#include <aws/kendra/model/BatchDeleteDocumentRequest.h>
#include <aws/kendra/model/BatchDeleteFeaturedResultsSetRequest.h>
#include <aws/kendra/model/BatchGetDocumentStatusRequest.h>
#include <aws/kendra/model/BatchPutDocumentRequest.h>
#include <aws/kendra/model/ClearQuerySuggestionsRequest.h>
#include <aws/kendra/model/CreateAccessControlConfigurationRequest.h>
#include <aws/kendra/model/CreateDataSourceRequest.h>
#include <aws/kendra/model/CreateExperienceRequest.h>
#include <aws/kendra/model/CreateFaqRequest.h>
#include <aws/kendra/model/CreateFeaturedResultsSetRequest.h>
#include <aws/kendra/model/CreateIndexRequest.h>
#include <aws/kendra/model/CreateQuerySuggestionsBlockListRequest.h>
#include <aws/kendra/model/CreateThesaurusRequest.h>
#include <aws/kendra/model/DeleteAccessControlConfigurationRequest.h>
#include <aws/kendra/model/DeleteDataSourceRequest.h>
#include <aws/kendra/model/DeleteExperienceRequest.h>
#include <aws/kendra/model/DeleteFaqRequest.h>
#include <aws/kendra/model/DeleteIndexRequest.h>
#include <aws/kendra/model/DeletePrincipalMappingRequest.h>
#include <aws/kendra/model/DeleteQuerySuggestionsBlockListRequest.h>
#include <aws/kendra/model/DeleteThesaurusRequest.h>
#include <aws/kendra/model/DescribeAccessControlConfigurationRequest.h>
#include <aws/kendra/model/DescribeDataSourceRequest.h>
#include <aws/kendra/model/DescribeExperienceRequest.h>
#include <aws/kendra/model/DescribeFaqRequest.h>
#include <aws/kendra/model/DescribeFeaturedResultsSetRequest.h>
#include <aws/kendra/model/DescribeIndexRequest.h>
#include <aws/kendra/model/DescribePrincipalMappingRequest.h>
#include <aws/kendra/model/DescribeQuerySuggestionsBlockListRequest.h>
#include <aws/kendra/model/DescribeQuerySuggestionsConfigRequest.h>
#include <aws/kendra/model/DescribeThesaurusRequest.h>
#include <aws/kendra/model/DisassociateEntitiesFromExperienceRequest.h>
#include <aws/kendra/model/DisassociatePersonasFromEntitiesRequest.h>
#include <aws/kendra/model/GetQuerySuggestionsRequest.h>
#include <aws/kendra/model/GetSnapshotsRequest.h>
#include <aws/kendra/model/ListAccessControlConfigurationsRequest.h>
#include <aws/kendra/model/ListDataSourceSyncJobsRequest.h>
#include <aws/kendra/model/ListDataSourcesRequest.h>
#include <aws/kendra/model/ListEntityPersonasRequest.h>
#include <aws/kendra/model/ListExperienceEntitiesRequest.h>
#include <aws/kendra/model/ListExperiencesRequest.h>
#include <aws/kendra/model/ListFaqsRequest.h>
#include <aws/kendra/model/ListFeaturedResultsSetsRequest.h>
#include <aws/kendra/model/ListGroupsOlderThanOrderingIdRequest.h>
#include <aws/kendra/model/ListIndicesRequest.h>
#include <aws/kendra/model/ListQuerySuggestionsBlockListsRequest.h>
#include <aws/kendra/model/ListTagsForResourceRequest.h>
#include <aws/kendra/model/ListThesauriRequest.h>
#include <aws/kendra/model/PutPrincipalMappingRequest.h>
#include <aws/kendra/model/QueryRequest.h>
#include <aws/kendra/model/RetrieveRequest.h>
#include <aws/kendra/model/StartDataSourceSyncJobRequest.h>
#include <aws/kendra/model/StopDataSourceSyncJobRequest.h>
#include <aws/kendra/model/SubmitFeedbackRequest.h>
#include <aws/kendra/model/TagResourceRequest.h>
#include <aws/kendra/model/UntagResourceRequest.h>
#include <aws/kendra/model/UpdateAccessControlConfigurationRequest.h>
#include <aws/kendra/model/UpdateDataSourceRequest.h>
#include <aws/kendra/model/UpdateExperienceRequest.h>
#include <aws/kendra/model/UpdateFeaturedResultsSetRequest.h>
#include <aws/kendra/model/UpdateIndexRequest.h>
#include <aws/kendra/model/UpdateQuerySuggestionsBlockListRequest.h>
#include <aws/kendra/model/UpdateQuerySuggestionsConfigRequest.h>
#include <aws/kendra/model/UpdateThesaurusRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::kendra;
using namespace Aws::kendra::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace kendra {
const char SERVICE_NAME[] = "kendra";
const char ALLOCATION_TAG[] = "KendraClient";
}  // namespace kendra
}  // namespace Aws
const char* KendraClient::GetServiceName() { return SERVICE_NAME; }
const char* KendraClient::GetAllocationTag() { return ALLOCATION_TAG; }

KendraClient::KendraClient(const kendra::KendraClientConfiguration& clientConfiguration,
                           std::shared_ptr<KendraEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KendraErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KendraEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KendraClient::KendraClient(const AWSCredentials& credentials, std::shared_ptr<KendraEndpointProviderBase> endpointProvider,
                           const kendra::KendraClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KendraErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KendraEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KendraClient::KendraClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<KendraEndpointProviderBase> endpointProvider,
                           const kendra::KendraClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KendraErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KendraEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
KendraClient::KendraClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KendraErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KendraEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KendraClient::KendraClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KendraErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KendraEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KendraClient::KendraClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KendraErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KendraEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
KendraClient::~KendraClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<KendraEndpointProviderBase>& KendraClient::accessEndpointProvider() { return m_endpointProvider; }

void KendraClient::init(const kendra::KendraClientConfiguration& config) {
  AWSClient::SetServiceClientName("kendra");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "kendra");
}

void KendraClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
KendraClient::InvokeOperationOutcome KendraClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AssociateEntitiesToExperienceOutcome KendraClient::AssociateEntitiesToExperience(
    const AssociateEntitiesToExperienceRequest& request) const {
  return AssociateEntitiesToExperienceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociatePersonasToEntitiesOutcome KendraClient::AssociatePersonasToEntities(const AssociatePersonasToEntitiesRequest& request) const {
  return AssociatePersonasToEntitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteDocumentOutcome KendraClient::BatchDeleteDocument(const BatchDeleteDocumentRequest& request) const {
  return BatchDeleteDocumentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteFeaturedResultsSetOutcome KendraClient::BatchDeleteFeaturedResultsSet(
    const BatchDeleteFeaturedResultsSetRequest& request) const {
  return BatchDeleteFeaturedResultsSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetDocumentStatusOutcome KendraClient::BatchGetDocumentStatus(const BatchGetDocumentStatusRequest& request) const {
  return BatchGetDocumentStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchPutDocumentOutcome KendraClient::BatchPutDocument(const BatchPutDocumentRequest& request) const {
  return BatchPutDocumentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ClearQuerySuggestionsOutcome KendraClient::ClearQuerySuggestions(const ClearQuerySuggestionsRequest& request) const {
  return ClearQuerySuggestionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAccessControlConfigurationOutcome KendraClient::CreateAccessControlConfiguration(
    const CreateAccessControlConfigurationRequest& request) const {
  return CreateAccessControlConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataSourceOutcome KendraClient::CreateDataSource(const CreateDataSourceRequest& request) const {
  return CreateDataSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateExperienceOutcome KendraClient::CreateExperience(const CreateExperienceRequest& request) const {
  return CreateExperienceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFaqOutcome KendraClient::CreateFaq(const CreateFaqRequest& request) const {
  return CreateFaqOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFeaturedResultsSetOutcome KendraClient::CreateFeaturedResultsSet(const CreateFeaturedResultsSetRequest& request) const {
  return CreateFeaturedResultsSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIndexOutcome KendraClient::CreateIndex(const CreateIndexRequest& request) const {
  return CreateIndexOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateQuerySuggestionsBlockListOutcome KendraClient::CreateQuerySuggestionsBlockList(
    const CreateQuerySuggestionsBlockListRequest& request) const {
  return CreateQuerySuggestionsBlockListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateThesaurusOutcome KendraClient::CreateThesaurus(const CreateThesaurusRequest& request) const {
  return CreateThesaurusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAccessControlConfigurationOutcome KendraClient::DeleteAccessControlConfiguration(
    const DeleteAccessControlConfigurationRequest& request) const {
  return DeleteAccessControlConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDataSourceOutcome KendraClient::DeleteDataSource(const DeleteDataSourceRequest& request) const {
  return DeleteDataSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteExperienceOutcome KendraClient::DeleteExperience(const DeleteExperienceRequest& request) const {
  return DeleteExperienceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFaqOutcome KendraClient::DeleteFaq(const DeleteFaqRequest& request) const {
  return DeleteFaqOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIndexOutcome KendraClient::DeleteIndex(const DeleteIndexRequest& request) const {
  return DeleteIndexOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePrincipalMappingOutcome KendraClient::DeletePrincipalMapping(const DeletePrincipalMappingRequest& request) const {
  return DeletePrincipalMappingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteQuerySuggestionsBlockListOutcome KendraClient::DeleteQuerySuggestionsBlockList(
    const DeleteQuerySuggestionsBlockListRequest& request) const {
  return DeleteQuerySuggestionsBlockListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteThesaurusOutcome KendraClient::DeleteThesaurus(const DeleteThesaurusRequest& request) const {
  return DeleteThesaurusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccessControlConfigurationOutcome KendraClient::DescribeAccessControlConfiguration(
    const DescribeAccessControlConfigurationRequest& request) const {
  return DescribeAccessControlConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDataSourceOutcome KendraClient::DescribeDataSource(const DescribeDataSourceRequest& request) const {
  return DescribeDataSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeExperienceOutcome KendraClient::DescribeExperience(const DescribeExperienceRequest& request) const {
  return DescribeExperienceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFaqOutcome KendraClient::DescribeFaq(const DescribeFaqRequest& request) const {
  return DescribeFaqOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFeaturedResultsSetOutcome KendraClient::DescribeFeaturedResultsSet(const DescribeFeaturedResultsSetRequest& request) const {
  return DescribeFeaturedResultsSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIndexOutcome KendraClient::DescribeIndex(const DescribeIndexRequest& request) const {
  return DescribeIndexOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePrincipalMappingOutcome KendraClient::DescribePrincipalMapping(const DescribePrincipalMappingRequest& request) const {
  return DescribePrincipalMappingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeQuerySuggestionsBlockListOutcome KendraClient::DescribeQuerySuggestionsBlockList(
    const DescribeQuerySuggestionsBlockListRequest& request) const {
  return DescribeQuerySuggestionsBlockListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeQuerySuggestionsConfigOutcome KendraClient::DescribeQuerySuggestionsConfig(
    const DescribeQuerySuggestionsConfigRequest& request) const {
  return DescribeQuerySuggestionsConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeThesaurusOutcome KendraClient::DescribeThesaurus(const DescribeThesaurusRequest& request) const {
  return DescribeThesaurusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateEntitiesFromExperienceOutcome KendraClient::DisassociateEntitiesFromExperience(
    const DisassociateEntitiesFromExperienceRequest& request) const {
  return DisassociateEntitiesFromExperienceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociatePersonasFromEntitiesOutcome KendraClient::DisassociatePersonasFromEntities(
    const DisassociatePersonasFromEntitiesRequest& request) const {
  return DisassociatePersonasFromEntitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetQuerySuggestionsOutcome KendraClient::GetQuerySuggestions(const GetQuerySuggestionsRequest& request) const {
  return GetQuerySuggestionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSnapshotsOutcome KendraClient::GetSnapshots(const GetSnapshotsRequest& request) const {
  return GetSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAccessControlConfigurationsOutcome KendraClient::ListAccessControlConfigurations(
    const ListAccessControlConfigurationsRequest& request) const {
  return ListAccessControlConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDataSourceSyncJobsOutcome KendraClient::ListDataSourceSyncJobs(const ListDataSourceSyncJobsRequest& request) const {
  return ListDataSourceSyncJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDataSourcesOutcome KendraClient::ListDataSources(const ListDataSourcesRequest& request) const {
  return ListDataSourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEntityPersonasOutcome KendraClient::ListEntityPersonas(const ListEntityPersonasRequest& request) const {
  return ListEntityPersonasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListExperienceEntitiesOutcome KendraClient::ListExperienceEntities(const ListExperienceEntitiesRequest& request) const {
  return ListExperienceEntitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListExperiencesOutcome KendraClient::ListExperiences(const ListExperiencesRequest& request) const {
  return ListExperiencesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFaqsOutcome KendraClient::ListFaqs(const ListFaqsRequest& request) const {
  return ListFaqsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFeaturedResultsSetsOutcome KendraClient::ListFeaturedResultsSets(const ListFeaturedResultsSetsRequest& request) const {
  return ListFeaturedResultsSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGroupsOlderThanOrderingIdOutcome KendraClient::ListGroupsOlderThanOrderingId(
    const ListGroupsOlderThanOrderingIdRequest& request) const {
  return ListGroupsOlderThanOrderingIdOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIndicesOutcome KendraClient::ListIndices(const ListIndicesRequest& request) const {
  return ListIndicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListQuerySuggestionsBlockListsOutcome KendraClient::ListQuerySuggestionsBlockLists(
    const ListQuerySuggestionsBlockListsRequest& request) const {
  return ListQuerySuggestionsBlockListsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome KendraClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListThesauriOutcome KendraClient::ListThesauri(const ListThesauriRequest& request) const {
  return ListThesauriOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutPrincipalMappingOutcome KendraClient::PutPrincipalMapping(const PutPrincipalMappingRequest& request) const {
  return PutPrincipalMappingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

QueryOutcome KendraClient::Query(const QueryRequest& request) const {
  return QueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RetrieveOutcome KendraClient::Retrieve(const RetrieveRequest& request) const {
  return RetrieveOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDataSourceSyncJobOutcome KendraClient::StartDataSourceSyncJob(const StartDataSourceSyncJobRequest& request) const {
  return StartDataSourceSyncJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopDataSourceSyncJobOutcome KendraClient::StopDataSourceSyncJob(const StopDataSourceSyncJobRequest& request) const {
  return StopDataSourceSyncJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SubmitFeedbackOutcome KendraClient::SubmitFeedback(const SubmitFeedbackRequest& request) const {
  return SubmitFeedbackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome KendraClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome KendraClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAccessControlConfigurationOutcome KendraClient::UpdateAccessControlConfiguration(
    const UpdateAccessControlConfigurationRequest& request) const {
  return UpdateAccessControlConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDataSourceOutcome KendraClient::UpdateDataSource(const UpdateDataSourceRequest& request) const {
  return UpdateDataSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateExperienceOutcome KendraClient::UpdateExperience(const UpdateExperienceRequest& request) const {
  return UpdateExperienceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFeaturedResultsSetOutcome KendraClient::UpdateFeaturedResultsSet(const UpdateFeaturedResultsSetRequest& request) const {
  return UpdateFeaturedResultsSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateIndexOutcome KendraClient::UpdateIndex(const UpdateIndexRequest& request) const {
  return UpdateIndexOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateQuerySuggestionsBlockListOutcome KendraClient::UpdateQuerySuggestionsBlockList(
    const UpdateQuerySuggestionsBlockListRequest& request) const {
  return UpdateQuerySuggestionsBlockListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateQuerySuggestionsConfigOutcome KendraClient::UpdateQuerySuggestionsConfig(const UpdateQuerySuggestionsConfigRequest& request) const {
  return UpdateQuerySuggestionsConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateThesaurusOutcome KendraClient::UpdateThesaurus(const UpdateThesaurusRequest& request) const {
  return UpdateThesaurusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
