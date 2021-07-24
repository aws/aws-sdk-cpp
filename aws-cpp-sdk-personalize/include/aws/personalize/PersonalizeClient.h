﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/personalize/model/CreateBatchInferenceJobResult.h>
#include <aws/personalize/model/CreateCampaignResult.h>
#include <aws/personalize/model/CreateDatasetResult.h>
#include <aws/personalize/model/CreateDatasetExportJobResult.h>
#include <aws/personalize/model/CreateDatasetGroupResult.h>
#include <aws/personalize/model/CreateDatasetImportJobResult.h>
#include <aws/personalize/model/CreateEventTrackerResult.h>
#include <aws/personalize/model/CreateFilterResult.h>
#include <aws/personalize/model/CreateSchemaResult.h>
#include <aws/personalize/model/CreateSolutionResult.h>
#include <aws/personalize/model/CreateSolutionVersionResult.h>
#include <aws/personalize/model/DescribeAlgorithmResult.h>
#include <aws/personalize/model/DescribeBatchInferenceJobResult.h>
#include <aws/personalize/model/DescribeCampaignResult.h>
#include <aws/personalize/model/DescribeDatasetResult.h>
#include <aws/personalize/model/DescribeDatasetExportJobResult.h>
#include <aws/personalize/model/DescribeDatasetGroupResult.h>
#include <aws/personalize/model/DescribeDatasetImportJobResult.h>
#include <aws/personalize/model/DescribeEventTrackerResult.h>
#include <aws/personalize/model/DescribeFeatureTransformationResult.h>
#include <aws/personalize/model/DescribeFilterResult.h>
#include <aws/personalize/model/DescribeRecipeResult.h>
#include <aws/personalize/model/DescribeSchemaResult.h>
#include <aws/personalize/model/DescribeSolutionResult.h>
#include <aws/personalize/model/DescribeSolutionVersionResult.h>
#include <aws/personalize/model/GetSolutionMetricsResult.h>
#include <aws/personalize/model/ListBatchInferenceJobsResult.h>
#include <aws/personalize/model/ListCampaignsResult.h>
#include <aws/personalize/model/ListDatasetExportJobsResult.h>
#include <aws/personalize/model/ListDatasetGroupsResult.h>
#include <aws/personalize/model/ListDatasetImportJobsResult.h>
#include <aws/personalize/model/ListDatasetsResult.h>
#include <aws/personalize/model/ListEventTrackersResult.h>
#include <aws/personalize/model/ListFiltersResult.h>
#include <aws/personalize/model/ListRecipesResult.h>
#include <aws/personalize/model/ListSchemasResult.h>
#include <aws/personalize/model/ListSolutionVersionsResult.h>
#include <aws/personalize/model/ListSolutionsResult.h>
#include <aws/personalize/model/UpdateCampaignResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Personalize
{

namespace Model
{
        class CreateBatchInferenceJobRequest;
        class CreateCampaignRequest;
        class CreateDatasetRequest;
        class CreateDatasetExportJobRequest;
        class CreateDatasetGroupRequest;
        class CreateDatasetImportJobRequest;
        class CreateEventTrackerRequest;
        class CreateFilterRequest;
        class CreateSchemaRequest;
        class CreateSolutionRequest;
        class CreateSolutionVersionRequest;
        class DeleteCampaignRequest;
        class DeleteDatasetRequest;
        class DeleteDatasetGroupRequest;
        class DeleteEventTrackerRequest;
        class DeleteFilterRequest;
        class DeleteSchemaRequest;
        class DeleteSolutionRequest;
        class DescribeAlgorithmRequest;
        class DescribeBatchInferenceJobRequest;
        class DescribeCampaignRequest;
        class DescribeDatasetRequest;
        class DescribeDatasetExportJobRequest;
        class DescribeDatasetGroupRequest;
        class DescribeDatasetImportJobRequest;
        class DescribeEventTrackerRequest;
        class DescribeFeatureTransformationRequest;
        class DescribeFilterRequest;
        class DescribeRecipeRequest;
        class DescribeSchemaRequest;
        class DescribeSolutionRequest;
        class DescribeSolutionVersionRequest;
        class GetSolutionMetricsRequest;
        class ListBatchInferenceJobsRequest;
        class ListCampaignsRequest;
        class ListDatasetExportJobsRequest;
        class ListDatasetGroupsRequest;
        class ListDatasetImportJobsRequest;
        class ListDatasetsRequest;
        class ListEventTrackersRequest;
        class ListFiltersRequest;
        class ListRecipesRequest;
        class ListSchemasRequest;
        class ListSolutionVersionsRequest;
        class ListSolutionsRequest;
        class StopSolutionVersionCreationRequest;
        class UpdateCampaignRequest;

        typedef Aws::Utils::Outcome<CreateBatchInferenceJobResult, PersonalizeError> CreateBatchInferenceJobOutcome;
        typedef Aws::Utils::Outcome<CreateCampaignResult, PersonalizeError> CreateCampaignOutcome;
        typedef Aws::Utils::Outcome<CreateDatasetResult, PersonalizeError> CreateDatasetOutcome;
        typedef Aws::Utils::Outcome<CreateDatasetExportJobResult, PersonalizeError> CreateDatasetExportJobOutcome;
        typedef Aws::Utils::Outcome<CreateDatasetGroupResult, PersonalizeError> CreateDatasetGroupOutcome;
        typedef Aws::Utils::Outcome<CreateDatasetImportJobResult, PersonalizeError> CreateDatasetImportJobOutcome;
        typedef Aws::Utils::Outcome<CreateEventTrackerResult, PersonalizeError> CreateEventTrackerOutcome;
        typedef Aws::Utils::Outcome<CreateFilterResult, PersonalizeError> CreateFilterOutcome;
        typedef Aws::Utils::Outcome<CreateSchemaResult, PersonalizeError> CreateSchemaOutcome;
        typedef Aws::Utils::Outcome<CreateSolutionResult, PersonalizeError> CreateSolutionOutcome;
        typedef Aws::Utils::Outcome<CreateSolutionVersionResult, PersonalizeError> CreateSolutionVersionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeError> DeleteCampaignOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeError> DeleteDatasetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeError> DeleteDatasetGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeError> DeleteEventTrackerOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeError> DeleteFilterOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeError> DeleteSchemaOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeError> DeleteSolutionOutcome;
        typedef Aws::Utils::Outcome<DescribeAlgorithmResult, PersonalizeError> DescribeAlgorithmOutcome;
        typedef Aws::Utils::Outcome<DescribeBatchInferenceJobResult, PersonalizeError> DescribeBatchInferenceJobOutcome;
        typedef Aws::Utils::Outcome<DescribeCampaignResult, PersonalizeError> DescribeCampaignOutcome;
        typedef Aws::Utils::Outcome<DescribeDatasetResult, PersonalizeError> DescribeDatasetOutcome;
        typedef Aws::Utils::Outcome<DescribeDatasetExportJobResult, PersonalizeError> DescribeDatasetExportJobOutcome;
        typedef Aws::Utils::Outcome<DescribeDatasetGroupResult, PersonalizeError> DescribeDatasetGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeDatasetImportJobResult, PersonalizeError> DescribeDatasetImportJobOutcome;
        typedef Aws::Utils::Outcome<DescribeEventTrackerResult, PersonalizeError> DescribeEventTrackerOutcome;
        typedef Aws::Utils::Outcome<DescribeFeatureTransformationResult, PersonalizeError> DescribeFeatureTransformationOutcome;
        typedef Aws::Utils::Outcome<DescribeFilterResult, PersonalizeError> DescribeFilterOutcome;
        typedef Aws::Utils::Outcome<DescribeRecipeResult, PersonalizeError> DescribeRecipeOutcome;
        typedef Aws::Utils::Outcome<DescribeSchemaResult, PersonalizeError> DescribeSchemaOutcome;
        typedef Aws::Utils::Outcome<DescribeSolutionResult, PersonalizeError> DescribeSolutionOutcome;
        typedef Aws::Utils::Outcome<DescribeSolutionVersionResult, PersonalizeError> DescribeSolutionVersionOutcome;
        typedef Aws::Utils::Outcome<GetSolutionMetricsResult, PersonalizeError> GetSolutionMetricsOutcome;
        typedef Aws::Utils::Outcome<ListBatchInferenceJobsResult, PersonalizeError> ListBatchInferenceJobsOutcome;
        typedef Aws::Utils::Outcome<ListCampaignsResult, PersonalizeError> ListCampaignsOutcome;
        typedef Aws::Utils::Outcome<ListDatasetExportJobsResult, PersonalizeError> ListDatasetExportJobsOutcome;
        typedef Aws::Utils::Outcome<ListDatasetGroupsResult, PersonalizeError> ListDatasetGroupsOutcome;
        typedef Aws::Utils::Outcome<ListDatasetImportJobsResult, PersonalizeError> ListDatasetImportJobsOutcome;
        typedef Aws::Utils::Outcome<ListDatasetsResult, PersonalizeError> ListDatasetsOutcome;
        typedef Aws::Utils::Outcome<ListEventTrackersResult, PersonalizeError> ListEventTrackersOutcome;
        typedef Aws::Utils::Outcome<ListFiltersResult, PersonalizeError> ListFiltersOutcome;
        typedef Aws::Utils::Outcome<ListRecipesResult, PersonalizeError> ListRecipesOutcome;
        typedef Aws::Utils::Outcome<ListSchemasResult, PersonalizeError> ListSchemasOutcome;
        typedef Aws::Utils::Outcome<ListSolutionVersionsResult, PersonalizeError> ListSolutionVersionsOutcome;
        typedef Aws::Utils::Outcome<ListSolutionsResult, PersonalizeError> ListSolutionsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeError> StopSolutionVersionCreationOutcome;
        typedef Aws::Utils::Outcome<UpdateCampaignResult, PersonalizeError> UpdateCampaignOutcome;

        typedef std::future<CreateBatchInferenceJobOutcome> CreateBatchInferenceJobOutcomeCallable;
        typedef std::future<CreateCampaignOutcome> CreateCampaignOutcomeCallable;
        typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
        typedef std::future<CreateDatasetExportJobOutcome> CreateDatasetExportJobOutcomeCallable;
        typedef std::future<CreateDatasetGroupOutcome> CreateDatasetGroupOutcomeCallable;
        typedef std::future<CreateDatasetImportJobOutcome> CreateDatasetImportJobOutcomeCallable;
        typedef std::future<CreateEventTrackerOutcome> CreateEventTrackerOutcomeCallable;
        typedef std::future<CreateFilterOutcome> CreateFilterOutcomeCallable;
        typedef std::future<CreateSchemaOutcome> CreateSchemaOutcomeCallable;
        typedef std::future<CreateSolutionOutcome> CreateSolutionOutcomeCallable;
        typedef std::future<CreateSolutionVersionOutcome> CreateSolutionVersionOutcomeCallable;
        typedef std::future<DeleteCampaignOutcome> DeleteCampaignOutcomeCallable;
        typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
        typedef std::future<DeleteDatasetGroupOutcome> DeleteDatasetGroupOutcomeCallable;
        typedef std::future<DeleteEventTrackerOutcome> DeleteEventTrackerOutcomeCallable;
        typedef std::future<DeleteFilterOutcome> DeleteFilterOutcomeCallable;
        typedef std::future<DeleteSchemaOutcome> DeleteSchemaOutcomeCallable;
        typedef std::future<DeleteSolutionOutcome> DeleteSolutionOutcomeCallable;
        typedef std::future<DescribeAlgorithmOutcome> DescribeAlgorithmOutcomeCallable;
        typedef std::future<DescribeBatchInferenceJobOutcome> DescribeBatchInferenceJobOutcomeCallable;
        typedef std::future<DescribeCampaignOutcome> DescribeCampaignOutcomeCallable;
        typedef std::future<DescribeDatasetOutcome> DescribeDatasetOutcomeCallable;
        typedef std::future<DescribeDatasetExportJobOutcome> DescribeDatasetExportJobOutcomeCallable;
        typedef std::future<DescribeDatasetGroupOutcome> DescribeDatasetGroupOutcomeCallable;
        typedef std::future<DescribeDatasetImportJobOutcome> DescribeDatasetImportJobOutcomeCallable;
        typedef std::future<DescribeEventTrackerOutcome> DescribeEventTrackerOutcomeCallable;
        typedef std::future<DescribeFeatureTransformationOutcome> DescribeFeatureTransformationOutcomeCallable;
        typedef std::future<DescribeFilterOutcome> DescribeFilterOutcomeCallable;
        typedef std::future<DescribeRecipeOutcome> DescribeRecipeOutcomeCallable;
        typedef std::future<DescribeSchemaOutcome> DescribeSchemaOutcomeCallable;
        typedef std::future<DescribeSolutionOutcome> DescribeSolutionOutcomeCallable;
        typedef std::future<DescribeSolutionVersionOutcome> DescribeSolutionVersionOutcomeCallable;
        typedef std::future<GetSolutionMetricsOutcome> GetSolutionMetricsOutcomeCallable;
        typedef std::future<ListBatchInferenceJobsOutcome> ListBatchInferenceJobsOutcomeCallable;
        typedef std::future<ListCampaignsOutcome> ListCampaignsOutcomeCallable;
        typedef std::future<ListDatasetExportJobsOutcome> ListDatasetExportJobsOutcomeCallable;
        typedef std::future<ListDatasetGroupsOutcome> ListDatasetGroupsOutcomeCallable;
        typedef std::future<ListDatasetImportJobsOutcome> ListDatasetImportJobsOutcomeCallable;
        typedef std::future<ListDatasetsOutcome> ListDatasetsOutcomeCallable;
        typedef std::future<ListEventTrackersOutcome> ListEventTrackersOutcomeCallable;
        typedef std::future<ListFiltersOutcome> ListFiltersOutcomeCallable;
        typedef std::future<ListRecipesOutcome> ListRecipesOutcomeCallable;
        typedef std::future<ListSchemasOutcome> ListSchemasOutcomeCallable;
        typedef std::future<ListSolutionVersionsOutcome> ListSolutionVersionsOutcomeCallable;
        typedef std::future<ListSolutionsOutcome> ListSolutionsOutcomeCallable;
        typedef std::future<StopSolutionVersionCreationOutcome> StopSolutionVersionCreationOutcomeCallable;
        typedef std::future<UpdateCampaignOutcome> UpdateCampaignOutcomeCallable;
} // namespace Model

  class PersonalizeClient;

    typedef std::function<void(const PersonalizeClient*, const Model::CreateBatchInferenceJobRequest&, const Model::CreateBatchInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBatchInferenceJobResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateCampaignRequest&, const Model::CreateCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCampaignResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateDatasetRequest&, const Model::CreateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateDatasetExportJobRequest&, const Model::CreateDatasetExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetExportJobResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateDatasetGroupRequest&, const Model::CreateDatasetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetGroupResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateDatasetImportJobRequest&, const Model::CreateDatasetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetImportJobResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateEventTrackerRequest&, const Model::CreateEventTrackerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventTrackerResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateFilterRequest&, const Model::CreateFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFilterResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateSchemaRequest&, const Model::CreateSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSchemaResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateSolutionRequest&, const Model::CreateSolutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSolutionResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateSolutionVersionRequest&, const Model::CreateSolutionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSolutionVersionResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DeleteCampaignRequest&, const Model::DeleteCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCampaignResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DeleteDatasetRequest&, const Model::DeleteDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DeleteDatasetGroupRequest&, const Model::DeleteDatasetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetGroupResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DeleteEventTrackerRequest&, const Model::DeleteEventTrackerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventTrackerResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DeleteFilterRequest&, const Model::DeleteFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFilterResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DeleteSchemaRequest&, const Model::DeleteSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSchemaResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DeleteSolutionRequest&, const Model::DeleteSolutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSolutionResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeAlgorithmRequest&, const Model::DescribeAlgorithmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlgorithmResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeBatchInferenceJobRequest&, const Model::DescribeBatchInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBatchInferenceJobResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeCampaignRequest&, const Model::DescribeCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCampaignResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeDatasetRequest&, const Model::DescribeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeDatasetExportJobRequest&, const Model::DescribeDatasetExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetExportJobResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeDatasetGroupRequest&, const Model::DescribeDatasetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetGroupResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeDatasetImportJobRequest&, const Model::DescribeDatasetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetImportJobResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeEventTrackerRequest&, const Model::DescribeEventTrackerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventTrackerResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeFeatureTransformationRequest&, const Model::DescribeFeatureTransformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFeatureTransformationResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeFilterRequest&, const Model::DescribeFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFilterResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeRecipeRequest&, const Model::DescribeRecipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecipeResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeSchemaRequest&, const Model::DescribeSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSchemaResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeSolutionRequest&, const Model::DescribeSolutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSolutionResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeSolutionVersionRequest&, const Model::DescribeSolutionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSolutionVersionResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::GetSolutionMetricsRequest&, const Model::GetSolutionMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSolutionMetricsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListBatchInferenceJobsRequest&, const Model::ListBatchInferenceJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBatchInferenceJobsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListCampaignsRequest&, const Model::ListCampaignsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCampaignsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListDatasetExportJobsRequest&, const Model::ListDatasetExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetExportJobsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListDatasetGroupsRequest&, const Model::ListDatasetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetGroupsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListDatasetImportJobsRequest&, const Model::ListDatasetImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetImportJobsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListDatasetsRequest&, const Model::ListDatasetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListEventTrackersRequest&, const Model::ListEventTrackersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventTrackersResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListFiltersRequest&, const Model::ListFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFiltersResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListRecipesRequest&, const Model::ListRecipesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecipesResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListSchemasRequest&, const Model::ListSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemasResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListSolutionVersionsRequest&, const Model::ListSolutionVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSolutionVersionsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListSolutionsRequest&, const Model::ListSolutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSolutionsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::StopSolutionVersionCreationRequest&, const Model::StopSolutionVersionCreationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopSolutionVersionCreationResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::UpdateCampaignRequest&, const Model::UpdateCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignResponseReceivedHandler;

  /**
   * <p>Amazon Personalize is a machine learning service that makes it easy to add
   * individualized recommendations to customers.</p>
   */
  class AWS_PERSONALIZE_API PersonalizeClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PersonalizeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~PersonalizeClient();


        /**
         * <p>Creates a batch inference job. The operation can handle up to 50 million
         * records and the input file must be in JSON format. For more information, see
         * <a>recommendations-batch</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateBatchInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBatchInferenceJobOutcome CreateBatchInferenceJob(const Model::CreateBatchInferenceJobRequest& request) const;

        /**
         * <p>Creates a batch inference job. The operation can handle up to 50 million
         * records and the input file must be in JSON format. For more information, see
         * <a>recommendations-batch</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateBatchInferenceJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBatchInferenceJobOutcomeCallable CreateBatchInferenceJobCallable(const Model::CreateBatchInferenceJobRequest& request) const;

        /**
         * <p>Creates a batch inference job. The operation can handle up to 50 million
         * records and the input file must be in JSON format. For more information, see
         * <a>recommendations-batch</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateBatchInferenceJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBatchInferenceJobAsync(const Model::CreateBatchInferenceJobRequest& request, const CreateBatchInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a campaign by deploying a solution version. When a client calls the
         * <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
         * and <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetPersonalizedRanking.html">GetPersonalizedRanking</a>
         * APIs, a campaign is specified in the request.</p> <p> <b>Minimum Provisioned TPS
         * and Auto-Scaling</b> </p> <p>A transaction is a single
         * <code>GetRecommendations</code> or <code>GetPersonalizedRanking</code> call.
         * Transactions per second (TPS) is the throughput and unit of billing for Amazon
         * Personalize. The minimum provisioned TPS (<code>minProvisionedTPS</code>)
         * specifies the baseline throughput provisioned by Amazon Personalize, and thus,
         * the minimum billing charge. </p> <p> If your TPS increases beyond
         * <code>minProvisionedTPS</code>, Amazon Personalize auto-scales the provisioned
         * capacity up and down, but never below <code>minProvisionedTPS</code>. There's a
         * short time delay while the capacity is increased that might cause loss of
         * transactions.</p> <p>The actual TPS used is calculated as the average
         * requests/second within a 5-minute window. You pay for maximum of either the
         * minimum provisioned TPS or the actual TPS. We recommend starting with a low
         * <code>minProvisionedTPS</code>, track your usage using Amazon CloudWatch
         * metrics, and then increase the <code>minProvisionedTPS</code> as necessary.</p>
         * <p> <b>Status</b> </p> <p>A campaign can be in one of the following states:</p>
         * <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
         * FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul>
         * <p>To get the campaign status, call <a>DescribeCampaign</a>.</p>  <p>Wait
         * until the <code>status</code> of the campaign is <code>ACTIVE</code> before
         * asking the campaign for recommendations.</p>  <p class="title">
         * <b>Related APIs</b> </p> <ul> <li> <p> <a>ListCampaigns</a> </p> </li> <li> <p>
         * <a>DescribeCampaign</a> </p> </li> <li> <p> <a>UpdateCampaign</a> </p> </li>
         * <li> <p> <a>DeleteCampaign</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCampaignOutcome CreateCampaign(const Model::CreateCampaignRequest& request) const;

        /**
         * <p>Creates a campaign by deploying a solution version. When a client calls the
         * <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
         * and <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetPersonalizedRanking.html">GetPersonalizedRanking</a>
         * APIs, a campaign is specified in the request.</p> <p> <b>Minimum Provisioned TPS
         * and Auto-Scaling</b> </p> <p>A transaction is a single
         * <code>GetRecommendations</code> or <code>GetPersonalizedRanking</code> call.
         * Transactions per second (TPS) is the throughput and unit of billing for Amazon
         * Personalize. The minimum provisioned TPS (<code>minProvisionedTPS</code>)
         * specifies the baseline throughput provisioned by Amazon Personalize, and thus,
         * the minimum billing charge. </p> <p> If your TPS increases beyond
         * <code>minProvisionedTPS</code>, Amazon Personalize auto-scales the provisioned
         * capacity up and down, but never below <code>minProvisionedTPS</code>. There's a
         * short time delay while the capacity is increased that might cause loss of
         * transactions.</p> <p>The actual TPS used is calculated as the average
         * requests/second within a 5-minute window. You pay for maximum of either the
         * minimum provisioned TPS or the actual TPS. We recommend starting with a low
         * <code>minProvisionedTPS</code>, track your usage using Amazon CloudWatch
         * metrics, and then increase the <code>minProvisionedTPS</code> as necessary.</p>
         * <p> <b>Status</b> </p> <p>A campaign can be in one of the following states:</p>
         * <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
         * FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul>
         * <p>To get the campaign status, call <a>DescribeCampaign</a>.</p>  <p>Wait
         * until the <code>status</code> of the campaign is <code>ACTIVE</code> before
         * asking the campaign for recommendations.</p>  <p class="title">
         * <b>Related APIs</b> </p> <ul> <li> <p> <a>ListCampaigns</a> </p> </li> <li> <p>
         * <a>DescribeCampaign</a> </p> </li> <li> <p> <a>UpdateCampaign</a> </p> </li>
         * <li> <p> <a>DeleteCampaign</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateCampaign">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCampaignOutcomeCallable CreateCampaignCallable(const Model::CreateCampaignRequest& request) const;

        /**
         * <p>Creates a campaign by deploying a solution version. When a client calls the
         * <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
         * and <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetPersonalizedRanking.html">GetPersonalizedRanking</a>
         * APIs, a campaign is specified in the request.</p> <p> <b>Minimum Provisioned TPS
         * and Auto-Scaling</b> </p> <p>A transaction is a single
         * <code>GetRecommendations</code> or <code>GetPersonalizedRanking</code> call.
         * Transactions per second (TPS) is the throughput and unit of billing for Amazon
         * Personalize. The minimum provisioned TPS (<code>minProvisionedTPS</code>)
         * specifies the baseline throughput provisioned by Amazon Personalize, and thus,
         * the minimum billing charge. </p> <p> If your TPS increases beyond
         * <code>minProvisionedTPS</code>, Amazon Personalize auto-scales the provisioned
         * capacity up and down, but never below <code>minProvisionedTPS</code>. There's a
         * short time delay while the capacity is increased that might cause loss of
         * transactions.</p> <p>The actual TPS used is calculated as the average
         * requests/second within a 5-minute window. You pay for maximum of either the
         * minimum provisioned TPS or the actual TPS. We recommend starting with a low
         * <code>minProvisionedTPS</code>, track your usage using Amazon CloudWatch
         * metrics, and then increase the <code>minProvisionedTPS</code> as necessary.</p>
         * <p> <b>Status</b> </p> <p>A campaign can be in one of the following states:</p>
         * <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
         * FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul>
         * <p>To get the campaign status, call <a>DescribeCampaign</a>.</p>  <p>Wait
         * until the <code>status</code> of the campaign is <code>ACTIVE</code> before
         * asking the campaign for recommendations.</p>  <p class="title">
         * <b>Related APIs</b> </p> <ul> <li> <p> <a>ListCampaigns</a> </p> </li> <li> <p>
         * <a>DescribeCampaign</a> </p> </li> <li> <p> <a>UpdateCampaign</a> </p> </li>
         * <li> <p> <a>DeleteCampaign</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateCampaign">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCampaignAsync(const Model::CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an empty dataset and adds it to the specified dataset group. Use
         * <a>CreateDatasetImportJob</a> to import your training data to a dataset.</p>
         * <p>There are three types of datasets:</p> <ul> <li> <p>Interactions</p> </li>
         * <li> <p>Items</p> </li> <li> <p>Users</p> </li> </ul> <p>Each dataset type has
         * an associated schema with required field types. Only the
         * <code>Interactions</code> dataset is required in order to train a model (also
         * referred to as creating a solution).</p> <p>A dataset can be in one of the
         * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
         * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
         * IN_PROGRESS</p> </li> </ul> <p>To get the status of the dataset, call
         * <a>DescribeDataset</a>.</p> <p class="title"> <b>Related APIs</b> </p> <ul> <li>
         * <p> <a>CreateDatasetGroup</a> </p> </li> <li> <p> <a>ListDatasets</a> </p> </li>
         * <li> <p> <a>DescribeDataset</a> </p> </li> <li> <p> <a>DeleteDataset</a> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetOutcome CreateDataset(const Model::CreateDatasetRequest& request) const;

        /**
         * <p>Creates an empty dataset and adds it to the specified dataset group. Use
         * <a>CreateDatasetImportJob</a> to import your training data to a dataset.</p>
         * <p>There are three types of datasets:</p> <ul> <li> <p>Interactions</p> </li>
         * <li> <p>Items</p> </li> <li> <p>Users</p> </li> </ul> <p>Each dataset type has
         * an associated schema with required field types. Only the
         * <code>Interactions</code> dataset is required in order to train a model (also
         * referred to as creating a solution).</p> <p>A dataset can be in one of the
         * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
         * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
         * IN_PROGRESS</p> </li> </ul> <p>To get the status of the dataset, call
         * <a>DescribeDataset</a>.</p> <p class="title"> <b>Related APIs</b> </p> <ul> <li>
         * <p> <a>CreateDatasetGroup</a> </p> </li> <li> <p> <a>ListDatasets</a> </p> </li>
         * <li> <p> <a>DescribeDataset</a> </p> </li> <li> <p> <a>DeleteDataset</a> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetOutcomeCallable CreateDatasetCallable(const Model::CreateDatasetRequest& request) const;

        /**
         * <p>Creates an empty dataset and adds it to the specified dataset group. Use
         * <a>CreateDatasetImportJob</a> to import your training data to a dataset.</p>
         * <p>There are three types of datasets:</p> <ul> <li> <p>Interactions</p> </li>
         * <li> <p>Items</p> </li> <li> <p>Users</p> </li> </ul> <p>Each dataset type has
         * an associated schema with required field types. Only the
         * <code>Interactions</code> dataset is required in order to train a model (also
         * referred to as creating a solution).</p> <p>A dataset can be in one of the
         * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
         * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
         * IN_PROGRESS</p> </li> </ul> <p>To get the status of the dataset, call
         * <a>DescribeDataset</a>.</p> <p class="title"> <b>Related APIs</b> </p> <ul> <li>
         * <p> <a>CreateDatasetGroup</a> </p> </li> <li> <p> <a>ListDatasets</a> </p> </li>
         * <li> <p> <a>DescribeDataset</a> </p> </li> <li> <p> <a>DeleteDataset</a> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetAsync(const Model::CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a job that exports data from your dataset to an Amazon S3 bucket. To
         * allow Amazon Personalize to export the training data, you must specify an
         * service-linked IAM role that gives Amazon Personalize <code>PutObject</code>
         * permissions for your Amazon S3 bucket. For information, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/export-data.html">Exporting
         * a dataset</a> in the Amazon Personalize developer guide. </p> <p> <b>Status</b>
         * </p> <p>A dataset export job can be in one of the following states:</p> <ul>
         * <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
         * FAILED</p> </li> </ul> <p> To get the status of the export job, call
         * <a>DescribeDatasetExportJob</a>, and specify the Amazon Resource Name (ARN) of
         * the dataset export job. The dataset export is complete when the status shows as
         * ACTIVE. If the status shows as CREATE FAILED, the response includes a
         * <code>failureReason</code> key, which describes why the job failed.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateDatasetExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetExportJobOutcome CreateDatasetExportJob(const Model::CreateDatasetExportJobRequest& request) const;

        /**
         * <p> Creates a job that exports data from your dataset to an Amazon S3 bucket. To
         * allow Amazon Personalize to export the training data, you must specify an
         * service-linked IAM role that gives Amazon Personalize <code>PutObject</code>
         * permissions for your Amazon S3 bucket. For information, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/export-data.html">Exporting
         * a dataset</a> in the Amazon Personalize developer guide. </p> <p> <b>Status</b>
         * </p> <p>A dataset export job can be in one of the following states:</p> <ul>
         * <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
         * FAILED</p> </li> </ul> <p> To get the status of the export job, call
         * <a>DescribeDatasetExportJob</a>, and specify the Amazon Resource Name (ARN) of
         * the dataset export job. The dataset export is complete when the status shows as
         * ACTIVE. If the status shows as CREATE FAILED, the response includes a
         * <code>failureReason</code> key, which describes why the job failed.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateDatasetExportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetExportJobOutcomeCallable CreateDatasetExportJobCallable(const Model::CreateDatasetExportJobRequest& request) const;

        /**
         * <p> Creates a job that exports data from your dataset to an Amazon S3 bucket. To
         * allow Amazon Personalize to export the training data, you must specify an
         * service-linked IAM role that gives Amazon Personalize <code>PutObject</code>
         * permissions for your Amazon S3 bucket. For information, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/export-data.html">Exporting
         * a dataset</a> in the Amazon Personalize developer guide. </p> <p> <b>Status</b>
         * </p> <p>A dataset export job can be in one of the following states:</p> <ul>
         * <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
         * FAILED</p> </li> </ul> <p> To get the status of the export job, call
         * <a>DescribeDatasetExportJob</a>, and specify the Amazon Resource Name (ARN) of
         * the dataset export job. The dataset export is complete when the status shows as
         * ACTIVE. If the status shows as CREATE FAILED, the response includes a
         * <code>failureReason</code> key, which describes why the job failed.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateDatasetExportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetExportJobAsync(const Model::CreateDatasetExportJobRequest& request, const CreateDatasetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an empty dataset group. A dataset group contains related datasets
         * that supply data for training a model. A dataset group can contain at most three
         * datasets, one for each type of dataset:</p> <ul> <li> <p>Interactions</p> </li>
         * <li> <p>Items</p> </li> <li> <p>Users</p> </li> </ul> <p>To train a model
         * (create a solution), a dataset group that contains an <code>Interactions</code>
         * dataset is required. Call <a>CreateDataset</a> to add a dataset to the
         * group.</p> <p>A dataset group can be in one of the following states:</p> <ul>
         * <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
         * FAILED</p> </li> <li> <p>DELETE PENDING</p> </li> </ul> <p>To get the status of
         * the dataset group, call <a>DescribeDatasetGroup</a>. If the status shows as
         * CREATE FAILED, the response includes a <code>failureReason</code> key, which
         * describes why the creation failed.</p>  <p>You must wait until the
         * <code>status</code> of the dataset group is <code>ACTIVE</code> before adding a
         * dataset to the group.</p>  <p>You can specify an Key Management Service
         * (KMS) key to encrypt the datasets in the group. If you specify a KMS key, you
         * must also include an Identity and Access Management (IAM) role that has
         * permission to access the key.</p> <p class="title"> <b>APIs that require a
         * dataset group ARN in the request</b> </p> <ul> <li> <p> <a>CreateDataset</a>
         * </p> </li> <li> <p> <a>CreateEventTracker</a> </p> </li> <li> <p>
         * <a>CreateSolution</a> </p> </li> </ul> <p class="title"> <b>Related APIs</b>
         * </p> <ul> <li> <p> <a>ListDatasetGroups</a> </p> </li> <li> <p>
         * <a>DescribeDatasetGroup</a> </p> </li> <li> <p> <a>DeleteDatasetGroup</a> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateDatasetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetGroupOutcome CreateDatasetGroup(const Model::CreateDatasetGroupRequest& request) const;

        /**
         * <p>Creates an empty dataset group. A dataset group contains related datasets
         * that supply data for training a model. A dataset group can contain at most three
         * datasets, one for each type of dataset:</p> <ul> <li> <p>Interactions</p> </li>
         * <li> <p>Items</p> </li> <li> <p>Users</p> </li> </ul> <p>To train a model
         * (create a solution), a dataset group that contains an <code>Interactions</code>
         * dataset is required. Call <a>CreateDataset</a> to add a dataset to the
         * group.</p> <p>A dataset group can be in one of the following states:</p> <ul>
         * <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
         * FAILED</p> </li> <li> <p>DELETE PENDING</p> </li> </ul> <p>To get the status of
         * the dataset group, call <a>DescribeDatasetGroup</a>. If the status shows as
         * CREATE FAILED, the response includes a <code>failureReason</code> key, which
         * describes why the creation failed.</p>  <p>You must wait until the
         * <code>status</code> of the dataset group is <code>ACTIVE</code> before adding a
         * dataset to the group.</p>  <p>You can specify an Key Management Service
         * (KMS) key to encrypt the datasets in the group. If you specify a KMS key, you
         * must also include an Identity and Access Management (IAM) role that has
         * permission to access the key.</p> <p class="title"> <b>APIs that require a
         * dataset group ARN in the request</b> </p> <ul> <li> <p> <a>CreateDataset</a>
         * </p> </li> <li> <p> <a>CreateEventTracker</a> </p> </li> <li> <p>
         * <a>CreateSolution</a> </p> </li> </ul> <p class="title"> <b>Related APIs</b>
         * </p> <ul> <li> <p> <a>ListDatasetGroups</a> </p> </li> <li> <p>
         * <a>DescribeDatasetGroup</a> </p> </li> <li> <p> <a>DeleteDatasetGroup</a> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateDatasetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetGroupOutcomeCallable CreateDatasetGroupCallable(const Model::CreateDatasetGroupRequest& request) const;

        /**
         * <p>Creates an empty dataset group. A dataset group contains related datasets
         * that supply data for training a model. A dataset group can contain at most three
         * datasets, one for each type of dataset:</p> <ul> <li> <p>Interactions</p> </li>
         * <li> <p>Items</p> </li> <li> <p>Users</p> </li> </ul> <p>To train a model
         * (create a solution), a dataset group that contains an <code>Interactions</code>
         * dataset is required. Call <a>CreateDataset</a> to add a dataset to the
         * group.</p> <p>A dataset group can be in one of the following states:</p> <ul>
         * <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
         * FAILED</p> </li> <li> <p>DELETE PENDING</p> </li> </ul> <p>To get the status of
         * the dataset group, call <a>DescribeDatasetGroup</a>. If the status shows as
         * CREATE FAILED, the response includes a <code>failureReason</code> key, which
         * describes why the creation failed.</p>  <p>You must wait until the
         * <code>status</code> of the dataset group is <code>ACTIVE</code> before adding a
         * dataset to the group.</p>  <p>You can specify an Key Management Service
         * (KMS) key to encrypt the datasets in the group. If you specify a KMS key, you
         * must also include an Identity and Access Management (IAM) role that has
         * permission to access the key.</p> <p class="title"> <b>APIs that require a
         * dataset group ARN in the request</b> </p> <ul> <li> <p> <a>CreateDataset</a>
         * </p> </li> <li> <p> <a>CreateEventTracker</a> </p> </li> <li> <p>
         * <a>CreateSolution</a> </p> </li> </ul> <p class="title"> <b>Related APIs</b>
         * </p> <ul> <li> <p> <a>ListDatasetGroups</a> </p> </li> <li> <p>
         * <a>DescribeDatasetGroup</a> </p> </li> <li> <p> <a>DeleteDatasetGroup</a> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateDatasetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetGroupAsync(const Model::CreateDatasetGroupRequest& request, const CreateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a job that imports training data from your data source (an Amazon S3
         * bucket) to an Amazon Personalize dataset. To allow Amazon Personalize to import
         * the training data, you must specify an IAM service role that has permission to
         * read from the data source, as Amazon Personalize makes a copy of your data and
         * processes it internally. For information on granting access to your Amazon S3
         * bucket, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/granting-personalize-s3-access.html">Giving
         * Amazon Personalize Access to Amazon S3 Resources</a>. </p>  <p>The
         * dataset import job replaces any existing data in the dataset that you imported
         * in bulk.</p>  <p> <b>Status</b> </p> <p>A dataset import job can be
         * in one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
         * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul> <p>To get the status
         * of the import job, call <a>DescribeDatasetImportJob</a>, providing the Amazon
         * Resource Name (ARN) of the dataset import job. The dataset import is complete
         * when the status shows as ACTIVE. If the status shows as CREATE FAILED, the
         * response includes a <code>failureReason</code> key, which describes why the job
         * failed.</p>  <p>Importing takes time. You must wait until the status shows
         * as ACTIVE before training a model using the dataset.</p>  <p
         * class="title"> <b>Related APIs</b> </p> <ul> <li> <p>
         * <a>ListDatasetImportJobs</a> </p> </li> <li> <p> <a>DescribeDatasetImportJob</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateDatasetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetImportJobOutcome CreateDatasetImportJob(const Model::CreateDatasetImportJobRequest& request) const;

        /**
         * <p>Creates a job that imports training data from your data source (an Amazon S3
         * bucket) to an Amazon Personalize dataset. To allow Amazon Personalize to import
         * the training data, you must specify an IAM service role that has permission to
         * read from the data source, as Amazon Personalize makes a copy of your data and
         * processes it internally. For information on granting access to your Amazon S3
         * bucket, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/granting-personalize-s3-access.html">Giving
         * Amazon Personalize Access to Amazon S3 Resources</a>. </p>  <p>The
         * dataset import job replaces any existing data in the dataset that you imported
         * in bulk.</p>  <p> <b>Status</b> </p> <p>A dataset import job can be
         * in one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
         * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul> <p>To get the status
         * of the import job, call <a>DescribeDatasetImportJob</a>, providing the Amazon
         * Resource Name (ARN) of the dataset import job. The dataset import is complete
         * when the status shows as ACTIVE. If the status shows as CREATE FAILED, the
         * response includes a <code>failureReason</code> key, which describes why the job
         * failed.</p>  <p>Importing takes time. You must wait until the status shows
         * as ACTIVE before training a model using the dataset.</p>  <p
         * class="title"> <b>Related APIs</b> </p> <ul> <li> <p>
         * <a>ListDatasetImportJobs</a> </p> </li> <li> <p> <a>DescribeDatasetImportJob</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateDatasetImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetImportJobOutcomeCallable CreateDatasetImportJobCallable(const Model::CreateDatasetImportJobRequest& request) const;

        /**
         * <p>Creates a job that imports training data from your data source (an Amazon S3
         * bucket) to an Amazon Personalize dataset. To allow Amazon Personalize to import
         * the training data, you must specify an IAM service role that has permission to
         * read from the data source, as Amazon Personalize makes a copy of your data and
         * processes it internally. For information on granting access to your Amazon S3
         * bucket, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/granting-personalize-s3-access.html">Giving
         * Amazon Personalize Access to Amazon S3 Resources</a>. </p>  <p>The
         * dataset import job replaces any existing data in the dataset that you imported
         * in bulk.</p>  <p> <b>Status</b> </p> <p>A dataset import job can be
         * in one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
         * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul> <p>To get the status
         * of the import job, call <a>DescribeDatasetImportJob</a>, providing the Amazon
         * Resource Name (ARN) of the dataset import job. The dataset import is complete
         * when the status shows as ACTIVE. If the status shows as CREATE FAILED, the
         * response includes a <code>failureReason</code> key, which describes why the job
         * failed.</p>  <p>Importing takes time. You must wait until the status shows
         * as ACTIVE before training a model using the dataset.</p>  <p
         * class="title"> <b>Related APIs</b> </p> <ul> <li> <p>
         * <a>ListDatasetImportJobs</a> </p> </li> <li> <p> <a>DescribeDatasetImportJob</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateDatasetImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetImportJobAsync(const Model::CreateDatasetImportJobRequest& request, const CreateDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an event tracker that you use when adding event data to a specified
         * dataset group using the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
         * API.</p>  <p>Only one event tracker can be associated with a dataset
         * group. You will get an error if you call <code>CreateEventTracker</code> using
         * the same dataset group as an existing event tracker.</p>  <p>When you
         * create an event tracker, the response includes a tracking ID, which you pass as
         * a parameter when you use the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
         * operation. Amazon Personalize then appends the event data to the Interactions
         * dataset of the dataset group you specify in your event tracker. </p> <p>The
         * event tracker can be in one of the following states:</p> <ul> <li> <p>CREATE
         * PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> <li>
         * <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul> <p>To get the status
         * of the event tracker, call <a>DescribeEventTracker</a>.</p>  <p>The event
         * tracker must be in the ACTIVE state before using the tracking ID.</p>  <p
         * class="title"> <b>Related APIs</b> </p> <ul> <li> <p> <a>ListEventTrackers</a>
         * </p> </li> <li> <p> <a>DescribeEventTracker</a> </p> </li> <li> <p>
         * <a>DeleteEventTracker</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateEventTracker">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventTrackerOutcome CreateEventTracker(const Model::CreateEventTrackerRequest& request) const;

        /**
         * <p>Creates an event tracker that you use when adding event data to a specified
         * dataset group using the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
         * API.</p>  <p>Only one event tracker can be associated with a dataset
         * group. You will get an error if you call <code>CreateEventTracker</code> using
         * the same dataset group as an existing event tracker.</p>  <p>When you
         * create an event tracker, the response includes a tracking ID, which you pass as
         * a parameter when you use the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
         * operation. Amazon Personalize then appends the event data to the Interactions
         * dataset of the dataset group you specify in your event tracker. </p> <p>The
         * event tracker can be in one of the following states:</p> <ul> <li> <p>CREATE
         * PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> <li>
         * <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul> <p>To get the status
         * of the event tracker, call <a>DescribeEventTracker</a>.</p>  <p>The event
         * tracker must be in the ACTIVE state before using the tracking ID.</p>  <p
         * class="title"> <b>Related APIs</b> </p> <ul> <li> <p> <a>ListEventTrackers</a>
         * </p> </li> <li> <p> <a>DescribeEventTracker</a> </p> </li> <li> <p>
         * <a>DeleteEventTracker</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateEventTracker">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventTrackerOutcomeCallable CreateEventTrackerCallable(const Model::CreateEventTrackerRequest& request) const;

        /**
         * <p>Creates an event tracker that you use when adding event data to a specified
         * dataset group using the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
         * API.</p>  <p>Only one event tracker can be associated with a dataset
         * group. You will get an error if you call <code>CreateEventTracker</code> using
         * the same dataset group as an existing event tracker.</p>  <p>When you
         * create an event tracker, the response includes a tracking ID, which you pass as
         * a parameter when you use the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
         * operation. Amazon Personalize then appends the event data to the Interactions
         * dataset of the dataset group you specify in your event tracker. </p> <p>The
         * event tracker can be in one of the following states:</p> <ul> <li> <p>CREATE
         * PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> <li>
         * <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul> <p>To get the status
         * of the event tracker, call <a>DescribeEventTracker</a>.</p>  <p>The event
         * tracker must be in the ACTIVE state before using the tracking ID.</p>  <p
         * class="title"> <b>Related APIs</b> </p> <ul> <li> <p> <a>ListEventTrackers</a>
         * </p> </li> <li> <p> <a>DescribeEventTracker</a> </p> </li> <li> <p>
         * <a>DeleteEventTracker</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateEventTracker">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventTrackerAsync(const Model::CreateEventTrackerRequest& request, const CreateEventTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a recommendation filter. For more information, see
         * <a>filter</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFilterOutcome CreateFilter(const Model::CreateFilterRequest& request) const;

        /**
         * <p>Creates a recommendation filter. For more information, see
         * <a>filter</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFilterOutcomeCallable CreateFilterCallable(const Model::CreateFilterRequest& request) const;

        /**
         * <p>Creates a recommendation filter. For more information, see
         * <a>filter</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFilterAsync(const Model::CreateFilterRequest& request, const CreateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Personalize schema from the specified schema string. The
         * schema you create must be in Avro JSON format.</p> <p>Amazon Personalize
         * recognizes three schema variants. Each schema is associated with a dataset type
         * and has a set of required field and keywords. You specify a schema when you call
         * <a>CreateDataset</a>.</p> <p class="title"> <b>Related APIs</b> </p> <ul> <li>
         * <p> <a>ListSchemas</a> </p> </li> <li> <p> <a>DescribeSchema</a> </p> </li> <li>
         * <p> <a>DeleteSchema</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSchemaOutcome CreateSchema(const Model::CreateSchemaRequest& request) const;

        /**
         * <p>Creates an Amazon Personalize schema from the specified schema string. The
         * schema you create must be in Avro JSON format.</p> <p>Amazon Personalize
         * recognizes three schema variants. Each schema is associated with a dataset type
         * and has a set of required field and keywords. You specify a schema when you call
         * <a>CreateDataset</a>.</p> <p class="title"> <b>Related APIs</b> </p> <ul> <li>
         * <p> <a>ListSchemas</a> </p> </li> <li> <p> <a>DescribeSchema</a> </p> </li> <li>
         * <p> <a>DeleteSchema</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSchemaOutcomeCallable CreateSchemaCallable(const Model::CreateSchemaRequest& request) const;

        /**
         * <p>Creates an Amazon Personalize schema from the specified schema string. The
         * schema you create must be in Avro JSON format.</p> <p>Amazon Personalize
         * recognizes three schema variants. Each schema is associated with a dataset type
         * and has a set of required field and keywords. You specify a schema when you call
         * <a>CreateDataset</a>.</p> <p class="title"> <b>Related APIs</b> </p> <ul> <li>
         * <p> <a>ListSchemas</a> </p> </li> <li> <p> <a>DescribeSchema</a> </p> </li> <li>
         * <p> <a>DeleteSchema</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateSchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSchemaAsync(const Model::CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the configuration for training a model. A trained model is known as a
         * solution. After the configuration is created, you train the model (create a
         * solution) by calling the <a>CreateSolutionVersion</a> operation. Every time you
         * call <code>CreateSolutionVersion</code>, a new version of the solution is
         * created.</p> <p>After creating a solution version, you check its accuracy by
         * calling <a>GetSolutionMetrics</a>. When you are satisfied with the version, you
         * deploy it using <a>CreateCampaign</a>. The campaign provides recommendations to
         * a client through the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
         * API.</p> <p>To train a model, Amazon Personalize requires training data and a
         * recipe. The training data comes from the dataset group that you provide in the
         * request. A recipe specifies the training algorithm and a feature transformation.
         * You can specify one of the predefined recipes provided by Amazon Personalize.
         * Alternatively, you can specify <code>performAutoML</code> and Amazon Personalize
         * will analyze your data and select the optimum USER_PERSONALIZATION recipe for
         * you.</p>  <p>Amazon Personalize doesn't support configuring the
         * <code>hpoObjective</code> for solution hyperparameter optimization at this
         * time.</p>  <p> <b>Status</b> </p> <p>A solution can be in one of the
         * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
         * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
         * IN_PROGRESS</p> </li> </ul> <p>To get the status of the solution, call
         * <a>DescribeSolution</a>. Wait until the status shows as ACTIVE before calling
         * <code>CreateSolutionVersion</code>.</p> <p class="title"> <b>Related APIs</b>
         * </p> <ul> <li> <p> <a>ListSolutions</a> </p> </li> <li> <p>
         * <a>CreateSolutionVersion</a> </p> </li> <li> <p> <a>DescribeSolution</a> </p>
         * </li> <li> <p> <a>DeleteSolution</a> </p> </li> </ul> <ul> <li> <p>
         * <a>ListSolutionVersions</a> </p> </li> <li> <p> <a>DescribeSolutionVersion</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateSolution">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSolutionOutcome CreateSolution(const Model::CreateSolutionRequest& request) const;

        /**
         * <p>Creates the configuration for training a model. A trained model is known as a
         * solution. After the configuration is created, you train the model (create a
         * solution) by calling the <a>CreateSolutionVersion</a> operation. Every time you
         * call <code>CreateSolutionVersion</code>, a new version of the solution is
         * created.</p> <p>After creating a solution version, you check its accuracy by
         * calling <a>GetSolutionMetrics</a>. When you are satisfied with the version, you
         * deploy it using <a>CreateCampaign</a>. The campaign provides recommendations to
         * a client through the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
         * API.</p> <p>To train a model, Amazon Personalize requires training data and a
         * recipe. The training data comes from the dataset group that you provide in the
         * request. A recipe specifies the training algorithm and a feature transformation.
         * You can specify one of the predefined recipes provided by Amazon Personalize.
         * Alternatively, you can specify <code>performAutoML</code> and Amazon Personalize
         * will analyze your data and select the optimum USER_PERSONALIZATION recipe for
         * you.</p>  <p>Amazon Personalize doesn't support configuring the
         * <code>hpoObjective</code> for solution hyperparameter optimization at this
         * time.</p>  <p> <b>Status</b> </p> <p>A solution can be in one of the
         * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
         * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
         * IN_PROGRESS</p> </li> </ul> <p>To get the status of the solution, call
         * <a>DescribeSolution</a>. Wait until the status shows as ACTIVE before calling
         * <code>CreateSolutionVersion</code>.</p> <p class="title"> <b>Related APIs</b>
         * </p> <ul> <li> <p> <a>ListSolutions</a> </p> </li> <li> <p>
         * <a>CreateSolutionVersion</a> </p> </li> <li> <p> <a>DescribeSolution</a> </p>
         * </li> <li> <p> <a>DeleteSolution</a> </p> </li> </ul> <ul> <li> <p>
         * <a>ListSolutionVersions</a> </p> </li> <li> <p> <a>DescribeSolutionVersion</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateSolution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSolutionOutcomeCallable CreateSolutionCallable(const Model::CreateSolutionRequest& request) const;

        /**
         * <p>Creates the configuration for training a model. A trained model is known as a
         * solution. After the configuration is created, you train the model (create a
         * solution) by calling the <a>CreateSolutionVersion</a> operation. Every time you
         * call <code>CreateSolutionVersion</code>, a new version of the solution is
         * created.</p> <p>After creating a solution version, you check its accuracy by
         * calling <a>GetSolutionMetrics</a>. When you are satisfied with the version, you
         * deploy it using <a>CreateCampaign</a>. The campaign provides recommendations to
         * a client through the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
         * API.</p> <p>To train a model, Amazon Personalize requires training data and a
         * recipe. The training data comes from the dataset group that you provide in the
         * request. A recipe specifies the training algorithm and a feature transformation.
         * You can specify one of the predefined recipes provided by Amazon Personalize.
         * Alternatively, you can specify <code>performAutoML</code> and Amazon Personalize
         * will analyze your data and select the optimum USER_PERSONALIZATION recipe for
         * you.</p>  <p>Amazon Personalize doesn't support configuring the
         * <code>hpoObjective</code> for solution hyperparameter optimization at this
         * time.</p>  <p> <b>Status</b> </p> <p>A solution can be in one of the
         * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
         * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
         * IN_PROGRESS</p> </li> </ul> <p>To get the status of the solution, call
         * <a>DescribeSolution</a>. Wait until the status shows as ACTIVE before calling
         * <code>CreateSolutionVersion</code>.</p> <p class="title"> <b>Related APIs</b>
         * </p> <ul> <li> <p> <a>ListSolutions</a> </p> </li> <li> <p>
         * <a>CreateSolutionVersion</a> </p> </li> <li> <p> <a>DescribeSolution</a> </p>
         * </li> <li> <p> <a>DeleteSolution</a> </p> </li> </ul> <ul> <li> <p>
         * <a>ListSolutionVersions</a> </p> </li> <li> <p> <a>DescribeSolutionVersion</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateSolution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSolutionAsync(const Model::CreateSolutionRequest& request, const CreateSolutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Trains or retrains an active solution. A solution is created using the
         * <a>CreateSolution</a> operation and must be in the ACTIVE state before calling
         * <code>CreateSolutionVersion</code>. A new version of the solution is created
         * every time you call this operation.</p> <p> <b>Status</b> </p> <p>A solution
         * version can be in one of the following states:</p> <ul> <li> <p>CREATE
         * PENDING</p> </li> <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li>
         * <li> <p>CREATE FAILED</p> </li> <li> <p>CREATE STOPPING</p> </li> <li> <p>CREATE
         * STOPPED</p> </li> </ul> <p>To get the status of the version, call
         * <a>DescribeSolutionVersion</a>. Wait until the status shows as ACTIVE before
         * calling <code>CreateCampaign</code>.</p> <p>If the status shows as CREATE
         * FAILED, the response includes a <code>failureReason</code> key, which describes
         * why the job failed.</p> <p class="title"> <b>Related APIs</b> </p> <ul> <li> <p>
         * <a>ListSolutionVersions</a> </p> </li> <li> <p> <a>DescribeSolutionVersion</a>
         * </p> </li> </ul> <ul> <li> <p> <a>ListSolutions</a> </p> </li> <li> <p>
         * <a>CreateSolution</a> </p> </li> <li> <p> <a>DescribeSolution</a> </p> </li>
         * <li> <p> <a>DeleteSolution</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateSolutionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSolutionVersionOutcome CreateSolutionVersion(const Model::CreateSolutionVersionRequest& request) const;

        /**
         * <p>Trains or retrains an active solution. A solution is created using the
         * <a>CreateSolution</a> operation and must be in the ACTIVE state before calling
         * <code>CreateSolutionVersion</code>. A new version of the solution is created
         * every time you call this operation.</p> <p> <b>Status</b> </p> <p>A solution
         * version can be in one of the following states:</p> <ul> <li> <p>CREATE
         * PENDING</p> </li> <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li>
         * <li> <p>CREATE FAILED</p> </li> <li> <p>CREATE STOPPING</p> </li> <li> <p>CREATE
         * STOPPED</p> </li> </ul> <p>To get the status of the version, call
         * <a>DescribeSolutionVersion</a>. Wait until the status shows as ACTIVE before
         * calling <code>CreateCampaign</code>.</p> <p>If the status shows as CREATE
         * FAILED, the response includes a <code>failureReason</code> key, which describes
         * why the job failed.</p> <p class="title"> <b>Related APIs</b> </p> <ul> <li> <p>
         * <a>ListSolutionVersions</a> </p> </li> <li> <p> <a>DescribeSolutionVersion</a>
         * </p> </li> </ul> <ul> <li> <p> <a>ListSolutions</a> </p> </li> <li> <p>
         * <a>CreateSolution</a> </p> </li> <li> <p> <a>DescribeSolution</a> </p> </li>
         * <li> <p> <a>DeleteSolution</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateSolutionVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSolutionVersionOutcomeCallable CreateSolutionVersionCallable(const Model::CreateSolutionVersionRequest& request) const;

        /**
         * <p>Trains or retrains an active solution. A solution is created using the
         * <a>CreateSolution</a> operation and must be in the ACTIVE state before calling
         * <code>CreateSolutionVersion</code>. A new version of the solution is created
         * every time you call this operation.</p> <p> <b>Status</b> </p> <p>A solution
         * version can be in one of the following states:</p> <ul> <li> <p>CREATE
         * PENDING</p> </li> <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li>
         * <li> <p>CREATE FAILED</p> </li> <li> <p>CREATE STOPPING</p> </li> <li> <p>CREATE
         * STOPPED</p> </li> </ul> <p>To get the status of the version, call
         * <a>DescribeSolutionVersion</a>. Wait until the status shows as ACTIVE before
         * calling <code>CreateCampaign</code>.</p> <p>If the status shows as CREATE
         * FAILED, the response includes a <code>failureReason</code> key, which describes
         * why the job failed.</p> <p class="title"> <b>Related APIs</b> </p> <ul> <li> <p>
         * <a>ListSolutionVersions</a> </p> </li> <li> <p> <a>DescribeSolutionVersion</a>
         * </p> </li> </ul> <ul> <li> <p> <a>ListSolutions</a> </p> </li> <li> <p>
         * <a>CreateSolution</a> </p> </li> <li> <p> <a>DescribeSolution</a> </p> </li>
         * <li> <p> <a>DeleteSolution</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateSolutionVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSolutionVersionAsync(const Model::CreateSolutionVersionRequest& request, const CreateSolutionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a campaign by deleting the solution deployment. The solution that the
         * campaign is based on is not deleted and can be redeployed when needed. A deleted
         * campaign can no longer be specified in a <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
         * request. For more information on campaigns, see
         * <a>CreateCampaign</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCampaignOutcome DeleteCampaign(const Model::DeleteCampaignRequest& request) const;

        /**
         * <p>Removes a campaign by deleting the solution deployment. The solution that the
         * campaign is based on is not deleted and can be redeployed when needed. A deleted
         * campaign can no longer be specified in a <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
         * request. For more information on campaigns, see
         * <a>CreateCampaign</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteCampaign">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCampaignOutcomeCallable DeleteCampaignCallable(const Model::DeleteCampaignRequest& request) const;

        /**
         * <p>Removes a campaign by deleting the solution deployment. The solution that the
         * campaign is based on is not deleted and can be redeployed when needed. A deleted
         * campaign can no longer be specified in a <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
         * request. For more information on campaigns, see
         * <a>CreateCampaign</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteCampaign">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCampaignAsync(const Model::DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a dataset. You can't delete a dataset if an associated
         * <code>DatasetImportJob</code> or <code>SolutionVersion</code> is in the CREATE
         * PENDING or IN PROGRESS state. For more information on datasets, see
         * <a>CreateDataset</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest& request) const;

        /**
         * <p>Deletes a dataset. You can't delete a dataset if an associated
         * <code>DatasetImportJob</code> or <code>SolutionVersion</code> is in the CREATE
         * PENDING or IN PROGRESS state. For more information on datasets, see
         * <a>CreateDataset</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const Model::DeleteDatasetRequest& request) const;

        /**
         * <p>Deletes a dataset. You can't delete a dataset if an associated
         * <code>DatasetImportJob</code> or <code>SolutionVersion</code> is in the CREATE
         * PENDING or IN PROGRESS state. For more information on datasets, see
         * <a>CreateDataset</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatasetAsync(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a dataset group. Before you delete a dataset group, you must delete
         * the following:</p> <ul> <li> <p>All associated event trackers.</p> </li> <li>
         * <p>All associated solutions.</p> </li> <li> <p>All datasets in the dataset
         * group.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteDatasetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetGroupOutcome DeleteDatasetGroup(const Model::DeleteDatasetGroupRequest& request) const;

        /**
         * <p>Deletes a dataset group. Before you delete a dataset group, you must delete
         * the following:</p> <ul> <li> <p>All associated event trackers.</p> </li> <li>
         * <p>All associated solutions.</p> </li> <li> <p>All datasets in the dataset
         * group.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteDatasetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatasetGroupOutcomeCallable DeleteDatasetGroupCallable(const Model::DeleteDatasetGroupRequest& request) const;

        /**
         * <p>Deletes a dataset group. Before you delete a dataset group, you must delete
         * the following:</p> <ul> <li> <p>All associated event trackers.</p> </li> <li>
         * <p>All associated solutions.</p> </li> <li> <p>All datasets in the dataset
         * group.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteDatasetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatasetGroupAsync(const Model::DeleteDatasetGroupRequest& request, const DeleteDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the event tracker. Does not delete the event-interactions dataset
         * from the associated dataset group. For more information on event trackers, see
         * <a>CreateEventTracker</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteEventTracker">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventTrackerOutcome DeleteEventTracker(const Model::DeleteEventTrackerRequest& request) const;

        /**
         * <p>Deletes the event tracker. Does not delete the event-interactions dataset
         * from the associated dataset group. For more information on event trackers, see
         * <a>CreateEventTracker</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteEventTracker">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventTrackerOutcomeCallable DeleteEventTrackerCallable(const Model::DeleteEventTrackerRequest& request) const;

        /**
         * <p>Deletes the event tracker. Does not delete the event-interactions dataset
         * from the associated dataset group. For more information on event trackers, see
         * <a>CreateEventTracker</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteEventTracker">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventTrackerAsync(const Model::DeleteEventTrackerRequest& request, const DeleteEventTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFilterOutcome DeleteFilter(const Model::DeleteFilterRequest& request) const;

        /**
         * <p>Deletes a filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFilterOutcomeCallable DeleteFilterCallable(const Model::DeleteFilterRequest& request) const;

        /**
         * <p>Deletes a filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFilterAsync(const Model::DeleteFilterRequest& request, const DeleteFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a schema. Before deleting a schema, you must delete all datasets
         * referencing the schema. For more information on schemas, see
         * <a>CreateSchema</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSchemaOutcome DeleteSchema(const Model::DeleteSchemaRequest& request) const;

        /**
         * <p>Deletes a schema. Before deleting a schema, you must delete all datasets
         * referencing the schema. For more information on schemas, see
         * <a>CreateSchema</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSchemaOutcomeCallable DeleteSchemaCallable(const Model::DeleteSchemaRequest& request) const;

        /**
         * <p>Deletes a schema. Before deleting a schema, you must delete all datasets
         * referencing the schema. For more information on schemas, see
         * <a>CreateSchema</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteSchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSchemaAsync(const Model::DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes all versions of a solution and the <code>Solution</code> object
         * itself. Before deleting a solution, you must delete all campaigns based on the
         * solution. To determine what campaigns are using the solution, call
         * <a>ListCampaigns</a> and supply the Amazon Resource Name (ARN) of the solution.
         * You can't delete a solution if an associated <code>SolutionVersion</code> is in
         * the CREATE PENDING or IN PROGRESS state. For more information on solutions, see
         * <a>CreateSolution</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteSolution">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSolutionOutcome DeleteSolution(const Model::DeleteSolutionRequest& request) const;

        /**
         * <p>Deletes all versions of a solution and the <code>Solution</code> object
         * itself. Before deleting a solution, you must delete all campaigns based on the
         * solution. To determine what campaigns are using the solution, call
         * <a>ListCampaigns</a> and supply the Amazon Resource Name (ARN) of the solution.
         * You can't delete a solution if an associated <code>SolutionVersion</code> is in
         * the CREATE PENDING or IN PROGRESS state. For more information on solutions, see
         * <a>CreateSolution</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteSolution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSolutionOutcomeCallable DeleteSolutionCallable(const Model::DeleteSolutionRequest& request) const;

        /**
         * <p>Deletes all versions of a solution and the <code>Solution</code> object
         * itself. Before deleting a solution, you must delete all campaigns based on the
         * solution. To determine what campaigns are using the solution, call
         * <a>ListCampaigns</a> and supply the Amazon Resource Name (ARN) of the solution.
         * You can't delete a solution if an associated <code>SolutionVersion</code> is in
         * the CREATE PENDING or IN PROGRESS state. For more information on solutions, see
         * <a>CreateSolution</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteSolution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSolutionAsync(const Model::DeleteSolutionRequest& request, const DeleteSolutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the given algorithm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeAlgorithm">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlgorithmOutcome DescribeAlgorithm(const Model::DescribeAlgorithmRequest& request) const;

        /**
         * <p>Describes the given algorithm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeAlgorithm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAlgorithmOutcomeCallable DescribeAlgorithmCallable(const Model::DescribeAlgorithmRequest& request) const;

        /**
         * <p>Describes the given algorithm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeAlgorithm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAlgorithmAsync(const Model::DescribeAlgorithmRequest& request, const DescribeAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties of a batch inference job including name, Amazon Resource
         * Name (ARN), status, input and output configurations, and the ARN of the solution
         * version used to generate the recommendations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeBatchInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBatchInferenceJobOutcome DescribeBatchInferenceJob(const Model::DescribeBatchInferenceJobRequest& request) const;

        /**
         * <p>Gets the properties of a batch inference job including name, Amazon Resource
         * Name (ARN), status, input and output configurations, and the ARN of the solution
         * version used to generate the recommendations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeBatchInferenceJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBatchInferenceJobOutcomeCallable DescribeBatchInferenceJobCallable(const Model::DescribeBatchInferenceJobRequest& request) const;

        /**
         * <p>Gets the properties of a batch inference job including name, Amazon Resource
         * Name (ARN), status, input and output configurations, and the ARN of the solution
         * version used to generate the recommendations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeBatchInferenceJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBatchInferenceJobAsync(const Model::DescribeBatchInferenceJobRequest& request, const DescribeBatchInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the given campaign, including its status.</p> <p>A campaign can be
         * in one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
         * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt;
         * DELETE IN_PROGRESS</p> </li> </ul> <p>When the <code>status</code> is
         * <code>CREATE FAILED</code>, the response includes the <code>failureReason</code>
         * key, which describes why.</p> <p>For more information on campaigns, see
         * <a>CreateCampaign</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCampaignOutcome DescribeCampaign(const Model::DescribeCampaignRequest& request) const;

        /**
         * <p>Describes the given campaign, including its status.</p> <p>A campaign can be
         * in one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
         * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt;
         * DELETE IN_PROGRESS</p> </li> </ul> <p>When the <code>status</code> is
         * <code>CREATE FAILED</code>, the response includes the <code>failureReason</code>
         * key, which describes why.</p> <p>For more information on campaigns, see
         * <a>CreateCampaign</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeCampaign">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCampaignOutcomeCallable DescribeCampaignCallable(const Model::DescribeCampaignRequest& request) const;

        /**
         * <p>Describes the given campaign, including its status.</p> <p>A campaign can be
         * in one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
         * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt;
         * DELETE IN_PROGRESS</p> </li> </ul> <p>When the <code>status</code> is
         * <code>CREATE FAILED</code>, the response includes the <code>failureReason</code>
         * key, which describes why.</p> <p>For more information on campaigns, see
         * <a>CreateCampaign</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeCampaign">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCampaignAsync(const Model::DescribeCampaignRequest& request, const DescribeCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the given dataset. For more information on datasets, see
         * <a>CreateDataset</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;

        /**
         * <p>Describes the given dataset. For more information on datasets, see
         * <a>CreateDataset</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const Model::DescribeDatasetRequest& request) const;

        /**
         * <p>Describes the given dataset. For more information on datasets, see
         * <a>CreateDataset</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetAsync(const Model::DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the dataset export job created by <a>CreateDatasetExportJob</a>,
         * including the export job status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDatasetExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetExportJobOutcome DescribeDatasetExportJob(const Model::DescribeDatasetExportJobRequest& request) const;

        /**
         * <p>Describes the dataset export job created by <a>CreateDatasetExportJob</a>,
         * including the export job status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDatasetExportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetExportJobOutcomeCallable DescribeDatasetExportJobCallable(const Model::DescribeDatasetExportJobRequest& request) const;

        /**
         * <p>Describes the dataset export job created by <a>CreateDatasetExportJob</a>,
         * including the export job status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDatasetExportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetExportJobAsync(const Model::DescribeDatasetExportJobRequest& request, const DescribeDatasetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the given dataset group. For more information on dataset groups,
         * see <a>CreateDatasetGroup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDatasetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetGroupOutcome DescribeDatasetGroup(const Model::DescribeDatasetGroupRequest& request) const;

        /**
         * <p>Describes the given dataset group. For more information on dataset groups,
         * see <a>CreateDatasetGroup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDatasetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetGroupOutcomeCallable DescribeDatasetGroupCallable(const Model::DescribeDatasetGroupRequest& request) const;

        /**
         * <p>Describes the given dataset group. For more information on dataset groups,
         * see <a>CreateDatasetGroup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDatasetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetGroupAsync(const Model::DescribeDatasetGroupRequest& request, const DescribeDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the dataset import job created by <a>CreateDatasetImportJob</a>,
         * including the import job status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDatasetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetImportJobOutcome DescribeDatasetImportJob(const Model::DescribeDatasetImportJobRequest& request) const;

        /**
         * <p>Describes the dataset import job created by <a>CreateDatasetImportJob</a>,
         * including the import job status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDatasetImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetImportJobOutcomeCallable DescribeDatasetImportJobCallable(const Model::DescribeDatasetImportJobRequest& request) const;

        /**
         * <p>Describes the dataset import job created by <a>CreateDatasetImportJob</a>,
         * including the import job status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDatasetImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetImportJobAsync(const Model::DescribeDatasetImportJobRequest& request, const DescribeDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an event tracker. The response includes the <code>trackingId</code>
         * and <code>status</code> of the event tracker. For more information on event
         * trackers, see <a>CreateEventTracker</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeEventTracker">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventTrackerOutcome DescribeEventTracker(const Model::DescribeEventTrackerRequest& request) const;

        /**
         * <p>Describes an event tracker. The response includes the <code>trackingId</code>
         * and <code>status</code> of the event tracker. For more information on event
         * trackers, see <a>CreateEventTracker</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeEventTracker">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventTrackerOutcomeCallable DescribeEventTrackerCallable(const Model::DescribeEventTrackerRequest& request) const;

        /**
         * <p>Describes an event tracker. The response includes the <code>trackingId</code>
         * and <code>status</code> of the event tracker. For more information on event
         * trackers, see <a>CreateEventTracker</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeEventTracker">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventTrackerAsync(const Model::DescribeEventTrackerRequest& request, const DescribeEventTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the given feature transformation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeFeatureTransformation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFeatureTransformationOutcome DescribeFeatureTransformation(const Model::DescribeFeatureTransformationRequest& request) const;

        /**
         * <p>Describes the given feature transformation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeFeatureTransformation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFeatureTransformationOutcomeCallable DescribeFeatureTransformationCallable(const Model::DescribeFeatureTransformationRequest& request) const;

        /**
         * <p>Describes the given feature transformation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeFeatureTransformation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFeatureTransformationAsync(const Model::DescribeFeatureTransformationRequest& request, const DescribeFeatureTransformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a filter's properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFilterOutcome DescribeFilter(const Model::DescribeFilterRequest& request) const;

        /**
         * <p>Describes a filter's properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFilterOutcomeCallable DescribeFilterCallable(const Model::DescribeFilterRequest& request) const;

        /**
         * <p>Describes a filter's properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFilterAsync(const Model::DescribeFilterRequest& request, const DescribeFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a recipe.</p> <p>A recipe contains three items:</p> <ul> <li> <p>An
         * algorithm that trains a model.</p> </li> <li> <p>Hyperparameters that govern the
         * training.</p> </li> <li> <p>Feature transformation information for modifying the
         * input data before training.</p> </li> </ul> <p>Amazon Personalize provides a set
         * of predefined recipes. You specify a recipe when you create a solution with the
         * <a>CreateSolution</a> API. <code>CreateSolution</code> trains a model by using
         * the algorithm in the specified recipe and a training dataset. The solution, when
         * deployed as a campaign, can provide recommendations using the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecipeOutcome DescribeRecipe(const Model::DescribeRecipeRequest& request) const;

        /**
         * <p>Describes a recipe.</p> <p>A recipe contains three items:</p> <ul> <li> <p>An
         * algorithm that trains a model.</p> </li> <li> <p>Hyperparameters that govern the
         * training.</p> </li> <li> <p>Feature transformation information for modifying the
         * input data before training.</p> </li> </ul> <p>Amazon Personalize provides a set
         * of predefined recipes. You specify a recipe when you create a solution with the
         * <a>CreateSolution</a> API. <code>CreateSolution</code> trains a model by using
         * the algorithm in the specified recipe and a training dataset. The solution, when
         * deployed as a campaign, can provide recommendations using the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeRecipe">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRecipeOutcomeCallable DescribeRecipeCallable(const Model::DescribeRecipeRequest& request) const;

        /**
         * <p>Describes a recipe.</p> <p>A recipe contains three items:</p> <ul> <li> <p>An
         * algorithm that trains a model.</p> </li> <li> <p>Hyperparameters that govern the
         * training.</p> </li> <li> <p>Feature transformation information for modifying the
         * input data before training.</p> </li> </ul> <p>Amazon Personalize provides a set
         * of predefined recipes. You specify a recipe when you create a solution with the
         * <a>CreateSolution</a> API. <code>CreateSolution</code> trains a model by using
         * the algorithm in the specified recipe and a training dataset. The solution, when
         * deployed as a campaign, can provide recommendations using the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeRecipe">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRecipeAsync(const Model::DescribeRecipeRequest& request, const DescribeRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a schema. For more information on schemas, see
         * <a>CreateSchema</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSchemaOutcome DescribeSchema(const Model::DescribeSchemaRequest& request) const;

        /**
         * <p>Describes a schema. For more information on schemas, see
         * <a>CreateSchema</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSchemaOutcomeCallable DescribeSchemaCallable(const Model::DescribeSchemaRequest& request) const;

        /**
         * <p>Describes a schema. For more information on schemas, see
         * <a>CreateSchema</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeSchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSchemaAsync(const Model::DescribeSchemaRequest& request, const DescribeSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a solution. For more information on solutions, see
         * <a>CreateSolution</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeSolution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSolutionOutcome DescribeSolution(const Model::DescribeSolutionRequest& request) const;

        /**
         * <p>Describes a solution. For more information on solutions, see
         * <a>CreateSolution</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeSolution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSolutionOutcomeCallable DescribeSolutionCallable(const Model::DescribeSolutionRequest& request) const;

        /**
         * <p>Describes a solution. For more information on solutions, see
         * <a>CreateSolution</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeSolution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSolutionAsync(const Model::DescribeSolutionRequest& request, const DescribeSolutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a specific version of a solution. For more information on
         * solutions, see <a>CreateSolution</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeSolutionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSolutionVersionOutcome DescribeSolutionVersion(const Model::DescribeSolutionVersionRequest& request) const;

        /**
         * <p>Describes a specific version of a solution. For more information on
         * solutions, see <a>CreateSolution</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeSolutionVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSolutionVersionOutcomeCallable DescribeSolutionVersionCallable(const Model::DescribeSolutionVersionRequest& request) const;

        /**
         * <p>Describes a specific version of a solution. For more information on
         * solutions, see <a>CreateSolution</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeSolutionVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSolutionVersionAsync(const Model::DescribeSolutionVersionRequest& request, const DescribeSolutionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the metrics for the specified solution version.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/GetSolutionMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSolutionMetricsOutcome GetSolutionMetrics(const Model::GetSolutionMetricsRequest& request) const;

        /**
         * <p>Gets the metrics for the specified solution version.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/GetSolutionMetrics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSolutionMetricsOutcomeCallable GetSolutionMetricsCallable(const Model::GetSolutionMetricsRequest& request) const;

        /**
         * <p>Gets the metrics for the specified solution version.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/GetSolutionMetrics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSolutionMetricsAsync(const Model::GetSolutionMetricsRequest& request, const GetSolutionMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the batch inference jobs that have been performed off of a
         * solution version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListBatchInferenceJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBatchInferenceJobsOutcome ListBatchInferenceJobs(const Model::ListBatchInferenceJobsRequest& request) const;

        /**
         * <p>Gets a list of the batch inference jobs that have been performed off of a
         * solution version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListBatchInferenceJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBatchInferenceJobsOutcomeCallable ListBatchInferenceJobsCallable(const Model::ListBatchInferenceJobsRequest& request) const;

        /**
         * <p>Gets a list of the batch inference jobs that have been performed off of a
         * solution version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListBatchInferenceJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBatchInferenceJobsAsync(const Model::ListBatchInferenceJobsRequest& request, const ListBatchInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of campaigns that use the given solution. When a solution is
         * not specified, all the campaigns associated with the account are listed. The
         * response provides the properties for each campaign, including the Amazon
         * Resource Name (ARN). For more information on campaigns, see
         * <a>CreateCampaign</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListCampaigns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCampaignsOutcome ListCampaigns(const Model::ListCampaignsRequest& request) const;

        /**
         * <p>Returns a list of campaigns that use the given solution. When a solution is
         * not specified, all the campaigns associated with the account are listed. The
         * response provides the properties for each campaign, including the Amazon
         * Resource Name (ARN). For more information on campaigns, see
         * <a>CreateCampaign</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListCampaigns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCampaignsOutcomeCallable ListCampaignsCallable(const Model::ListCampaignsRequest& request) const;

        /**
         * <p>Returns a list of campaigns that use the given solution. When a solution is
         * not specified, all the campaigns associated with the account are listed. The
         * response provides the properties for each campaign, including the Amazon
         * Resource Name (ARN). For more information on campaigns, see
         * <a>CreateCampaign</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListCampaigns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCampaignsAsync(const Model::ListCampaignsRequest& request, const ListCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of dataset export jobs that use the given dataset. When a
         * dataset is not specified, all the dataset export jobs associated with the
         * account are listed. The response provides the properties for each dataset export
         * job, including the Amazon Resource Name (ARN). For more information on dataset
         * export jobs, see <a>CreateDatasetExportJob</a>. For more information on
         * datasets, see <a>CreateDataset</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListDatasetExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetExportJobsOutcome ListDatasetExportJobs(const Model::ListDatasetExportJobsRequest& request) const;

        /**
         * <p>Returns a list of dataset export jobs that use the given dataset. When a
         * dataset is not specified, all the dataset export jobs associated with the
         * account are listed. The response provides the properties for each dataset export
         * job, including the Amazon Resource Name (ARN). For more information on dataset
         * export jobs, see <a>CreateDatasetExportJob</a>. For more information on
         * datasets, see <a>CreateDataset</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListDatasetExportJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetExportJobsOutcomeCallable ListDatasetExportJobsCallable(const Model::ListDatasetExportJobsRequest& request) const;

        /**
         * <p>Returns a list of dataset export jobs that use the given dataset. When a
         * dataset is not specified, all the dataset export jobs associated with the
         * account are listed. The response provides the properties for each dataset export
         * job, including the Amazon Resource Name (ARN). For more information on dataset
         * export jobs, see <a>CreateDatasetExportJob</a>. For more information on
         * datasets, see <a>CreateDataset</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListDatasetExportJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetExportJobsAsync(const Model::ListDatasetExportJobsRequest& request, const ListDatasetExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of dataset groups. The response provides the properties for
         * each dataset group, including the Amazon Resource Name (ARN). For more
         * information on dataset groups, see <a>CreateDatasetGroup</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListDatasetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetGroupsOutcome ListDatasetGroups(const Model::ListDatasetGroupsRequest& request) const;

        /**
         * <p>Returns a list of dataset groups. The response provides the properties for
         * each dataset group, including the Amazon Resource Name (ARN). For more
         * information on dataset groups, see <a>CreateDatasetGroup</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListDatasetGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetGroupsOutcomeCallable ListDatasetGroupsCallable(const Model::ListDatasetGroupsRequest& request) const;

        /**
         * <p>Returns a list of dataset groups. The response provides the properties for
         * each dataset group, including the Amazon Resource Name (ARN). For more
         * information on dataset groups, see <a>CreateDatasetGroup</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListDatasetGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetGroupsAsync(const Model::ListDatasetGroupsRequest& request, const ListDatasetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of dataset import jobs that use the given dataset. When a
         * dataset is not specified, all the dataset import jobs associated with the
         * account are listed. The response provides the properties for each dataset import
         * job, including the Amazon Resource Name (ARN). For more information on dataset
         * import jobs, see <a>CreateDatasetImportJob</a>. For more information on
         * datasets, see <a>CreateDataset</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListDatasetImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetImportJobsOutcome ListDatasetImportJobs(const Model::ListDatasetImportJobsRequest& request) const;

        /**
         * <p>Returns a list of dataset import jobs that use the given dataset. When a
         * dataset is not specified, all the dataset import jobs associated with the
         * account are listed. The response provides the properties for each dataset import
         * job, including the Amazon Resource Name (ARN). For more information on dataset
         * import jobs, see <a>CreateDatasetImportJob</a>. For more information on
         * datasets, see <a>CreateDataset</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListDatasetImportJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetImportJobsOutcomeCallable ListDatasetImportJobsCallable(const Model::ListDatasetImportJobsRequest& request) const;

        /**
         * <p>Returns a list of dataset import jobs that use the given dataset. When a
         * dataset is not specified, all the dataset import jobs associated with the
         * account are listed. The response provides the properties for each dataset import
         * job, including the Amazon Resource Name (ARN). For more information on dataset
         * import jobs, see <a>CreateDatasetImportJob</a>. For more information on
         * datasets, see <a>CreateDataset</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListDatasetImportJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetImportJobsAsync(const Model::ListDatasetImportJobsRequest& request, const ListDatasetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of datasets contained in the given dataset group. The
         * response provides the properties for each dataset, including the Amazon Resource
         * Name (ARN). For more information on datasets, see
         * <a>CreateDataset</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListDatasets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetsOutcome ListDatasets(const Model::ListDatasetsRequest& request) const;

        /**
         * <p>Returns the list of datasets contained in the given dataset group. The
         * response provides the properties for each dataset, including the Amazon Resource
         * Name (ARN). For more information on datasets, see
         * <a>CreateDataset</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListDatasets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const Model::ListDatasetsRequest& request) const;

        /**
         * <p>Returns the list of datasets contained in the given dataset group. The
         * response provides the properties for each dataset, including the Amazon Resource
         * Name (ARN). For more information on datasets, see
         * <a>CreateDataset</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListDatasets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetsAsync(const Model::ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of event trackers associated with the account. The response
         * provides the properties for each event tracker, including the Amazon Resource
         * Name (ARN) and tracking ID. For more information on event trackers, see
         * <a>CreateEventTracker</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListEventTrackers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventTrackersOutcome ListEventTrackers(const Model::ListEventTrackersRequest& request) const;

        /**
         * <p>Returns the list of event trackers associated with the account. The response
         * provides the properties for each event tracker, including the Amazon Resource
         * Name (ARN) and tracking ID. For more information on event trackers, see
         * <a>CreateEventTracker</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListEventTrackers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventTrackersOutcomeCallable ListEventTrackersCallable(const Model::ListEventTrackersRequest& request) const;

        /**
         * <p>Returns the list of event trackers associated with the account. The response
         * provides the properties for each event tracker, including the Amazon Resource
         * Name (ARN) and tracking ID. For more information on event trackers, see
         * <a>CreateEventTracker</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListEventTrackers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventTrackersAsync(const Model::ListEventTrackersRequest& request, const ListEventTrackersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all filters that belong to a given dataset group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFiltersOutcome ListFilters(const Model::ListFiltersRequest& request) const;

        /**
         * <p>Lists all filters that belong to a given dataset group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListFilters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFiltersOutcomeCallable ListFiltersCallable(const Model::ListFiltersRequest& request) const;

        /**
         * <p>Lists all filters that belong to a given dataset group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListFilters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFiltersAsync(const Model::ListFiltersRequest& request, const ListFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of available recipes. The response provides the properties for
         * each recipe, including the recipe's Amazon Resource Name (ARN).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListRecipes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecipesOutcome ListRecipes(const Model::ListRecipesRequest& request) const;

        /**
         * <p>Returns a list of available recipes. The response provides the properties for
         * each recipe, including the recipe's Amazon Resource Name (ARN).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListRecipes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecipesOutcomeCallable ListRecipesCallable(const Model::ListRecipesRequest& request) const;

        /**
         * <p>Returns a list of available recipes. The response provides the properties for
         * each recipe, including the recipe's Amazon Resource Name (ARN).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListRecipes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecipesAsync(const Model::ListRecipesRequest& request, const ListRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of schemas associated with the account. The response
         * provides the properties for each schema, including the Amazon Resource Name
         * (ARN). For more information on schemas, see <a>CreateSchema</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemasOutcome ListSchemas(const Model::ListSchemasRequest& request) const;

        /**
         * <p>Returns the list of schemas associated with the account. The response
         * provides the properties for each schema, including the Amazon Resource Name
         * (ARN). For more information on schemas, see <a>CreateSchema</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListSchemas">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSchemasOutcomeCallable ListSchemasCallable(const Model::ListSchemasRequest& request) const;

        /**
         * <p>Returns the list of schemas associated with the account. The response
         * provides the properties for each schema, including the Amazon Resource Name
         * (ARN). For more information on schemas, see <a>CreateSchema</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListSchemas">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSchemasAsync(const Model::ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of solution versions for the given solution. When a solution
         * is not specified, all the solution versions associated with the account are
         * listed. The response provides the properties for each solution version,
         * including the Amazon Resource Name (ARN). For more information on solutions, see
         * <a>CreateSolution</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListSolutionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSolutionVersionsOutcome ListSolutionVersions(const Model::ListSolutionVersionsRequest& request) const;

        /**
         * <p>Returns a list of solution versions for the given solution. When a solution
         * is not specified, all the solution versions associated with the account are
         * listed. The response provides the properties for each solution version,
         * including the Amazon Resource Name (ARN). For more information on solutions, see
         * <a>CreateSolution</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListSolutionVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSolutionVersionsOutcomeCallable ListSolutionVersionsCallable(const Model::ListSolutionVersionsRequest& request) const;

        /**
         * <p>Returns a list of solution versions for the given solution. When a solution
         * is not specified, all the solution versions associated with the account are
         * listed. The response provides the properties for each solution version,
         * including the Amazon Resource Name (ARN). For more information on solutions, see
         * <a>CreateSolution</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListSolutionVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSolutionVersionsAsync(const Model::ListSolutionVersionsRequest& request, const ListSolutionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of solutions that use the given dataset group. When a dataset
         * group is not specified, all the solutions associated with the account are
         * listed. The response provides the properties for each solution, including the
         * Amazon Resource Name (ARN). For more information on solutions, see
         * <a>CreateSolution</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListSolutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSolutionsOutcome ListSolutions(const Model::ListSolutionsRequest& request) const;

        /**
         * <p>Returns a list of solutions that use the given dataset group. When a dataset
         * group is not specified, all the solutions associated with the account are
         * listed. The response provides the properties for each solution, including the
         * Amazon Resource Name (ARN). For more information on solutions, see
         * <a>CreateSolution</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListSolutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSolutionsOutcomeCallable ListSolutionsCallable(const Model::ListSolutionsRequest& request) const;

        /**
         * <p>Returns a list of solutions that use the given dataset group. When a dataset
         * group is not specified, all the solutions associated with the account are
         * listed. The response provides the properties for each solution, including the
         * Amazon Resource Name (ARN). For more information on solutions, see
         * <a>CreateSolution</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListSolutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSolutionsAsync(const Model::ListSolutionsRequest& request, const ListSolutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops creating a solution version that is in a state of CREATE_PENDING or
         * CREATE IN_PROGRESS. </p> <p>Depending on the current state of the solution
         * version, the solution version state changes as follows:</p> <ul> <li>
         * <p>CREATE_PENDING &gt; CREATE_STOPPED</p> <p>or</p> </li> <li>
         * <p>CREATE_IN_PROGRESS &gt; CREATE_STOPPING &gt; CREATE_STOPPED</p> </li> </ul>
         * <p>You are billed for all of the training completed up until you stop the
         * solution version creation. You cannot resume creating a solution version once it
         * has been stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/StopSolutionVersionCreation">AWS
         * API Reference</a></p>
         */
        virtual Model::StopSolutionVersionCreationOutcome StopSolutionVersionCreation(const Model::StopSolutionVersionCreationRequest& request) const;

        /**
         * <p>Stops creating a solution version that is in a state of CREATE_PENDING or
         * CREATE IN_PROGRESS. </p> <p>Depending on the current state of the solution
         * version, the solution version state changes as follows:</p> <ul> <li>
         * <p>CREATE_PENDING &gt; CREATE_STOPPED</p> <p>or</p> </li> <li>
         * <p>CREATE_IN_PROGRESS &gt; CREATE_STOPPING &gt; CREATE_STOPPED</p> </li> </ul>
         * <p>You are billed for all of the training completed up until you stop the
         * solution version creation. You cannot resume creating a solution version once it
         * has been stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/StopSolutionVersionCreation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopSolutionVersionCreationOutcomeCallable StopSolutionVersionCreationCallable(const Model::StopSolutionVersionCreationRequest& request) const;

        /**
         * <p>Stops creating a solution version that is in a state of CREATE_PENDING or
         * CREATE IN_PROGRESS. </p> <p>Depending on the current state of the solution
         * version, the solution version state changes as follows:</p> <ul> <li>
         * <p>CREATE_PENDING &gt; CREATE_STOPPED</p> <p>or</p> </li> <li>
         * <p>CREATE_IN_PROGRESS &gt; CREATE_STOPPING &gt; CREATE_STOPPED</p> </li> </ul>
         * <p>You are billed for all of the training completed up until you stop the
         * solution version creation. You cannot resume creating a solution version once it
         * has been stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/StopSolutionVersionCreation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopSolutionVersionCreationAsync(const Model::StopSolutionVersionCreationRequest& request, const StopSolutionVersionCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a campaign by either deploying a new solution or changing the value
         * of the campaign's <code>minProvisionedTPS</code> parameter.</p> <p>To update a
         * campaign, the campaign status must be ACTIVE or CREATE FAILED. Check the
         * campaign status using the <a>DescribeCampaign</a> API.</p>  <p>You must
         * wait until the <code>status</code> of the updated campaign is
         * <code>ACTIVE</code> before asking the campaign for recommendations.</p> 
         * <p>For more information on campaigns, see <a>CreateCampaign</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/UpdateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignOutcome UpdateCampaign(const Model::UpdateCampaignRequest& request) const;

        /**
         * <p>Updates a campaign by either deploying a new solution or changing the value
         * of the campaign's <code>minProvisionedTPS</code> parameter.</p> <p>To update a
         * campaign, the campaign status must be ACTIVE or CREATE FAILED. Check the
         * campaign status using the <a>DescribeCampaign</a> API.</p>  <p>You must
         * wait until the <code>status</code> of the updated campaign is
         * <code>ACTIVE</code> before asking the campaign for recommendations.</p> 
         * <p>For more information on campaigns, see <a>CreateCampaign</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/UpdateCampaign">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCampaignOutcomeCallable UpdateCampaignCallable(const Model::UpdateCampaignRequest& request) const;

        /**
         * <p>Updates a campaign by either deploying a new solution or changing the value
         * of the campaign's <code>minProvisionedTPS</code> parameter.</p> <p>To update a
         * campaign, the campaign status must be ACTIVE or CREATE FAILED. Check the
         * campaign status using the <a>DescribeCampaign</a> API.</p>  <p>You must
         * wait until the <code>status</code> of the updated campaign is
         * <code>ACTIVE</code> before asking the campaign for recommendations.</p> 
         * <p>For more information on campaigns, see <a>CreateCampaign</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/UpdateCampaign">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCampaignAsync(const Model::UpdateCampaignRequest& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateBatchInferenceJobAsyncHelper(const Model::CreateBatchInferenceJobRequest& request, const CreateBatchInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCampaignAsyncHelper(const Model::CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDatasetAsyncHelper(const Model::CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDatasetExportJobAsyncHelper(const Model::CreateDatasetExportJobRequest& request, const CreateDatasetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDatasetGroupAsyncHelper(const Model::CreateDatasetGroupRequest& request, const CreateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDatasetImportJobAsyncHelper(const Model::CreateDatasetImportJobRequest& request, const CreateDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEventTrackerAsyncHelper(const Model::CreateEventTrackerRequest& request, const CreateEventTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFilterAsyncHelper(const Model::CreateFilterRequest& request, const CreateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSchemaAsyncHelper(const Model::CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSolutionAsyncHelper(const Model::CreateSolutionRequest& request, const CreateSolutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSolutionVersionAsyncHelper(const Model::CreateSolutionVersionRequest& request, const CreateSolutionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCampaignAsyncHelper(const Model::DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDatasetAsyncHelper(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDatasetGroupAsyncHelper(const Model::DeleteDatasetGroupRequest& request, const DeleteDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventTrackerAsyncHelper(const Model::DeleteEventTrackerRequest& request, const DeleteEventTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFilterAsyncHelper(const Model::DeleteFilterRequest& request, const DeleteFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSchemaAsyncHelper(const Model::DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSolutionAsyncHelper(const Model::DeleteSolutionRequest& request, const DeleteSolutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAlgorithmAsyncHelper(const Model::DescribeAlgorithmRequest& request, const DescribeAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBatchInferenceJobAsyncHelper(const Model::DescribeBatchInferenceJobRequest& request, const DescribeBatchInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCampaignAsyncHelper(const Model::DescribeCampaignRequest& request, const DescribeCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDatasetAsyncHelper(const Model::DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDatasetExportJobAsyncHelper(const Model::DescribeDatasetExportJobRequest& request, const DescribeDatasetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDatasetGroupAsyncHelper(const Model::DescribeDatasetGroupRequest& request, const DescribeDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDatasetImportJobAsyncHelper(const Model::DescribeDatasetImportJobRequest& request, const DescribeDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventTrackerAsyncHelper(const Model::DescribeEventTrackerRequest& request, const DescribeEventTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFeatureTransformationAsyncHelper(const Model::DescribeFeatureTransformationRequest& request, const DescribeFeatureTransformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFilterAsyncHelper(const Model::DescribeFilterRequest& request, const DescribeFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRecipeAsyncHelper(const Model::DescribeRecipeRequest& request, const DescribeRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSchemaAsyncHelper(const Model::DescribeSchemaRequest& request, const DescribeSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSolutionAsyncHelper(const Model::DescribeSolutionRequest& request, const DescribeSolutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSolutionVersionAsyncHelper(const Model::DescribeSolutionVersionRequest& request, const DescribeSolutionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSolutionMetricsAsyncHelper(const Model::GetSolutionMetricsRequest& request, const GetSolutionMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBatchInferenceJobsAsyncHelper(const Model::ListBatchInferenceJobsRequest& request, const ListBatchInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCampaignsAsyncHelper(const Model::ListCampaignsRequest& request, const ListCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatasetExportJobsAsyncHelper(const Model::ListDatasetExportJobsRequest& request, const ListDatasetExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatasetGroupsAsyncHelper(const Model::ListDatasetGroupsRequest& request, const ListDatasetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatasetImportJobsAsyncHelper(const Model::ListDatasetImportJobsRequest& request, const ListDatasetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatasetsAsyncHelper(const Model::ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEventTrackersAsyncHelper(const Model::ListEventTrackersRequest& request, const ListEventTrackersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFiltersAsyncHelper(const Model::ListFiltersRequest& request, const ListFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecipesAsyncHelper(const Model::ListRecipesRequest& request, const ListRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSchemasAsyncHelper(const Model::ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSolutionVersionsAsyncHelper(const Model::ListSolutionVersionsRequest& request, const ListSolutionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSolutionsAsyncHelper(const Model::ListSolutionsRequest& request, const ListSolutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopSolutionVersionCreationAsyncHelper(const Model::StopSolutionVersionCreationRequest& request, const StopSolutionVersionCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCampaignAsyncHelper(const Model::UpdateCampaignRequest& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Personalize
} // namespace Aws
