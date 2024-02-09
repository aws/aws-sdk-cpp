/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/application-insights/ApplicationInsightsServiceClientModel.h>

namespace Aws
{
namespace ApplicationInsights
{
  /**
   * <fullname>Amazon CloudWatch Application Insights</fullname> <p> Amazon
   * CloudWatch Application Insights is a service that helps you detect common
   * problems with your applications. It enables you to pinpoint the source of issues
   * in your applications (built with technologies such as Microsoft IIS, .NET, and
   * Microsoft SQL Server), by providing key insights into detected problems.</p>
   * <p>After you onboard your application, CloudWatch Application Insights
   * identifies, recommends, and sets up metrics and logs. It continuously analyzes
   * and correlates your metrics and logs for unusual behavior to surface actionable
   * problems with your application. For example, if your application is slow and
   * unresponsive and leading to HTTP 500 errors in your Application Load Balancer
   * (ALB), Application Insights informs you that a memory pressure problem with your
   * SQL Server database is occurring. It bases this analysis on impactful metrics
   * and log errors. </p>
   */
  class AWS_APPLICATIONINSIGHTS_API ApplicationInsightsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ApplicationInsightsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ApplicationInsightsClientConfiguration ClientConfigurationType;
      typedef ApplicationInsightsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationInsightsClient(const Aws::ApplicationInsights::ApplicationInsightsClientConfiguration& clientConfiguration = Aws::ApplicationInsights::ApplicationInsightsClientConfiguration(),
                                  std::shared_ptr<ApplicationInsightsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationInsightsClient(const Aws::Auth::AWSCredentials& credentials,
                                  std::shared_ptr<ApplicationInsightsEndpointProviderBase> endpointProvider = nullptr,
                                  const Aws::ApplicationInsights::ApplicationInsightsClientConfiguration& clientConfiguration = Aws::ApplicationInsights::ApplicationInsightsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationInsightsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  std::shared_ptr<ApplicationInsightsEndpointProviderBase> endpointProvider = nullptr,
                                  const Aws::ApplicationInsights::ApplicationInsightsClientConfiguration& clientConfiguration = Aws::ApplicationInsights::ApplicationInsightsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationInsightsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationInsightsClient(const Aws::Auth::AWSCredentials& credentials,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationInsightsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ApplicationInsightsClient();

        /**
         * <p>Adds a workload to a component. Each component can have at most five
         * workloads.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/AddWorkload">AWS
         * API Reference</a></p>
         */
        virtual Model::AddWorkloadOutcome AddWorkload(const Model::AddWorkloadRequest& request) const;

        /**
         * A Callable wrapper for AddWorkload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddWorkloadRequestT = Model::AddWorkloadRequest>
        Model::AddWorkloadOutcomeCallable AddWorkloadCallable(const AddWorkloadRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::AddWorkload, request);
        }

        /**
         * An Async wrapper for AddWorkload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddWorkloadRequestT = Model::AddWorkloadRequest>
        void AddWorkloadAsync(const AddWorkloadRequestT& request, const AddWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::AddWorkload, request, handler, context);
        }

        /**
         * <p>Adds an application that is created from a resource group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::CreateApplication, request);
        }

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::CreateApplication, request, handler, context);
        }

        /**
         * <p>Creates a custom component by grouping similar standalone instances to
         * monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/CreateComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComponentOutcome CreateComponent(const Model::CreateComponentRequest& request) const;

        /**
         * A Callable wrapper for CreateComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateComponentRequestT = Model::CreateComponentRequest>
        Model::CreateComponentOutcomeCallable CreateComponentCallable(const CreateComponentRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::CreateComponent, request);
        }

        /**
         * An Async wrapper for CreateComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateComponentRequestT = Model::CreateComponentRequest>
        void CreateComponentAsync(const CreateComponentRequestT& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::CreateComponent, request, handler, context);
        }

        /**
         * <p>Adds an log pattern to a <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/CreateLogPattern">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLogPatternOutcome CreateLogPattern(const Model::CreateLogPatternRequest& request) const;

        /**
         * A Callable wrapper for CreateLogPattern that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLogPatternRequestT = Model::CreateLogPatternRequest>
        Model::CreateLogPatternOutcomeCallable CreateLogPatternCallable(const CreateLogPatternRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::CreateLogPattern, request);
        }

        /**
         * An Async wrapper for CreateLogPattern that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLogPatternRequestT = Model::CreateLogPatternRequest>
        void CreateLogPatternAsync(const CreateLogPatternRequestT& request, const CreateLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::CreateLogPattern, request, handler, context);
        }

        /**
         * <p>Removes the specified application from monitoring. Does not delete the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::DeleteApplication, request);
        }

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::DeleteApplication, request, handler, context);
        }

        /**
         * <p>Ungroups a custom component. When you ungroup custom components, all
         * applicable monitors that are set up for the component are removed and the
         * instances revert to their standalone status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DeleteComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComponentOutcome DeleteComponent(const Model::DeleteComponentRequest& request) const;

        /**
         * A Callable wrapper for DeleteComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteComponentRequestT = Model::DeleteComponentRequest>
        Model::DeleteComponentOutcomeCallable DeleteComponentCallable(const DeleteComponentRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::DeleteComponent, request);
        }

        /**
         * An Async wrapper for DeleteComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteComponentRequestT = Model::DeleteComponentRequest>
        void DeleteComponentAsync(const DeleteComponentRequestT& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::DeleteComponent, request, handler, context);
        }

        /**
         * <p>Removes the specified log pattern from a
         * <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DeleteLogPattern">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLogPatternOutcome DeleteLogPattern(const Model::DeleteLogPatternRequest& request) const;

        /**
         * A Callable wrapper for DeleteLogPattern that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLogPatternRequestT = Model::DeleteLogPatternRequest>
        Model::DeleteLogPatternOutcomeCallable DeleteLogPatternCallable(const DeleteLogPatternRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::DeleteLogPattern, request);
        }

        /**
         * An Async wrapper for DeleteLogPattern that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLogPatternRequestT = Model::DeleteLogPatternRequest>
        void DeleteLogPatternAsync(const DeleteLogPatternRequestT& request, const DeleteLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::DeleteLogPattern, request, handler, context);
        }

        /**
         * <p>Describes the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApplicationRequestT = Model::DescribeApplicationRequest>
        Model::DescribeApplicationOutcomeCallable DescribeApplicationCallable(const DescribeApplicationRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::DescribeApplication, request);
        }

        /**
         * An Async wrapper for DescribeApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicationRequestT = Model::DescribeApplicationRequest>
        void DescribeApplicationAsync(const DescribeApplicationRequestT& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::DescribeApplication, request, handler, context);
        }

        /**
         * <p>Describes a component and lists the resources that are grouped together in a
         * component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeComponentOutcome DescribeComponent(const Model::DescribeComponentRequest& request) const;

        /**
         * A Callable wrapper for DescribeComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeComponentRequestT = Model::DescribeComponentRequest>
        Model::DescribeComponentOutcomeCallable DescribeComponentCallable(const DescribeComponentRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::DescribeComponent, request);
        }

        /**
         * An Async wrapper for DescribeComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeComponentRequestT = Model::DescribeComponentRequest>
        void DescribeComponentAsync(const DescribeComponentRequestT& request, const DescribeComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::DescribeComponent, request, handler, context);
        }

        /**
         * <p>Describes the monitoring configuration of the component.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeComponentConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeComponentConfigurationOutcome DescribeComponentConfiguration(const Model::DescribeComponentConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeComponentConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeComponentConfigurationRequestT = Model::DescribeComponentConfigurationRequest>
        Model::DescribeComponentConfigurationOutcomeCallable DescribeComponentConfigurationCallable(const DescribeComponentConfigurationRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::DescribeComponentConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeComponentConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeComponentConfigurationRequestT = Model::DescribeComponentConfigurationRequest>
        void DescribeComponentConfigurationAsync(const DescribeComponentConfigurationRequestT& request, const DescribeComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::DescribeComponentConfiguration, request, handler, context);
        }

        /**
         * <p>Describes the recommended monitoring configuration of the
         * component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeComponentConfigurationRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeComponentConfigurationRecommendationOutcome DescribeComponentConfigurationRecommendation(const Model::DescribeComponentConfigurationRecommendationRequest& request) const;

        /**
         * A Callable wrapper for DescribeComponentConfigurationRecommendation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeComponentConfigurationRecommendationRequestT = Model::DescribeComponentConfigurationRecommendationRequest>
        Model::DescribeComponentConfigurationRecommendationOutcomeCallable DescribeComponentConfigurationRecommendationCallable(const DescribeComponentConfigurationRecommendationRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::DescribeComponentConfigurationRecommendation, request);
        }

        /**
         * An Async wrapper for DescribeComponentConfigurationRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeComponentConfigurationRecommendationRequestT = Model::DescribeComponentConfigurationRecommendationRequest>
        void DescribeComponentConfigurationRecommendationAsync(const DescribeComponentConfigurationRecommendationRequestT& request, const DescribeComponentConfigurationRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::DescribeComponentConfigurationRecommendation, request, handler, context);
        }

        /**
         * <p>Describe a specific log pattern from a
         * <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeLogPattern">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLogPatternOutcome DescribeLogPattern(const Model::DescribeLogPatternRequest& request) const;

        /**
         * A Callable wrapper for DescribeLogPattern that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLogPatternRequestT = Model::DescribeLogPatternRequest>
        Model::DescribeLogPatternOutcomeCallable DescribeLogPatternCallable(const DescribeLogPatternRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::DescribeLogPattern, request);
        }

        /**
         * An Async wrapper for DescribeLogPattern that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLogPatternRequestT = Model::DescribeLogPatternRequest>
        void DescribeLogPatternAsync(const DescribeLogPatternRequestT& request, const DescribeLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::DescribeLogPattern, request, handler, context);
        }

        /**
         * <p>Describes an anomaly or error with the application.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeObservation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeObservationOutcome DescribeObservation(const Model::DescribeObservationRequest& request) const;

        /**
         * A Callable wrapper for DescribeObservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeObservationRequestT = Model::DescribeObservationRequest>
        Model::DescribeObservationOutcomeCallable DescribeObservationCallable(const DescribeObservationRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::DescribeObservation, request);
        }

        /**
         * An Async wrapper for DescribeObservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeObservationRequestT = Model::DescribeObservationRequest>
        void DescribeObservationAsync(const DescribeObservationRequestT& request, const DescribeObservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::DescribeObservation, request, handler, context);
        }

        /**
         * <p>Describes an application problem.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeProblem">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProblemOutcome DescribeProblem(const Model::DescribeProblemRequest& request) const;

        /**
         * A Callable wrapper for DescribeProblem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProblemRequestT = Model::DescribeProblemRequest>
        Model::DescribeProblemOutcomeCallable DescribeProblemCallable(const DescribeProblemRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::DescribeProblem, request);
        }

        /**
         * An Async wrapper for DescribeProblem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProblemRequestT = Model::DescribeProblemRequest>
        void DescribeProblemAsync(const DescribeProblemRequestT& request, const DescribeProblemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::DescribeProblem, request, handler, context);
        }

        /**
         * <p>Describes the anomalies or errors associated with the problem.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeProblemObservations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProblemObservationsOutcome DescribeProblemObservations(const Model::DescribeProblemObservationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeProblemObservations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProblemObservationsRequestT = Model::DescribeProblemObservationsRequest>
        Model::DescribeProblemObservationsOutcomeCallable DescribeProblemObservationsCallable(const DescribeProblemObservationsRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::DescribeProblemObservations, request);
        }

        /**
         * An Async wrapper for DescribeProblemObservations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProblemObservationsRequestT = Model::DescribeProblemObservationsRequest>
        void DescribeProblemObservationsAsync(const DescribeProblemObservationsRequestT& request, const DescribeProblemObservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::DescribeProblemObservations, request, handler, context);
        }

        /**
         * <p>Describes a workload and its configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeWorkload">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkloadOutcome DescribeWorkload(const Model::DescribeWorkloadRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorkloadRequestT = Model::DescribeWorkloadRequest>
        Model::DescribeWorkloadOutcomeCallable DescribeWorkloadCallable(const DescribeWorkloadRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::DescribeWorkload, request);
        }

        /**
         * An Async wrapper for DescribeWorkload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorkloadRequestT = Model::DescribeWorkloadRequest>
        void DescribeWorkloadAsync(const DescribeWorkloadRequestT& request, const DescribeWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::DescribeWorkload, request, handler, context);
        }

        /**
         * <p>Lists the IDs of the applications that you are monitoring. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::ListApplications, request);
        }

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        void ListApplicationsAsync(const ListApplicationsRequestT& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::ListApplications, request, handler, context);
        }

        /**
         * <p>Lists the auto-grouped, standalone, and custom components of the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentsOutcome ListComponents(const Model::ListComponentsRequest& request) const;

        /**
         * A Callable wrapper for ListComponents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListComponentsRequestT = Model::ListComponentsRequest>
        Model::ListComponentsOutcomeCallable ListComponentsCallable(const ListComponentsRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::ListComponents, request);
        }

        /**
         * An Async wrapper for ListComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListComponentsRequestT = Model::ListComponentsRequest>
        void ListComponentsAsync(const ListComponentsRequestT& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::ListComponents, request, handler, context);
        }

        /**
         * <p> Lists the INFO, WARN, and ERROR events for periodic configuration updates
         * performed by Application Insights. Examples of events represented are: </p> <ul>
         * <li> <p>INFO: creating a new alarm or updating an alarm threshold.</p> </li>
         * <li> <p>WARN: alarm not created due to insufficient data points used to predict
         * thresholds.</p> </li> <li> <p>ERROR: alarm not created due to permission errors
         * or exceeding quotas. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListConfigurationHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationHistoryOutcome ListConfigurationHistory(const Model::ListConfigurationHistoryRequest& request) const;

        /**
         * A Callable wrapper for ListConfigurationHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConfigurationHistoryRequestT = Model::ListConfigurationHistoryRequest>
        Model::ListConfigurationHistoryOutcomeCallable ListConfigurationHistoryCallable(const ListConfigurationHistoryRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::ListConfigurationHistory, request);
        }

        /**
         * An Async wrapper for ListConfigurationHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfigurationHistoryRequestT = Model::ListConfigurationHistoryRequest>
        void ListConfigurationHistoryAsync(const ListConfigurationHistoryRequestT& request, const ListConfigurationHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::ListConfigurationHistory, request, handler, context);
        }

        /**
         * <p>Lists the log pattern sets in the specific application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListLogPatternSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLogPatternSetsOutcome ListLogPatternSets(const Model::ListLogPatternSetsRequest& request) const;

        /**
         * A Callable wrapper for ListLogPatternSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLogPatternSetsRequestT = Model::ListLogPatternSetsRequest>
        Model::ListLogPatternSetsOutcomeCallable ListLogPatternSetsCallable(const ListLogPatternSetsRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::ListLogPatternSets, request);
        }

        /**
         * An Async wrapper for ListLogPatternSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLogPatternSetsRequestT = Model::ListLogPatternSetsRequest>
        void ListLogPatternSetsAsync(const ListLogPatternSetsRequestT& request, const ListLogPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::ListLogPatternSets, request, handler, context);
        }

        /**
         * <p>Lists the log patterns in the specific log
         * <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListLogPatterns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLogPatternsOutcome ListLogPatterns(const Model::ListLogPatternsRequest& request) const;

        /**
         * A Callable wrapper for ListLogPatterns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLogPatternsRequestT = Model::ListLogPatternsRequest>
        Model::ListLogPatternsOutcomeCallable ListLogPatternsCallable(const ListLogPatternsRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::ListLogPatterns, request);
        }

        /**
         * An Async wrapper for ListLogPatterns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLogPatternsRequestT = Model::ListLogPatternsRequest>
        void ListLogPatternsAsync(const ListLogPatternsRequestT& request, const ListLogPatternsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::ListLogPatterns, request, handler, context);
        }

        /**
         * <p>Lists the problems with your application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListProblems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProblemsOutcome ListProblems(const Model::ListProblemsRequest& request) const;

        /**
         * A Callable wrapper for ListProblems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProblemsRequestT = Model::ListProblemsRequest>
        Model::ListProblemsOutcomeCallable ListProblemsCallable(const ListProblemsRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::ListProblems, request);
        }

        /**
         * An Async wrapper for ListProblems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProblemsRequestT = Model::ListProblemsRequest>
        void ListProblemsAsync(const ListProblemsRequestT& request, const ListProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::ListProblems, request, handler, context);
        }

        /**
         * <p>Retrieve a list of the tags (keys and values) that are associated with a
         * specified application. A <i>tag</i> is a label that you optionally define and
         * associate with an application. Each tag consists of a required <i>tag key</i>
         * and an optional associated <i>tag value</i>. A tag key is a general label that
         * acts as a category for more specific tag values. A tag value acts as a
         * descriptor within a tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists the workloads that are configured on a given component.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListWorkloads">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkloadsOutcome ListWorkloads(const Model::ListWorkloadsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkloads that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkloadsRequestT = Model::ListWorkloadsRequest>
        Model::ListWorkloadsOutcomeCallable ListWorkloadsCallable(const ListWorkloadsRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::ListWorkloads, request);
        }

        /**
         * An Async wrapper for ListWorkloads that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkloadsRequestT = Model::ListWorkloadsRequest>
        void ListWorkloadsAsync(const ListWorkloadsRequestT& request, const ListWorkloadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::ListWorkloads, request, handler, context);
        }

        /**
         * <p>Remove workload from a component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/RemoveWorkload">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveWorkloadOutcome RemoveWorkload(const Model::RemoveWorkloadRequest& request) const;

        /**
         * A Callable wrapper for RemoveWorkload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveWorkloadRequestT = Model::RemoveWorkloadRequest>
        Model::RemoveWorkloadOutcomeCallable RemoveWorkloadCallable(const RemoveWorkloadRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::RemoveWorkload, request);
        }

        /**
         * An Async wrapper for RemoveWorkload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveWorkloadRequestT = Model::RemoveWorkloadRequest>
        void RemoveWorkloadAsync(const RemoveWorkloadRequestT& request, const RemoveWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::RemoveWorkload, request, handler, context);
        }

        /**
         * <p>Add one or more tags (keys and values) to a specified application. A
         * <i>tag</i> is a label that you optionally define and associate with an
         * application. Tags can help you categorize and manage application in different
         * ways, such as by purpose, owner, environment, or other criteria. </p> <p>Each
         * tag consists of a required <i>tag key</i> and an associated <i>tag value</i>,
         * both of which you define. A tag key is a general label that acts as a category
         * for more specific tag values. A tag value acts as a descriptor within a tag
         * key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Remove one or more tags (keys and values) from a specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const UpdateApplicationRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::UpdateApplication, request);
        }

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        void UpdateApplicationAsync(const UpdateApplicationRequestT& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::UpdateApplication, request, handler, context);
        }

        /**
         * <p>Updates the custom component name and/or the list of resources that make up
         * the component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateComponentOutcome UpdateComponent(const Model::UpdateComponentRequest& request) const;

        /**
         * A Callable wrapper for UpdateComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateComponentRequestT = Model::UpdateComponentRequest>
        Model::UpdateComponentOutcomeCallable UpdateComponentCallable(const UpdateComponentRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::UpdateComponent, request);
        }

        /**
         * An Async wrapper for UpdateComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateComponentRequestT = Model::UpdateComponentRequest>
        void UpdateComponentAsync(const UpdateComponentRequestT& request, const UpdateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::UpdateComponent, request, handler, context);
        }

        /**
         * <p>Updates the monitoring configurations for the component. The configuration
         * input parameter is an escaped JSON of the configuration and should match the
         * schema of what is returned by
         * <code>DescribeComponentConfigurationRecommendation</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateComponentConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateComponentConfigurationOutcome UpdateComponentConfiguration(const Model::UpdateComponentConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateComponentConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateComponentConfigurationRequestT = Model::UpdateComponentConfigurationRequest>
        Model::UpdateComponentConfigurationOutcomeCallable UpdateComponentConfigurationCallable(const UpdateComponentConfigurationRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::UpdateComponentConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateComponentConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateComponentConfigurationRequestT = Model::UpdateComponentConfigurationRequest>
        void UpdateComponentConfigurationAsync(const UpdateComponentConfigurationRequestT& request, const UpdateComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::UpdateComponentConfiguration, request, handler, context);
        }

        /**
         * <p>Adds a log pattern to a <code>LogPatternSet</code>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateLogPattern">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLogPatternOutcome UpdateLogPattern(const Model::UpdateLogPatternRequest& request) const;

        /**
         * A Callable wrapper for UpdateLogPattern that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLogPatternRequestT = Model::UpdateLogPatternRequest>
        Model::UpdateLogPatternOutcomeCallable UpdateLogPatternCallable(const UpdateLogPatternRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::UpdateLogPattern, request);
        }

        /**
         * An Async wrapper for UpdateLogPattern that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLogPatternRequestT = Model::UpdateLogPatternRequest>
        void UpdateLogPatternAsync(const UpdateLogPatternRequestT& request, const UpdateLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::UpdateLogPattern, request, handler, context);
        }

        /**
         * <p>Updates the visibility of the problem or specifies the problem as
         * <code>RESOLVED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateProblem">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProblemOutcome UpdateProblem(const Model::UpdateProblemRequest& request) const;

        /**
         * A Callable wrapper for UpdateProblem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProblemRequestT = Model::UpdateProblemRequest>
        Model::UpdateProblemOutcomeCallable UpdateProblemCallable(const UpdateProblemRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::UpdateProblem, request);
        }

        /**
         * An Async wrapper for UpdateProblem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProblemRequestT = Model::UpdateProblemRequest>
        void UpdateProblemAsync(const UpdateProblemRequestT& request, const UpdateProblemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::UpdateProblem, request, handler, context);
        }

        /**
         * <p>Adds a workload to a component. Each component can have at most five
         * workloads.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateWorkload">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkloadOutcome UpdateWorkload(const Model::UpdateWorkloadRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkloadRequestT = Model::UpdateWorkloadRequest>
        Model::UpdateWorkloadOutcomeCallable UpdateWorkloadCallable(const UpdateWorkloadRequestT& request) const
        {
            return SubmitCallable(&ApplicationInsightsClient::UpdateWorkload, request);
        }

        /**
         * An Async wrapper for UpdateWorkload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkloadRequestT = Model::UpdateWorkloadRequest>
        void UpdateWorkloadAsync(const UpdateWorkloadRequestT& request, const UpdateWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationInsightsClient::UpdateWorkload, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ApplicationInsightsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ApplicationInsightsClient>;
      void init(const ApplicationInsightsClientConfiguration& clientConfiguration);

      ApplicationInsightsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ApplicationInsightsEndpointProviderBase> m_endpointProvider;
  };

} // namespace ApplicationInsights
} // namespace Aws
