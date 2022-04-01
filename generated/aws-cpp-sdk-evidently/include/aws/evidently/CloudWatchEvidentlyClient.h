﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/evidently/model/BatchEvaluateFeatureResult.h>
#include <aws/evidently/model/CreateExperimentResult.h>
#include <aws/evidently/model/CreateFeatureResult.h>
#include <aws/evidently/model/CreateLaunchResult.h>
#include <aws/evidently/model/CreateProjectResult.h>
#include <aws/evidently/model/DeleteExperimentResult.h>
#include <aws/evidently/model/DeleteFeatureResult.h>
#include <aws/evidently/model/DeleteLaunchResult.h>
#include <aws/evidently/model/DeleteProjectResult.h>
#include <aws/evidently/model/EvaluateFeatureResult.h>
#include <aws/evidently/model/GetExperimentResult.h>
#include <aws/evidently/model/GetExperimentResultsResult.h>
#include <aws/evidently/model/GetFeatureResult.h>
#include <aws/evidently/model/GetLaunchResult.h>
#include <aws/evidently/model/GetProjectResult.h>
#include <aws/evidently/model/ListExperimentsResult.h>
#include <aws/evidently/model/ListFeaturesResult.h>
#include <aws/evidently/model/ListLaunchesResult.h>
#include <aws/evidently/model/ListProjectsResult.h>
#include <aws/evidently/model/ListTagsForResourceResult.h>
#include <aws/evidently/model/PutProjectEventsResult.h>
#include <aws/evidently/model/StartExperimentResult.h>
#include <aws/evidently/model/StartLaunchResult.h>
#include <aws/evidently/model/StopExperimentResult.h>
#include <aws/evidently/model/StopLaunchResult.h>
#include <aws/evidently/model/TagResourceResult.h>
#include <aws/evidently/model/UntagResourceResult.h>
#include <aws/evidently/model/UpdateExperimentResult.h>
#include <aws/evidently/model/UpdateFeatureResult.h>
#include <aws/evidently/model/UpdateLaunchResult.h>
#include <aws/evidently/model/UpdateProjectResult.h>
#include <aws/evidently/model/UpdateProjectDataDeliveryResult.h>
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

namespace CloudWatchEvidently
{

namespace Model
{
        class BatchEvaluateFeatureRequest;
        class CreateExperimentRequest;
        class CreateFeatureRequest;
        class CreateLaunchRequest;
        class CreateProjectRequest;
        class DeleteExperimentRequest;
        class DeleteFeatureRequest;
        class DeleteLaunchRequest;
        class DeleteProjectRequest;
        class EvaluateFeatureRequest;
        class GetExperimentRequest;
        class GetExperimentResultsRequest;
        class GetFeatureRequest;
        class GetLaunchRequest;
        class GetProjectRequest;
        class ListExperimentsRequest;
        class ListFeaturesRequest;
        class ListLaunchesRequest;
        class ListProjectsRequest;
        class ListTagsForResourceRequest;
        class PutProjectEventsRequest;
        class StartExperimentRequest;
        class StartLaunchRequest;
        class StopExperimentRequest;
        class StopLaunchRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateExperimentRequest;
        class UpdateFeatureRequest;
        class UpdateLaunchRequest;
        class UpdateProjectRequest;
        class UpdateProjectDataDeliveryRequest;

        typedef Aws::Utils::Outcome<BatchEvaluateFeatureResult, CloudWatchEvidentlyError> BatchEvaluateFeatureOutcome;
        typedef Aws::Utils::Outcome<CreateExperimentResult, CloudWatchEvidentlyError> CreateExperimentOutcome;
        typedef Aws::Utils::Outcome<CreateFeatureResult, CloudWatchEvidentlyError> CreateFeatureOutcome;
        typedef Aws::Utils::Outcome<CreateLaunchResult, CloudWatchEvidentlyError> CreateLaunchOutcome;
        typedef Aws::Utils::Outcome<CreateProjectResult, CloudWatchEvidentlyError> CreateProjectOutcome;
        typedef Aws::Utils::Outcome<DeleteExperimentResult, CloudWatchEvidentlyError> DeleteExperimentOutcome;
        typedef Aws::Utils::Outcome<DeleteFeatureResult, CloudWatchEvidentlyError> DeleteFeatureOutcome;
        typedef Aws::Utils::Outcome<DeleteLaunchResult, CloudWatchEvidentlyError> DeleteLaunchOutcome;
        typedef Aws::Utils::Outcome<DeleteProjectResult, CloudWatchEvidentlyError> DeleteProjectOutcome;
        typedef Aws::Utils::Outcome<EvaluateFeatureResult, CloudWatchEvidentlyError> EvaluateFeatureOutcome;
        typedef Aws::Utils::Outcome<GetExperimentResult, CloudWatchEvidentlyError> GetExperimentOutcome;
        typedef Aws::Utils::Outcome<GetExperimentResultsResult, CloudWatchEvidentlyError> GetExperimentResultsOutcome;
        typedef Aws::Utils::Outcome<GetFeatureResult, CloudWatchEvidentlyError> GetFeatureOutcome;
        typedef Aws::Utils::Outcome<GetLaunchResult, CloudWatchEvidentlyError> GetLaunchOutcome;
        typedef Aws::Utils::Outcome<GetProjectResult, CloudWatchEvidentlyError> GetProjectOutcome;
        typedef Aws::Utils::Outcome<ListExperimentsResult, CloudWatchEvidentlyError> ListExperimentsOutcome;
        typedef Aws::Utils::Outcome<ListFeaturesResult, CloudWatchEvidentlyError> ListFeaturesOutcome;
        typedef Aws::Utils::Outcome<ListLaunchesResult, CloudWatchEvidentlyError> ListLaunchesOutcome;
        typedef Aws::Utils::Outcome<ListProjectsResult, CloudWatchEvidentlyError> ListProjectsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, CloudWatchEvidentlyError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutProjectEventsResult, CloudWatchEvidentlyError> PutProjectEventsOutcome;
        typedef Aws::Utils::Outcome<StartExperimentResult, CloudWatchEvidentlyError> StartExperimentOutcome;
        typedef Aws::Utils::Outcome<StartLaunchResult, CloudWatchEvidentlyError> StartLaunchOutcome;
        typedef Aws::Utils::Outcome<StopExperimentResult, CloudWatchEvidentlyError> StopExperimentOutcome;
        typedef Aws::Utils::Outcome<StopLaunchResult, CloudWatchEvidentlyError> StopLaunchOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, CloudWatchEvidentlyError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, CloudWatchEvidentlyError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateExperimentResult, CloudWatchEvidentlyError> UpdateExperimentOutcome;
        typedef Aws::Utils::Outcome<UpdateFeatureResult, CloudWatchEvidentlyError> UpdateFeatureOutcome;
        typedef Aws::Utils::Outcome<UpdateLaunchResult, CloudWatchEvidentlyError> UpdateLaunchOutcome;
        typedef Aws::Utils::Outcome<UpdateProjectResult, CloudWatchEvidentlyError> UpdateProjectOutcome;
        typedef Aws::Utils::Outcome<UpdateProjectDataDeliveryResult, CloudWatchEvidentlyError> UpdateProjectDataDeliveryOutcome;

