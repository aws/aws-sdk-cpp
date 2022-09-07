/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rum/CloudWatchRUMServiceClientModel.h>

namespace Aws
{
namespace CloudWatchRUM
{
  /**
   * <p>With Amazon CloudWatch RUM, you can perform real-user monitoring to collect
   * client-side data about your web application performance from actual user
   * sessions in real time. The data collected includes page load times, client-side
   * errors, and user behavior. When you view this data, you can see it all
   * aggregated together and also see breakdowns by the browsers and devices that
   * your customers use.</p> <pre><code> &lt;p&gt;You can use the collected data to
   * quickly identify and debug client-side performance issues. CloudWatch RUM helps
   * you visualize anomalies in your application performance and find relevant
   * debugging data such as error messages, stack traces, and user sessions. You can
   * also use RUM to understand the range of end-user impact including the number of
   * users, geolocations, and browsers used.&lt;/p&gt; </code></pre>
   */
  class AWS_CLOUDWATCHRUM_API CloudWatchRUMClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchRUMClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchRUMClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchRUMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CloudWatchRUMClient();


        /**
         * <p>Creates a Amazon CloudWatch RUM app monitor, which collects telemetry data
         * from your application and sends that data to RUM. The data includes performance
         * and reliability information such as page load time, client-side errors, and user
         * behavior.</p> <p>You use this operation only to create a new app monitor. To
         * update an existing app monitor, use <a
         * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_UpdateAppMonitor.html">UpdateAppMonitor</a>
         * instead.</p> <p>After you create an app monitor, sign in to the CloudWatch RUM
         * console to get the JavaScript code snippet to add to your web application. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-find-code-snippet.html">How
         * do I find a code snippet that I've already generated?</a> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/CreateAppMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppMonitorOutcome CreateAppMonitor(const Model::CreateAppMonitorRequest& request) const;

        /**
         * A Callable wrapper for CreateAppMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppMonitorOutcomeCallable CreateAppMonitorCallable(const Model::CreateAppMonitorRequest& request) const;

        /**
         * An Async wrapper for CreateAppMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppMonitorAsync(const Model::CreateAppMonitorRequest& request, const CreateAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing app monitor. This immediately stops the collection of
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/DeleteAppMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppMonitorOutcome DeleteAppMonitor(const Model::DeleteAppMonitorRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppMonitorOutcomeCallable DeleteAppMonitorCallable(const Model::DeleteAppMonitorRequest& request) const;

        /**
         * An Async wrapper for DeleteAppMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppMonitorAsync(const Model::DeleteAppMonitorRequest& request, const DeleteAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the complete configuration information for one app
         * monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/GetAppMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppMonitorOutcome GetAppMonitor(const Model::GetAppMonitorRequest& request) const;

        /**
         * A Callable wrapper for GetAppMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppMonitorOutcomeCallable GetAppMonitorCallable(const Model::GetAppMonitorRequest& request) const;

        /**
         * An Async wrapper for GetAppMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppMonitorAsync(const Model::GetAppMonitorRequest& request, const GetAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the raw performance events that RUM has collected from your web
         * application, so that you can do your own processing or analysis of this
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/GetAppMonitorData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppMonitorDataOutcome GetAppMonitorData(const Model::GetAppMonitorDataRequest& request) const;

        /**
         * A Callable wrapper for GetAppMonitorData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppMonitorDataOutcomeCallable GetAppMonitorDataCallable(const Model::GetAppMonitorDataRequest& request) const;

        /**
         * An Async wrapper for GetAppMonitorData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppMonitorDataAsync(const Model::GetAppMonitorDataRequest& request, const GetAppMonitorDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the Amazon CloudWatch RUM app monitors in the
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/ListAppMonitors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppMonitorsOutcome ListAppMonitors(const Model::ListAppMonitorsRequest& request) const;

        /**
         * A Callable wrapper for ListAppMonitors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppMonitorsOutcomeCallable ListAppMonitorsCallable(const Model::ListAppMonitorsRequest& request) const;

        /**
         * An Async wrapper for ListAppMonitors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppMonitorsAsync(const Model::ListAppMonitorsRequest& request, const ListAppMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the tags associated with a CloudWatch RUM resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/ListTagsForResource">AWS
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
         * <p>Sends telemetry events about your application performance and user behavior
         * to CloudWatch RUM. The code snippet that RUM generates for you to add to your
         * application includes <code>PutRumEvents</code> operations to send this data to
         * RUM.</p> <p>Each <code>PutRumEvents</code> operation can send a batch of events
         * from one user session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/PutRumEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRumEventsOutcome PutRumEvents(const Model::PutRumEventsRequest& request) const;

        /**
         * A Callable wrapper for PutRumEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRumEventsOutcomeCallable PutRumEventsCallable(const Model::PutRumEventsRequest& request) const;

        /**
         * An Async wrapper for PutRumEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRumEventsAsync(const Model::PutRumEventsRequest& request, const PutRumEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified CloudWatch RUM
         * resource. Currently, the only resources that can be tagged app monitors.</p>
         * <p>Tags can help you organize and categorize your resources. You can also use
         * them to scope user permissions by granting a user permission to access or change
         * only resources with certain tag values.</p> <p>Tags don't have any semantic
         * meaning to Amazon Web Services and are interpreted strictly as strings of
         * characters.</p> <p>You can use the <code>TagResource</code> action with a
         * resource that already has tags. If you specify a new tag key for the resource,
         * this tag is appended to the list of tags associated with the alarm. If you
         * specify a tag key that is already associated with the resource, the new tag
         * value that you specify replaces the previous value for that tag.</p> <p>You can
         * associate as many as 50 tags with a resource.</p> <p>For more information, see
         * <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/TagResource">AWS API
         * Reference</a></p>
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
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/UntagResource">AWS
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
         * <p>Updates the configuration of an existing app monitor. When you use this
         * operation, only the parts of the app monitor configuration that you specify in
         * this operation are changed. For any parameters that you omit, the existing
         * values are kept.</p> <p>You can't use this operation to change the tags of an
         * existing app monitor. To change the tags of an existing app monitor, use <a
         * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_TagResource.html">TagResource</a>.</p>
         * <p>To create a new app monitor, use <a
         * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_CreateAppMonitor.html">CreateAppMonitor</a>.</p>
         * <p>After you update an app monitor, sign in to the CloudWatch RUM console to get
         * the updated JavaScript code snippet to add to your web application. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-find-code-snippet.html">How
         * do I find a code snippet that I've already generated?</a> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/UpdateAppMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppMonitorOutcome UpdateAppMonitor(const Model::UpdateAppMonitorRequest& request) const;

        /**
         * A Callable wrapper for UpdateAppMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAppMonitorOutcomeCallable UpdateAppMonitorCallable(const Model::UpdateAppMonitorRequest& request) const;

        /**
         * An Async wrapper for UpdateAppMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAppMonitorAsync(const Model::UpdateAppMonitorRequest& request, const UpdateAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_baseUri;
      Aws::String m_scheme;
      bool m_enableHostPrefixInjection = false;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudWatchRUM
} // namespace Aws
