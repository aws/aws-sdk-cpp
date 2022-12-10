/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/databrew/GlueDataBrewServiceClientModel.h>

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
  class AWS_GLUEDATABREW_API GlueDataBrewClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<GlueDataBrewClient>
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
      std::shared_ptr<GlueDataBrewEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<GlueDataBrewClient>;
      void init(const GlueDataBrewClientConfiguration& clientConfiguration);

      GlueDataBrewClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<GlueDataBrewEndpointProviderBase> m_endpointProvider;
  };

} // namespace GlueDataBrew
} // namespace Aws