        typedef std::future<BatchEvaluateFeatureOutcome> BatchEvaluateFeatureOutcomeCallable;
        typedef std::future<CreateExperimentOutcome> CreateExperimentOutcomeCallable;
        typedef std::future<CreateFeatureOutcome> CreateFeatureOutcomeCallable;
        typedef std::future<CreateLaunchOutcome> CreateLaunchOutcomeCallable;
        typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
        typedef std::future<DeleteExperimentOutcome> DeleteExperimentOutcomeCallable;
        typedef std::future<DeleteFeatureOutcome> DeleteFeatureOutcomeCallable;
        typedef std::future<DeleteLaunchOutcome> DeleteLaunchOutcomeCallable;
        typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
        typedef std::future<EvaluateFeatureOutcome> EvaluateFeatureOutcomeCallable;
        typedef std::future<GetExperimentOutcome> GetExperimentOutcomeCallable;
        typedef std::future<GetExperimentResultsOutcome> GetExperimentResultsOutcomeCallable;
        typedef std::future<GetFeatureOutcome> GetFeatureOutcomeCallable;
        typedef std::future<GetLaunchOutcome> GetLaunchOutcomeCallable;
        typedef std::future<GetProjectOutcome> GetProjectOutcomeCallable;
        typedef std::future<ListExperimentsOutcome> ListExperimentsOutcomeCallable;
        typedef std::future<ListFeaturesOutcome> ListFeaturesOutcomeCallable;
        typedef std::future<ListLaunchesOutcome> ListLaunchesOutcomeCallable;
        typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutProjectEventsOutcome> PutProjectEventsOutcomeCallable;
        typedef std::future<StartExperimentOutcome> StartExperimentOutcomeCallable;
        typedef std::future<StartLaunchOutcome> StartLaunchOutcomeCallable;
        typedef std::future<StopExperimentOutcome> StopExperimentOutcomeCallable;
        typedef std::future<StopLaunchOutcome> StopLaunchOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateExperimentOutcome> UpdateExperimentOutcomeCallable;
        typedef std::future<UpdateFeatureOutcome> UpdateFeatureOutcomeCallable;
        typedef std::future<UpdateLaunchOutcome> UpdateLaunchOutcomeCallable;
        typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
        typedef std::future<UpdateProjectDataDeliveryOutcome> UpdateProjectDataDeliveryOutcomeCallable;
} // namespace Model

  class CloudWatchEvidentlyClient;

    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::BatchEvaluateFeatureRequest&, const Model::BatchEvaluateFeatureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchEvaluateFeatureResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::CreateExperimentRequest&, const Model::CreateExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExperimentResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::CreateFeatureRequest&, const Model::CreateFeatureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFeatureResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::CreateLaunchRequest&, const Model::CreateLaunchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLaunchResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::DeleteExperimentRequest&, const Model::DeleteExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteExperimentResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::DeleteFeatureRequest&, const Model::DeleteFeatureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFeatureResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::DeleteLaunchRequest&, const Model::DeleteLaunchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLaunchResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::EvaluateFeatureRequest&, const Model::EvaluateFeatureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EvaluateFeatureResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::GetExperimentRequest&, const Model::GetExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExperimentResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::GetExperimentResultsRequest&, const Model::GetExperimentResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExperimentResultsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::GetFeatureRequest&, const Model::GetFeatureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFeatureResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::GetLaunchRequest&, const Model::GetLaunchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLaunchResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::GetProjectRequest&, const Model::GetProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProjectResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::ListExperimentsRequest&, const Model::ListExperimentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExperimentsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::ListFeaturesRequest&, const Model::ListFeaturesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFeaturesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::ListLaunchesRequest&, const Model::ListLaunchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLaunchesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::PutProjectEventsRequest&, const Model::PutProjectEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutProjectEventsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::StartExperimentRequest&, const Model::StartExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartExperimentResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::StartLaunchRequest&, const Model::StartLaunchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartLaunchResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::StopExperimentRequest&, const Model::StopExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopExperimentResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::StopLaunchRequest&, const Model::StopLaunchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopLaunchResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::UpdateExperimentRequest&, const Model::UpdateExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateExperimentResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::UpdateFeatureRequest&, const Model::UpdateFeatureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFeatureResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::UpdateLaunchRequest&, const Model::UpdateLaunchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLaunchResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::UpdateProjectRequest&, const Model::UpdateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::UpdateProjectDataDeliveryRequest&, const Model::UpdateProjectDataDeliveryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectDataDeliveryResponseReceivedHandler;

