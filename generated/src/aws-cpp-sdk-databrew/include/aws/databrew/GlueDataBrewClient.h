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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef GlueDataBrewClientConfiguration ClientConfigurationType;
      typedef GlueDataBrewEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlueDataBrewClient(const Aws::GlueDataBrew::GlueDataBrewClientConfiguration& clientConfiguration = Aws::GlueDataBrew::GlueDataBrewClientConfiguration(),
                           std::shared_ptr<GlueDataBrewEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlueDataBrewClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<GlueDataBrewEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::GlueDataBrew::GlueDataBrewClientConfiguration& clientConfiguration = Aws::GlueDataBrew::GlueDataBrewClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GlueDataBrewClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<GlueDataBrewEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename BatchDeleteRecipeVersionRequestT = Model::BatchDeleteRecipeVersionRequest>
        Model::BatchDeleteRecipeVersionOutcomeCallable BatchDeleteRecipeVersionCallable(const BatchDeleteRecipeVersionRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::BatchDeleteRecipeVersion, request);
        }

        /**
         * An Async wrapper for BatchDeleteRecipeVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteRecipeVersionRequestT = Model::BatchDeleteRecipeVersionRequest>
        void BatchDeleteRecipeVersionAsync(const BatchDeleteRecipeVersionRequestT& request, const BatchDeleteRecipeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::BatchDeleteRecipeVersion, request, handler, context);
        }

        /**
         * <p>Creates a new DataBrew dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CreateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetOutcome CreateDataset(const Model::CreateDatasetRequest& request) const;

        /**
         * A Callable wrapper for CreateDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDatasetRequestT = Model::CreateDatasetRequest>
        Model::CreateDatasetOutcomeCallable CreateDatasetCallable(const CreateDatasetRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::CreateDataset, request);
        }

        /**
         * An Async wrapper for CreateDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDatasetRequestT = Model::CreateDatasetRequest>
        void CreateDatasetAsync(const CreateDatasetRequestT& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::CreateDataset, request, handler, context);
        }

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
        template<typename CreateProfileJobRequestT = Model::CreateProfileJobRequest>
        Model::CreateProfileJobOutcomeCallable CreateProfileJobCallable(const CreateProfileJobRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::CreateProfileJob, request);
        }

        /**
         * An Async wrapper for CreateProfileJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProfileJobRequestT = Model::CreateProfileJobRequest>
        void CreateProfileJobAsync(const CreateProfileJobRequestT& request, const CreateProfileJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::CreateProfileJob, request, handler, context);
        }

        /**
         * <p>Creates a new DataBrew project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * A Callable wrapper for CreateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        Model::CreateProjectOutcomeCallable CreateProjectCallable(const CreateProjectRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::CreateProject, request);
        }

        /**
         * An Async wrapper for CreateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        void CreateProjectAsync(const CreateProjectRequestT& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::CreateProject, request, handler, context);
        }

        /**
         * <p>Creates a new DataBrew recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CreateRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRecipeOutcome CreateRecipe(const Model::CreateRecipeRequest& request) const;

        /**
         * A Callable wrapper for CreateRecipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRecipeRequestT = Model::CreateRecipeRequest>
        Model::CreateRecipeOutcomeCallable CreateRecipeCallable(const CreateRecipeRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::CreateRecipe, request);
        }

        /**
         * An Async wrapper for CreateRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRecipeRequestT = Model::CreateRecipeRequest>
        void CreateRecipeAsync(const CreateRecipeRequestT& request, const CreateRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::CreateRecipe, request, handler, context);
        }

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
        template<typename CreateRecipeJobRequestT = Model::CreateRecipeJobRequest>
        Model::CreateRecipeJobOutcomeCallable CreateRecipeJobCallable(const CreateRecipeJobRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::CreateRecipeJob, request);
        }

        /**
         * An Async wrapper for CreateRecipeJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRecipeJobRequestT = Model::CreateRecipeJobRequest>
        void CreateRecipeJobAsync(const CreateRecipeJobRequestT& request, const CreateRecipeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::CreateRecipeJob, request, handler, context);
        }

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
        template<typename CreateRulesetRequestT = Model::CreateRulesetRequest>
        Model::CreateRulesetOutcomeCallable CreateRulesetCallable(const CreateRulesetRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::CreateRuleset, request);
        }

        /**
         * An Async wrapper for CreateRuleset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRulesetRequestT = Model::CreateRulesetRequest>
        void CreateRulesetAsync(const CreateRulesetRequestT& request, const CreateRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::CreateRuleset, request, handler, context);
        }

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
        template<typename CreateScheduleRequestT = Model::CreateScheduleRequest>
        Model::CreateScheduleOutcomeCallable CreateScheduleCallable(const CreateScheduleRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::CreateSchedule, request);
        }

        /**
         * An Async wrapper for CreateSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateScheduleRequestT = Model::CreateScheduleRequest>
        void CreateScheduleAsync(const CreateScheduleRequestT& request, const CreateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::CreateSchedule, request, handler, context);
        }

        /**
         * <p>Deletes a dataset from DataBrew.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DeleteDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDatasetRequestT = Model::DeleteDatasetRequest>
        Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const DeleteDatasetRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::DeleteDataset, request);
        }

        /**
         * An Async wrapper for DeleteDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDatasetRequestT = Model::DeleteDatasetRequest>
        void DeleteDatasetAsync(const DeleteDatasetRequestT& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::DeleteDataset, request, handler, context);
        }

        /**
         * <p>Deletes the specified DataBrew job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DeleteJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteJobRequestT = Model::DeleteJobRequest>
        Model::DeleteJobOutcomeCallable DeleteJobCallable(const DeleteJobRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::DeleteJob, request);
        }

        /**
         * An Async wrapper for DeleteJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteJobRequestT = Model::DeleteJobRequest>
        void DeleteJobAsync(const DeleteJobRequestT& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::DeleteJob, request, handler, context);
        }

        /**
         * <p>Deletes an existing DataBrew project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * A Callable wrapper for DeleteProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const DeleteProjectRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::DeleteProject, request);
        }

        /**
         * An Async wrapper for DeleteProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        void DeleteProjectAsync(const DeleteProjectRequestT& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::DeleteProject, request, handler, context);
        }

        /**
         * <p>Deletes a single version of a DataBrew recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DeleteRecipeVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecipeVersionOutcome DeleteRecipeVersion(const Model::DeleteRecipeVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteRecipeVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRecipeVersionRequestT = Model::DeleteRecipeVersionRequest>
        Model::DeleteRecipeVersionOutcomeCallable DeleteRecipeVersionCallable(const DeleteRecipeVersionRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::DeleteRecipeVersion, request);
        }

        /**
         * An Async wrapper for DeleteRecipeVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRecipeVersionRequestT = Model::DeleteRecipeVersionRequest>
        void DeleteRecipeVersionAsync(const DeleteRecipeVersionRequestT& request, const DeleteRecipeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::DeleteRecipeVersion, request, handler, context);
        }

        /**
         * <p>Deletes a ruleset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DeleteRuleset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRulesetOutcome DeleteRuleset(const Model::DeleteRulesetRequest& request) const;

        /**
         * A Callable wrapper for DeleteRuleset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRulesetRequestT = Model::DeleteRulesetRequest>
        Model::DeleteRulesetOutcomeCallable DeleteRulesetCallable(const DeleteRulesetRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::DeleteRuleset, request);
        }

        /**
         * An Async wrapper for DeleteRuleset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRulesetRequestT = Model::DeleteRulesetRequest>
        void DeleteRulesetAsync(const DeleteRulesetRequestT& request, const DeleteRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::DeleteRuleset, request, handler, context);
        }

        /**
         * <p>Deletes the specified DataBrew schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DeleteSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduleOutcome DeleteSchedule(const Model::DeleteScheduleRequest& request) const;

        /**
         * A Callable wrapper for DeleteSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteScheduleRequestT = Model::DeleteScheduleRequest>
        Model::DeleteScheduleOutcomeCallable DeleteScheduleCallable(const DeleteScheduleRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::DeleteSchedule, request);
        }

        /**
         * An Async wrapper for DeleteSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteScheduleRequestT = Model::DeleteScheduleRequest>
        void DeleteScheduleAsync(const DeleteScheduleRequestT& request, const DeleteScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::DeleteSchedule, request, handler, context);
        }

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
        template<typename DescribeDatasetRequestT = Model::DescribeDatasetRequest>
        Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const DescribeDatasetRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::DescribeDataset, request);
        }

        /**
         * An Async wrapper for DescribeDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDatasetRequestT = Model::DescribeDatasetRequest>
        void DescribeDatasetAsync(const DescribeDatasetRequestT& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::DescribeDataset, request, handler, context);
        }

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
        template<typename DescribeJobRequestT = Model::DescribeJobRequest>
        Model::DescribeJobOutcomeCallable DescribeJobCallable(const DescribeJobRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::DescribeJob, request);
        }

        /**
         * An Async wrapper for DescribeJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeJobRequestT = Model::DescribeJobRequest>
        void DescribeJobAsync(const DescribeJobRequestT& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::DescribeJob, request, handler, context);
        }

        /**
         * <p>Represents one run of a DataBrew job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DescribeJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobRunOutcome DescribeJobRun(const Model::DescribeJobRunRequest& request) const;

        /**
         * A Callable wrapper for DescribeJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeJobRunRequestT = Model::DescribeJobRunRequest>
        Model::DescribeJobRunOutcomeCallable DescribeJobRunCallable(const DescribeJobRunRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::DescribeJobRun, request);
        }

        /**
         * An Async wrapper for DescribeJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeJobRunRequestT = Model::DescribeJobRunRequest>
        void DescribeJobRunAsync(const DescribeJobRunRequestT& request, const DescribeJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::DescribeJobRun, request, handler, context);
        }

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
        template<typename DescribeProjectRequestT = Model::DescribeProjectRequest>
        Model::DescribeProjectOutcomeCallable DescribeProjectCallable(const DescribeProjectRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::DescribeProject, request);
        }

        /**
         * An Async wrapper for DescribeProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProjectRequestT = Model::DescribeProjectRequest>
        void DescribeProjectAsync(const DescribeProjectRequestT& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::DescribeProject, request, handler, context);
        }

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
        template<typename DescribeRecipeRequestT = Model::DescribeRecipeRequest>
        Model::DescribeRecipeOutcomeCallable DescribeRecipeCallable(const DescribeRecipeRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::DescribeRecipe, request);
        }

        /**
         * An Async wrapper for DescribeRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRecipeRequestT = Model::DescribeRecipeRequest>
        void DescribeRecipeAsync(const DescribeRecipeRequestT& request, const DescribeRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::DescribeRecipe, request, handler, context);
        }

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
        template<typename DescribeRulesetRequestT = Model::DescribeRulesetRequest>
        Model::DescribeRulesetOutcomeCallable DescribeRulesetCallable(const DescribeRulesetRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::DescribeRuleset, request);
        }

        /**
         * An Async wrapper for DescribeRuleset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRulesetRequestT = Model::DescribeRulesetRequest>
        void DescribeRulesetAsync(const DescribeRulesetRequestT& request, const DescribeRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::DescribeRuleset, request, handler, context);
        }

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
        template<typename DescribeScheduleRequestT = Model::DescribeScheduleRequest>
        Model::DescribeScheduleOutcomeCallable DescribeScheduleCallable(const DescribeScheduleRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::DescribeSchedule, request);
        }

        /**
         * An Async wrapper for DescribeSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeScheduleRequestT = Model::DescribeScheduleRequest>
        void DescribeScheduleAsync(const DescribeScheduleRequestT& request, const DescribeScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::DescribeSchedule, request, handler, context);
        }

        /**
         * <p>Lists all of the DataBrew datasets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListDatasets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetsOutcome ListDatasets(const Model::ListDatasetsRequest& request) const;

        /**
         * A Callable wrapper for ListDatasets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDatasetsRequestT = Model::ListDatasetsRequest>
        Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const ListDatasetsRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::ListDatasets, request);
        }

        /**
         * An Async wrapper for ListDatasets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDatasetsRequestT = Model::ListDatasetsRequest>
        void ListDatasetsAsync(const ListDatasetsRequestT& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::ListDatasets, request, handler, context);
        }

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
        template<typename ListJobRunsRequestT = Model::ListJobRunsRequest>
        Model::ListJobRunsOutcomeCallable ListJobRunsCallable(const ListJobRunsRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::ListJobRuns, request);
        }

        /**
         * An Async wrapper for ListJobRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobRunsRequestT = Model::ListJobRunsRequest>
        void ListJobRunsAsync(const ListJobRunsRequestT& request, const ListJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::ListJobRuns, request, handler, context);
        }

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
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        Model::ListJobsOutcomeCallable ListJobsCallable(const ListJobsRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::ListJobs, request);
        }

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        void ListJobsAsync(const ListJobsRequestT& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::ListJobs, request, handler, context);
        }

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
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        Model::ListProjectsOutcomeCallable ListProjectsCallable(const ListProjectsRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::ListProjects, request);
        }

        /**
         * An Async wrapper for ListProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        void ListProjectsAsync(const ListProjectsRequestT& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::ListProjects, request, handler, context);
        }

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
        template<typename ListRecipeVersionsRequestT = Model::ListRecipeVersionsRequest>
        Model::ListRecipeVersionsOutcomeCallable ListRecipeVersionsCallable(const ListRecipeVersionsRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::ListRecipeVersions, request);
        }

        /**
         * An Async wrapper for ListRecipeVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecipeVersionsRequestT = Model::ListRecipeVersionsRequest>
        void ListRecipeVersionsAsync(const ListRecipeVersionsRequestT& request, const ListRecipeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::ListRecipeVersions, request, handler, context);
        }

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
        template<typename ListRecipesRequestT = Model::ListRecipesRequest>
        Model::ListRecipesOutcomeCallable ListRecipesCallable(const ListRecipesRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::ListRecipes, request);
        }

        /**
         * An Async wrapper for ListRecipes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecipesRequestT = Model::ListRecipesRequest>
        void ListRecipesAsync(const ListRecipesRequestT& request, const ListRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::ListRecipes, request, handler, context);
        }

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
        template<typename ListRulesetsRequestT = Model::ListRulesetsRequest>
        Model::ListRulesetsOutcomeCallable ListRulesetsCallable(const ListRulesetsRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::ListRulesets, request);
        }

        /**
         * An Async wrapper for ListRulesets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRulesetsRequestT = Model::ListRulesetsRequest>
        void ListRulesetsAsync(const ListRulesetsRequestT& request, const ListRulesetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::ListRulesets, request, handler, context);
        }

        /**
         * <p>Lists the DataBrew schedules that are defined.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListSchedules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchedulesOutcome ListSchedules(const Model::ListSchedulesRequest& request) const;

        /**
         * A Callable wrapper for ListSchedules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSchedulesRequestT = Model::ListSchedulesRequest>
        Model::ListSchedulesOutcomeCallable ListSchedulesCallable(const ListSchedulesRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::ListSchedules, request);
        }

        /**
         * An Async wrapper for ListSchedules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSchedulesRequestT = Model::ListSchedulesRequest>
        void ListSchedulesAsync(const ListSchedulesRequestT& request, const ListSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::ListSchedules, request, handler, context);
        }

        /**
         * <p>Lists all the tags for a DataBrew resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Publishes a new version of a DataBrew recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/PublishRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishRecipeOutcome PublishRecipe(const Model::PublishRecipeRequest& request) const;

        /**
         * A Callable wrapper for PublishRecipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PublishRecipeRequestT = Model::PublishRecipeRequest>
        Model::PublishRecipeOutcomeCallable PublishRecipeCallable(const PublishRecipeRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::PublishRecipe, request);
        }

        /**
         * An Async wrapper for PublishRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PublishRecipeRequestT = Model::PublishRecipeRequest>
        void PublishRecipeAsync(const PublishRecipeRequestT& request, const PublishRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::PublishRecipe, request, handler, context);
        }

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
        template<typename SendProjectSessionActionRequestT = Model::SendProjectSessionActionRequest>
        Model::SendProjectSessionActionOutcomeCallable SendProjectSessionActionCallable(const SendProjectSessionActionRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::SendProjectSessionAction, request);
        }

        /**
         * An Async wrapper for SendProjectSessionAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendProjectSessionActionRequestT = Model::SendProjectSessionActionRequest>
        void SendProjectSessionActionAsync(const SendProjectSessionActionRequestT& request, const SendProjectSessionActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::SendProjectSessionAction, request, handler, context);
        }

        /**
         * <p>Runs a DataBrew job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/StartJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobRunOutcome StartJobRun(const Model::StartJobRunRequest& request) const;

        /**
         * A Callable wrapper for StartJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartJobRunRequestT = Model::StartJobRunRequest>
        Model::StartJobRunOutcomeCallable StartJobRunCallable(const StartJobRunRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::StartJobRun, request);
        }

        /**
         * An Async wrapper for StartJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartJobRunRequestT = Model::StartJobRunRequest>
        void StartJobRunAsync(const StartJobRunRequestT& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::StartJobRun, request, handler, context);
        }

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
        template<typename StartProjectSessionRequestT = Model::StartProjectSessionRequest>
        Model::StartProjectSessionOutcomeCallable StartProjectSessionCallable(const StartProjectSessionRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::StartProjectSession, request);
        }

        /**
         * An Async wrapper for StartProjectSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartProjectSessionRequestT = Model::StartProjectSessionRequest>
        void StartProjectSessionAsync(const StartProjectSessionRequestT& request, const StartProjectSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::StartProjectSession, request, handler, context);
        }

        /**
         * <p>Stops a particular run of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/StopJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StopJobRunOutcome StopJobRun(const Model::StopJobRunRequest& request) const;

        /**
         * A Callable wrapper for StopJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopJobRunRequestT = Model::StopJobRunRequest>
        Model::StopJobRunOutcomeCallable StopJobRunCallable(const StopJobRunRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::StopJobRun, request);
        }

        /**
         * An Async wrapper for StopJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopJobRunRequestT = Model::StopJobRunRequest>
        void StopJobRunAsync(const StopJobRunRequestT& request, const StopJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::StopJobRun, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes metadata tags from a DataBrew resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdateDatasetRequestT = Model::UpdateDatasetRequest>
        Model::UpdateDatasetOutcomeCallable UpdateDatasetCallable(const UpdateDatasetRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::UpdateDataset, request);
        }

        /**
         * An Async wrapper for UpdateDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDatasetRequestT = Model::UpdateDatasetRequest>
        void UpdateDatasetAsync(const UpdateDatasetRequestT& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::UpdateDataset, request, handler, context);
        }

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
        template<typename UpdateProfileJobRequestT = Model::UpdateProfileJobRequest>
        Model::UpdateProfileJobOutcomeCallable UpdateProfileJobCallable(const UpdateProfileJobRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::UpdateProfileJob, request);
        }

        /**
         * An Async wrapper for UpdateProfileJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProfileJobRequestT = Model::UpdateProfileJobRequest>
        void UpdateProfileJobAsync(const UpdateProfileJobRequestT& request, const UpdateProfileJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::UpdateProfileJob, request, handler, context);
        }

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
        template<typename UpdateProjectRequestT = Model::UpdateProjectRequest>
        Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const UpdateProjectRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::UpdateProject, request);
        }

        /**
         * An Async wrapper for UpdateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProjectRequestT = Model::UpdateProjectRequest>
        void UpdateProjectAsync(const UpdateProjectRequestT& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::UpdateProject, request, handler, context);
        }

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
        template<typename UpdateRecipeRequestT = Model::UpdateRecipeRequest>
        Model::UpdateRecipeOutcomeCallable UpdateRecipeCallable(const UpdateRecipeRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::UpdateRecipe, request);
        }

        /**
         * An Async wrapper for UpdateRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRecipeRequestT = Model::UpdateRecipeRequest>
        void UpdateRecipeAsync(const UpdateRecipeRequestT& request, const UpdateRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::UpdateRecipe, request, handler, context);
        }

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
        template<typename UpdateRecipeJobRequestT = Model::UpdateRecipeJobRequest>
        Model::UpdateRecipeJobOutcomeCallable UpdateRecipeJobCallable(const UpdateRecipeJobRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::UpdateRecipeJob, request);
        }

        /**
         * An Async wrapper for UpdateRecipeJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRecipeJobRequestT = Model::UpdateRecipeJobRequest>
        void UpdateRecipeJobAsync(const UpdateRecipeJobRequestT& request, const UpdateRecipeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::UpdateRecipeJob, request, handler, context);
        }

        /**
         * <p>Updates specified ruleset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/UpdateRuleset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRulesetOutcome UpdateRuleset(const Model::UpdateRulesetRequest& request) const;

        /**
         * A Callable wrapper for UpdateRuleset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRulesetRequestT = Model::UpdateRulesetRequest>
        Model::UpdateRulesetOutcomeCallable UpdateRulesetCallable(const UpdateRulesetRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::UpdateRuleset, request);
        }

        /**
         * An Async wrapper for UpdateRuleset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRulesetRequestT = Model::UpdateRulesetRequest>
        void UpdateRulesetAsync(const UpdateRulesetRequestT& request, const UpdateRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::UpdateRuleset, request, handler, context);
        }

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
        template<typename UpdateScheduleRequestT = Model::UpdateScheduleRequest>
        Model::UpdateScheduleOutcomeCallable UpdateScheduleCallable(const UpdateScheduleRequestT& request) const
        {
            return SubmitCallable(&GlueDataBrewClient::UpdateSchedule, request);
        }

        /**
         * An Async wrapper for UpdateSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateScheduleRequestT = Model::UpdateScheduleRequest>
        void UpdateScheduleAsync(const UpdateScheduleRequestT& request, const UpdateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueDataBrewClient::UpdateSchedule, request, handler, context);
        }


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
