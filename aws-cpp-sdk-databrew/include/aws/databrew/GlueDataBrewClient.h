/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/databrew/model/BatchDeleteRecipeVersionResult.h>
#include <aws/databrew/model/CreateDatasetResult.h>
#include <aws/databrew/model/CreateProfileJobResult.h>
#include <aws/databrew/model/CreateProjectResult.h>
#include <aws/databrew/model/CreateRecipeResult.h>
#include <aws/databrew/model/CreateRecipeJobResult.h>
#include <aws/databrew/model/CreateRulesetResult.h>
#include <aws/databrew/model/CreateScheduleResult.h>
#include <aws/databrew/model/DeleteDatasetResult.h>
#include <aws/databrew/model/DeleteJobResult.h>
#include <aws/databrew/model/DeleteProjectResult.h>
#include <aws/databrew/model/DeleteRecipeVersionResult.h>
#include <aws/databrew/model/DeleteRulesetResult.h>
#include <aws/databrew/model/DeleteScheduleResult.h>
#include <aws/databrew/model/DescribeDatasetResult.h>
#include <aws/databrew/model/DescribeJobResult.h>
#include <aws/databrew/model/DescribeJobRunResult.h>
#include <aws/databrew/model/DescribeProjectResult.h>
#include <aws/databrew/model/DescribeRecipeResult.h>
#include <aws/databrew/model/DescribeRulesetResult.h>
#include <aws/databrew/model/DescribeScheduleResult.h>
#include <aws/databrew/model/ListDatasetsResult.h>
#include <aws/databrew/model/ListJobRunsResult.h>
#include <aws/databrew/model/ListJobsResult.h>
#include <aws/databrew/model/ListProjectsResult.h>
#include <aws/databrew/model/ListRecipeVersionsResult.h>
#include <aws/databrew/model/ListRecipesResult.h>
#include <aws/databrew/model/ListRulesetsResult.h>
#include <aws/databrew/model/ListSchedulesResult.h>
#include <aws/databrew/model/ListTagsForResourceResult.h>
#include <aws/databrew/model/PublishRecipeResult.h>
#include <aws/databrew/model/SendProjectSessionActionResult.h>
#include <aws/databrew/model/StartJobRunResult.h>
#include <aws/databrew/model/StartProjectSessionResult.h>
#include <aws/databrew/model/StopJobRunResult.h>
#include <aws/databrew/model/TagResourceResult.h>
#include <aws/databrew/model/UntagResourceResult.h>
#include <aws/databrew/model/UpdateDatasetResult.h>
#include <aws/databrew/model/UpdateProfileJobResult.h>
#include <aws/databrew/model/UpdateProjectResult.h>
#include <aws/databrew/model/UpdateRecipeResult.h>
#include <aws/databrew/model/UpdateRecipeJobResult.h>
#include <aws/databrew/model/UpdateRulesetResult.h>
#include <aws/databrew/model/UpdateScheduleResult.h>
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

namespace GlueDataBrew
{

namespace Model
{
        class BatchDeleteRecipeVersionRequest;
        class CreateDatasetRequest;
        class CreateProfileJobRequest;
        class CreateProjectRequest;
        class CreateRecipeRequest;
        class CreateRecipeJobRequest;
        class CreateRulesetRequest;
        class CreateScheduleRequest;
        class DeleteDatasetRequest;
        class DeleteJobRequest;
        class DeleteProjectRequest;
        class DeleteRecipeVersionRequest;
        class DeleteRulesetRequest;
        class DeleteScheduleRequest;
        class DescribeDatasetRequest;
        class DescribeJobRequest;
        class DescribeJobRunRequest;
        class DescribeProjectRequest;
        class DescribeRecipeRequest;
        class DescribeRulesetRequest;
        class DescribeScheduleRequest;
        class ListDatasetsRequest;
        class ListJobRunsRequest;
        class ListJobsRequest;
        class ListProjectsRequest;
        class ListRecipeVersionsRequest;
        class ListRecipesRequest;
        class ListRulesetsRequest;
        class ListSchedulesRequest;
        class ListTagsForResourceRequest;
        class PublishRecipeRequest;
        class SendProjectSessionActionRequest;
        class StartJobRunRequest;
        class StartProjectSessionRequest;
        class StopJobRunRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateDatasetRequest;
        class UpdateProfileJobRequest;
        class UpdateProjectRequest;
        class UpdateRecipeRequest;
        class UpdateRecipeJobRequest;
        class UpdateRulesetRequest;
        class UpdateScheduleRequest;