  /**
   * <p>You can use Amazon CloudWatch Evidently to safely validate new features by
   * serving them to a specified percentage of your users while you roll out the
   * feature. You can monitor the performance of the new feature to help you decide
   * when to ramp up traffic to your users. This helps you reduce risk and identify
   * unintended consequences before you fully launch the feature.</p> <p>You can also
   * conduct A/B experiments to make feature design decisions based on evidence and
   * data. An experiment can test as many as five variations at once. Evidently
   * collects experiment data and analyzes it using statistical methods. It also
   * provides clear recommendations about which variations perform better. You can
   * test both user-facing features and backend features.</p>
   */
  class AWS_CLOUDWATCHEVIDENTLY_API CloudWatchEvidentlyClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchEvidentlyClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchEvidentlyClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchEvidentlyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CloudWatchEvidentlyClient();


        /**
         * <p>This operation assigns feature variation to user sessions. For each user
         * session, you pass in an <code>entityID</code> that represents the user.
         * Evidently then checks the evaluation rules and assigns the variation.</p> <p>The
         * first rules that are evaluated are the override rules. If the user's
         * <code>entityID</code> matches an override rule, the user is served the variation
         * specified by that rule.</p> <p>Next, if there is a launch of the feature, the
         * user might be assigned to a variation in the launch. The chance of this depends
         * on the percentage of users that are allocated to that launch. If the user is
         * enrolled in the launch, the variation they are served depends on the allocation
         * of the various feature variations used for the launch.</p> <p>If the user is not
         * assigned to a launch, and there is an ongoing experiment for this feature, the
         * user might be assigned to a variation in the experiment. The chance of this
         * depends on the percentage of users that are allocated to that experiment. If the
         * user is enrolled in the experiment, the variation they are served depends on the
         * allocation of the various feature variations used for the experiment. </p> <p>If
         * the user is not assigned to a launch or experiment, they are served the default
         * variation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/BatchEvaluateFeature">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchEvaluateFeatureOutcome BatchEvaluateFeature(const Model::BatchEvaluateFeatureRequest& request) const;

        /**
         * <p>This operation assigns feature variation to user sessions. For each user
         * session, you pass in an <code>entityID</code> that represents the user.
         * Evidently then checks the evaluation rules and assigns the variation.</p> <p>The
         * first rules that are evaluated are the override rules. If the user's
         * <code>entityID</code> matches an override rule, the user is served the variation
         * specified by that rule.</p> <p>Next, if there is a launch of the feature, the
         * user might be assigned to a variation in the launch. The chance of this depends
         * on the percentage of users that are allocated to that launch. If the user is
         * enrolled in the launch, the variation they are served depends on the allocation
         * of the various feature variations used for the launch.</p> <p>If the user is not
         * assigned to a launch, and there is an ongoing experiment for this feature, the
         * user might be assigned to a variation in the experiment. The chance of this
         * depends on the percentage of users that are allocated to that experiment. If the
         * user is enrolled in the experiment, the variation they are served depends on the
         * allocation of the various feature variations used for the experiment. </p> <p>If
         * the user is not assigned to a launch or experiment, they are served the default
         * variation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/BatchEvaluateFeature">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchEvaluateFeatureOutcomeCallable BatchEvaluateFeatureCallable(const Model::BatchEvaluateFeatureRequest& request) const;

        /**
         * <p>This operation assigns feature variation to user sessions. For each user
         * session, you pass in an <code>entityID</code> that represents the user.
         * Evidently then checks the evaluation rules and assigns the variation.</p> <p>The
         * first rules that are evaluated are the override rules. If the user's
         * <code>entityID</code> matches an override rule, the user is served the variation
         * specified by that rule.</p> <p>Next, if there is a launch of the feature, the
         * user might be assigned to a variation in the launch. The chance of this depends
         * on the percentage of users that are allocated to that launch. If the user is
         * enrolled in the launch, the variation they are served depends on the allocation
         * of the various feature variations used for the launch.</p> <p>If the user is not
         * assigned to a launch, and there is an ongoing experiment for this feature, the
         * user might be assigned to a variation in the experiment. The chance of this
         * depends on the percentage of users that are allocated to that experiment. If the
         * user is enrolled in the experiment, the variation they are served depends on the
         * allocation of the various feature variations used for the experiment. </p> <p>If
         * the user is not assigned to a launch or experiment, they are served the default
         * variation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/BatchEvaluateFeature">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchEvaluateFeatureAsync(const Model::BatchEvaluateFeatureRequest& request, const BatchEvaluateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Evidently <i>experiment</i>. Before you create an experiment, you
         * must create the feature to use for the experiment.</p> <p>An experiment helps
         * you make feature design decisions based on evidence and data. An experiment can
         * test as many as five variations at once. Evidently collects experiment data and
         * analyzes it by statistical methods, and provides clear recommendations about
         * which variations perform better.</p> <p>Don't use this operation to update an
         * existing experiment. Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateExperiment.html">UpdateExperiment</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/CreateExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExperimentOutcome CreateExperiment(const Model::CreateExperimentRequest& request) const;

        /**
         * <p>Creates an Evidently <i>experiment</i>. Before you create an experiment, you
         * must create the feature to use for the experiment.</p> <p>An experiment helps
         * you make feature design decisions based on evidence and data. An experiment can
         * test as many as five variations at once. Evidently collects experiment data and
         * analyzes it by statistical methods, and provides clear recommendations about
         * which variations perform better.</p> <p>Don't use this operation to update an
         * existing experiment. Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateExperiment.html">UpdateExperiment</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/CreateExperiment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateExperimentOutcomeCallable CreateExperimentCallable(const Model::CreateExperimentRequest& request) const;

        /**
         * <p>Creates an Evidently <i>experiment</i>. Before you create an experiment, you
         * must create the feature to use for the experiment.</p> <p>An experiment helps
         * you make feature design decisions based on evidence and data. An experiment can
         * test as many as five variations at once. Evidently collects experiment data and
         * analyzes it by statistical methods, and provides clear recommendations about
         * which variations perform better.</p> <p>Don't use this operation to update an
         * existing experiment. Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateExperiment.html">UpdateExperiment</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/CreateExperiment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateExperimentAsync(const Model::CreateExperimentRequest& request, const CreateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Evidently <i>feature</i> that you want to launch or test. You can
         * define up to five variations of a feature, and use these variations in your
         * launches and experiments. A feature must be created in a project. For
         * information about creating a project, see <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateProject.html">CreateProject</a>.</p>
         * <p>Don't use this operation to update an existing feature. Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateFeature.html">UpdateFeature</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/CreateFeature">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFeatureOutcome CreateFeature(const Model::CreateFeatureRequest& request) const;

        /**
         * <p>Creates an Evidently <i>feature</i> that you want to launch or test. You can
         * define up to five variations of a feature, and use these variations in your
         * launches and experiments. A feature must be created in a project. For
         * information about creating a project, see <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateProject.html">CreateProject</a>.</p>
         * <p>Don't use this operation to update an existing feature. Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateFeature.html">UpdateFeature</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/CreateFeature">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFeatureOutcomeCallable CreateFeatureCallable(const Model::CreateFeatureRequest& request) const;

        /**
         * <p>Creates an Evidently <i>feature</i> that you want to launch or test. You can
         * define up to five variations of a feature, and use these variations in your
         * launches and experiments. A feature must be created in a project. For
         * information about creating a project, see <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateProject.html">CreateProject</a>.</p>
         * <p>Don't use this operation to update an existing feature. Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateFeature.html">UpdateFeature</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/CreateFeature">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFeatureAsync(const Model::CreateFeatureRequest& request, const CreateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <i>launch</i> of a given feature. Before you create a launch, you
         * must create the feature to use for the launch.</p> <p>You can use a launch to
         * safely validate new features by serving them to a specified percentage of your
         * users while you roll out the feature. You can monitor the performance of the new
         * feature to help you decide when to ramp up traffic to more users. This helps you
         * reduce risk and identify unintended consequences before you fully launch the
         * feature.</p> <p>Don't use this operation to update an existing launch. Instead,
         * use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateLaunch.html">UpdateLaunch</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/CreateLaunch">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLaunchOutcome CreateLaunch(const Model::CreateLaunchRequest& request) const;

        /**
         * <p>Creates a <i>launch</i> of a given feature. Before you create a launch, you
         * must create the feature to use for the launch.</p> <p>You can use a launch to
         * safely validate new features by serving them to a specified percentage of your
         * users while you roll out the feature. You can monitor the performance of the new
         * feature to help you decide when to ramp up traffic to more users. This helps you
         * reduce risk and identify unintended consequences before you fully launch the
         * feature.</p> <p>Don't use this operation to update an existing launch. Instead,
         * use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateLaunch.html">UpdateLaunch</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/CreateLaunch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLaunchOutcomeCallable CreateLaunchCallable(const Model::CreateLaunchRequest& request) const;

        /**
         * <p>Creates a <i>launch</i> of a given feature. Before you create a launch, you
         * must create the feature to use for the launch.</p> <p>You can use a launch to
         * safely validate new features by serving them to a specified percentage of your
         * users while you roll out the feature. You can monitor the performance of the new
         * feature to help you decide when to ramp up traffic to more users. This helps you
         * reduce risk and identify unintended consequences before you fully launch the
         * feature.</p> <p>Don't use this operation to update an existing launch. Instead,
         * use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateLaunch.html">UpdateLaunch</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/CreateLaunch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLaunchAsync(const Model::CreateLaunchRequest& request, const CreateLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a project, which is the logical object in Evidently that can contain
         * features, launches, and experiments. Use projects to group similar features
         * together.</p> <p>To update an existing project, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateProject.html">UpdateProject</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * <p>Creates a project, which is the logical object in Evidently that can contain
         * features, launches, and experiments. Use projects to group similar features
         * together.</p> <p>To update an existing project, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateProject.html">UpdateProject</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/CreateProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request) const;

        /**
         * <p>Creates a project, which is the logical object in Evidently that can contain
         * features, launches, and experiments. Use projects to group similar features
         * together.</p> <p>To update an existing project, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateProject.html">UpdateProject</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/CreateProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Evidently experiment. The feature used for the experiment is not
         * deleted.</p> <p>To stop an experiment without deleting it, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_StopExperiment.html">StopExperiment</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/DeleteExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteExperimentOutcome DeleteExperiment(const Model::DeleteExperimentRequest& request) const;

        /**
         * <p>Deletes an Evidently experiment. The feature used for the experiment is not
         * deleted.</p> <p>To stop an experiment without deleting it, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_StopExperiment.html">StopExperiment</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/DeleteExperiment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteExperimentOutcomeCallable DeleteExperimentCallable(const Model::DeleteExperimentRequest& request) const;

        /**
         * <p>Deletes an Evidently experiment. The feature used for the experiment is not
         * deleted.</p> <p>To stop an experiment without deleting it, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_StopExperiment.html">StopExperiment</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/DeleteExperiment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteExperimentAsync(const Model::DeleteExperimentRequest& request, const DeleteExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Evidently feature.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/DeleteFeature">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFeatureOutcome DeleteFeature(const Model::DeleteFeatureRequest& request) const;

        /**
         * <p>Deletes an Evidently feature.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/DeleteFeature">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFeatureOutcomeCallable DeleteFeatureCallable(const Model::DeleteFeatureRequest& request) const;

        /**
         * <p>Deletes an Evidently feature.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/DeleteFeature">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFeatureAsync(const Model::DeleteFeatureRequest& request, const DeleteFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Evidently launch. The feature used for the launch is not
         * deleted.</p> <p>To stop a launch without deleting it, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_StopLaunch.html">StopLaunch</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/DeleteLaunch">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchOutcome DeleteLaunch(const Model::DeleteLaunchRequest& request) const;

        /**
         * <p>Deletes an Evidently launch. The feature used for the launch is not
         * deleted.</p> <p>To stop a launch without deleting it, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_StopLaunch.html">StopLaunch</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/DeleteLaunch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLaunchOutcomeCallable DeleteLaunchCallable(const Model::DeleteLaunchRequest& request) const;

        /**
         * <p>Deletes an Evidently launch. The feature used for the launch is not
         * deleted.</p> <p>To stop a launch without deleting it, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_StopLaunch.html">StopLaunch</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/DeleteLaunch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLaunchAsync(const Model::DeleteLaunchRequest& request, const DeleteLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Evidently project. Before you can delete a project, you must
         * delete all the features that the project contains. To delete a feature, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_DeleteFeature.html">DeleteFeature</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * <p>Deletes an Evidently project. Before you can delete a project, you must
         * delete all the features that the project contains. To delete a feature, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_DeleteFeature.html">DeleteFeature</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/DeleteProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request) const;

        /**
         * <p>Deletes an Evidently project. Before you can delete a project, you must
         * delete all the features that the project contains. To delete a feature, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_DeleteFeature.html">DeleteFeature</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/DeleteProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation assigns a feature variation to one given user session. You
         * pass in an <code>entityID</code> that represents the user. Evidently then checks
         * the evaluation rules and assigns the variation.</p> <p>The first rules that are
         * evaluated are the override rules. If the user's <code>entityID</code> matches an
         * override rule, the user is served the variation specified by that rule.</p>
         * <p>Next, if there is a launch of the feature, the user might be assigned to a
         * variation in the launch. The chance of this depends on the percentage of users
         * that are allocated to that launch. If the user is enrolled in the launch, the
         * variation they are served depends on the allocation of the various feature
         * variations used for the launch.</p> <p>If the user is not assigned to a launch,
         * and there is an ongoing experiment for this feature, the user might be assigned
         * to a variation in the experiment. The chance of this depends on the percentage
         * of users that are allocated to that experiment. If the user is enrolled in the
         * experiment, the variation they are served depends on the allocation of the
         * various feature variations used for the experiment. </p> <p>If the user is not
         * assigned to a launch or experiment, they are served the default
         * variation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/EvaluateFeature">AWS
         * API Reference</a></p>
         */
        virtual Model::EvaluateFeatureOutcome EvaluateFeature(const Model::EvaluateFeatureRequest& request) const;

