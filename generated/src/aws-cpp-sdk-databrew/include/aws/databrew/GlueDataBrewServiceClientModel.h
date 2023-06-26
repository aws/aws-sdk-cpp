/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/databrew/GlueDataBrewErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/databrew/GlueDataBrewEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in GlueDataBrewClient header */
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
/* End of service model headers required in GlueDataBrewClient header */

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
    using GlueDataBrewClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using GlueDataBrewEndpointProviderBase = Aws::GlueDataBrew::Endpoint::GlueDataBrewEndpointProviderBase;
    using GlueDataBrewEndpointProvider = Aws::GlueDataBrew::Endpoint::GlueDataBrewEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in GlueDataBrewClient header */
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
      /* End of service model forward declarations required in GlueDataBrewClient header */

      /* Service model Outcome class definitions */
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
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class GlueDataBrewClient;

    /* Service model async handlers definitions */
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
    /* End of service model async handlers definitions */
  } // namespace GlueDataBrew
} // namespace Aws
