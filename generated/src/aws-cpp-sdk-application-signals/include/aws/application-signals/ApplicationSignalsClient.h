﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/application-signals/ApplicationSignalsServiceClientModel.h>

namespace Aws
{
namespace ApplicationSignals
{
  /**
   *  <p>This is a Preview release of the Application Signals API
   * Reference. Operations and parameters are subject to change before the general
   * availability release.</p>  <p>Use CloudWatch Application Signals for
   * comprehensive observability of your cloud-based applications. It enables
   * real-time service health dashboards and helps you track long-term performance
   * trends against your business goals. The application-centric view provides you
   * with unified visibility across your applications, services, and dependencies, so
   * you can proactively monitor and efficiently triage any issues that may arise,
   * ensuring optimal customer experience.</p> <p>Application Signals provides the
   * following benefits:</p> <ul> <li> <p>Automatically collect metrics and traces
   * from your applications, and display key metrics such as call volume,
   * availability, latency, faults, and errors. </p> </li> <li> <p>Create and monitor
   * service level objectives (SLOs). </p> </li> <li> <p>See a map of your
   * application topology that Application Signals automatically discovers, that
   * gives you a visual representation of your applications, dependencies, and their
   * connectivity.</p> </li> </ul>
   */
  class AWS_APPLICATIONSIGNALS_API ApplicationSignalsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ApplicationSignalsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ApplicationSignalsClientConfiguration ClientConfigurationType;
      typedef ApplicationSignalsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationSignalsClient(const Aws::ApplicationSignals::ApplicationSignalsClientConfiguration& clientConfiguration = Aws::ApplicationSignals::ApplicationSignalsClientConfiguration(),
                                 std::shared_ptr<ApplicationSignalsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationSignalsClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<ApplicationSignalsEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::ApplicationSignals::ApplicationSignalsClientConfiguration& clientConfiguration = Aws::ApplicationSignals::ApplicationSignalsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationSignalsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<ApplicationSignalsEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::ApplicationSignals::ApplicationSignalsClientConfiguration& clientConfiguration = Aws::ApplicationSignals::ApplicationSignalsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationSignalsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationSignalsClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationSignalsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ApplicationSignalsClient();

        /**
         * <p>Use this operation to retrieve one or more <i>service level objective (SLO)
         * budget reports</i>.</p> <p>An <i>error budget</i> is the amount of time in
         * unhealthy periods that your service can accumulate during an interval before
         * your overall SLO budget health is breached and the SLO is considered to be
         * unmet. For example, an SLO with a threshold of 99.95% and a monthly interval
         * translates to an error budget of 21.9 minutes of downtime in a 30-day month.</p>
         * <p>Budget reports include a health indicator, the attainment value, and
         * remaining budget.</p> <p>For more information about SLO error budgets, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-ServiceLevelObjectives.html#CloudWatch-ServiceLevelObjectives-concepts">
         * SLO concepts</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/BatchGetServiceLevelObjectiveBudgetReport">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetServiceLevelObjectiveBudgetReportOutcome BatchGetServiceLevelObjectiveBudgetReport(const Model::BatchGetServiceLevelObjectiveBudgetReportRequest& request) const;

        /**
         * A Callable wrapper for BatchGetServiceLevelObjectiveBudgetReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetServiceLevelObjectiveBudgetReportRequestT = Model::BatchGetServiceLevelObjectiveBudgetReportRequest>
        Model::BatchGetServiceLevelObjectiveBudgetReportOutcomeCallable BatchGetServiceLevelObjectiveBudgetReportCallable(const BatchGetServiceLevelObjectiveBudgetReportRequestT& request) const
        {
            return SubmitCallable(&ApplicationSignalsClient::BatchGetServiceLevelObjectiveBudgetReport, request);
        }

        /**
         * An Async wrapper for BatchGetServiceLevelObjectiveBudgetReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetServiceLevelObjectiveBudgetReportRequestT = Model::BatchGetServiceLevelObjectiveBudgetReportRequest>
        void BatchGetServiceLevelObjectiveBudgetReportAsync(const BatchGetServiceLevelObjectiveBudgetReportRequestT& request, const BatchGetServiceLevelObjectiveBudgetReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationSignalsClient::BatchGetServiceLevelObjectiveBudgetReport, request, handler, context);
        }

        /**
         * <p>Creates a service level objective (SLO), which can help you ensure that your
         * critical business operations are meeting customer expectations. Use SLOs to set
         * and track specific target levels for the reliability and availability of your
         * applications and services. SLOs use service level indicators (SLIs) to calculate
         * whether the application is performing at the level that you want.</p> <p>Create
         * an SLO to set a target for a service or operation’s availability or latency.
         * CloudWatch measures this target frequently you can find whether it has been
         * breached. </p> <p>When you create an SLO, you set an <i>attainment goal</i> for
         * it. An <i>attainment goal</i> is the ratio of good periods that meet the
         * threshold requirements to the total periods within the interval. For example, an
         * attainment goal of 99.9% means that within your interval, you are targeting
         * 99.9% of the periods to be in healthy state.</p> <p>After you have created an
         * SLO, you can retrieve error budget reports for it. An <i>error budget</i> is the
         * number of periods or amount of time that your service can accumulate during an
         * interval before your overall SLO budget health is breached and the SLO is
         * considered to be unmet. for example, an SLO with a threshold that 99.95% of
         * requests must be completed under 2000ms every month translates to an error
         * budget of 21.9 minutes of downtime per month.</p> <p>When you call this
         * operation, Application Signals creates the
         * <i>AWSServiceRoleForCloudWatchApplicationSignals</i> service-linked role, if it
         * doesn't already exist in your account. This service- linked role has the
         * following permissions:</p> <ul> <li> <p> <code>xray:GetServiceGraph</code> </p>
         * </li> <li> <p> <code>logs:StartQuery</code> </p> </li> <li> <p>
         * <code>logs:GetQueryResults</code> </p> </li> <li> <p>
         * <code>cloudwatch:GetMetricData</code> </p> </li> <li> <p>
         * <code>cloudwatch:ListMetrics</code> </p> </li> <li> <p>
         * <code>tag:GetResources</code> </p> </li> <li> <p>
         * <code>autoscaling:DescribeAutoScalingGroups</code> </p> </li> </ul> <p>You can
         * easily set SLO targets for your applications that are discovered by Application
         * Signals, using critical metrics such as latency and availability. You can also
         * set SLOs against any CloudWatch metric or math expression that produces a time
         * series.</p> <p>For more information about SLOs, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-ServiceLevelObjectives.html">
         * Service level objectives (SLOs)</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/CreateServiceLevelObjective">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceLevelObjectiveOutcome CreateServiceLevelObjective(const Model::CreateServiceLevelObjectiveRequest& request) const;

        /**
         * A Callable wrapper for CreateServiceLevelObjective that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateServiceLevelObjectiveRequestT = Model::CreateServiceLevelObjectiveRequest>
        Model::CreateServiceLevelObjectiveOutcomeCallable CreateServiceLevelObjectiveCallable(const CreateServiceLevelObjectiveRequestT& request) const
        {
            return SubmitCallable(&ApplicationSignalsClient::CreateServiceLevelObjective, request);
        }

        /**
         * An Async wrapper for CreateServiceLevelObjective that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateServiceLevelObjectiveRequestT = Model::CreateServiceLevelObjectiveRequest>
        void CreateServiceLevelObjectiveAsync(const CreateServiceLevelObjectiveRequestT& request, const CreateServiceLevelObjectiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationSignalsClient::CreateServiceLevelObjective, request, handler, context);
        }

        /**
         * <p>Deletes the specified service level objective.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/DeleteServiceLevelObjective">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceLevelObjectiveOutcome DeleteServiceLevelObjective(const Model::DeleteServiceLevelObjectiveRequest& request) const;

        /**
         * A Callable wrapper for DeleteServiceLevelObjective that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteServiceLevelObjectiveRequestT = Model::DeleteServiceLevelObjectiveRequest>
        Model::DeleteServiceLevelObjectiveOutcomeCallable DeleteServiceLevelObjectiveCallable(const DeleteServiceLevelObjectiveRequestT& request) const
        {
            return SubmitCallable(&ApplicationSignalsClient::DeleteServiceLevelObjective, request);
        }

        /**
         * An Async wrapper for DeleteServiceLevelObjective that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteServiceLevelObjectiveRequestT = Model::DeleteServiceLevelObjectiveRequest>
        void DeleteServiceLevelObjectiveAsync(const DeleteServiceLevelObjectiveRequestT& request, const DeleteServiceLevelObjectiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationSignalsClient::DeleteServiceLevelObjective, request, handler, context);
        }

        /**
         * <p>Returns information about a service discovered by Application
         * Signals.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/GetService">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceOutcome GetService(const Model::GetServiceRequest& request) const;

        /**
         * A Callable wrapper for GetService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServiceRequestT = Model::GetServiceRequest>
        Model::GetServiceOutcomeCallable GetServiceCallable(const GetServiceRequestT& request) const
        {
            return SubmitCallable(&ApplicationSignalsClient::GetService, request);
        }

        /**
         * An Async wrapper for GetService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServiceRequestT = Model::GetServiceRequest>
        void GetServiceAsync(const GetServiceRequestT& request, const GetServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationSignalsClient::GetService, request, handler, context);
        }

        /**
         * <p>Returns information about one SLO created in the account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/GetServiceLevelObjective">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceLevelObjectiveOutcome GetServiceLevelObjective(const Model::GetServiceLevelObjectiveRequest& request) const;

        /**
         * A Callable wrapper for GetServiceLevelObjective that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServiceLevelObjectiveRequestT = Model::GetServiceLevelObjectiveRequest>
        Model::GetServiceLevelObjectiveOutcomeCallable GetServiceLevelObjectiveCallable(const GetServiceLevelObjectiveRequestT& request) const
        {
            return SubmitCallable(&ApplicationSignalsClient::GetServiceLevelObjective, request);
        }

        /**
         * An Async wrapper for GetServiceLevelObjective that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServiceLevelObjectiveRequestT = Model::GetServiceLevelObjectiveRequest>
        void GetServiceLevelObjectiveAsync(const GetServiceLevelObjectiveRequestT& request, const GetServiceLevelObjectiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationSignalsClient::GetServiceLevelObjective, request, handler, context);
        }

        /**
         * <p>Returns a list of service dependencies of the service that you specify. A
         * dependency is an infrastructure component that an operation of this service
         * connects with. Dependencies can include Amazon Web Services services, Amazon Web
         * Services resources, and third-party services. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ListServiceDependencies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceDependenciesOutcome ListServiceDependencies(const Model::ListServiceDependenciesRequest& request) const;

        /**
         * A Callable wrapper for ListServiceDependencies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServiceDependenciesRequestT = Model::ListServiceDependenciesRequest>
        Model::ListServiceDependenciesOutcomeCallable ListServiceDependenciesCallable(const ListServiceDependenciesRequestT& request) const
        {
            return SubmitCallable(&ApplicationSignalsClient::ListServiceDependencies, request);
        }

        /**
         * An Async wrapper for ListServiceDependencies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServiceDependenciesRequestT = Model::ListServiceDependenciesRequest>
        void ListServiceDependenciesAsync(const ListServiceDependenciesRequestT& request, const ListServiceDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationSignalsClient::ListServiceDependencies, request, handler, context);
        }

        /**
         * <p>Returns the list of dependents that invoked the specified service during the
         * provided time range. Dependents include other services, CloudWatch Synthetics
         * canaries, and clients that are instrumented with CloudWatch RUM app
         * monitors.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ListServiceDependents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceDependentsOutcome ListServiceDependents(const Model::ListServiceDependentsRequest& request) const;

        /**
         * A Callable wrapper for ListServiceDependents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServiceDependentsRequestT = Model::ListServiceDependentsRequest>
        Model::ListServiceDependentsOutcomeCallable ListServiceDependentsCallable(const ListServiceDependentsRequestT& request) const
        {
            return SubmitCallable(&ApplicationSignalsClient::ListServiceDependents, request);
        }

        /**
         * An Async wrapper for ListServiceDependents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServiceDependentsRequestT = Model::ListServiceDependentsRequest>
        void ListServiceDependentsAsync(const ListServiceDependentsRequestT& request, const ListServiceDependentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationSignalsClient::ListServiceDependents, request, handler, context);
        }

        /**
         * <p>Returns a list of SLOs created in this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ListServiceLevelObjectives">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceLevelObjectivesOutcome ListServiceLevelObjectives(const Model::ListServiceLevelObjectivesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListServiceLevelObjectives that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServiceLevelObjectivesRequestT = Model::ListServiceLevelObjectivesRequest>
        Model::ListServiceLevelObjectivesOutcomeCallable ListServiceLevelObjectivesCallable(const ListServiceLevelObjectivesRequestT& request = {}) const
        {
            return SubmitCallable(&ApplicationSignalsClient::ListServiceLevelObjectives, request);
        }

        /**
         * An Async wrapper for ListServiceLevelObjectives that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServiceLevelObjectivesRequestT = Model::ListServiceLevelObjectivesRequest>
        void ListServiceLevelObjectivesAsync(const ListServiceLevelObjectivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListServiceLevelObjectivesRequestT& request = {}) const
        {
            return SubmitAsync(&ApplicationSignalsClient::ListServiceLevelObjectives, request, handler, context);
        }

        /**
         * <p>Returns a list of the <i>operations</i> of this service that have been
         * discovered by Application Signals. Only the operations that were invoked during
         * the specified time range are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ListServiceOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceOperationsOutcome ListServiceOperations(const Model::ListServiceOperationsRequest& request) const;

        /**
         * A Callable wrapper for ListServiceOperations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServiceOperationsRequestT = Model::ListServiceOperationsRequest>
        Model::ListServiceOperationsOutcomeCallable ListServiceOperationsCallable(const ListServiceOperationsRequestT& request) const
        {
            return SubmitCallable(&ApplicationSignalsClient::ListServiceOperations, request);
        }

        /**
         * An Async wrapper for ListServiceOperations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServiceOperationsRequestT = Model::ListServiceOperationsRequest>
        void ListServiceOperationsAsync(const ListServiceOperationsRequestT& request, const ListServiceOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationSignalsClient::ListServiceOperations, request, handler, context);
        }

        /**
         * <p>Returns a list of services that have been discovered by Application Signals.
         * A service represents a minimum logical and transactional unit that completes a
         * business function. Services are discovered through Application Signals
         * instrumentation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ListServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;

        /**
         * A Callable wrapper for ListServices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServicesRequestT = Model::ListServicesRequest>
        Model::ListServicesOutcomeCallable ListServicesCallable(const ListServicesRequestT& request) const
        {
            return SubmitCallable(&ApplicationSignalsClient::ListServices, request);
        }

        /**
         * An Async wrapper for ListServices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServicesRequestT = Model::ListServicesRequest>
        void ListServicesAsync(const ListServicesRequestT& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationSignalsClient::ListServices, request, handler, context);
        }

        /**
         * <p>Displays the tags associated with a CloudWatch resource. Tags can be assigned
         * to service level objectives.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ApplicationSignalsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationSignalsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Enables this Amazon Web Services account to be able to use CloudWatch
         * Application Signals by creating the
         * <i>AWSServiceRoleForCloudWatchApplicationSignals</i> service-linked role. This
         * service- linked role has the following permissions:</p> <ul> <li> <p>
         * <code>xray:GetServiceGraph</code> </p> </li> <li> <p>
         * <code>logs:StartQuery</code> </p> </li> <li> <p>
         * <code>logs:GetQueryResults</code> </p> </li> <li> <p>
         * <code>cloudwatch:GetMetricData</code> </p> </li> <li> <p>
         * <code>cloudwatch:ListMetrics</code> </p> </li> <li> <p>
         * <code>tag:GetResources</code> </p> </li> <li> <p>
         * <code>autoscaling:DescribeAutoScalingGroups</code> </p> </li> </ul> <p>After
         * completing this step, you still need to instrument your Java and Python
         * applications to send data to Application Signals. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Application-Signals-Enable.html">
         * Enabling Application Signals</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/StartDiscovery">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDiscoveryOutcome StartDiscovery(const Model::StartDiscoveryRequest& request = {}) const;

        /**
         * A Callable wrapper for StartDiscovery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDiscoveryRequestT = Model::StartDiscoveryRequest>
        Model::StartDiscoveryOutcomeCallable StartDiscoveryCallable(const StartDiscoveryRequestT& request = {}) const
        {
            return SubmitCallable(&ApplicationSignalsClient::StartDiscovery, request);
        }

        /**
         * An Async wrapper for StartDiscovery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDiscoveryRequestT = Model::StartDiscoveryRequest>
        void StartDiscoveryAsync(const StartDiscoveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const StartDiscoveryRequestT& request = {}) const
        {
            return SubmitAsync(&ApplicationSignalsClient::StartDiscovery, request, handler, context);
        }

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified CloudWatch
         * resource, such as a service level objective.</p> <p>Tags can help you organize
         * and categorize your resources. You can also use them to scope user permissions
         * by granting a user permission to access or change only resources with certain
         * tag values.</p> <p>Tags don't have any semantic meaning to Amazon Web Services
         * and are interpreted strictly as strings of characters.</p> <p>You can use the
         * <code>TagResource</code> action with an alarm that already has tags. If you
         * specify a new tag key for the alarm, this tag is appended to the list of tags
         * associated with the alarm. If you specify a tag key that is already associated
         * with the alarm, the new tag value that you specify replaces the previous value
         * for that tag.</p> <p>You can associate as many as 50 tags with a CloudWatch
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ApplicationSignalsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationSignalsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ApplicationSignalsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationSignalsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing service level objective (SLO). If you omit parameters,
         * the previous values of those parameters are retained. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/UpdateServiceLevelObjective">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceLevelObjectiveOutcome UpdateServiceLevelObjective(const Model::UpdateServiceLevelObjectiveRequest& request) const;

        /**
         * A Callable wrapper for UpdateServiceLevelObjective that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateServiceLevelObjectiveRequestT = Model::UpdateServiceLevelObjectiveRequest>
        Model::UpdateServiceLevelObjectiveOutcomeCallable UpdateServiceLevelObjectiveCallable(const UpdateServiceLevelObjectiveRequestT& request) const
        {
            return SubmitCallable(&ApplicationSignalsClient::UpdateServiceLevelObjective, request);
        }

        /**
         * An Async wrapper for UpdateServiceLevelObjective that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateServiceLevelObjectiveRequestT = Model::UpdateServiceLevelObjectiveRequest>
        void UpdateServiceLevelObjectiveAsync(const UpdateServiceLevelObjectiveRequestT& request, const UpdateServiceLevelObjectiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationSignalsClient::UpdateServiceLevelObjective, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ApplicationSignalsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ApplicationSignalsClient>;
      void init(const ApplicationSignalsClientConfiguration& clientConfiguration);

      ApplicationSignalsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ApplicationSignalsEndpointProviderBase> m_endpointProvider;
  };

} // namespace ApplicationSignals
} // namespace Aws
