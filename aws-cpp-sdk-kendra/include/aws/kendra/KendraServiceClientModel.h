/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/kendra/KendraErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/kendra/KendraEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in KendraClient header */
#include <aws/kendra/model/AssociateEntitiesToExperienceResult.h>
#include <aws/kendra/model/AssociatePersonasToEntitiesResult.h>
#include <aws/kendra/model/BatchDeleteDocumentResult.h>
#include <aws/kendra/model/BatchGetDocumentStatusResult.h>
#include <aws/kendra/model/BatchPutDocumentResult.h>
#include <aws/kendra/model/CreateAccessControlConfigurationResult.h>
#include <aws/kendra/model/CreateDataSourceResult.h>
#include <aws/kendra/model/CreateExperienceResult.h>
#include <aws/kendra/model/CreateFaqResult.h>
#include <aws/kendra/model/CreateIndexResult.h>
#include <aws/kendra/model/CreateQuerySuggestionsBlockListResult.h>
#include <aws/kendra/model/CreateThesaurusResult.h>
#include <aws/kendra/model/DeleteAccessControlConfigurationResult.h>
#include <aws/kendra/model/DeleteExperienceResult.h>
#include <aws/kendra/model/DescribeAccessControlConfigurationResult.h>
#include <aws/kendra/model/DescribeDataSourceResult.h>
#include <aws/kendra/model/DescribeExperienceResult.h>
#include <aws/kendra/model/DescribeFaqResult.h>
#include <aws/kendra/model/DescribeIndexResult.h>
#include <aws/kendra/model/DescribePrincipalMappingResult.h>
#include <aws/kendra/model/DescribeQuerySuggestionsBlockListResult.h>
#include <aws/kendra/model/DescribeQuerySuggestionsConfigResult.h>
#include <aws/kendra/model/DescribeThesaurusResult.h>
#include <aws/kendra/model/DisassociateEntitiesFromExperienceResult.h>
#include <aws/kendra/model/DisassociatePersonasFromEntitiesResult.h>
#include <aws/kendra/model/GetQuerySuggestionsResult.h>
#include <aws/kendra/model/GetSnapshotsResult.h>
#include <aws/kendra/model/ListAccessControlConfigurationsResult.h>
#include <aws/kendra/model/ListDataSourceSyncJobsResult.h>
#include <aws/kendra/model/ListDataSourcesResult.h>
#include <aws/kendra/model/ListEntityPersonasResult.h>
#include <aws/kendra/model/ListExperienceEntitiesResult.h>
#include <aws/kendra/model/ListExperiencesResult.h>
#include <aws/kendra/model/ListFaqsResult.h>
#include <aws/kendra/model/ListGroupsOlderThanOrderingIdResult.h>
#include <aws/kendra/model/ListIndicesResult.h>
#include <aws/kendra/model/ListQuerySuggestionsBlockListsResult.h>
#include <aws/kendra/model/ListTagsForResourceResult.h>
#include <aws/kendra/model/ListThesauriResult.h>
#include <aws/kendra/model/QueryResult.h>
#include <aws/kendra/model/StartDataSourceSyncJobResult.h>
#include <aws/kendra/model/TagResourceResult.h>
#include <aws/kendra/model/UntagResourceResult.h>
#include <aws/kendra/model/UpdateAccessControlConfigurationResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in KendraClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace kendra
  {
    using KendraClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using KendraEndpointProviderBase = Aws::kendra::Endpoint::KendraEndpointProviderBase;
    using KendraEndpointProvider = Aws::kendra::Endpoint::KendraEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in KendraClient header */
      class AssociateEntitiesToExperienceRequest;
      class AssociatePersonasToEntitiesRequest;
      class BatchDeleteDocumentRequest;
      class BatchGetDocumentStatusRequest;
      class BatchPutDocumentRequest;
      class ClearQuerySuggestionsRequest;
      class CreateAccessControlConfigurationRequest;
      class CreateDataSourceRequest;
      class CreateExperienceRequest;
      class CreateFaqRequest;
      class CreateIndexRequest;
      class CreateQuerySuggestionsBlockListRequest;
      class CreateThesaurusRequest;
      class DeleteAccessControlConfigurationRequest;
      class DeleteDataSourceRequest;
      class DeleteExperienceRequest;
      class DeleteFaqRequest;
      class DeleteIndexRequest;
      class DeletePrincipalMappingRequest;
      class DeleteQuerySuggestionsBlockListRequest;
      class DeleteThesaurusRequest;
      class DescribeAccessControlConfigurationRequest;
      class DescribeDataSourceRequest;
      class DescribeExperienceRequest;
      class DescribeFaqRequest;
      class DescribeIndexRequest;
      class DescribePrincipalMappingRequest;
      class DescribeQuerySuggestionsBlockListRequest;
      class DescribeQuerySuggestionsConfigRequest;
      class DescribeThesaurusRequest;
      class DisassociateEntitiesFromExperienceRequest;
      class DisassociatePersonasFromEntitiesRequest;
      class GetQuerySuggestionsRequest;
      class GetSnapshotsRequest;
      class ListAccessControlConfigurationsRequest;
      class ListDataSourceSyncJobsRequest;
      class ListDataSourcesRequest;
      class ListEntityPersonasRequest;
      class ListExperienceEntitiesRequest;
      class ListExperiencesRequest;
      class ListFaqsRequest;
      class ListGroupsOlderThanOrderingIdRequest;
      class ListIndicesRequest;
      class ListQuerySuggestionsBlockListsRequest;
      class ListTagsForResourceRequest;
      class ListThesauriRequest;
      class PutPrincipalMappingRequest;
      class QueryRequest;
      class StartDataSourceSyncJobRequest;
      class StopDataSourceSyncJobRequest;
      class SubmitFeedbackRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAccessControlConfigurationRequest;
      class UpdateDataSourceRequest;
      class UpdateExperienceRequest;
      class UpdateIndexRequest;
      class UpdateQuerySuggestionsBlockListRequest;
      class UpdateQuerySuggestionsConfigRequest;
      class UpdateThesaurusRequest;
      /* End of service model forward declarations required in KendraClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateEntitiesToExperienceResult, KendraError> AssociateEntitiesToExperienceOutcome;
      typedef Aws::Utils::Outcome<AssociatePersonasToEntitiesResult, KendraError> AssociatePersonasToEntitiesOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteDocumentResult, KendraError> BatchDeleteDocumentOutcome;
      typedef Aws::Utils::Outcome<BatchGetDocumentStatusResult, KendraError> BatchGetDocumentStatusOutcome;
      typedef Aws::Utils::Outcome<BatchPutDocumentResult, KendraError> BatchPutDocumentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> ClearQuerySuggestionsOutcome;
      typedef Aws::Utils::Outcome<CreateAccessControlConfigurationResult, KendraError> CreateAccessControlConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateDataSourceResult, KendraError> CreateDataSourceOutcome;
      typedef Aws::Utils::Outcome<CreateExperienceResult, KendraError> CreateExperienceOutcome;
      typedef Aws::Utils::Outcome<CreateFaqResult, KendraError> CreateFaqOutcome;
      typedef Aws::Utils::Outcome<CreateIndexResult, KendraError> CreateIndexOutcome;
      typedef Aws::Utils::Outcome<CreateQuerySuggestionsBlockListResult, KendraError> CreateQuerySuggestionsBlockListOutcome;
      typedef Aws::Utils::Outcome<CreateThesaurusResult, KendraError> CreateThesaurusOutcome;
      typedef Aws::Utils::Outcome<DeleteAccessControlConfigurationResult, KendraError> DeleteAccessControlConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> DeleteDataSourceOutcome;
      typedef Aws::Utils::Outcome<DeleteExperienceResult, KendraError> DeleteExperienceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> DeleteFaqOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> DeleteIndexOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> DeletePrincipalMappingOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> DeleteQuerySuggestionsBlockListOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> DeleteThesaurusOutcome;
      typedef Aws::Utils::Outcome<DescribeAccessControlConfigurationResult, KendraError> DescribeAccessControlConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeDataSourceResult, KendraError> DescribeDataSourceOutcome;
      typedef Aws::Utils::Outcome<DescribeExperienceResult, KendraError> DescribeExperienceOutcome;
      typedef Aws::Utils::Outcome<DescribeFaqResult, KendraError> DescribeFaqOutcome;
      typedef Aws::Utils::Outcome<DescribeIndexResult, KendraError> DescribeIndexOutcome;
      typedef Aws::Utils::Outcome<DescribePrincipalMappingResult, KendraError> DescribePrincipalMappingOutcome;
      typedef Aws::Utils::Outcome<DescribeQuerySuggestionsBlockListResult, KendraError> DescribeQuerySuggestionsBlockListOutcome;
      typedef Aws::Utils::Outcome<DescribeQuerySuggestionsConfigResult, KendraError> DescribeQuerySuggestionsConfigOutcome;
      typedef Aws::Utils::Outcome<DescribeThesaurusResult, KendraError> DescribeThesaurusOutcome;
      typedef Aws::Utils::Outcome<DisassociateEntitiesFromExperienceResult, KendraError> DisassociateEntitiesFromExperienceOutcome;
      typedef Aws::Utils::Outcome<DisassociatePersonasFromEntitiesResult, KendraError> DisassociatePersonasFromEntitiesOutcome;
      typedef Aws::Utils::Outcome<GetQuerySuggestionsResult, KendraError> GetQuerySuggestionsOutcome;
      typedef Aws::Utils::Outcome<GetSnapshotsResult, KendraError> GetSnapshotsOutcome;
      typedef Aws::Utils::Outcome<ListAccessControlConfigurationsResult, KendraError> ListAccessControlConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListDataSourceSyncJobsResult, KendraError> ListDataSourceSyncJobsOutcome;
      typedef Aws::Utils::Outcome<ListDataSourcesResult, KendraError> ListDataSourcesOutcome;
      typedef Aws::Utils::Outcome<ListEntityPersonasResult, KendraError> ListEntityPersonasOutcome;
      typedef Aws::Utils::Outcome<ListExperienceEntitiesResult, KendraError> ListExperienceEntitiesOutcome;
      typedef Aws::Utils::Outcome<ListExperiencesResult, KendraError> ListExperiencesOutcome;
      typedef Aws::Utils::Outcome<ListFaqsResult, KendraError> ListFaqsOutcome;
      typedef Aws::Utils::Outcome<ListGroupsOlderThanOrderingIdResult, KendraError> ListGroupsOlderThanOrderingIdOutcome;
      typedef Aws::Utils::Outcome<ListIndicesResult, KendraError> ListIndicesOutcome;
      typedef Aws::Utils::Outcome<ListQuerySuggestionsBlockListsResult, KendraError> ListQuerySuggestionsBlockListsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, KendraError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListThesauriResult, KendraError> ListThesauriOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> PutPrincipalMappingOutcome;
      typedef Aws::Utils::Outcome<QueryResult, KendraError> QueryOutcome;
      typedef Aws::Utils::Outcome<StartDataSourceSyncJobResult, KendraError> StartDataSourceSyncJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> StopDataSourceSyncJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> SubmitFeedbackOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, KendraError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, KendraError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAccessControlConfigurationResult, KendraError> UpdateAccessControlConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> UpdateDataSourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> UpdateExperienceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> UpdateIndexOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> UpdateQuerySuggestionsBlockListOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> UpdateQuerySuggestionsConfigOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KendraError> UpdateThesaurusOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateEntitiesToExperienceOutcome> AssociateEntitiesToExperienceOutcomeCallable;
      typedef std::future<AssociatePersonasToEntitiesOutcome> AssociatePersonasToEntitiesOutcomeCallable;
      typedef std::future<BatchDeleteDocumentOutcome> BatchDeleteDocumentOutcomeCallable;
      typedef std::future<BatchGetDocumentStatusOutcome> BatchGetDocumentStatusOutcomeCallable;
      typedef std::future<BatchPutDocumentOutcome> BatchPutDocumentOutcomeCallable;
      typedef std::future<ClearQuerySuggestionsOutcome> ClearQuerySuggestionsOutcomeCallable;
      typedef std::future<CreateAccessControlConfigurationOutcome> CreateAccessControlConfigurationOutcomeCallable;
      typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
      typedef std::future<CreateExperienceOutcome> CreateExperienceOutcomeCallable;
      typedef std::future<CreateFaqOutcome> CreateFaqOutcomeCallable;
      typedef std::future<CreateIndexOutcome> CreateIndexOutcomeCallable;
      typedef std::future<CreateQuerySuggestionsBlockListOutcome> CreateQuerySuggestionsBlockListOutcomeCallable;
      typedef std::future<CreateThesaurusOutcome> CreateThesaurusOutcomeCallable;
      typedef std::future<DeleteAccessControlConfigurationOutcome> DeleteAccessControlConfigurationOutcomeCallable;
      typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
      typedef std::future<DeleteExperienceOutcome> DeleteExperienceOutcomeCallable;
      typedef std::future<DeleteFaqOutcome> DeleteFaqOutcomeCallable;
      typedef std::future<DeleteIndexOutcome> DeleteIndexOutcomeCallable;
      typedef std::future<DeletePrincipalMappingOutcome> DeletePrincipalMappingOutcomeCallable;
      typedef std::future<DeleteQuerySuggestionsBlockListOutcome> DeleteQuerySuggestionsBlockListOutcomeCallable;
      typedef std::future<DeleteThesaurusOutcome> DeleteThesaurusOutcomeCallable;
      typedef std::future<DescribeAccessControlConfigurationOutcome> DescribeAccessControlConfigurationOutcomeCallable;
      typedef std::future<DescribeDataSourceOutcome> DescribeDataSourceOutcomeCallable;
      typedef std::future<DescribeExperienceOutcome> DescribeExperienceOutcomeCallable;
      typedef std::future<DescribeFaqOutcome> DescribeFaqOutcomeCallable;
      typedef std::future<DescribeIndexOutcome> DescribeIndexOutcomeCallable;
      typedef std::future<DescribePrincipalMappingOutcome> DescribePrincipalMappingOutcomeCallable;
      typedef std::future<DescribeQuerySuggestionsBlockListOutcome> DescribeQuerySuggestionsBlockListOutcomeCallable;
      typedef std::future<DescribeQuerySuggestionsConfigOutcome> DescribeQuerySuggestionsConfigOutcomeCallable;
      typedef std::future<DescribeThesaurusOutcome> DescribeThesaurusOutcomeCallable;
      typedef std::future<DisassociateEntitiesFromExperienceOutcome> DisassociateEntitiesFromExperienceOutcomeCallable;
      typedef std::future<DisassociatePersonasFromEntitiesOutcome> DisassociatePersonasFromEntitiesOutcomeCallable;
      typedef std::future<GetQuerySuggestionsOutcome> GetQuerySuggestionsOutcomeCallable;
      typedef std::future<GetSnapshotsOutcome> GetSnapshotsOutcomeCallable;
      typedef std::future<ListAccessControlConfigurationsOutcome> ListAccessControlConfigurationsOutcomeCallable;
      typedef std::future<ListDataSourceSyncJobsOutcome> ListDataSourceSyncJobsOutcomeCallable;
      typedef std::future<ListDataSourcesOutcome> ListDataSourcesOutcomeCallable;
      typedef std::future<ListEntityPersonasOutcome> ListEntityPersonasOutcomeCallable;
      typedef std::future<ListExperienceEntitiesOutcome> ListExperienceEntitiesOutcomeCallable;
      typedef std::future<ListExperiencesOutcome> ListExperiencesOutcomeCallable;
      typedef std::future<ListFaqsOutcome> ListFaqsOutcomeCallable;
      typedef std::future<ListGroupsOlderThanOrderingIdOutcome> ListGroupsOlderThanOrderingIdOutcomeCallable;
      typedef std::future<ListIndicesOutcome> ListIndicesOutcomeCallable;
      typedef std::future<ListQuerySuggestionsBlockListsOutcome> ListQuerySuggestionsBlockListsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListThesauriOutcome> ListThesauriOutcomeCallable;
      typedef std::future<PutPrincipalMappingOutcome> PutPrincipalMappingOutcomeCallable;
      typedef std::future<QueryOutcome> QueryOutcomeCallable;
      typedef std::future<StartDataSourceSyncJobOutcome> StartDataSourceSyncJobOutcomeCallable;
      typedef std::future<StopDataSourceSyncJobOutcome> StopDataSourceSyncJobOutcomeCallable;
      typedef std::future<SubmitFeedbackOutcome> SubmitFeedbackOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAccessControlConfigurationOutcome> UpdateAccessControlConfigurationOutcomeCallable;
      typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
      typedef std::future<UpdateExperienceOutcome> UpdateExperienceOutcomeCallable;
      typedef std::future<UpdateIndexOutcome> UpdateIndexOutcomeCallable;
      typedef std::future<UpdateQuerySuggestionsBlockListOutcome> UpdateQuerySuggestionsBlockListOutcomeCallable;
      typedef std::future<UpdateQuerySuggestionsConfigOutcome> UpdateQuerySuggestionsConfigOutcomeCallable;
      typedef std::future<UpdateThesaurusOutcome> UpdateThesaurusOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class KendraClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const KendraClient*, const Model::AssociateEntitiesToExperienceRequest&, const Model::AssociateEntitiesToExperienceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateEntitiesToExperienceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::AssociatePersonasToEntitiesRequest&, const Model::AssociatePersonasToEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePersonasToEntitiesResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::BatchDeleteDocumentRequest&, const Model::BatchDeleteDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteDocumentResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::BatchGetDocumentStatusRequest&, const Model::BatchGetDocumentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetDocumentStatusResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::BatchPutDocumentRequest&, const Model::BatchPutDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutDocumentResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::ClearQuerySuggestionsRequest&, const Model::ClearQuerySuggestionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ClearQuerySuggestionsResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::CreateAccessControlConfigurationRequest&, const Model::CreateAccessControlConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessControlConfigurationResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::CreateDataSourceRequest&, const Model::CreateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSourceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::CreateExperienceRequest&, const Model::CreateExperienceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExperienceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::CreateFaqRequest&, const Model::CreateFaqOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFaqResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::CreateIndexRequest&, const Model::CreateIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIndexResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::CreateQuerySuggestionsBlockListRequest&, const Model::CreateQuerySuggestionsBlockListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQuerySuggestionsBlockListResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::CreateThesaurusRequest&, const Model::CreateThesaurusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateThesaurusResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DeleteAccessControlConfigurationRequest&, const Model::DeleteAccessControlConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessControlConfigurationResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DeleteDataSourceRequest&, const Model::DeleteDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataSourceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DeleteExperienceRequest&, const Model::DeleteExperienceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteExperienceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DeleteFaqRequest&, const Model::DeleteFaqOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFaqResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DeleteIndexRequest&, const Model::DeleteIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIndexResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DeletePrincipalMappingRequest&, const Model::DeletePrincipalMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePrincipalMappingResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DeleteQuerySuggestionsBlockListRequest&, const Model::DeleteQuerySuggestionsBlockListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQuerySuggestionsBlockListResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DeleteThesaurusRequest&, const Model::DeleteThesaurusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteThesaurusResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DescribeAccessControlConfigurationRequest&, const Model::DescribeAccessControlConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccessControlConfigurationResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DescribeDataSourceRequest&, const Model::DescribeDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSourceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DescribeExperienceRequest&, const Model::DescribeExperienceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExperienceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DescribeFaqRequest&, const Model::DescribeFaqOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFaqResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DescribeIndexRequest&, const Model::DescribeIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIndexResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DescribePrincipalMappingRequest&, const Model::DescribePrincipalMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePrincipalMappingResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DescribeQuerySuggestionsBlockListRequest&, const Model::DescribeQuerySuggestionsBlockListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeQuerySuggestionsBlockListResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DescribeQuerySuggestionsConfigRequest&, const Model::DescribeQuerySuggestionsConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeQuerySuggestionsConfigResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DescribeThesaurusRequest&, const Model::DescribeThesaurusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeThesaurusResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DisassociateEntitiesFromExperienceRequest&, const Model::DisassociateEntitiesFromExperienceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateEntitiesFromExperienceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::DisassociatePersonasFromEntitiesRequest&, const Model::DisassociatePersonasFromEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociatePersonasFromEntitiesResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::GetQuerySuggestionsRequest&, const Model::GetQuerySuggestionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQuerySuggestionsResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::GetSnapshotsRequest&, const Model::GetSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSnapshotsResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::ListAccessControlConfigurationsRequest&, const Model::ListAccessControlConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessControlConfigurationsResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::ListDataSourceSyncJobsRequest&, const Model::ListDataSourceSyncJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourceSyncJobsResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::ListDataSourcesRequest&, const Model::ListDataSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourcesResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::ListEntityPersonasRequest&, const Model::ListEntityPersonasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntityPersonasResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::ListExperienceEntitiesRequest&, const Model::ListExperienceEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExperienceEntitiesResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::ListExperiencesRequest&, const Model::ListExperiencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExperiencesResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::ListFaqsRequest&, const Model::ListFaqsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFaqsResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::ListGroupsOlderThanOrderingIdRequest&, const Model::ListGroupsOlderThanOrderingIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsOlderThanOrderingIdResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::ListIndicesRequest&, const Model::ListIndicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIndicesResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::ListQuerySuggestionsBlockListsRequest&, const Model::ListQuerySuggestionsBlockListsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQuerySuggestionsBlockListsResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::ListThesauriRequest&, const Model::ListThesauriOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThesauriResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::PutPrincipalMappingRequest&, const Model::PutPrincipalMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPrincipalMappingResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::QueryRequest&, const Model::QueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > QueryResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::StartDataSourceSyncJobRequest&, const Model::StartDataSourceSyncJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDataSourceSyncJobResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::StopDataSourceSyncJobRequest&, const Model::StopDataSourceSyncJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDataSourceSyncJobResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::SubmitFeedbackRequest&, const Model::SubmitFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitFeedbackResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::UpdateAccessControlConfigurationRequest&, const Model::UpdateAccessControlConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccessControlConfigurationResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::UpdateDataSourceRequest&, const Model::UpdateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSourceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::UpdateExperienceRequest&, const Model::UpdateExperienceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateExperienceResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::UpdateIndexRequest&, const Model::UpdateIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIndexResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::UpdateQuerySuggestionsBlockListRequest&, const Model::UpdateQuerySuggestionsBlockListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQuerySuggestionsBlockListResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::UpdateQuerySuggestionsConfigRequest&, const Model::UpdateQuerySuggestionsConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQuerySuggestionsConfigResponseReceivedHandler;
    typedef std::function<void(const KendraClient*, const Model::UpdateThesaurusRequest&, const Model::UpdateThesaurusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThesaurusResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace kendra
} // namespace Aws
