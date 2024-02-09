/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/evidently/CloudWatchEvidentlyServiceClientModel.h>

namespace Aws
{
namespace CloudWatchEvidently
{
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
  class AWS_CLOUDWATCHEVIDENTLY_API CloudWatchEvidentlyClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CloudWatchEvidentlyClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CloudWatchEvidentlyClientConfiguration ClientConfigurationType;
      typedef CloudWatchEvidentlyEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchEvidentlyClient(const Aws::CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration& clientConfiguration = Aws::CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration(),
                                  std::shared_ptr<CloudWatchEvidentlyEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchEvidentlyClient(const Aws::Auth::AWSCredentials& credentials,
                                  std::shared_ptr<CloudWatchEvidentlyEndpointProviderBase> endpointProvider = nullptr,
                                  const Aws::CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration& clientConfiguration = Aws::CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchEvidentlyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  std::shared_ptr<CloudWatchEvidentlyEndpointProviderBase> endpointProvider = nullptr,
                                  const Aws::CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration& clientConfiguration = Aws::CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchEvidentlyClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchEvidentlyClient(const Aws::Auth::AWSCredentials& credentials,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchEvidentlyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
         * A Callable wrapper for BatchEvaluateFeature that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchEvaluateFeatureRequestT = Model::BatchEvaluateFeatureRequest>
        Model::BatchEvaluateFeatureOutcomeCallable BatchEvaluateFeatureCallable(const BatchEvaluateFeatureRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::BatchEvaluateFeature, request);
        }

        /**
         * An Async wrapper for BatchEvaluateFeature that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchEvaluateFeatureRequestT = Model::BatchEvaluateFeatureRequest>
        void BatchEvaluateFeatureAsync(const BatchEvaluateFeatureRequestT& request, const BatchEvaluateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::BatchEvaluateFeature, request, handler, context);
        }

        /**
         * <p>Creates an Evidently <i>experiment</i>. Before you create an experiment, you
         * must create the feature to use for the experiment.</p> <p>An experiment helps
         * you make feature design decisions based on evidence and data. An experiment can
         * test as many as five variations at once. Evidently collects experiment data and
         * analyzes it by statistical methods, and provides clear recommendations about
         * which variations perform better.</p> <p>You can optionally specify a
         * <code>segment</code> to have the experiment consider only certain audience types
         * in the experiment, such as using only user sessions from a certain location or
         * who use a certain internet browser.</p> <p>Don't use this operation to update an
         * existing experiment. Instead, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_UpdateExperiment.html">UpdateExperiment</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/CreateExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExperimentOutcome CreateExperiment(const Model::CreateExperimentRequest& request) const;

        /**
         * A Callable wrapper for CreateExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateExperimentRequestT = Model::CreateExperimentRequest>
        Model::CreateExperimentOutcomeCallable CreateExperimentCallable(const CreateExperimentRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::CreateExperiment, request);
        }

        /**
         * An Async wrapper for CreateExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateExperimentRequestT = Model::CreateExperimentRequest>
        void CreateExperimentAsync(const CreateExperimentRequestT& request, const CreateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::CreateExperiment, request, handler, context);
        }

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
         * A Callable wrapper for CreateFeature that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFeatureRequestT = Model::CreateFeatureRequest>
        Model::CreateFeatureOutcomeCallable CreateFeatureCallable(const CreateFeatureRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::CreateFeature, request);
        }

        /**
         * An Async wrapper for CreateFeature that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFeatureRequestT = Model::CreateFeatureRequest>
        void CreateFeatureAsync(const CreateFeatureRequestT& request, const CreateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::CreateFeature, request, handler, context);
        }

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
         * A Callable wrapper for CreateLaunch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLaunchRequestT = Model::CreateLaunchRequest>
        Model::CreateLaunchOutcomeCallable CreateLaunchCallable(const CreateLaunchRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::CreateLaunch, request);
        }

        /**
         * An Async wrapper for CreateLaunch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLaunchRequestT = Model::CreateLaunchRequest>
        void CreateLaunchAsync(const CreateLaunchRequestT& request, const CreateLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::CreateLaunch, request, handler, context);
        }

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
         * A Callable wrapper for CreateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        Model::CreateProjectOutcomeCallable CreateProjectCallable(const CreateProjectRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::CreateProject, request);
        }

        /**
         * An Async wrapper for CreateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        void CreateProjectAsync(const CreateProjectRequestT& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::CreateProject, request, handler, context);
        }

        /**
         * <p>Use this operation to define a <i>segment</i> of your audience. A segment is
         * a portion of your audience that share one or more characteristics. Examples
         * could be Chrome browser users, users in Europe, or Firefox browser users in
         * Europe who also fit other criteria that your application collects, such as
         * age.</p> <p>Using a segment in an experiment limits that experiment to evaluate
         * only the users who match the segment criteria. Using one or more segments in a
         * launch allows you to define different traffic splits for the different audience
         * segments.</p> <p>For more information about segment pattern syntax, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html#CloudWatch-Evidently-segments-syntax.html">
         * Segment rule pattern syntax</a>.</p> <p>The pattern that you define for a
         * segment is matched against the value of <code>evaluationContext</code>, which is
         * passed into Evidently in the <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_EvaluateFeature.html">EvaluateFeature</a>
         * operation, when Evidently assigns a feature variation to a user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/CreateSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSegmentOutcome CreateSegment(const Model::CreateSegmentRequest& request) const;

        /**
         * A Callable wrapper for CreateSegment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSegmentRequestT = Model::CreateSegmentRequest>
        Model::CreateSegmentOutcomeCallable CreateSegmentCallable(const CreateSegmentRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::CreateSegment, request);
        }

        /**
         * An Async wrapper for CreateSegment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSegmentRequestT = Model::CreateSegmentRequest>
        void CreateSegmentAsync(const CreateSegmentRequestT& request, const CreateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::CreateSegment, request, handler, context);
        }

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
         * A Callable wrapper for DeleteExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteExperimentRequestT = Model::DeleteExperimentRequest>
        Model::DeleteExperimentOutcomeCallable DeleteExperimentCallable(const DeleteExperimentRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::DeleteExperiment, request);
        }

        /**
         * An Async wrapper for DeleteExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteExperimentRequestT = Model::DeleteExperimentRequest>
        void DeleteExperimentAsync(const DeleteExperimentRequestT& request, const DeleteExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::DeleteExperiment, request, handler, context);
        }

        /**
         * <p>Deletes an Evidently feature.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/DeleteFeature">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFeatureOutcome DeleteFeature(const Model::DeleteFeatureRequest& request) const;

        /**
         * A Callable wrapper for DeleteFeature that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFeatureRequestT = Model::DeleteFeatureRequest>
        Model::DeleteFeatureOutcomeCallable DeleteFeatureCallable(const DeleteFeatureRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::DeleteFeature, request);
        }

        /**
         * An Async wrapper for DeleteFeature that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFeatureRequestT = Model::DeleteFeatureRequest>
        void DeleteFeatureAsync(const DeleteFeatureRequestT& request, const DeleteFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::DeleteFeature, request, handler, context);
        }

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
         * A Callable wrapper for DeleteLaunch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLaunchRequestT = Model::DeleteLaunchRequest>
        Model::DeleteLaunchOutcomeCallable DeleteLaunchCallable(const DeleteLaunchRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::DeleteLaunch, request);
        }

        /**
         * An Async wrapper for DeleteLaunch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLaunchRequestT = Model::DeleteLaunchRequest>
        void DeleteLaunchAsync(const DeleteLaunchRequestT& request, const DeleteLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::DeleteLaunch, request, handler, context);
        }

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
         * A Callable wrapper for DeleteProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const DeleteProjectRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::DeleteProject, request);
        }

        /**
         * An Async wrapper for DeleteProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        void DeleteProjectAsync(const DeleteProjectRequestT& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::DeleteProject, request, handler, context);
        }

        /**
         * <p>Deletes a segment. You can't delete a segment that is being used in a launch
         * or experiment, even if that launch or experiment is not currently
         * running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/DeleteSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSegmentOutcome DeleteSegment(const Model::DeleteSegmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteSegment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSegmentRequestT = Model::DeleteSegmentRequest>
        Model::DeleteSegmentOutcomeCallable DeleteSegmentCallable(const DeleteSegmentRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::DeleteSegment, request);
        }

        /**
         * An Async wrapper for DeleteSegment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSegmentRequestT = Model::DeleteSegmentRequest>
        void DeleteSegmentAsync(const DeleteSegmentRequestT& request, const DeleteSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::DeleteSegment, request, handler, context);
        }

        /**
         * <p>This operation assigns a feature variation to one given user session. You
         * pass in an <code>entityID</code> that represents the user. Evidently then checks
         * the evaluation rules and assigns the variation.</p> <p>The first rules that are
         * evaluated are the override rules. If the user's <code>entityID</code> matches an
         * override rule, the user is served the variation specified by that rule.</p>
         * <p>If there is a current launch with this feature that uses segment overrides,
         * and if the user session's <code>evaluationContext</code> matches a segment rule
         * defined in a segment override, the configuration in the segment overrides is
         * used. For more information about segments, see <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateSegment.html">CreateSegment</a>
         * and <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html">Use
         * segments to focus your audience</a>.</p> <p>If there is a launch with no segment
         * overrides, the user might be assigned to a variation in the launch. The chance
         * of this depends on the percentage of users that are allocated to that launch. If
         * the user is enrolled in the launch, the variation they are served depends on the
         * allocation of the various feature variations used for the launch.</p> <p>If the
         * user is not assigned to a launch, and there is an ongoing experiment for this
         * feature, the user might be assigned to a variation in the experiment. The chance
         * of this depends on the percentage of users that are allocated to that
         * experiment.</p> <p>If the experiment uses a segment, then only user sessions
         * with <code>evaluationContext</code> values that match the segment rule are used
         * in the experiment.</p> <p>If the user is enrolled in the experiment, the
         * variation they are served depends on the allocation of the various feature
         * variations used for the experiment. </p> <p>If the user is not assigned to a
         * launch or experiment, they are served the default variation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/EvaluateFeature">AWS
         * API Reference</a></p>
         */
        virtual Model::EvaluateFeatureOutcome EvaluateFeature(const Model::EvaluateFeatureRequest& request) const;

        /**
         * A Callable wrapper for EvaluateFeature that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EvaluateFeatureRequestT = Model::EvaluateFeatureRequest>
        Model::EvaluateFeatureOutcomeCallable EvaluateFeatureCallable(const EvaluateFeatureRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::EvaluateFeature, request);
        }

        /**
         * An Async wrapper for EvaluateFeature that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EvaluateFeatureRequestT = Model::EvaluateFeatureRequest>
        void EvaluateFeatureAsync(const EvaluateFeatureRequestT& request, const EvaluateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::EvaluateFeature, request, handler, context);
        }

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
         * A Callable wrapper for GetExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExperimentRequestT = Model::GetExperimentRequest>
        Model::GetExperimentOutcomeCallable GetExperimentCallable(const GetExperimentRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::GetExperiment, request);
        }

        /**
         * An Async wrapper for GetExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExperimentRequestT = Model::GetExperimentRequest>
        void GetExperimentAsync(const GetExperimentRequestT& request, const GetExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::GetExperiment, request, handler, context);
        }

        /**
         * <p>Retrieves the results of a running or completed experiment. No results are
         * available until there have been 100 events for each variation and at least 10
         * minutes have passed since the start of the experiment. To increase the
         * statistical power, Evidently performs an additional offline p-value analysis at
         * the end of the experiment. Offline p-value analysis can detect statistical
         * significance in some cases where the anytime p-values used during the experiment
         * do not find statistical significance.</p> <p>Experiment results are available up
         * to 63 days after the start of the experiment. They are not available after that
         * because of CloudWatch data retention policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/GetExperimentResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExperimentResultsOutcome GetExperimentResults(const Model::GetExperimentResultsRequest& request) const;

        /**
         * A Callable wrapper for GetExperimentResults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExperimentResultsRequestT = Model::GetExperimentResultsRequest>
        Model::GetExperimentResultsOutcomeCallable GetExperimentResultsCallable(const GetExperimentResultsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::GetExperimentResults, request);
        }

        /**
         * An Async wrapper for GetExperimentResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExperimentResultsRequestT = Model::GetExperimentResultsRequest>
        void GetExperimentResultsAsync(const GetExperimentResultsRequestT& request, const GetExperimentResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::GetExperimentResults, request, handler, context);
        }

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
         * A Callable wrapper for GetFeature that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFeatureRequestT = Model::GetFeatureRequest>
        Model::GetFeatureOutcomeCallable GetFeatureCallable(const GetFeatureRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::GetFeature, request);
        }

        /**
         * An Async wrapper for GetFeature that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFeatureRequestT = Model::GetFeatureRequest>
        void GetFeatureAsync(const GetFeatureRequestT& request, const GetFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::GetFeature, request, handler, context);
        }

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
         * A Callable wrapper for GetLaunch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLaunchRequestT = Model::GetLaunchRequest>
        Model::GetLaunchOutcomeCallable GetLaunchCallable(const GetLaunchRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::GetLaunch, request);
        }

        /**
         * An Async wrapper for GetLaunch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLaunchRequestT = Model::GetLaunchRequest>
        void GetLaunchAsync(const GetLaunchRequestT& request, const GetLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::GetLaunch, request, handler, context);
        }

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
         * A Callable wrapper for GetProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProjectRequestT = Model::GetProjectRequest>
        Model::GetProjectOutcomeCallable GetProjectCallable(const GetProjectRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::GetProject, request);
        }

        /**
         * An Async wrapper for GetProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProjectRequestT = Model::GetProjectRequest>
        void GetProjectAsync(const GetProjectRequestT& request, const GetProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::GetProject, request, handler, context);
        }

        /**
         * <p>Returns information about the specified segment. Specify the segment you want
         * to view by specifying its ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/GetSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentOutcome GetSegment(const Model::GetSegmentRequest& request) const;

        /**
         * A Callable wrapper for GetSegment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSegmentRequestT = Model::GetSegmentRequest>
        Model::GetSegmentOutcomeCallable GetSegmentCallable(const GetSegmentRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::GetSegment, request);
        }

        /**
         * An Async wrapper for GetSegment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSegmentRequestT = Model::GetSegmentRequest>
        void GetSegmentAsync(const GetSegmentRequestT& request, const GetSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::GetSegment, request, handler, context);
        }

        /**
         * <p>Returns configuration details about all the experiments in the specified
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListExperiments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExperimentsOutcome ListExperiments(const Model::ListExperimentsRequest& request) const;

        /**
         * A Callable wrapper for ListExperiments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExperimentsRequestT = Model::ListExperimentsRequest>
        Model::ListExperimentsOutcomeCallable ListExperimentsCallable(const ListExperimentsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::ListExperiments, request);
        }

        /**
         * An Async wrapper for ListExperiments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExperimentsRequestT = Model::ListExperimentsRequest>
        void ListExperimentsAsync(const ListExperimentsRequestT& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::ListExperiments, request, handler, context);
        }

        /**
         * <p>Returns configuration details about all the features in the specified
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListFeatures">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFeaturesOutcome ListFeatures(const Model::ListFeaturesRequest& request) const;

        /**
         * A Callable wrapper for ListFeatures that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFeaturesRequestT = Model::ListFeaturesRequest>
        Model::ListFeaturesOutcomeCallable ListFeaturesCallable(const ListFeaturesRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::ListFeatures, request);
        }

        /**
         * An Async wrapper for ListFeatures that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFeaturesRequestT = Model::ListFeaturesRequest>
        void ListFeaturesAsync(const ListFeaturesRequestT& request, const ListFeaturesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::ListFeatures, request, handler, context);
        }

        /**
         * <p>Returns configuration details about all the launches in the specified
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListLaunches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLaunchesOutcome ListLaunches(const Model::ListLaunchesRequest& request) const;

        /**
         * A Callable wrapper for ListLaunches that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLaunchesRequestT = Model::ListLaunchesRequest>
        Model::ListLaunchesOutcomeCallable ListLaunchesCallable(const ListLaunchesRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::ListLaunches, request);
        }

        /**
         * An Async wrapper for ListLaunches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLaunchesRequestT = Model::ListLaunchesRequest>
        void ListLaunchesAsync(const ListLaunchesRequestT& request, const ListLaunchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::ListLaunches, request, handler, context);
        }

        /**
         * <p>Returns configuration details about all the projects in the current Region in
         * your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * A Callable wrapper for ListProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        Model::ListProjectsOutcomeCallable ListProjectsCallable(const ListProjectsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::ListProjects, request);
        }

        /**
         * An Async wrapper for ListProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        void ListProjectsAsync(const ListProjectsRequestT& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::ListProjects, request, handler, context);
        }

        /**
         * <p>Use this operation to find which experiments or launches are using a
         * specified segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListSegmentReferences">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSegmentReferencesOutcome ListSegmentReferences(const Model::ListSegmentReferencesRequest& request) const;

        /**
         * A Callable wrapper for ListSegmentReferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSegmentReferencesRequestT = Model::ListSegmentReferencesRequest>
        Model::ListSegmentReferencesOutcomeCallable ListSegmentReferencesCallable(const ListSegmentReferencesRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::ListSegmentReferences, request);
        }

        /**
         * An Async wrapper for ListSegmentReferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSegmentReferencesRequestT = Model::ListSegmentReferencesRequest>
        void ListSegmentReferencesAsync(const ListSegmentReferencesRequestT& request, const ListSegmentReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::ListSegmentReferences, request, handler, context);
        }

        /**
         * <p>Returns a list of audience segments that you have created in your account in
         * this Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListSegments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSegmentsOutcome ListSegments(const Model::ListSegmentsRequest& request) const;

        /**
         * A Callable wrapper for ListSegments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSegmentsRequestT = Model::ListSegmentsRequest>
        Model::ListSegmentsOutcomeCallable ListSegmentsCallable(const ListSegmentsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::ListSegments, request);
        }

        /**
         * An Async wrapper for ListSegments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSegmentsRequestT = Model::ListSegmentsRequest>
        void ListSegmentsAsync(const ListSegmentsRequestT& request, const ListSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::ListSegments, request, handler, context);
        }

        /**
         * <p>Displays the tags associated with an Evidently resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Sends performance events to Evidently. These events can be used to evaluate a
         * launch or an experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/PutProjectEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutProjectEventsOutcome PutProjectEvents(const Model::PutProjectEventsRequest& request) const;

        /**
         * A Callable wrapper for PutProjectEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutProjectEventsRequestT = Model::PutProjectEventsRequest>
        Model::PutProjectEventsOutcomeCallable PutProjectEventsCallable(const PutProjectEventsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::PutProjectEvents, request);
        }

        /**
         * An Async wrapper for PutProjectEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutProjectEventsRequestT = Model::PutProjectEventsRequest>
        void PutProjectEventsAsync(const PutProjectEventsRequestT& request, const PutProjectEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::PutProjectEvents, request, handler, context);
        }

        /**
         * <p>Starts an existing experiment. To create an experiment, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateExperiment.html">CreateExperiment</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/StartExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartExperimentOutcome StartExperiment(const Model::StartExperimentRequest& request) const;

        /**
         * A Callable wrapper for StartExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartExperimentRequestT = Model::StartExperimentRequest>
        Model::StartExperimentOutcomeCallable StartExperimentCallable(const StartExperimentRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::StartExperiment, request);
        }

        /**
         * An Async wrapper for StartExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartExperimentRequestT = Model::StartExperimentRequest>
        void StartExperimentAsync(const StartExperimentRequestT& request, const StartExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::StartExperiment, request, handler, context);
        }

        /**
         * <p>Starts an existing launch. To create a launch, use <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateLaunch.html">CreateLaunch</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/StartLaunch">AWS
         * API Reference</a></p>
         */
        virtual Model::StartLaunchOutcome StartLaunch(const Model::StartLaunchRequest& request) const;

        /**
         * A Callable wrapper for StartLaunch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartLaunchRequestT = Model::StartLaunchRequest>
        Model::StartLaunchOutcomeCallable StartLaunchCallable(const StartLaunchRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::StartLaunch, request);
        }

        /**
         * An Async wrapper for StartLaunch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartLaunchRequestT = Model::StartLaunchRequest>
        void StartLaunchAsync(const StartLaunchRequestT& request, const StartLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::StartLaunch, request, handler, context);
        }

        /**
         * <p>Stops an experiment that is currently running. If you stop an experiment, you
         * can't resume it or restart it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/StopExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopExperimentOutcome StopExperiment(const Model::StopExperimentRequest& request) const;

        /**
         * A Callable wrapper for StopExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopExperimentRequestT = Model::StopExperimentRequest>
        Model::StopExperimentOutcomeCallable StopExperimentCallable(const StopExperimentRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::StopExperiment, request);
        }

        /**
         * An Async wrapper for StopExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopExperimentRequestT = Model::StopExperimentRequest>
        void StopExperimentAsync(const StopExperimentRequestT& request, const StopExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::StopExperiment, request, handler, context);
        }

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
         * A Callable wrapper for StopLaunch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopLaunchRequestT = Model::StopLaunchRequest>
        Model::StopLaunchOutcomeCallable StopLaunchCallable(const StopLaunchRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::StopLaunch, request);
        }

        /**
         * An Async wrapper for StopLaunch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopLaunchRequestT = Model::StopLaunchRequest>
        void StopLaunchAsync(const StopLaunchRequestT& request, const StopLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::StopLaunch, request, handler, context);
        }

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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::TagResource, request, handler, context);
        }

        /**
         * <p>Use this operation to test a rules pattern that you plan to use to create an
         * audience segment. For more information about segments, see <a
         * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_CreateSegment.html">CreateSegment</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/TestSegmentPattern">AWS
         * API Reference</a></p>
         */
        virtual Model::TestSegmentPatternOutcome TestSegmentPattern(const Model::TestSegmentPatternRequest& request) const;

        /**
         * A Callable wrapper for TestSegmentPattern that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestSegmentPatternRequestT = Model::TestSegmentPatternRequest>
        Model::TestSegmentPatternOutcomeCallable TestSegmentPatternCallable(const TestSegmentPatternRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::TestSegmentPattern, request);
        }

        /**
         * An Async wrapper for TestSegmentPattern that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestSegmentPatternRequestT = Model::TestSegmentPatternRequest>
        void TestSegmentPatternAsync(const TestSegmentPatternRequestT& request, const TestSegmentPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::TestSegmentPattern, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::UntagResource, request, handler, context);
        }

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
         * A Callable wrapper for UpdateExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateExperimentRequestT = Model::UpdateExperimentRequest>
        Model::UpdateExperimentOutcomeCallable UpdateExperimentCallable(const UpdateExperimentRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::UpdateExperiment, request);
        }

        /**
         * An Async wrapper for UpdateExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateExperimentRequestT = Model::UpdateExperimentRequest>
        void UpdateExperimentAsync(const UpdateExperimentRequestT& request, const UpdateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::UpdateExperiment, request, handler, context);
        }

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
         * A Callable wrapper for UpdateFeature that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFeatureRequestT = Model::UpdateFeatureRequest>
        Model::UpdateFeatureOutcomeCallable UpdateFeatureCallable(const UpdateFeatureRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::UpdateFeature, request);
        }

        /**
         * An Async wrapper for UpdateFeature that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFeatureRequestT = Model::UpdateFeatureRequest>
        void UpdateFeatureAsync(const UpdateFeatureRequestT& request, const UpdateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::UpdateFeature, request, handler, context);
        }

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
         * A Callable wrapper for UpdateLaunch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLaunchRequestT = Model::UpdateLaunchRequest>
        Model::UpdateLaunchOutcomeCallable UpdateLaunchCallable(const UpdateLaunchRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::UpdateLaunch, request);
        }

        /**
         * An Async wrapper for UpdateLaunch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLaunchRequestT = Model::UpdateLaunchRequest>
        void UpdateLaunchAsync(const UpdateLaunchRequestT& request, const UpdateLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::UpdateLaunch, request, handler, context);
        }

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
         * A Callable wrapper for UpdateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProjectRequestT = Model::UpdateProjectRequest>
        Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const UpdateProjectRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::UpdateProject, request);
        }

        /**
         * An Async wrapper for UpdateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProjectRequestT = Model::UpdateProjectRequest>
        void UpdateProjectAsync(const UpdateProjectRequestT& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::UpdateProject, request, handler, context);
        }

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
         * A Callable wrapper for UpdateProjectDataDelivery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProjectDataDeliveryRequestT = Model::UpdateProjectDataDeliveryRequest>
        Model::UpdateProjectDataDeliveryOutcomeCallable UpdateProjectDataDeliveryCallable(const UpdateProjectDataDeliveryRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEvidentlyClient::UpdateProjectDataDelivery, request);
        }

        /**
         * An Async wrapper for UpdateProjectDataDelivery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProjectDataDeliveryRequestT = Model::UpdateProjectDataDeliveryRequest>
        void UpdateProjectDataDeliveryAsync(const UpdateProjectDataDeliveryRequestT& request, const UpdateProjectDataDeliveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEvidentlyClient::UpdateProjectDataDelivery, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CloudWatchEvidentlyEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudWatchEvidentlyClient>;
      void init(const CloudWatchEvidentlyClientConfiguration& clientConfiguration);

      CloudWatchEvidentlyClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CloudWatchEvidentlyEndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudWatchEvidently
} // namespace Aws
