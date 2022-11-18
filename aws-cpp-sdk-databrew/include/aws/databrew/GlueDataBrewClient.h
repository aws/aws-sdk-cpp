/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/databrew/GlueDataBrewServiceClientModel.h>
#include <aws/databrew/GlueDataBrewLegacyAsyncMacros.h>

namespace Aws
{
namespace GlueDataBrew
{
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlueDataBrewClient(const Aws::GlueDataBrew::GlueDataBrewClientConfiguration& clientConfiguration = Aws::GlueDataBrew::GlueDataBrewClientConfiguration(),
                           std::shared_ptr<GlueDataBrewEndpointProviderBase> endpointProvider = Aws::MakeShared<GlueDataBrewEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlueDataBrewClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<GlueDataBrewEndpointProviderBase> endpointProvider = Aws::MakeShared<GlueDataBrewEndpointProvider>(ALLOCATION_TAG),
                           const Aws::GlueDataBrew::GlueDataBrewClientConfiguration& clientConfiguration = Aws::GlueDataBrew::GlueDataBrewClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GlueDataBrewClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<GlueDataBrewEndpointProviderBase> endpointProvider = Aws::MakeShared<GlueDataBrewEndpointProvider>(ALLOCATION_TAG),
                           const Aws::GlueDataBrew::GlueDataBrewClientConfiguration& clientConfiguration = Aws::GlueDataBrew::GlueDataBrewClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlueDataBrewClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlueDataBrewClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GlueDataBrewClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~GlueDataBrewClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * <p>Creates a new DataBrew dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CreateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetOutcome CreateDataset(const Model::CreateDatasetRequest& request) const;


        /**
         * <p>Creates a new job to analyze a dataset and create its data
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CreateProfileJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProfileJobOutcome CreateProfileJob(const Model::CreateProfileJobRequest& request) const;


        /**
         * <p>Creates a new DataBrew project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;


        /**
         * <p>Creates a new DataBrew recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CreateRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRecipeOutcome CreateRecipe(const Model::CreateRecipeRequest& request) const;


        /**
         * <p>Creates a new job to transform input data, using steps defined in an existing
         * Glue DataBrew recipe</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CreateRecipeJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRecipeJobOutcome CreateRecipeJob(const Model::CreateRecipeJobRequest& request) const;


        /**
         * <p>Creates a new ruleset that can be used in a profile job to validate the data
         * quality of a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CreateRuleset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRulesetOutcome CreateRuleset(const Model::CreateRulesetRequest& request) const;


        /**
         * <p>Creates a new schedule for one or more DataBrew jobs. Jobs can be run at a
         * specific date and time, or at regular intervals.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CreateSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScheduleOutcome CreateSchedule(const Model::CreateScheduleRequest& request) const;


        /**
         * <p>Deletes a dataset from DataBrew.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DeleteDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest& request) const;


        /**
         * <p>Deletes the specified DataBrew job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DeleteJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest& request) const;


        /**
         * <p>Deletes an existing DataBrew project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;


        /**
         * <p>Deletes a single version of a DataBrew recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DeleteRecipeVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecipeVersionOutcome DeleteRecipeVersion(const Model::DeleteRecipeVersionRequest& request) const;


        /**
         * <p>Deletes a ruleset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DeleteRuleset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRulesetOutcome DeleteRuleset(const Model::DeleteRulesetRequest& request) const;


        /**
         * <p>Deletes the specified DataBrew schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DeleteSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduleOutcome DeleteSchedule(const Model::DeleteScheduleRequest& request) const;


        /**
         * <p>Returns the definition of a specific DataBrew dataset.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;


        /**
         * <p>Returns the definition of a specific DataBrew job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DescribeJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobOutcome DescribeJob(const Model::DescribeJobRequest& request) const;


        /**
         * <p>Represents one run of a DataBrew job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DescribeJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobRunOutcome DescribeJobRun(const Model::DescribeJobRunRequest& request) const;


        /**
         * <p>Returns the definition of a specific DataBrew project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;


        /**
         * <p>Returns the definition of a specific DataBrew recipe corresponding to a
         * particular version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DescribeRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecipeOutcome DescribeRecipe(const Model::DescribeRecipeRequest& request) const;


        /**
         * <p>Retrieves detailed information about the ruleset.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DescribeRuleset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRulesetOutcome DescribeRuleset(const Model::DescribeRulesetRequest& request) const;


        /**
         * <p>Returns the definition of a specific DataBrew schedule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DescribeSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduleOutcome DescribeSchedule(const Model::DescribeScheduleRequest& request) const;


        /**
         * <p>Lists all of the DataBrew datasets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListDatasets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetsOutcome ListDatasets(const Model::ListDatasetsRequest& request) const;


        /**
         * <p>Lists all of the previous runs of a particular DataBrew job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListJobRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobRunsOutcome ListJobRuns(const Model::ListJobRunsRequest& request) const;


        /**
         * <p>Lists all of the DataBrew jobs that are defined.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;


        /**
         * <p>Lists all of the DataBrew projects that are defined.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;


        /**
         * <p>Lists the versions of a particular DataBrew recipe, except for
         * <code>LATEST_WORKING</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListRecipeVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecipeVersionsOutcome ListRecipeVersions(const Model::ListRecipeVersionsRequest& request) const;


        /**
         * <p>Lists all of the DataBrew recipes that are defined.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListRecipes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecipesOutcome ListRecipes(const Model::ListRecipesRequest& request) const;


        /**
         * <p>List all rulesets available in the current account or rulesets associated
         * with a specific resource (dataset).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListRulesets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesetsOutcome ListRulesets(const Model::ListRulesetsRequest& request) const;


        /**
         * <p>Lists the DataBrew schedules that are defined.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListSchedules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchedulesOutcome ListSchedules(const Model::ListSchedulesRequest& request) const;


        /**
         * <p>Lists all the tags for a DataBrew resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Publishes a new version of a DataBrew recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/PublishRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishRecipeOutcome PublishRecipe(const Model::PublishRecipeRequest& request) const;


        /**
         * <p>Performs a recipe step within an interactive DataBrew session that's
         * currently open.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/SendProjectSessionAction">AWS
         * API Reference</a></p>
         */
        virtual Model::SendProjectSessionActionOutcome SendProjectSessionAction(const Model::SendProjectSessionActionRequest& request) const;


        /**
         * <p>Runs a DataBrew job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/StartJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobRunOutcome StartJobRun(const Model::StartJobRunRequest& request) const;


        /**
         * <p>Creates an interactive session, enabling you to manipulate data in a DataBrew
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/StartProjectSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartProjectSessionOutcome StartProjectSession(const Model::StartProjectSessionRequest& request) const;


        /**
         * <p>Stops a particular run of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/StopJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StopJobRunOutcome StopJobRun(const Model::StopJobRunRequest& request) const;


        /**
         * <p>Adds metadata tags to a DataBrew resource, such as a dataset, project,
         * recipe, job, or schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes metadata tags from a DataBrew resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Modifies the definition of an existing DataBrew dataset.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/UpdateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatasetOutcome UpdateDataset(const Model::UpdateDatasetRequest& request) const;


        /**
         * <p>Modifies the definition of an existing profile job.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/UpdateProfileJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProfileJobOutcome UpdateProfileJob(const Model::UpdateProfileJobRequest& request) const;


        /**
         * <p>Modifies the definition of an existing DataBrew project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;


        /**
         * <p>Modifies the definition of the <code>LATEST_WORKING</code> version of a
         * DataBrew recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/UpdateRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRecipeOutcome UpdateRecipe(const Model::UpdateRecipeRequest& request) const;


        /**
         * <p>Modifies the definition of an existing DataBrew recipe job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/UpdateRecipeJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRecipeJobOutcome UpdateRecipeJob(const Model::UpdateRecipeJobRequest& request) const;


        /**
         * <p>Updates specified ruleset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/UpdateRuleset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRulesetOutcome UpdateRuleset(const Model::UpdateRulesetRequest& request) const;


        /**
         * <p>Modifies the definition of an existing DataBrew schedule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/UpdateSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateScheduleOutcome UpdateSchedule(const Model::UpdateScheduleRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GlueDataBrewEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const GlueDataBrewClientConfiguration& clientConfiguration);

      GlueDataBrewClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<GlueDataBrewEndpointProviderBase> m_endpointProvider;
  };

} // namespace GlueDataBrew
} // namespace Aws