        /**
         * <p>This operation assigns a feature variation to one given user session. You
         * pass in an <code>entityID</code> that represents the user. Evidently then checks
         * the evaluation rules and assigns the variation.</p> <p>The first rules that are
         * evaluated are the override rules. If the user's <code>entityID</code> matches an
         * override rule, the user is served the variation specified by that rule.</p>
         * <p>Next, if there is a launch of the feature, the user might be assigned to a
         * variation in the launch. The chance of this depends on the percentage of users
         * that are allocated to that launch. If the user is enrolled in the launch, the
         * variation they are served depends on the allocation of the various feature
         * variations used for the launch.</p> <p>If the user is not assigned to a launch,
         * and there is an ongoing experiment for this feature, the user might be assigned
         * to a variation in the experiment. The chance of this depends on the percentage
         * of users that are allocated to that experiment. If the user is enrolled in the
         * experiment, the variation they are served depends on the allocation of the
         * various feature variations used for the experiment. </p> <p>If the user is not
         * assigned to a launch or experiment, they are served the default
         * variation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/EvaluateFeature">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EvaluateFeatureOutcomeCallable EvaluateFeatureCallable(const Model::EvaluateFeatureRequest& request) const;

        /**
         * <p>This operation assigns a feature variation to one given user session. You
         * pass in an <code>entityID</code> that represents the user. Evidently then checks
         * the evaluation rules and assigns the variation.</p> <p>The first rules that are
         * evaluated are the override rules. If the user's <code>entityID</code> matches an
         * override rule, the user is served the variation specified by that rule.</p>
         * <p>Next, if there is a launch of the feature, the user might be assigned to a
         * variation in the launch. The chance of this depends on the percentage of users
         * that are allocated to that launch. If the user is enrolled in the launch, the
         * variation they are served depends on the allocation of the various feature
         * variations used for the launch.</p> <p>If the user is not assigned to a launch,
         * and there is an ongoing experiment for this feature, the user might be assigned
         * to a variation in the experiment. The chance of this depends on the percentage
         * of users that are allocated to that experiment. If the user is enrolled in the
         * experiment, the variation they are served depends on the allocation of the
         * various feature variations used for the experiment. </p> <p>If the user is not
         * assigned to a launch or experiment, they are served the default
         * variation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/EvaluateFeature">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EvaluateFeatureAsync(const Model::EvaluateFeatureRequest& request, const EvaluateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details about one experiment. You must already know the
         * experiment name. To retrieve a list of experiments in your account, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_ListExperiments.html">ListExperiments</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/GetExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExperimentOutcome GetExperiment(const Model::GetExperimentRequest& request) const;

        /**
         * <p>Returns the details about one experiment. You must already know the
         * experiment name. To retrieve a list of experiments in your account, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_ListExperiments.html">ListExperiments</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/GetExperiment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExperimentOutcomeCallable GetExperimentCallable(const Model::GetExperimentRequest& request) const;

        /**
         * <p>Returns the details about one experiment. You must already know the
         * experiment name. To retrieve a list of experiments in your account, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_ListExperiments.html">ListExperiments</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/GetExperiment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExperimentAsync(const Model::GetExperimentRequest& request, const GetExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the results of a running or completed experiment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/GetExperimentResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExperimentResultsOutcome GetExperimentResults(const Model::GetExperimentResultsRequest& request) const;

        /**
         * <p>Retrieves the results of a running or completed experiment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/GetExperimentResults">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExperimentResultsOutcomeCallable GetExperimentResultsCallable(const Model::GetExperimentResultsRequest& request) const;

        /**
         * <p>Retrieves the results of a running or completed experiment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/GetExperimentResults">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExperimentResultsAsync(const Model::GetExperimentResultsRequest& request, const GetExperimentResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details about one feature. You must already know the feature
         * name. To retrieve a list of features in your account, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_ListFeatures.html">ListFeatures</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/GetFeature">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFeatureOutcome GetFeature(const Model::GetFeatureRequest& request) const;

        /**
         * <p>Returns the details about one feature. You must already know the feature
         * name. To retrieve a list of features in your account, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_ListFeatures.html">ListFeatures</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/GetFeature">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFeatureOutcomeCallable GetFeatureCallable(const Model::GetFeatureRequest& request) const;

        /**
         * <p>Returns the details about one feature. You must already know the feature
         * name. To retrieve a list of features in your account, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_ListFeatures.html">ListFeatures</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/GetFeature">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFeatureAsync(const Model::GetFeatureRequest& request, const GetFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details about one launch. You must already know the launch name.
         * To retrieve a list of launches in your account, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_ListLaunches.html">ListLaunches</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/GetLaunch">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchOutcome GetLaunch(const Model::GetLaunchRequest& request) const;

        /**
         * <p>Returns the details about one launch. You must already know the launch name.
         * To retrieve a list of launches in your account, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_ListLaunches.html">ListLaunches</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/GetLaunch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLaunchOutcomeCallable GetLaunchCallable(const Model::GetLaunchRequest& request) const;

        /**
         * <p>Returns the details about one launch. You must already know the launch name.
         * To retrieve a list of launches in your account, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_ListLaunches.html">ListLaunches</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/GetLaunch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLaunchAsync(const Model::GetLaunchRequest& request, const GetLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details about one launch. You must already know the project name.
         * To retrieve a list of projects in your account, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_ListProjects.html">ListProjects</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/GetProject">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProjectOutcome GetProject(const Model::GetProjectRequest& request) const;

        /**
         * <p>Returns the details about one launch. You must already know the project name.
         * To retrieve a list of projects in your account, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_ListProjects.html">ListProjects</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/GetProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProjectOutcomeCallable GetProjectCallable(const Model::GetProjectRequest& request) const;

        /**
         * <p>Returns the details about one launch. You must already know the project name.
         * To retrieve a list of projects in your account, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_ListProjects.html">ListProjects</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/GetProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProjectAsync(const Model::GetProjectRequest& request, const GetProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns configuration details about all the experiments in the specified
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListExperiments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExperimentsOutcome ListExperiments(const Model::ListExperimentsRequest& request) const;

        /**
         * <p>Returns configuration details about all the experiments in the specified
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListExperiments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExperimentsOutcomeCallable ListExperimentsCallable(const Model::ListExperimentsRequest& request) const;

        /**
         * <p>Returns configuration details about all the experiments in the specified
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListExperiments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExperimentsAsync(const Model::ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns configuration details about all the features in the specified
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListFeatures">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFeaturesOutcome ListFeatures(const Model::ListFeaturesRequest& request) const;

        /**
         * <p>Returns configuration details about all the features in the specified
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListFeatures">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFeaturesOutcomeCallable ListFeaturesCallable(const Model::ListFeaturesRequest& request) const;

        /**
         * <p>Returns configuration details about all the features in the specified
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListFeatures">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFeaturesAsync(const Model::ListFeaturesRequest& request, const ListFeaturesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns configuration details about all the launches in the specified
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListLaunches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLaunchesOutcome ListLaunches(const Model::ListLaunchesRequest& request) const;

        /**
         * <p>Returns configuration details about all the launches in the specified
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListLaunches">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLaunchesOutcomeCallable ListLaunchesCallable(const Model::ListLaunchesRequest& request) const;

        /**
         * <p>Returns configuration details about all the launches in the specified
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListLaunches">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLaunchesAsync(const Model::ListLaunchesRequest& request, const ListLaunchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns configuration details about all the projects in the current Region in
         * your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * <p>Returns configuration details about all the projects in the current Region in
         * your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListProjects">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProjectsOutcomeCallable ListProjectsCallable(const Model::ListProjectsRequest& request) const;

        /**
         * <p>Returns configuration details about all the projects in the current Region in
         * your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListProjects">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the tags associated with an Evidently resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Displays the tags associated with an Evidently resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Displays the tags associated with an Evidently resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends performance events to Evidently. These events can be used to evaluate a
         * launch or an experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/PutProjectEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutProjectEventsOutcome PutProjectEvents(const Model::PutProjectEventsRequest& request) const;

        /**
         * <p>Sends performance events to Evidently. These events can be used to evaluate a
         * launch or an experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/PutProjectEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutProjectEventsOutcomeCallable PutProjectEventsCallable(const Model::PutProjectEventsRequest& request) const;

        /**
         * <p>Sends performance events to Evidently. These events can be used to evaluate a
         * launch or an experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/PutProjectEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutProjectEventsAsync(const Model::PutProjectEventsRequest& request, const PutProjectEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an existing experiment. To create an experiment, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateExperiment.html">CreateExperiment</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/StartExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartExperimentOutcome StartExperiment(const Model::StartExperimentRequest& request) const;

        /**
         * <p>Starts an existing experiment. To create an experiment, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateExperiment.html">CreateExperiment</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/StartExperiment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartExperimentOutcomeCallable StartExperimentCallable(const Model::StartExperimentRequest& request) const;

        /**
         * <p>Starts an existing experiment. To create an experiment, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateExperiment.html">CreateExperiment</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/StartExperiment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartExperimentAsync(const Model::StartExperimentRequest& request, const StartExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an existing launch. To create a launch, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateLaunch.html">CreateLaunch</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/StartLaunch">AWS
         * API Reference</a></p>
         */
        virtual Model::StartLaunchOutcome StartLaunch(const Model::StartLaunchRequest& request) const;