        typedef Aws::Utils::Outcome<BatchDeleteRecipeVersionResult, GlueDataBrewError> BatchDeleteRecipeVersionOutcome;
        typedef Aws::Utils::Outcome<CreateDatasetResult, GlueDataBrewError> CreateDatasetOutcome;
        typedef Aws::Utils::Outcome<CreateProfileJobResult, GlueDataBrewError> CreateProfileJobOutcome;
        typedef Aws::Utils::Outcome<CreateProjectResult, GlueDataBrewError> CreateProjectOutcome;
        typedef Aws::Utils::Outcome<CreateRecipeResult, GlueDataBrewError> CreateRecipeOutcome;
        typedef Aws::Utils::Outcome<CreateRecipeJobResult, GlueDataBrewError> CreateRecipeJobOutcome;
        typedef Aws::Utils::Outcome<CreateRulesetResult, GlueDataBrewError> CreateRulesetOutcome;
        typedef Aws::Utils::Outcome<CreateScheduleResult, GlueDataBrewError> CreateScheduleOutcome;
        typedef Aws::Utils::Outcome<DeleteDatasetResult, GlueDataBrewError> DeleteDatasetOutcome;
        typedef Aws::Utils::Outcome<DeleteJobResult, GlueDataBrewError> DeleteJobOutcome;
        typedef Aws::Utils::Outcome<DeleteProjectResult, GlueDataBrewError> DeleteProjectOutcome;
        typedef Aws::Utils::Outcome<DeleteRecipeVersionResult, GlueDataBrewError> DeleteRecipeVersionOutcome;
        typedef Aws::Utils::Outcome<DeleteRulesetResult, GlueDataBrewError> DeleteRulesetOutcome;
        typedef Aws::Utils::Outcome<DeleteScheduleResult, GlueDataBrewError> DeleteScheduleOutcome;
        typedef Aws::Utils::Outcome<DescribeDatasetResult, GlueDataBrewError> DescribeDatasetOutcome;
        typedef Aws::Utils::Outcome<DescribeJobResult, GlueDataBrewError> DescribeJobOutcome;
        typedef Aws::Utils::Outcome<DescribeJobRunResult, GlueDataBrewError> DescribeJobRunOutcome;
        typedef Aws::Utils::Outcome<DescribeProjectResult, GlueDataBrewError> DescribeProjectOutcome;
        typedef Aws::Utils::Outcome<DescribeRecipeResult, GlueDataBrewError> DescribeRecipeOutcome;
        typedef Aws::Utils::Outcome<DescribeRulesetResult, GlueDataBrewError> DescribeRulesetOutcome;
        typedef Aws::Utils::Outcome<DescribeScheduleResult, GlueDataBrewError> DescribeScheduleOutcome;
        typedef Aws::Utils::Outcome<ListDatasetsResult, GlueDataBrewError> ListDatasetsOutcome;
        typedef Aws::Utils::Outcome<ListJobRunsResult, GlueDataBrewError> ListJobRunsOutcome;
        typedef Aws::Utils::Outcome<ListJobsResult, GlueDataBrewError> ListJobsOutcome;
        typedef Aws::Utils::Outcome<ListProjectsResult, GlueDataBrewError> ListProjectsOutcome;
        typedef Aws::Utils::Outcome<ListRecipeVersionsResult, GlueDataBrewError> ListRecipeVersionsOutcome;
        typedef Aws::Utils::Outcome<ListRecipesResult, GlueDataBrewError> ListRecipesOutcome;
        typedef Aws::Utils::Outcome<ListRulesetsResult, GlueDataBrewError> ListRulesetsOutcome;
        typedef Aws::Utils::Outcome<ListSchedulesResult, GlueDataBrewError> ListSchedulesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, GlueDataBrewError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PublishRecipeResult, GlueDataBrewError> PublishRecipeOutcome;
        typedef Aws::Utils::Outcome<SendProjectSessionActionResult, GlueDataBrewError> SendProjectSessionActionOutcome;
        typedef Aws::Utils::Outcome<StartJobRunResult, GlueDataBrewError> StartJobRunOutcome;
        typedef Aws::Utils::Outcome<StartProjectSessionResult, GlueDataBrewError> StartProjectSessionOutcome;
        typedef Aws::Utils::Outcome<StopJobRunResult, GlueDataBrewError> StopJobRunOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, GlueDataBrewError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, GlueDataBrewError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDatasetResult, GlueDataBrewError> UpdateDatasetOutcome;
        typedef Aws::Utils::Outcome<UpdateProfileJobResult, GlueDataBrewError> UpdateProfileJobOutcome;
        typedef Aws::Utils::Outcome<UpdateProjectResult, GlueDataBrewError> UpdateProjectOutcome;
        typedef Aws::Utils::Outcome<UpdateRecipeResult, GlueDataBrewError> UpdateRecipeOutcome;
        typedef Aws::Utils::Outcome<UpdateRecipeJobResult, GlueDataBrewError> UpdateRecipeJobOutcome;
        typedef Aws::Utils::Outcome<UpdateRulesetResult, GlueDataBrewError> UpdateRulesetOutcome;
        typedef Aws::Utils::Outcome<UpdateScheduleResult, GlueDataBrewError> UpdateScheduleOutcome;

