/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-guru/DevOpsGuruServiceClientModel.h>

namespace Aws
{
namespace DevOpsGuru
{
  /**
   * <p> Amazon DevOps Guru is a fully managed service that helps you identify
   * anomalous behavior in business critical operational applications. You specify
   * the Amazon Web Services resources that you want DevOps Guru to cover, then the
   * Amazon CloudWatch metrics and Amazon Web Services CloudTrail events related to
   * those resources are analyzed. When anomalous behavior is detected, DevOps Guru
   * creates an <i>insight</i> that includes recommendations, related events, and
   * related metrics that can help you improve your operational applications. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/welcome.html">What
   * is Amazon DevOps Guru</a>. </p> <p> You can specify 1 or 2 Amazon Simple
   * Notification Service topics so you are notified every time a new insight is
   * created. You can also enable DevOps Guru to generate an OpsItem in Amazon Web
   * Services Systems Manager for each insight to help you manage and track your work
   * addressing insights. </p> <p> To learn about the DevOps Guru workflow, see <a
   * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/welcome.html#how-it-works">How
   * DevOps Guru works</a>. To learn about DevOps Guru concepts, see <a
   * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/concepts.html">Concepts
   * in DevOps Guru</a>. </p>
   */
  class AWS_DEVOPSGURU_API DevOpsGuruClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<DevOpsGuruClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DevOpsGuruClient(const Aws::DevOpsGuru::DevOpsGuruClientConfiguration& clientConfiguration = Aws::DevOpsGuru::DevOpsGuruClientConfiguration(),
                         std::shared_ptr<DevOpsGuruEndpointProviderBase> endpointProvider = Aws::MakeShared<DevOpsGuruEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DevOpsGuruClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<DevOpsGuruEndpointProviderBase> endpointProvider = Aws::MakeShared<DevOpsGuruEndpointProvider>(ALLOCATION_TAG),
                         const Aws::DevOpsGuru::DevOpsGuruClientConfiguration& clientConfiguration = Aws::DevOpsGuru::DevOpsGuruClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DevOpsGuruClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<DevOpsGuruEndpointProviderBase> endpointProvider = Aws::MakeShared<DevOpsGuruEndpointProvider>(ALLOCATION_TAG),
                         const Aws::DevOpsGuru::DevOpsGuruClientConfiguration& clientConfiguration = Aws::DevOpsGuru::DevOpsGuruClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DevOpsGuruClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DevOpsGuruClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DevOpsGuruClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DevOpsGuruClient();

        /**
         * <p> Adds a notification channel to DevOps Guru. A notification channel is used
         * to notify you about important DevOps Guru events, such as when an insight is
         * generated. </p> <p>If you use an Amazon SNS topic in another account, you must
         * attach a policy to it that grants DevOps Guru permission to it notifications.
         * DevOps Guru adds the required policy on your behalf to send notifications using
         * Amazon SNS in your account. DevOps Guru only supports standard SNS topics. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-required-permissions.html">Permissions
         * for cross account Amazon SNS topics</a>.</p> <p>If you use an Amazon SNS topic
         * in another account, you must attach a policy to it that grants DevOps Guru
         * permission to it notifications. DevOps Guru adds the required policy on your
         * behalf to send notifications using Amazon SNS in your account. For more
         * information, see Permissions for cross account Amazon SNS topics.</p> <p>If you
         * use an Amazon SNS topic that is encrypted by an Amazon Web Services Key
         * Management Service customer-managed key (CMK), then you must add permissions to
         * the CMK. For more information, see <a
         * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-kms-permissions.html">Permissions
         * for Amazon Web Services KMS–encrypted Amazon SNS topics</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/AddNotificationChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::AddNotificationChannelOutcome AddNotificationChannel(const Model::AddNotificationChannelRequest& request) const;

        /**
         * A Callable wrapper for AddNotificationChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddNotificationChannelOutcomeCallable AddNotificationChannelCallable(const Model::AddNotificationChannelRequest& request) const;

        /**
         * An Async wrapper for AddNotificationChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddNotificationChannelAsync(const Model::AddNotificationChannelRequest& request, const AddNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the insight along with the associated anomalies, events and
         * recommendations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DeleteInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInsightOutcome DeleteInsight(const Model::DeleteInsightRequest& request) const;

        /**
         * A Callable wrapper for DeleteInsight that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInsightOutcomeCallable DeleteInsightCallable(const Model::DeleteInsightRequest& request) const;

        /**
         * An Async wrapper for DeleteInsight that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInsightAsync(const Model::DeleteInsightRequest& request, const DeleteInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the number of open reactive insights, the number of open proactive
         * insights, and the number of metrics analyzed in your Amazon Web Services
         * account. Use these numbers to gauge the health of operations in your Amazon Web
         * Services account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeAccountHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountHealthOutcome DescribeAccountHealth(const Model::DescribeAccountHealthRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountHealth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountHealthOutcomeCallable DescribeAccountHealthCallable(const Model::DescribeAccountHealthRequest& request) const;

        /**
         * An Async wrapper for DescribeAccountHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountHealthAsync(const Model::DescribeAccountHealthRequest& request, const DescribeAccountHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> For the time range passed in, returns the number of open reactive insight
         * that were created, the number of open proactive insights that were created, and
         * the Mean Time to Recover (MTTR) for all closed reactive insights. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeAccountOverview">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountOverviewOutcome DescribeAccountOverview(const Model::DescribeAccountOverviewRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountOverview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountOverviewOutcomeCallable DescribeAccountOverviewCallable(const Model::DescribeAccountOverviewRequest& request) const;

        /**
         * An Async wrapper for DescribeAccountOverview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountOverviewAsync(const Model::DescribeAccountOverviewRequest& request, const DescribeAccountOverviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns details about an anomaly that you specify using its ID.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeAnomaly">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAnomalyOutcome DescribeAnomaly(const Model::DescribeAnomalyRequest& request) const;

        /**
         * A Callable wrapper for DescribeAnomaly that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAnomalyOutcomeCallable DescribeAnomalyCallable(const Model::DescribeAnomalyRequest& request) const;

        /**
         * An Async wrapper for DescribeAnomaly that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAnomalyAsync(const Model::DescribeAnomalyRequest& request, const DescribeAnomalyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the integration status of services that are integrated with DevOps
         * Guru as Consumer via EventBridge. The one service that can be integrated with
         * DevOps Guru is Amazon CodeGuru Profiler, which can produce proactive
         * recommendations which can be stored and viewed in DevOps Guru.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeEventSourcesConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventSourcesConfigOutcome DescribeEventSourcesConfig(const Model::DescribeEventSourcesConfigRequest& request) const;

        /**
         * A Callable wrapper for DescribeEventSourcesConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventSourcesConfigOutcomeCallable DescribeEventSourcesConfigCallable(const Model::DescribeEventSourcesConfigRequest& request) const;

        /**
         * An Async wrapper for DescribeEventSourcesConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventSourcesConfigAsync(const Model::DescribeEventSourcesConfigRequest& request, const DescribeEventSourcesConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the most recent feedback submitted in the current Amazon Web
         * Services account and Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFeedbackOutcome DescribeFeedback(const Model::DescribeFeedbackRequest& request) const;

        /**
         * A Callable wrapper for DescribeFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFeedbackOutcomeCallable DescribeFeedbackCallable(const Model::DescribeFeedbackRequest& request) const;

        /**
         * An Async wrapper for DescribeFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFeedbackAsync(const Model::DescribeFeedbackRequest& request, const DescribeFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns details about an insight that you specify using its ID.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInsightOutcome DescribeInsight(const Model::DescribeInsightRequest& request) const;

        /**
         * A Callable wrapper for DescribeInsight that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInsightOutcomeCallable DescribeInsightCallable(const Model::DescribeInsightRequest& request) const;

        /**
         * An Async wrapper for DescribeInsight that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInsightAsync(const Model::DescribeInsightRequest& request, const DescribeInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns active insights, predictive insights, and resource hours analyzed in
         * last hour.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeOrganizationHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationHealthOutcome DescribeOrganizationHealth(const Model::DescribeOrganizationHealthRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganizationHealth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrganizationHealthOutcomeCallable DescribeOrganizationHealthCallable(const Model::DescribeOrganizationHealthRequest& request) const;

        /**
         * An Async wrapper for DescribeOrganizationHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrganizationHealthAsync(const Model::DescribeOrganizationHealthRequest& request, const DescribeOrganizationHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an overview of your organization's history based on the specified
         * time range. The overview includes the total reactive and proactive
         * insights.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeOrganizationOverview">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationOverviewOutcome DescribeOrganizationOverview(const Model::DescribeOrganizationOverviewRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganizationOverview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrganizationOverviewOutcomeCallable DescribeOrganizationOverviewCallable(const Model::DescribeOrganizationOverviewRequest& request) const;

        /**
         * An Async wrapper for DescribeOrganizationOverview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrganizationOverviewAsync(const Model::DescribeOrganizationOverviewRequest& request, const DescribeOrganizationOverviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides an overview of your system's health. If additional member accounts
         * are part of your organization, you can filter those accounts using the
         * <code>AccountIds</code> field.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeOrganizationResourceCollectionHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationResourceCollectionHealthOutcome DescribeOrganizationResourceCollectionHealth(const Model::DescribeOrganizationResourceCollectionHealthRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganizationResourceCollectionHealth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrganizationResourceCollectionHealthOutcomeCallable DescribeOrganizationResourceCollectionHealthCallable(const Model::DescribeOrganizationResourceCollectionHealthRequest& request) const;

        /**
         * An Async wrapper for DescribeOrganizationResourceCollectionHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrganizationResourceCollectionHealthAsync(const Model::DescribeOrganizationResourceCollectionHealthRequest& request, const DescribeOrganizationResourceCollectionHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the number of open proactive insights, open reactive insights, and
         * the Mean Time to Recover (MTTR) for all closed insights in resource collections
         * in your account. You specify the type of Amazon Web Services resources
         * collection. The two types of Amazon Web Services resource collections supported
         * are Amazon Web Services CloudFormation stacks and Amazon Web Services resources
         * that contain the same Amazon Web Services tag. DevOps Guru can be configured to
         * analyze the Amazon Web Services resources that are defined in the stacks or that
         * are tagged using the same tag <i>key</i>. You can specify up to 500 Amazon Web
         * Services CloudFormation stacks. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeResourceCollectionHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourceCollectionHealthOutcome DescribeResourceCollectionHealth(const Model::DescribeResourceCollectionHealthRequest& request) const;

        /**
         * A Callable wrapper for DescribeResourceCollectionHealth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResourceCollectionHealthOutcomeCallable DescribeResourceCollectionHealthCallable(const Model::DescribeResourceCollectionHealthRequest& request) const;

        /**
         * An Async wrapper for DescribeResourceCollectionHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResourceCollectionHealthAsync(const Model::DescribeResourceCollectionHealthRequest& request, const DescribeResourceCollectionHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the integration status of services that are integrated with DevOps
         * Guru. The one service that can be integrated with DevOps Guru is Amazon Web
         * Services Systems Manager, which can be used to create an OpsItem for each
         * generated insight. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeServiceIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceIntegrationOutcome DescribeServiceIntegration(const Model::DescribeServiceIntegrationRequest& request) const;

        /**
         * A Callable wrapper for DescribeServiceIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServiceIntegrationOutcomeCallable DescribeServiceIntegrationCallable(const Model::DescribeServiceIntegrationRequest& request) const;

        /**
         * An Async wrapper for DescribeServiceIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServiceIntegrationAsync(const Model::DescribeServiceIntegrationRequest& request, const DescribeServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an estimate of the monthly cost for DevOps Guru to analyze your
         * Amazon Web Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/cost-estimate.html">Estimate
         * your Amazon DevOps Guru costs</a> and <a
         * href="http://aws.amazon.com/devops-guru/pricing/">Amazon DevOps Guru
         * pricing</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/GetCostEstimation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCostEstimationOutcome GetCostEstimation(const Model::GetCostEstimationRequest& request) const;

        /**
         * A Callable wrapper for GetCostEstimation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCostEstimationOutcomeCallable GetCostEstimationCallable(const Model::GetCostEstimationRequest& request) const;

        /**
         * An Async wrapper for GetCostEstimation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCostEstimationAsync(const Model::GetCostEstimationRequest& request, const GetCostEstimationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns lists Amazon Web Services resources that are of the specified
         * resource collection type. The two types of Amazon Web Services resource
         * collections supported are Amazon Web Services CloudFormation stacks and Amazon
         * Web Services resources that contain the same Amazon Web Services tag. DevOps
         * Guru can be configured to analyze the Amazon Web Services resources that are
         * defined in the stacks or that are tagged using the same tag <i>key</i>. You can
         * specify up to 500 Amazon Web Services CloudFormation stacks. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/GetResourceCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceCollectionOutcome GetResourceCollection(const Model::GetResourceCollectionRequest& request) const;

        /**
         * A Callable wrapper for GetResourceCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceCollectionOutcomeCallable GetResourceCollectionCallable(const Model::GetResourceCollectionRequest& request) const;

        /**
         * An Async wrapper for GetResourceCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceCollectionAsync(const Model::GetResourceCollectionRequest& request, const GetResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of the anomalies that belong to an insight that you specify
         * using its ID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListAnomaliesForInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnomaliesForInsightOutcome ListAnomaliesForInsight(const Model::ListAnomaliesForInsightRequest& request) const;

        /**
         * A Callable wrapper for ListAnomaliesForInsight that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnomaliesForInsightOutcomeCallable ListAnomaliesForInsightCallable(const Model::ListAnomaliesForInsightRequest& request) const;

        /**
         * An Async wrapper for ListAnomaliesForInsight that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAnomaliesForInsightAsync(const Model::ListAnomaliesForInsightRequest& request, const ListAnomaliesForInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the list of log groups that contain log anomalies. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListAnomalousLogGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnomalousLogGroupsOutcome ListAnomalousLogGroups(const Model::ListAnomalousLogGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListAnomalousLogGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnomalousLogGroupsOutcomeCallable ListAnomalousLogGroupsCallable(const Model::ListAnomalousLogGroupsRequest& request) const;

        /**
         * An Async wrapper for ListAnomalousLogGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAnomalousLogGroupsAsync(const Model::ListAnomalousLogGroupsRequest& request, const ListAnomalousLogGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of the events emitted by the resources that are evaluated by
         * DevOps Guru. You can use filters to specify which events are returned.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventsOutcome ListEvents(const Model::ListEventsRequest& request) const;

        /**
         * A Callable wrapper for ListEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventsOutcomeCallable ListEventsCallable(const Model::ListEventsRequest& request) const;

        /**
         * An Async wrapper for ListEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventsAsync(const Model::ListEventsRequest& request, const ListEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of insights in your Amazon Web Services account. You can
         * specify which insights are returned by their start time and status
         * (<code>ONGOING</code>, <code>CLOSED</code>, or <code>ANY</code>). </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInsightsOutcome ListInsights(const Model::ListInsightsRequest& request) const;

        /**
         * A Callable wrapper for ListInsights that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInsightsOutcomeCallable ListInsightsCallable(const Model::ListInsightsRequest& request) const;

        /**
         * An Async wrapper for ListInsights that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInsightsAsync(const Model::ListInsightsRequest& request, const ListInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the list of all log groups that are being monitored and tagged by
         * DevOps Guru. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListMonitoredResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitoredResourcesOutcome ListMonitoredResources(const Model::ListMonitoredResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListMonitoredResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMonitoredResourcesOutcomeCallable ListMonitoredResourcesCallable(const Model::ListMonitoredResourcesRequest& request) const;

        /**
         * An Async wrapper for ListMonitoredResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMonitoredResourcesAsync(const Model::ListMonitoredResourcesRequest& request, const ListMonitoredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of notification channels configured for DevOps Guru. Each
         * notification channel is used to notify you when DevOps Guru generates an insight
         * that contains information about how to improve your operations. The one
         * supported notification channel is Amazon Simple Notification Service (Amazon
         * SNS). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListNotificationChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotificationChannelsOutcome ListNotificationChannels(const Model::ListNotificationChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListNotificationChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNotificationChannelsOutcomeCallable ListNotificationChannelsCallable(const Model::ListNotificationChannelsRequest& request) const;

        /**
         * An Async wrapper for ListNotificationChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNotificationChannelsAsync(const Model::ListNotificationChannelsRequest& request, const ListNotificationChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of insights associated with the account or OU
         * Id.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListOrganizationInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationInsightsOutcome ListOrganizationInsights(const Model::ListOrganizationInsightsRequest& request) const;

        /**
         * A Callable wrapper for ListOrganizationInsights that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOrganizationInsightsOutcomeCallable ListOrganizationInsightsCallable(const Model::ListOrganizationInsightsRequest& request) const;

        /**
         * An Async wrapper for ListOrganizationInsights that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOrganizationInsightsAsync(const Model::ListOrganizationInsightsRequest& request, const ListOrganizationInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of a specified insight's recommendations. Each recommendation
         * includes a list of related metrics and a list of related events. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendationsOutcome ListRecommendations(const Model::ListRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ListRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecommendationsOutcomeCallable ListRecommendationsCallable(const Model::ListRecommendationsRequest& request) const;

        /**
         * An Async wrapper for ListRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecommendationsAsync(const Model::ListRecommendationsRequest& request, const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Collects customer feedback about the specified insight. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/PutFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFeedbackOutcome PutFeedback(const Model::PutFeedbackRequest& request) const;

        /**
         * A Callable wrapper for PutFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutFeedbackOutcomeCallable PutFeedbackCallable(const Model::PutFeedbackRequest& request) const;

        /**
         * An Async wrapper for PutFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutFeedbackAsync(const Model::PutFeedbackRequest& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Removes a notification channel from DevOps Guru. A notification channel is
         * used to notify you when DevOps Guru generates an insight that contains
         * information about how to improve your operations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/RemoveNotificationChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveNotificationChannelOutcome RemoveNotificationChannel(const Model::RemoveNotificationChannelRequest& request) const;

        /**
         * A Callable wrapper for RemoveNotificationChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveNotificationChannelOutcomeCallable RemoveNotificationChannelCallable(const Model::RemoveNotificationChannelRequest& request) const;

        /**
         * An Async wrapper for RemoveNotificationChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveNotificationChannelAsync(const Model::RemoveNotificationChannelRequest& request, const RemoveNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of insights in your Amazon Web Services account. You can
         * specify which insights are returned by their start time, one or more statuses
         * (<code>ONGOING</code> or <code>CLOSED</code>), one or more severities
         * (<code>LOW</code>, <code>MEDIUM</code>, and <code>HIGH</code>), and type
         * (<code>REACTIVE</code> or <code>PROACTIVE</code>). </p> <p> Use the
         * <code>Filters</code> parameter to specify status and severity search parameters.
         * Use the <code>Type</code> parameter to specify <code>REACTIVE</code> or
         * <code>PROACTIVE</code> in your search. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/SearchInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchInsightsOutcome SearchInsights(const Model::SearchInsightsRequest& request) const;

        /**
         * A Callable wrapper for SearchInsights that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchInsightsOutcomeCallable SearchInsightsCallable(const Model::SearchInsightsRequest& request) const;

        /**
         * An Async wrapper for SearchInsights that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchInsightsAsync(const Model::SearchInsightsRequest& request, const SearchInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of insights in your organization. You can specify which
         * insights are returned by their start time, one or more statuses
         * (<code>ONGOING</code>, <code>CLOSED</code>, and <code>CLOSED</code>), one or
         * more severities (<code>LOW</code>, <code>MEDIUM</code>, and <code>HIGH</code>),
         * and type (<code>REACTIVE</code> or <code>PROACTIVE</code>). </p> <p> Use the
         * <code>Filters</code> parameter to specify status and severity search parameters.
         * Use the <code>Type</code> parameter to specify <code>REACTIVE</code> or
         * <code>PROACTIVE</code> in your search. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/SearchOrganizationInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchOrganizationInsightsOutcome SearchOrganizationInsights(const Model::SearchOrganizationInsightsRequest& request) const;

        /**
         * A Callable wrapper for SearchOrganizationInsights that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchOrganizationInsightsOutcomeCallable SearchOrganizationInsightsCallable(const Model::SearchOrganizationInsightsRequest& request) const;

        /**
         * An Async wrapper for SearchOrganizationInsights that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchOrganizationInsightsAsync(const Model::SearchOrganizationInsightsRequest& request, const SearchOrganizationInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the creation of an estimate of the monthly cost to analyze your Amazon
         * Web Services resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/StartCostEstimation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCostEstimationOutcome StartCostEstimation(const Model::StartCostEstimationRequest& request) const;

        /**
         * A Callable wrapper for StartCostEstimation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartCostEstimationOutcomeCallable StartCostEstimationCallable(const Model::StartCostEstimationRequest& request) const;

        /**
         * An Async wrapper for StartCostEstimation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartCostEstimationAsync(const Model::StartCostEstimationRequest& request, const StartCostEstimationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables or disables integration with a service that can be integrated with
         * DevOps Guru. The one service that can be integrated with DevOps Guru is Amazon
         * CodeGuru Profiler, which can produce proactive recommendations which can be
         * stored and viewed in DevOps Guru.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateEventSourcesConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventSourcesConfigOutcome UpdateEventSourcesConfig(const Model::UpdateEventSourcesConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateEventSourcesConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEventSourcesConfigOutcomeCallable UpdateEventSourcesConfigCallable(const Model::UpdateEventSourcesConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateEventSourcesConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEventSourcesConfigAsync(const Model::UpdateEventSourcesConfigRequest& request, const UpdateEventSourcesConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates the collection of resources that DevOps Guru analyzes. The two types
         * of Amazon Web Services resource collections supported are Amazon Web Services
         * CloudFormation stacks and Amazon Web Services resources that contain the same
         * Amazon Web Services tag. DevOps Guru can be configured to analyze the Amazon Web
         * Services resources that are defined in the stacks or that are tagged using the
         * same tag <i>key</i>. You can specify up to 500 Amazon Web Services
         * CloudFormation stacks. This method also creates the IAM role required for you to
         * use DevOps Guru. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateResourceCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceCollectionOutcome UpdateResourceCollection(const Model::UpdateResourceCollectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateResourceCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceCollectionOutcomeCallable UpdateResourceCollectionCallable(const Model::UpdateResourceCollectionRequest& request) const;

        /**
         * An Async wrapper for UpdateResourceCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceCollectionAsync(const Model::UpdateResourceCollectionRequest& request, const UpdateResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Enables or disables integration with a service that can be integrated with
         * DevOps Guru. The one service that can be integrated with DevOps Guru is Amazon
         * Web Services Systems Manager, which can be used to create an OpsItem for each
         * generated insight. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateServiceIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceIntegrationOutcome UpdateServiceIntegration(const Model::UpdateServiceIntegrationRequest& request) const;

        /**
         * A Callable wrapper for UpdateServiceIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceIntegrationOutcomeCallable UpdateServiceIntegrationCallable(const Model::UpdateServiceIntegrationRequest& request) const;

        /**
         * An Async wrapper for UpdateServiceIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceIntegrationAsync(const Model::UpdateServiceIntegrationRequest& request, const UpdateServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DevOpsGuruEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<DevOpsGuruClient>;
      void init(const DevOpsGuruClientConfiguration& clientConfiguration);

      DevOpsGuruClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DevOpsGuruEndpointProviderBase> m_endpointProvider;
  };

} // namespace DevOpsGuru
} // namespace Aws