        /**
         * <p>Starts an existing launch. To create a launch, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateLaunch.html">CreateLaunch</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/StartLaunch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartLaunchOutcomeCallable StartLaunchCallable(const Model::StartLaunchRequest& request) const;

        /**
         * <p>Starts an existing launch. To create a launch, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateLaunch.html">CreateLaunch</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/StartLaunch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartLaunchAsync(const Model::StartLaunchRequest& request, const StartLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an experiment that is currently running. If you stop an experiment, you
         * can't resume it or restart it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/StopExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopExperimentOutcome StopExperiment(const Model::StopExperimentRequest& request) const;

        /**
         * <p>Stops an experiment that is currently running. If you stop an experiment, you
         * can't resume it or restart it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/StopExperiment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopExperimentOutcomeCallable StopExperimentCallable(const Model::StopExperimentRequest& request) const;

        /**
         * <p>Stops an experiment that is currently running. If you stop an experiment, you
         * can't resume it or restart it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/StopExperiment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopExperimentAsync(const Model::StopExperimentRequest& request, const StopExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a launch that is currently running. After you stop a launch, you will
         * not be able to resume it or restart it. Also, it will not be evaluated as a rule
         * for traffic allocation, and the traffic that was allocated to the launch will
         * instead be available to the feature's experiment, if there is one. Otherwise,
         * all traffic will be served the default variation after the launch is
         * stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/StopLaunch">AWS
         * API Reference</a></p>
         */
        virtual Model::StopLaunchOutcome StopLaunch(const Model::StopLaunchRequest& request) const;