        typedef std::future<BatchDeleteRecipeVersionOutcome> BatchDeleteRecipeVersionOutcomeCallable;
        typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
        typedef std::future<CreateProfileJobOutcome> CreateProfileJobOutcomeCallable;
        typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
        typedef std::future<CreateRecipeOutcome> CreateRecipeOutcomeCallable;
        typedef std::future<CreateRecipeJobOutcome> CreateRecipeJobOutcomeCallable;
        typedef std::future<CreateRulesetOutcome> CreateRulesetOutcomeCallable;
        typedef std::future<CreateScheduleOutcome> CreateScheduleOutcomeCallable;
        typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
        typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
        typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
        typedef std::future<DeleteRecipeVersionOutcome> DeleteRecipeVersionOutcomeCallable;
        typedef std::future<DeleteRulesetOutcome> DeleteRulesetOutcomeCallable;
        typedef std::future<DeleteScheduleOutcome> DeleteScheduleOutcomeCallable;
        typedef std::future<DescribeDatasetOutcome> DescribeDatasetOutcomeCallable;
        typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
        typedef std::future<DescribeJobRunOutcome> DescribeJobRunOutcomeCallable;
        typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
        typedef std::future<DescribeRecipeOutcome> DescribeRecipeOutcomeCallable;
        typedef std::future<DescribeRulesetOutcome> DescribeRulesetOutcomeCallable;
        typedef std::future<DescribeScheduleOutcome> DescribeScheduleOutcomeCallable;
        typedef std::future<ListDatasetsOutcome> ListDatasetsOutcomeCallable;
        typedef std::future<ListJobRunsOutcome> ListJobRunsOutcomeCallable;
        typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
        typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
        typedef std::future<ListRecipeVersionsOutcome> ListRecipeVersionsOutcomeCallable;
        typedef std::future<ListRecipesOutcome> ListRecipesOutcomeCallable;
        typedef std::future<ListRulesetsOutcome> ListRulesetsOutcomeCallable;
        typedef std::future<ListSchedulesOutcome> ListSchedulesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PublishRecipeOutcome> PublishRecipeOutcomeCallable;
        typedef std::future<SendProjectSessionActionOutcome> SendProjectSessionActionOutcomeCallable;
        typedef std::future<StartJobRunOutcome> StartJobRunOutcomeCallable;
        typedef std::future<StartProjectSessionOutcome> StartProjectSessionOutcomeCallable;
        typedef std::future<StopJobRunOutcome> StopJobRunOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDatasetOutcome> UpdateDatasetOutcomeCallable;
        typedef std::future<UpdateProfileJobOutcome> UpdateProfileJobOutcomeCallable;
        typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
        typedef std::future<UpdateRecipeOutcome> UpdateRecipeOutcomeCallable;
        typedef std::future<UpdateRecipeJobOutcome> UpdateRecipeJobOutcomeCallable;
        typedef std::future<UpdateRulesetOutcome> UpdateRulesetOutcomeCallable;
        typedef std::future<UpdateScheduleOutcome> UpdateScheduleOutcomeCallable;
} // namespace Model

  class GlueDataBrewClient;

