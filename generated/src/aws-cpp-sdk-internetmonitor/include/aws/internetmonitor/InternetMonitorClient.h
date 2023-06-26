/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/internetmonitor/InternetMonitorServiceClientModel.h>

namespace Aws
{
namespace InternetMonitor
{
  /**
   * <p>Amazon CloudWatch Internet Monitor provides visibility into how internet
   * issues impact the performance and availability between your applications hosted
   * on Amazon Web Services and your end users. It reduces the time it takes for you
   * to diagnose internet issues from days to minutes. Internet Monitor uses the
   * connectivity data that Amazon Web Services captures from its global networking
   * footprint to calculate a baseline of performance and availability for internet
   * traffic. This is the same data that Amazon Web Services uses to monitor internet
   * uptime and availability. With those measurements as a baseline, Internet Monitor
   * raises awareness for you when there are significant problems for your end users
   * in the different geographic locations where your application runs.</p>
   * <p>Internet Monitor publishes internet measurements to CloudWatch Logs and
   * CloudWatch Metrics, to easily support using CloudWatch tools with health
   * information for geographies and networks specific to your application. Internet
   * Monitor sends health events to Amazon EventBridge so that you can set up
   * notifications. If an issue is caused by the Amazon Web Services network, you
   * also automatically receive an Amazon Web Services Health Dashboard notification
   * with the steps that Amazon Web Services is taking to mitigate the problem.</p>
   * <p>To use Internet Monitor, you create a <i>monitor</i> and associate your
   * application's resources with it, VPCs, CloudFront distributions, or WorkSpaces
   * directories, to enable Internet Monitor to know where your application's
   * internet traffic is. Internet Monitor then provides internet measurements from
   * Amazon Web Services that are specific to the locations and networks that
   * communicate with your application.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-InternetMonitor.html">Using
   * Amazon CloudWatch Internet Monitor</a> in the <i>Amazon CloudWatch User
   * Guide</i>.</p>
   */
  class AWS_INTERNETMONITOR_API InternetMonitorClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<InternetMonitorClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef InternetMonitorClientConfiguration ClientConfigurationType;
      typedef InternetMonitorEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InternetMonitorClient(const Aws::InternetMonitor::InternetMonitorClientConfiguration& clientConfiguration = Aws::InternetMonitor::InternetMonitorClientConfiguration(),
                              std::shared_ptr<InternetMonitorEndpointProviderBase> endpointProvider = Aws::MakeShared<InternetMonitorEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InternetMonitorClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<InternetMonitorEndpointProviderBase> endpointProvider = Aws::MakeShared<InternetMonitorEndpointProvider>(ALLOCATION_TAG),
                              const Aws::InternetMonitor::InternetMonitorClientConfiguration& clientConfiguration = Aws::InternetMonitor::InternetMonitorClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        InternetMonitorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<InternetMonitorEndpointProviderBase> endpointProvider = Aws::MakeShared<InternetMonitorEndpointProvider>(ALLOCATION_TAG),
                              const Aws::InternetMonitor::InternetMonitorClientConfiguration& clientConfiguration = Aws::InternetMonitor::InternetMonitorClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InternetMonitorClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InternetMonitorClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        InternetMonitorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~InternetMonitorClient();

        /**
         * <p>Creates a monitor in Amazon CloudWatch Internet Monitor. A monitor is built
         * based on information from the application resources that you add: Amazon Virtual
         * Private Clouds (VPCs), Amazon CloudFront distributions, and WorkSpaces
         * directories. Internet Monitor then publishes internet measurements from Amazon
         * Web Services that are specific to the <i>city-networks</i>, that is, the
         * locations and ASNs (typically internet service providers or ISPs), where clients
         * access your application. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-InternetMonitor.html">Using
         * Amazon CloudWatch Internet Monitor</a> in the <i>Amazon CloudWatch User
         * Guide</i>.</p> <p>When you create a monitor, you set a maximum limit for the
         * number of city-networks where client traffic is monitored. The city-network
         * maximum that you choose is the limit, but you only pay for the number of
         * city-networks that are actually monitored. You can change the maximum at any
         * time by updating your monitor. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/IMCityNetworksMaximum.html">Choosing
         * a city-network maximum value</a> in the <i>Amazon CloudWatch User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/CreateMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMonitorOutcome CreateMonitor(const Model::CreateMonitorRequest& request) const;

        /**
         * A Callable wrapper for CreateMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMonitorRequestT = Model::CreateMonitorRequest>
        Model::CreateMonitorOutcomeCallable CreateMonitorCallable(const CreateMonitorRequestT& request) const
        {
            return SubmitCallable(&InternetMonitorClient::CreateMonitor, request);
        }

        /**
         * An Async wrapper for CreateMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMonitorRequestT = Model::CreateMonitorRequest>
        void CreateMonitorAsync(const CreateMonitorRequestT& request, const CreateMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InternetMonitorClient::CreateMonitor, request, handler, context);
        }

        /**
         * <p>Deletes a monitor in Amazon CloudWatch Internet Monitor. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/DeleteMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMonitorOutcome DeleteMonitor(const Model::DeleteMonitorRequest& request) const;

        /**
         * A Callable wrapper for DeleteMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMonitorRequestT = Model::DeleteMonitorRequest>
        Model::DeleteMonitorOutcomeCallable DeleteMonitorCallable(const DeleteMonitorRequestT& request) const
        {
            return SubmitCallable(&InternetMonitorClient::DeleteMonitor, request);
        }

        /**
         * An Async wrapper for DeleteMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMonitorRequestT = Model::DeleteMonitorRequest>
        void DeleteMonitorAsync(const DeleteMonitorRequestT& request, const DeleteMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InternetMonitorClient::DeleteMonitor, request, handler, context);
        }

        /**
         * <p>Gets information the Amazon CloudWatch Internet Monitor has created and
         * stored about a health event for a specified monitor. This information includes
         * the impacted locations, and all of the information related to the event by
         * location.</p> <p>The information returned includes the performance,
         * availability, and round-trip time impact, information about the network
         * providers, the event type, and so on.</p> <p>Information rolled up at the global
         * traffic level is also returned, including the impact type and total traffic
         * impact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/GetHealthEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHealthEventOutcome GetHealthEvent(const Model::GetHealthEventRequest& request) const;

        /**
         * A Callable wrapper for GetHealthEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetHealthEventRequestT = Model::GetHealthEventRequest>
        Model::GetHealthEventOutcomeCallable GetHealthEventCallable(const GetHealthEventRequestT& request) const
        {
            return SubmitCallable(&InternetMonitorClient::GetHealthEvent, request);
        }

        /**
         * An Async wrapper for GetHealthEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetHealthEventRequestT = Model::GetHealthEventRequest>
        void GetHealthEventAsync(const GetHealthEventRequestT& request, const GetHealthEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InternetMonitorClient::GetHealthEvent, request, handler, context);
        }

        /**
         * <p>Gets information about a monitor in Amazon CloudWatch Internet Monitor based
         * on a monitor name. The information returned includes the Amazon Resource Name
         * (ARN), create time, modified time, resources included in the monitor, and status
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/GetMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMonitorOutcome GetMonitor(const Model::GetMonitorRequest& request) const;

        /**
         * A Callable wrapper for GetMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMonitorRequestT = Model::GetMonitorRequest>
        Model::GetMonitorOutcomeCallable GetMonitorCallable(const GetMonitorRequestT& request) const
        {
            return SubmitCallable(&InternetMonitorClient::GetMonitor, request);
        }

        /**
         * An Async wrapper for GetMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMonitorRequestT = Model::GetMonitorRequest>
        void GetMonitorAsync(const GetMonitorRequestT& request, const GetMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InternetMonitorClient::GetMonitor, request, handler, context);
        }

        /**
         * <p>Lists all health events for a monitor in Amazon CloudWatch Internet Monitor.
         * Returns all information for health events including the client location
         * information the network cause and status, event start and end time, percentage
         * of total traffic impacted, and status.</p>  <p>Health events that have
         * start times during the time frame that is requested are not included in the list
         * of health events.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/ListHealthEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHealthEventsOutcome ListHealthEvents(const Model::ListHealthEventsRequest& request) const;

        /**
         * A Callable wrapper for ListHealthEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListHealthEventsRequestT = Model::ListHealthEventsRequest>
        Model::ListHealthEventsOutcomeCallable ListHealthEventsCallable(const ListHealthEventsRequestT& request) const
        {
            return SubmitCallable(&InternetMonitorClient::ListHealthEvents, request);
        }

        /**
         * An Async wrapper for ListHealthEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListHealthEventsRequestT = Model::ListHealthEventsRequest>
        void ListHealthEventsAsync(const ListHealthEventsRequestT& request, const ListHealthEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InternetMonitorClient::ListHealthEvents, request, handler, context);
        }

        /**
         * <p>Lists all of your monitors for Amazon CloudWatch Internet Monitor and their
         * statuses, along with the Amazon Resource Name (ARN) and name of each
         * monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/ListMonitors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitorsOutcome ListMonitors(const Model::ListMonitorsRequest& request) const;

        /**
         * A Callable wrapper for ListMonitors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMonitorsRequestT = Model::ListMonitorsRequest>
        Model::ListMonitorsOutcomeCallable ListMonitorsCallable(const ListMonitorsRequestT& request) const
        {
            return SubmitCallable(&InternetMonitorClient::ListMonitors, request);
        }

        /**
         * An Async wrapper for ListMonitors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMonitorsRequestT = Model::ListMonitorsRequest>
        void ListMonitorsAsync(const ListMonitorsRequestT& request, const ListMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InternetMonitorClient::ListMonitors, request, handler, context);
        }

        /**
         * <p>Lists the tags for a resource. Tags are supported only for monitors in Amazon
         * CloudWatch Internet Monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&InternetMonitorClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InternetMonitorClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Adds a tag to a resource. Tags are supported only for monitors in Amazon
         * CloudWatch Internet Monitor. You can add a maximum of 50 tags in Internet
         * Monitor.</p> <p>A minimum of one tag is required for this call. It returns an
         * error if you use the <code>TagResource</code> request with 0 tags.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&InternetMonitorClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InternetMonitorClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&InternetMonitorClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InternetMonitorClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a monitor. You can update a monitor to change the maximum number of
         * city-networks (locations and ASNs or internet service providers), to add or
         * remove resources, or to change the status of the monitor. Note that you can't
         * change the name of a monitor.</p> <p>The city-network maximum that you choose is
         * the limit, but you only pay for the number of city-networks that are actually
         * monitored. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/IMCityNetworksMaximum.html">Choosing
         * a city-network maximum value</a> in the <i>Amazon CloudWatch User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/UpdateMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMonitorOutcome UpdateMonitor(const Model::UpdateMonitorRequest& request) const;

        /**
         * A Callable wrapper for UpdateMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMonitorRequestT = Model::UpdateMonitorRequest>
        Model::UpdateMonitorOutcomeCallable UpdateMonitorCallable(const UpdateMonitorRequestT& request) const
        {
            return SubmitCallable(&InternetMonitorClient::UpdateMonitor, request);
        }

        /**
         * An Async wrapper for UpdateMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMonitorRequestT = Model::UpdateMonitorRequest>
        void UpdateMonitorAsync(const UpdateMonitorRequestT& request, const UpdateMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InternetMonitorClient::UpdateMonitor, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<InternetMonitorEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<InternetMonitorClient>;
      void init(const InternetMonitorClientConfiguration& clientConfiguration);

      InternetMonitorClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<InternetMonitorEndpointProviderBase> m_endpointProvider;
  };

} // namespace InternetMonitor
} // namespace Aws