        /**
         * <p>Stops a launch that is currently running. After you stop a launch, you will
         * not be able to resume it or restart it. Also, it will not be evaluated as a rule
         * for traffic allocation, and the traffic that was allocated to the launch will
         * instead be available to the feature's experiment, if there is one. Otherwise,
         * all traffic will be served the default variation after the launch is
         * stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/StopLaunch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopLaunchOutcomeCallable StopLaunchCallable(const Model::StopLaunchRequest& request) const;

        /**
         * <p>Stops a launch that is currently running. After you stop a launch, you will
         * not be able to resume it or restart it. Also, it will not be evaluated as a rule
         * for traffic allocation, and the traffic that was allocated to the launch will
         * instead be available to the feature's experiment, if there is one. Otherwise,
         * all traffic will be served the default variation after the launch is
         * stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/StopLaunch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopLaunchAsync(const Model::StopLaunchRequest& request, const StopLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified CloudWatch
         * Evidently resource. Projects, features, launches, and experiments can be
         * tagged.</p> <p>Tags can help you organize and categorize your resources. You can
         * also use them to scope user permissions by granting a user permission to access
         * or change only resources with certain tag values.</p> <p>Tags don't have any
         * semantic meaning to Amazon Web Services and are interpreted strictly as strings
         * of characters.</p> <p>You can use the <code>TagResource</code> action with a
         * resource that already has tags. If you specify a new tag key for the resource,
         * this tag is appended to the list of tags associated with the alarm. If you
         * specify a tag key that is already associated with the resource, the new tag
         * value that you specify replaces the previous value for that tag.</p> <p>You can
         * associate as many as 50 tags with a resource.</p> <p>For more information, see
         * <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified CloudWatch
         * Evidently resource. Projects, features, launches, and experiments can be
         * tagged.</p> <p>Tags can help you organize and categorize your resources. You can
         * also use them to scope user permissions by granting a user permission to access
         * or change only resources with certain tag values.</p> <p>Tags don't have any
         * semantic meaning to Amazon Web Services and are interpreted strictly as strings
         * of characters.</p> <p>You can use the <code>TagResource</code> action with a
         * resource that already has tags. If you specify a new tag key for the resource,
         * this tag is appended to the list of tags associated with the alarm. If you
         * specify a tag key that is already associated with the resource, the new tag
         * value that you specify replaces the previous value for that tag.</p> <p>You can
         * associate as many as 50 tags with a resource.</p> <p>For more information, see
         * <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified CloudWatch
         * Evidently resource. Projects, features, launches, and experiments can be
         * tagged.</p> <p>Tags can help you organize and categorize your resources. You can
         * also use them to scope user permissions by granting a user permission to access
         * or change only resources with certain tag values.</p> <p>Tags don't have any
         * semantic meaning to Amazon Web Services and are interpreted strictly as strings
         * of characters.</p> <p>You can use the <code>TagResource</code> action with a
         * resource that already has tags. If you specify a new tag key for the resource,
         * this tag is appended to the list of tags associated with the alarm. If you
         * specify a tag key that is already associated with the resource, the new tag
         * value that you specify replaces the previous value for that tag.</p> <p>You can
         * associate as many as 50 tags with a resource.</p> <p>For more information, see
         * <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an Evidently experiment. </p> <p>Don't use this operation to update
         * an experiment's tag. Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_TagResource.html">TagResource</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UpdateExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateExperimentOutcome UpdateExperiment(const Model::UpdateExperimentRequest& request) const;

        /**
         * <p>Updates an Evidently experiment. </p> <p>Don't use this operation to update
         * an experiment's tag. Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_TagResource.html">TagResource</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UpdateExperiment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateExperimentOutcomeCallable UpdateExperimentCallable(const Model::UpdateExperimentRequest& request) const;

        /**
         * <p>Updates an Evidently experiment. </p> <p>Don't use this operation to update
         * an experiment's tag. Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_TagResource.html">TagResource</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UpdateExperiment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateExperimentAsync(const Model::UpdateExperimentRequest& request, const UpdateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing feature.</p> <p>You can't use this operation to update
         * the tags of an existing feature. Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_TagResource.html">TagResource</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UpdateFeature">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFeatureOutcome UpdateFeature(const Model::UpdateFeatureRequest& request) const;

        /**
         * <p>Updates an existing feature.</p> <p>You can't use this operation to update
         * the tags of an existing feature. Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_TagResource.html">TagResource</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UpdateFeature">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFeatureOutcomeCallable UpdateFeatureCallable(const Model::UpdateFeatureRequest& request) const;

        /**
         * <p>Updates an existing feature.</p> <p>You can't use this operation to update
         * the tags of an existing feature. Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_TagResource.html">TagResource</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UpdateFeature">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFeatureAsync(const Model::UpdateFeatureRequest& request, const UpdateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a launch of a given feature. </p> <p>Don't use this operation to
         * update the tags of an existing launch. Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_TagResource.html">TagResource</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UpdateLaunch">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLaunchOutcome UpdateLaunch(const Model::UpdateLaunchRequest& request) const;

        /**
         * <p>Updates a launch of a given feature. </p> <p>Don't use this operation to
         * update the tags of an existing launch. Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_TagResource.html">TagResource</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UpdateLaunch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLaunchOutcomeCallable UpdateLaunchCallable(const Model::UpdateLaunchRequest& request) const;

        /**
         * <p>Updates a launch of a given feature. </p> <p>Don't use this operation to
         * update the tags of an existing launch. Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_TagResource.html">TagResource</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UpdateLaunch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLaunchAsync(const Model::UpdateLaunchRequest& request, const UpdateLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the description of an existing project.</p> <p>To create a new
         * project, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateProject.html">CreateProject</a>.</p>
         * <p>Don't use this operation to update the data storage options of a project.
         * Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateProjectDataDelivery.html">UpdateProjectDataDelivery</a>.
         * </p> <p>Don't use this operation to update the tags of a project. Instead, use
         * <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_TagResource.html">TagResource</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

        /**
         * <p>Updates the description of an existing project.</p> <p>To create a new
         * project, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateProject.html">CreateProject</a>.</p>
         * <p>Don't use this operation to update the data storage options of a project.
         * Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateProjectDataDelivery.html">UpdateProjectDataDelivery</a>.
         * </p> <p>Don't use this operation to update the tags of a project. Instead, use
         * <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_TagResource.html">TagResource</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UpdateProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const Model::UpdateProjectRequest& request) const;

        /**
         * <p>Updates the description of an existing project.</p> <p>To create a new
         * project, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateProject.html">CreateProject</a>.</p>
         * <p>Don't use this operation to update the data storage options of a project.
         * Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateProjectDataDelivery.html">UpdateProjectDataDelivery</a>.
         * </p> <p>Don't use this operation to update the tags of a project. Instead, use
         * <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_TagResource.html">TagResource</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UpdateProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the data storage options for this project. If you store evaluation
         * events, you an keep them and analyze them on your own. If you choose not to
         * store evaluation events, Evidently deletes them after using them to produce
         * metrics and other experiment results that you can view.</p> <p>You can't specify
         * both <code>cloudWatchLogs</code> and <code>s3Destination</code> in the same
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UpdateProjectDataDelivery">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectDataDeliveryOutcome UpdateProjectDataDelivery(const Model::UpdateProjectDataDeliveryRequest& request) const;

        /**
         * <p>Updates the data storage options for this project. If you store evaluation
         * events, you an keep them and analyze them on your own. If you choose not to
         * store evaluation events, Evidently deletes them after using them to produce
         * metrics and other experiment results that you can view.</p> <p>You can't specify
         * both <code>cloudWatchLogs</code> and <code>s3Destination</code> in the same
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UpdateProjectDataDelivery">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProjectDataDeliveryOutcomeCallable UpdateProjectDataDeliveryCallable(const Model::UpdateProjectDataDeliveryRequest& request) const;

        /**
         * <p>Updates the data storage options for this project. If you store evaluation
         * events, you an keep them and analyze them on your own. If you choose not to
         * store evaluation events, Evidently deletes them after using them to produce
         * metrics and other experiment results that you can view.</p> <p>You can't specify
         * both <code>cloudWatchLogs</code> and <code>s3Destination</code> in the same
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UpdateProjectDataDelivery">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProjectDataDeliveryAsync(const Model::UpdateProjectDataDeliveryRequest& request, const UpdateProjectDataDeliveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchEvaluateFeatureAsyncHelper(const Model::BatchEvaluateFeatureRequest& request, const BatchEvaluateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateExperimentAsyncHelper(const Model::CreateExperimentRequest& request, const CreateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFeatureAsyncHelper(const Model::CreateFeatureRequest& request, const CreateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLaunchAsyncHelper(const Model::CreateLaunchRequest& request, const CreateLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProjectAsyncHelper(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteExperimentAsyncHelper(const Model::DeleteExperimentRequest& request, const DeleteExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFeatureAsyncHelper(const Model::DeleteFeatureRequest& request, const DeleteFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLaunchAsyncHelper(const Model::DeleteLaunchRequest& request, const DeleteLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProjectAsyncHelper(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EvaluateFeatureAsyncHelper(const Model::EvaluateFeatureRequest& request, const EvaluateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetExperimentAsyncHelper(const Model::GetExperimentRequest& request, const GetExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetExperimentResultsAsyncHelper(const Model::GetExperimentResultsRequest& request, const GetExperimentResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFeatureAsyncHelper(const Model::GetFeatureRequest& request, const GetFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLaunchAsyncHelper(const Model::GetLaunchRequest& request, const GetLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetProjectAsyncHelper(const Model::GetProjectRequest& request, const GetProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListExperimentsAsyncHelper(const Model::ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFeaturesAsyncHelper(const Model::ListFeaturesRequest& request, const ListFeaturesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLaunchesAsyncHelper(const Model::ListLaunchesRequest& request, const ListLaunchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProjectsAsyncHelper(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutProjectEventsAsyncHelper(const Model::PutProjectEventsRequest& request, const PutProjectEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartExperimentAsyncHelper(const Model::StartExperimentRequest& request, const StartExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartLaunchAsyncHelper(const Model::StartLaunchRequest& request, const StartLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopExperimentAsyncHelper(const Model::StopExperimentRequest& request, const StopExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopLaunchAsyncHelper(const Model::StopLaunchRequest& request, const StopLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateExperimentAsyncHelper(const Model::UpdateExperimentRequest& request, const UpdateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFeatureAsyncHelper(const Model::UpdateFeatureRequest& request, const UpdateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLaunchAsyncHelper(const Model::UpdateLaunchRequest& request, const UpdateLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProjectAsyncHelper(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProjectDataDeliveryAsyncHelper(const Model::UpdateProjectDataDeliveryRequest& request, const UpdateProjectDataDeliveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_baseUri;
      Aws::String m_scheme;
      bool m_enableHostPrefixInjection;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudWatchEvidently
} // namespace Aws