    typedef std::function<void(const GlueDataBrewClient*, const Model::BatchDeleteRecipeVersionRequest&, const Model::BatchDeleteRecipeVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteRecipeVersionResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::CreateDatasetRequest&, const Model::CreateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::CreateProfileJobRequest&, const Model::CreateProfileJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProfileJobResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::CreateRecipeRequest&, const Model::CreateRecipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRecipeResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::CreateRecipeJobRequest&, const Model::CreateRecipeJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRecipeJobResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::CreateRulesetRequest&, const Model::CreateRulesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRulesetResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::CreateScheduleRequest&, const Model::CreateScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateScheduleResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::DeleteDatasetRequest&, const Model::DeleteDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::DeleteJobRequest&, const Model::DeleteJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::DeleteRecipeVersionRequest&, const Model::DeleteRecipeVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRecipeVersionResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::DeleteRulesetRequest&, const Model::DeleteRulesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRulesetResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::DeleteScheduleRequest&, const Model::DeleteScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScheduleResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::DescribeDatasetRequest&, const Model::DescribeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::DescribeJobRequest&, const Model::DescribeJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::DescribeJobRunRequest&, const Model::DescribeJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobRunResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::DescribeProjectRequest&, const Model::DescribeProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProjectResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::DescribeRecipeRequest&, const Model::DescribeRecipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecipeResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::DescribeRulesetRequest&, const Model::DescribeRulesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRulesetResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::DescribeScheduleRequest&, const Model::DescribeScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScheduleResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::ListDatasetsRequest&, const Model::ListDatasetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetsResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::ListJobRunsRequest&, const Model::ListJobRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobRunsResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::ListRecipeVersionsRequest&, const Model::ListRecipeVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecipeVersionsResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::ListRecipesRequest&, const Model::ListRecipesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecipesResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::ListRulesetsRequest&, const Model::ListRulesetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRulesetsResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::ListSchedulesRequest&, const Model::ListSchedulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchedulesResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::PublishRecipeRequest&, const Model::PublishRecipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishRecipeResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::SendProjectSessionActionRequest&, const Model::SendProjectSessionActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendProjectSessionActionResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::StartJobRunRequest&, const Model::StartJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartJobRunResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::StartProjectSessionRequest&, const Model::StartProjectSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartProjectSessionResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::StopJobRunRequest&, const Model::StopJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopJobRunResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::UpdateDatasetRequest&, const Model::UpdateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatasetResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::UpdateProfileJobRequest&, const Model::UpdateProfileJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProfileJobResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::UpdateProjectRequest&, const Model::UpdateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::UpdateRecipeRequest&, const Model::UpdateRecipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRecipeResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::UpdateRecipeJobRequest&, const Model::UpdateRecipeJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRecipeJobResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::UpdateRulesetRequest&, const Model::UpdateRulesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRulesetResponseReceivedHandler;
    typedef std::function<void(const GlueDataBrewClient*, const Model::UpdateScheduleRequest&, const Model::UpdateScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateScheduleResponseReceivedHandler;

  /**
   * <p>Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew
   * simplifies data preparation tasks, targeting data issues that are hard to spot
   * and time-consuming to fix. DataBrew empowers users of all technical levels to
   * visualize the data and perform one-click data transformations, with no coding
   * required.</p>
   */
  class AWS_GLUEDATABREW_API GlueDataBrewClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlueDataBrewClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlueDataBrewClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GlueDataBrewClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~GlueDataBrewClient();


        /**
         * <p>Deletes one or more versions of a recipe at a time.</p> <p>The entire request
         * will be rejected if:</p> <ul> <li> <p>The recipe does not exist.</p> </li> <li>
         * <p>There is an invalid version identifier in the list of versions.</p> </li>
         * <li> <p>The version list is empty.</p> </li> <li> <p>The version list size
         * exceeds 50.</p> </li> <li> <p>The version list contains duplicate entries.</p>
         * </li> </ul> <p>The request will complete successfully, but with partial
         * failures, if:</p> <ul> <li> <p>A version does not exist.</p> </li> <li> <p>A
         * version is being used by a job.</p> </li> <li> <p>You specify
         * <code>LATEST_WORKING</code>, but it's being used by a project.</p> </li> <li>
         * <p>The version fails to be deleted.</p> </li> </ul> <p>The
         * <code>LATEST_WORKING</code> version will only be deleted if the recipe has no
         * other versions. If you try to delete <code>LATEST_WORKING</code> while other
         * versions exist (or if they can't be deleted), then <code>LATEST_WORKING</code>
         * will be listed as partial failure in the response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/BatchDeleteRecipeVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteRecipeVersionOutcome BatchDeleteRecipeVersion(const Model::BatchDeleteRecipeVersionRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteRecipeVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteRecipeVersionOutcomeCallable BatchDeleteRecipeVersionCallable(const Model::BatchDeleteRecipeVersionRequest& request) const;

        /**
         * An Async wrapper for BatchDeleteRecipeVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteRecipeVersionAsync(const Model::BatchDeleteRecipeVersionRequest& request, const BatchDeleteRecipeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DataBrew dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CreateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetOutcome CreateDataset(const Model::CreateDatasetRequest& request) const;

        /**
         * A Callable wrapper for CreateDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetOutcomeCallable CreateDatasetCallable(const Model::CreateDatasetRequest& request) const;

        /**
         * An Async wrapper for CreateDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetAsync(const Model::CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new job to analyze a dataset and create its data
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CreateProfileJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProfileJobOutcome CreateProfileJob(const Model::CreateProfileJobRequest& request) const;

        /**
         * A Callable wrapper for CreateProfileJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProfileJobOutcomeCallable CreateProfileJobCallable(const Model::CreateProfileJobRequest& request) const;

        /**
         * An Async wrapper for CreateProfileJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProfileJobAsync(const Model::CreateProfileJobRequest& request, const CreateProfileJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DataBrew project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * A Callable wrapper for CreateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request) const;

        /**
         * An Async wrapper for CreateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new DataBrew recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CreateRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRecipeOutcome CreateRecipe(const Model::CreateRecipeRequest& request) const;

        /**
         * A Callable wrapper for CreateRecipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRecipeOutcomeCallable CreateRecipeCallable(const Model::CreateRecipeRequest& request) const;

        /**
         * An Async wrapper for CreateRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRecipeAsync(const Model::CreateRecipeRequest& request, const CreateRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new job to transform input data, using steps defined in an existing
         * Glue DataBrew recipe</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CreateRecipeJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRecipeJobOutcome CreateRecipeJob(const Model::CreateRecipeJobRequest& request) const;

        /**
         * A Callable wrapper for CreateRecipeJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRecipeJobOutcomeCallable CreateRecipeJobCallable(const Model::CreateRecipeJobRequest& request) const;

        /**
         * An Async wrapper for CreateRecipeJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRecipeJobAsync(const Model::CreateRecipeJobRequest& request, const CreateRecipeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new ruleset that can be used in a profile job to validate the data
         * quality of a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CreateRuleset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRulesetOutcome CreateRuleset(const Model::CreateRulesetRequest& request) const;

        /**
         * A Callable wrapper for CreateRuleset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRulesetOutcomeCallable CreateRulesetCallable(const Model::CreateRulesetRequest& request) const;

        /**
         * An Async wrapper for CreateRuleset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRulesetAsync(const Model::CreateRulesetRequest& request, const CreateRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new schedule for one or more DataBrew jobs. Jobs can be run at a
         * specific date and time, or at regular intervals.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CreateSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScheduleOutcome CreateSchedule(const Model::CreateScheduleRequest& request) const;

        /**
         * A Callable wrapper for CreateSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateScheduleOutcomeCallable CreateScheduleCallable(const Model::CreateScheduleRequest& request) const;

        /**
         * An Async wrapper for CreateSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateScheduleAsync(const Model::CreateScheduleRequest& request, const CreateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a dataset from DataBrew.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DeleteDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const Model::DeleteDatasetRequest& request) const;

        /**
         * An Async wrapper for DeleteDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatasetAsync(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified DataBrew job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DeleteJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteJobOutcomeCallable DeleteJobCallable(const Model::DeleteJobRequest& request) const;

        /**
         * An Async wrapper for DeleteJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing DataBrew project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * A Callable wrapper for DeleteProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request) const;

        /**
         * An Async wrapper for DeleteProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a single version of a DataBrew recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DeleteRecipeVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecipeVersionOutcome DeleteRecipeVersion(const Model::DeleteRecipeVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteRecipeVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRecipeVersionOutcomeCallable DeleteRecipeVersionCallable(const Model::DeleteRecipeVersionRequest& request) const;

        /**
         * An Async wrapper for DeleteRecipeVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRecipeVersionAsync(const Model::DeleteRecipeVersionRequest& request, const DeleteRecipeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a ruleset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DeleteRuleset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRulesetOutcome DeleteRuleset(const Model::DeleteRulesetRequest& request) const;

        /**
         * A Callable wrapper for DeleteRuleset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRulesetOutcomeCallable DeleteRulesetCallable(const Model::DeleteRulesetRequest& request) const;

        /**
         * An Async wrapper for DeleteRuleset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRulesetAsync(const Model::DeleteRulesetRequest& request, const DeleteRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified DataBrew schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DeleteSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduleOutcome DeleteSchedule(const Model::DeleteScheduleRequest& request) const;

        /**
         * A Callable wrapper for DeleteSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScheduleOutcomeCallable DeleteScheduleCallable(const Model::DeleteScheduleRequest& request) const;

        /**
         * An Async wrapper for DeleteSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScheduleAsync(const Model::DeleteScheduleRequest& request, const DeleteScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the definition of a specific DataBrew dataset.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const Model::DescribeDatasetRequest& request) const;

        /**
         * An Async wrapper for DescribeDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetAsync(const Model::DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the definition of a specific DataBrew job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DescribeJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobOutcome DescribeJob(const Model::DescribeJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobOutcomeCallable DescribeJobCallable(const Model::DescribeJobRequest& request) const;

        /**
         * An Async wrapper for DescribeJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobAsync(const Model::DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents one run of a DataBrew job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DescribeJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobRunOutcome DescribeJobRun(const Model::DescribeJobRunRequest& request) const;

        /**
         * A Callable wrapper for DescribeJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobRunOutcomeCallable DescribeJobRunCallable(const Model::DescribeJobRunRequest& request) const;

        /**
         * An Async wrapper for DescribeJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobRunAsync(const Model::DescribeJobRunRequest& request, const DescribeJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the definition of a specific DataBrew project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;

        /**
         * A Callable wrapper for DescribeProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request) const;

        /**
         * An Async wrapper for DescribeProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the definition of a specific DataBrew recipe corresponding to a
         * particular version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DescribeRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecipeOutcome DescribeRecipe(const Model::DescribeRecipeRequest& request) const;

        /**
         * A Callable wrapper for DescribeRecipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRecipeOutcomeCallable DescribeRecipeCallable(const Model::DescribeRecipeRequest& request) const;

        /**
         * An Async wrapper for DescribeRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRecipeAsync(const Model::DescribeRecipeRequest& request, const DescribeRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves detailed information about the ruleset.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DescribeRuleset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRulesetOutcome DescribeRuleset(const Model::DescribeRulesetRequest& request) const;

        /**
         * A Callable wrapper for DescribeRuleset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRulesetOutcomeCallable DescribeRulesetCallable(const Model::DescribeRulesetRequest& request) const;

        /**
         * An Async wrapper for DescribeRuleset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRulesetAsync(const Model::DescribeRulesetRequest& request, const DescribeRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the definition of a specific DataBrew schedule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DescribeSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduleOutcome DescribeSchedule(const Model::DescribeScheduleRequest& request) const;

        /**
         * A Callable wrapper for DescribeSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScheduleOutcomeCallable DescribeScheduleCallable(const Model::DescribeScheduleRequest& request) const;

        /**
         * An Async wrapper for DescribeSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScheduleAsync(const Model::DescribeScheduleRequest& request, const DescribeScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the DataBrew datasets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListDatasets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetsOutcome ListDatasets(const Model::ListDatasetsRequest& request) const;

        /**
         * A Callable wrapper for ListDatasets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const Model::ListDatasetsRequest& request) const;

        /**
         * An Async wrapper for ListDatasets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetsAsync(const Model::ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the previous runs of a particular DataBrew job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListJobRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobRunsOutcome ListJobRuns(const Model::ListJobRunsRequest& request) const;

        /**
         * A Callable wrapper for ListJobRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobRunsOutcomeCallable ListJobRunsCallable(const Model::ListJobRunsRequest& request) const;

        /**
         * An Async wrapper for ListJobRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobRunsAsync(const Model::ListJobRunsRequest& request, const ListJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the DataBrew jobs that are defined.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * A Callable wrapper for ListJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the DataBrew projects that are defined.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * A Callable wrapper for ListProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProjectsOutcomeCallable ListProjectsCallable(const Model::ListProjectsRequest& request) const;

        /**
         * An Async wrapper for ListProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the versions of a particular DataBrew recipe, except for
         * <code>LATEST_WORKING</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListRecipeVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecipeVersionsOutcome ListRecipeVersions(const Model::ListRecipeVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListRecipeVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecipeVersionsOutcomeCallable ListRecipeVersionsCallable(const Model::ListRecipeVersionsRequest& request) const;

        /**
         * An Async wrapper for ListRecipeVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecipeVersionsAsync(const Model::ListRecipeVersionsRequest& request, const ListRecipeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the DataBrew recipes that are defined.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListRecipes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecipesOutcome ListRecipes(const Model::ListRecipesRequest& request) const;

        /**
         * A Callable wrapper for ListRecipes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecipesOutcomeCallable ListRecipesCallable(const Model::ListRecipesRequest& request) const;

        /**
         * An Async wrapper for ListRecipes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecipesAsync(const Model::ListRecipesRequest& request, const ListRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all rulesets available in the current account or rulesets associated
         * with a specific resource (dataset).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListRulesets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesetsOutcome ListRulesets(const Model::ListRulesetsRequest& request) const;

        /**
         * A Callable wrapper for ListRulesets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRulesetsOutcomeCallable ListRulesetsCallable(const Model::ListRulesetsRequest& request) const;

        /**
         * An Async wrapper for ListRulesets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRulesetsAsync(const Model::ListRulesetsRequest& request, const ListRulesetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the DataBrew schedules that are defined.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListSchedules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchedulesOutcome ListSchedules(const Model::ListSchedulesRequest& request) const;

        /**
         * A Callable wrapper for ListSchedules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSchedulesOutcomeCallable ListSchedulesCallable(const Model::ListSchedulesRequest& request) const;

        /**
         * An Async wrapper for ListSchedules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSchedulesAsync(const Model::ListSchedulesRequest& request, const ListSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the tags for a DataBrew resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Publishes a new version of a DataBrew recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/PublishRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishRecipeOutcome PublishRecipe(const Model::PublishRecipeRequest& request) const;

        /**
         * A Callable wrapper for PublishRecipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PublishRecipeOutcomeCallable PublishRecipeCallable(const Model::PublishRecipeRequest& request) const;

        /**
         * An Async wrapper for PublishRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PublishRecipeAsync(const Model::PublishRecipeRequest& request, const PublishRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Performs a recipe step within an interactive DataBrew session that's
         * currently open.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/SendProjectSessionAction">AWS
         * API Reference</a></p>
         */
        virtual Model::SendProjectSessionActionOutcome SendProjectSessionAction(const Model::SendProjectSessionActionRequest& request) const;

        /**
         * A Callable wrapper for SendProjectSessionAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendProjectSessionActionOutcomeCallable SendProjectSessionActionCallable(const Model::SendProjectSessionActionRequest& request) const;

        /**
         * An Async wrapper for SendProjectSessionAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendProjectSessionActionAsync(const Model::SendProjectSessionActionRequest& request, const SendProjectSessionActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Runs a DataBrew job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/StartJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobRunOutcome StartJobRun(const Model::StartJobRunRequest& request) const;

        /**
         * A Callable wrapper for StartJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartJobRunOutcomeCallable StartJobRunCallable(const Model::StartJobRunRequest& request) const;

        /**
         * An Async wrapper for StartJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartJobRunAsync(const Model::StartJobRunRequest& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an interactive session, enabling you to manipulate data in a DataBrew
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/StartProjectSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartProjectSessionOutcome StartProjectSession(const Model::StartProjectSessionRequest& request) const;

        /**
         * A Callable wrapper for StartProjectSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartProjectSessionOutcomeCallable StartProjectSessionCallable(const Model::StartProjectSessionRequest& request) const;

        /**
         * An Async wrapper for StartProjectSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartProjectSessionAsync(const Model::StartProjectSessionRequest& request, const StartProjectSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a particular run of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/StopJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StopJobRunOutcome StopJobRun(const Model::StopJobRunRequest& request) const;

        /**
         * A Callable wrapper for StopJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopJobRunOutcomeCallable StopJobRunCallable(const Model::StopJobRunRequest& request) const;

        /**
         * An Async wrapper for StopJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopJobRunAsync(const Model::StopJobRunRequest& request, const StopJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds metadata tags to a DataBrew resource, such as a dataset, project,
         * recipe, job, or schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes metadata tags from a DataBrew resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the definition of an existing DataBrew dataset.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/UpdateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatasetOutcome UpdateDataset(const Model::UpdateDatasetRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDatasetOutcomeCallable UpdateDatasetCallable(const Model::UpdateDatasetRequest& request) const;

        /**
         * An Async wrapper for UpdateDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDatasetAsync(const Model::UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the definition of an existing profile job.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/UpdateProfileJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProfileJobOutcome UpdateProfileJob(const Model::UpdateProfileJobRequest& request) const;

        /**
         * A Callable wrapper for UpdateProfileJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProfileJobOutcomeCallable UpdateProfileJobCallable(const Model::UpdateProfileJobRequest& request) const;

        /**
         * An Async wrapper for UpdateProfileJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProfileJobAsync(const Model::UpdateProfileJobRequest& request, const UpdateProfileJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the definition of an existing DataBrew project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

        /**
         * A Callable wrapper for UpdateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const Model::UpdateProjectRequest& request) const;

        /**
         * An Async wrapper for UpdateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the definition of the <code>LATEST_WORKING</code> version of a
         * DataBrew recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/UpdateRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRecipeOutcome UpdateRecipe(const Model::UpdateRecipeRequest& request) const;

        /**
         * A Callable wrapper for UpdateRecipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRecipeOutcomeCallable UpdateRecipeCallable(const Model::UpdateRecipeRequest& request) const;

        /**
         * An Async wrapper for UpdateRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRecipeAsync(const Model::UpdateRecipeRequest& request, const UpdateRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the definition of an existing DataBrew recipe job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/UpdateRecipeJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRecipeJobOutcome UpdateRecipeJob(const Model::UpdateRecipeJobRequest& request) const;

        /**
         * A Callable wrapper for UpdateRecipeJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRecipeJobOutcomeCallable UpdateRecipeJobCallable(const Model::UpdateRecipeJobRequest& request) const;

        /**
         * An Async wrapper for UpdateRecipeJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRecipeJobAsync(const Model::UpdateRecipeJobRequest& request, const UpdateRecipeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates specified ruleset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/UpdateRuleset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRulesetOutcome UpdateRuleset(const Model::UpdateRulesetRequest& request) const;

        /**
         * A Callable wrapper for UpdateRuleset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRulesetOutcomeCallable UpdateRulesetCallable(const Model::UpdateRulesetRequest& request) const;

        /**
         * An Async wrapper for UpdateRuleset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRulesetAsync(const Model::UpdateRulesetRequest& request, const UpdateRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the definition of an existing DataBrew schedule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/UpdateSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateScheduleOutcome UpdateSchedule(const Model::UpdateScheduleRequest& request) const;

        /**
         * A Callable wrapper for UpdateSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateScheduleOutcomeCallable UpdateScheduleCallable(const Model::UpdateScheduleRequest& request) const;

        /**
         * An Async wrapper for UpdateSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateScheduleAsync(const Model::UpdateScheduleRequest& request, const UpdateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchDeleteRecipeVersionAsyncHelper(const Model::BatchDeleteRecipeVersionRequest& request, const BatchDeleteRecipeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDatasetAsyncHelper(const Model::CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProfileJobAsyncHelper(const Model::CreateProfileJobRequest& request, const CreateProfileJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProjectAsyncHelper(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRecipeAsyncHelper(const Model::CreateRecipeRequest& request, const CreateRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRecipeJobAsyncHelper(const Model::CreateRecipeJobRequest& request, const CreateRecipeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRulesetAsyncHelper(const Model::CreateRulesetRequest& request, const CreateRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateScheduleAsyncHelper(const Model::CreateScheduleRequest& request, const CreateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDatasetAsyncHelper(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteJobAsyncHelper(const Model::DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProjectAsyncHelper(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRecipeVersionAsyncHelper(const Model::DeleteRecipeVersionRequest& request, const DeleteRecipeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRulesetAsyncHelper(const Model::DeleteRulesetRequest& request, const DeleteRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteScheduleAsyncHelper(const Model::DeleteScheduleRequest& request, const DeleteScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDatasetAsyncHelper(const Model::DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeJobAsyncHelper(const Model::DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeJobRunAsyncHelper(const Model::DescribeJobRunRequest& request, const DescribeJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProjectAsyncHelper(const Model::DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRecipeAsyncHelper(const Model::DescribeRecipeRequest& request, const DescribeRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRulesetAsyncHelper(const Model::DescribeRulesetRequest& request, const DescribeRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScheduleAsyncHelper(const Model::DescribeScheduleRequest& request, const DescribeScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatasetsAsyncHelper(const Model::ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobRunsAsyncHelper(const Model::ListJobRunsRequest& request, const ListJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobsAsyncHelper(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProjectsAsyncHelper(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecipeVersionsAsyncHelper(const Model::ListRecipeVersionsRequest& request, const ListRecipeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecipesAsyncHelper(const Model::ListRecipesRequest& request, const ListRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRulesetsAsyncHelper(const Model::ListRulesetsRequest& request, const ListRulesetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSchedulesAsyncHelper(const Model::ListSchedulesRequest& request, const ListSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PublishRecipeAsyncHelper(const Model::PublishRecipeRequest& request, const PublishRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendProjectSessionActionAsyncHelper(const Model::SendProjectSessionActionRequest& request, const SendProjectSessionActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartJobRunAsyncHelper(const Model::StartJobRunRequest& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartProjectSessionAsyncHelper(const Model::StartProjectSessionRequest& request, const StartProjectSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopJobRunAsyncHelper(const Model::StopJobRunRequest& request, const StopJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDatasetAsyncHelper(const Model::UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProfileJobAsyncHelper(const Model::UpdateProfileJobRequest& request, const UpdateProfileJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProjectAsyncHelper(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRecipeAsyncHelper(const Model::UpdateRecipeRequest& request, const UpdateRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRecipeJobAsyncHelper(const Model::UpdateRecipeJobRequest& request, const UpdateRecipeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRulesetAsyncHelper(const Model::UpdateRulesetRequest& request, const UpdateRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateScheduleAsyncHelper(const Model::UpdateScheduleRequest& request, const UpdateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace GlueDataBrew
} // namespace Aws
