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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationInsightsClient(const Aws::ApplicationInsights::ApplicationInsightsClientConfiguration& clientConfiguration = Aws::ApplicationInsights::ApplicationInsightsClientConfiguration(),
                                  std::shared_ptr<ApplicationInsightsEndpointProviderBase> endpointProvider = Aws::MakeShared<ApplicationInsightsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationInsightsClient(const Aws::Auth::AWSCredentials& credentials,
                                  std::shared_ptr<ApplicationInsightsEndpointProviderBase> endpointProvider = Aws::MakeShared<ApplicationInsightsEndpointProvider>(ALLOCATION_TAG),
                                  const Aws::ApplicationInsights::ApplicationInsightsClientConfiguration& clientConfiguration = Aws::ApplicationInsights::ApplicationInsightsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationInsightsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  std::shared_ptr<ApplicationInsightsEndpointProviderBase> endpointProvider = Aws::MakeShared<ApplicationInsightsEndpointProvider>(ALLOCATION_TAG),
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
         * <p>Adds an application that is created from a resource group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateComponentOutcomeCallable CreateComponentCallable(const Model::CreateComponentRequest& request) const;

        /**
         * An Async wrapper for CreateComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateComponentAsync(const Model::CreateComponentRequest& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateLogPatternOutcomeCallable CreateLogPatternCallable(const Model::CreateLogPatternRequest& request) const;

        /**
         * An Async wrapper for CreateLogPattern that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLogPatternAsync(const Model::CreateLogPatternRequest& request, const CreateLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteComponentOutcomeCallable DeleteComponentCallable(const Model::DeleteComponentRequest& request) const;

        /**
         * An Async wrapper for DeleteComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteComponentAsync(const Model::DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteLogPatternOutcomeCallable DeleteLogPatternCallable(const Model::DeleteLogPatternRequest& request) const;

        /**
         * An Async wrapper for DeleteLogPattern that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLogPatternAsync(const Model::DeleteLogPatternRequest& request, const DeleteLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeApplicationOutcomeCallable DescribeApplicationCallable(const Model::DescribeApplicationRequest& request) const;

        /**
         * An Async wrapper for DescribeApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApplicationAsync(const Model::DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeComponentOutcomeCallable DescribeComponentCallable(const Model::DescribeComponentRequest& request) const;

        /**
         * An Async wrapper for DescribeComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeComponentAsync(const Model::DescribeComponentRequest& request, const DescribeComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeComponentConfigurationOutcomeCallable DescribeComponentConfigurationCallable(const Model::DescribeComponentConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeComponentConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeComponentConfigurationAsync(const Model::DescribeComponentConfigurationRequest& request, const DescribeComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeComponentConfigurationRecommendationOutcomeCallable DescribeComponentConfigurationRecommendationCallable(const Model::DescribeComponentConfigurationRecommendationRequest& request) const;

        /**
         * An Async wrapper for DescribeComponentConfigurationRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeComponentConfigurationRecommendationAsync(const Model::DescribeComponentConfigurationRecommendationRequest& request, const DescribeComponentConfigurationRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeLogPatternOutcomeCallable DescribeLogPatternCallable(const Model::DescribeLogPatternRequest& request) const;

        /**
         * An Async wrapper for DescribeLogPattern that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLogPatternAsync(const Model::DescribeLogPatternRequest& request, const DescribeLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeObservationOutcomeCallable DescribeObservationCallable(const Model::DescribeObservationRequest& request) const;

        /**
         * An Async wrapper for DescribeObservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeObservationAsync(const Model::DescribeObservationRequest& request, const DescribeObservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an application problem.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeProblem">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProblemOutcome DescribeProblem(const Model::DescribeProblemRequest& request) const;

        /**
         * A Callable wrapper for DescribeProblem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProblemOutcomeCallable DescribeProblemCallable(const Model::DescribeProblemRequest& request) const;

        /**
         * An Async wrapper for DescribeProblem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProblemAsync(const Model::DescribeProblemRequest& request, const DescribeProblemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeProblemObservationsOutcomeCallable DescribeProblemObservationsCallable(const Model::DescribeProblemObservationsRequest& request) const;

        /**
         * An Async wrapper for DescribeProblemObservations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProblemObservationsAsync(const Model::DescribeProblemObservationsRequest& request, const DescribeProblemObservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListComponentsOutcomeCallable ListComponentsCallable(const Model::ListComponentsRequest& request) const;

        /**
         * An Async wrapper for ListComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComponentsAsync(const Model::ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListConfigurationHistoryOutcomeCallable ListConfigurationHistoryCallable(const Model::ListConfigurationHistoryRequest& request) const;

        /**
         * An Async wrapper for ListConfigurationHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfigurationHistoryAsync(const Model::ListConfigurationHistoryRequest& request, const ListConfigurationHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListLogPatternSetsOutcomeCallable ListLogPatternSetsCallable(const Model::ListLogPatternSetsRequest& request) const;

        /**
         * An Async wrapper for ListLogPatternSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLogPatternSetsAsync(const Model::ListLogPatternSetsRequest& request, const ListLogPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListLogPatternsOutcomeCallable ListLogPatternsCallable(const Model::ListLogPatternsRequest& request) const;

        /**
         * An Async wrapper for ListLogPatterns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLogPatternsAsync(const Model::ListLogPatternsRequest& request, const ListLogPatternsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the problems with your application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListProblems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProblemsOutcome ListProblems(const Model::ListProblemsRequest& request) const;

        /**
         * A Callable wrapper for ListProblems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProblemsOutcomeCallable ListProblemsCallable(const Model::ListProblemsRequest& request) const;

        /**
         * An Async wrapper for ListProblems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProblemsAsync(const Model::ListProblemsRequest& request, const ListProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateComponentOutcomeCallable UpdateComponentCallable(const Model::UpdateComponentRequest& request) const;

        /**
         * An Async wrapper for UpdateComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateComponentAsync(const Model::UpdateComponentRequest& request, const UpdateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateComponentConfigurationOutcomeCallable UpdateComponentConfigurationCallable(const Model::UpdateComponentConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateComponentConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateComponentConfigurationAsync(const Model::UpdateComponentConfigurationRequest& request, const UpdateComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateLogPatternOutcomeCallable UpdateLogPatternCallable(const Model::UpdateLogPatternRequest& request) const;

        /**
         * An Async wrapper for UpdateLogPattern that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLogPatternAsync(const Model::UpdateLogPatternRequest& request, const UpdateLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
