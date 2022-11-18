/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-guru/DevOpsGuruServiceClientModel.h>
#include <aws/devops-guru/DevOpsGuruLegacyAsyncMacros.h>

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
  class AWS_DEVOPSGURU_API DevOpsGuruClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * <p>Deletes the insight along with the associated anomalies, events and
         * recommendations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DeleteInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInsightOutcome DeleteInsight(const Model::DeleteInsightRequest& request) const;


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
         * <p> For the time range passed in, returns the number of open reactive insight
         * that were created, the number of open proactive insights that were created, and
         * the Mean Time to Recover (MTTR) for all closed reactive insights. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeAccountOverview">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountOverviewOutcome DescribeAccountOverview(const Model::DescribeAccountOverviewRequest& request) const;


        /**
         * <p> Returns details about an anomaly that you specify using its ID.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeAnomaly">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAnomalyOutcome DescribeAnomaly(const Model::DescribeAnomalyRequest& request) const;


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
         * <p> Returns the most recent feedback submitted in the current Amazon Web
         * Services account and Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFeedbackOutcome DescribeFeedback(const Model::DescribeFeedbackRequest& request) const;


        /**
         * <p> Returns details about an insight that you specify using its ID.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInsightOutcome DescribeInsight(const Model::DescribeInsightRequest& request) const;


        /**
         * <p>Returns active insights, predictive insights, and resource hours analyzed in
         * last hour.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeOrganizationHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationHealthOutcome DescribeOrganizationHealth(const Model::DescribeOrganizationHealthRequest& request) const;


        /**
         * <p>Returns an overview of your organization's history based on the specified
         * time range. The overview includes the total reactive and proactive
         * insights.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeOrganizationOverview">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationOverviewOutcome DescribeOrganizationOverview(const Model::DescribeOrganizationOverviewRequest& request) const;


        /**
         * <p>Provides an overview of your system's health. If additional member accounts
         * are part of your organization, you can filter those accounts using the
         * <code>AccountIds</code> field.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeOrganizationResourceCollectionHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationResourceCollectionHealthOutcome DescribeOrganizationResourceCollectionHealth(const Model::DescribeOrganizationResourceCollectionHealthRequest& request) const;


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
         * <p> Returns the integration status of services that are integrated with DevOps
         * Guru. The one service that can be integrated with DevOps Guru is Amazon Web
         * Services Systems Manager, which can be used to create an OpsItem for each
         * generated insight. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeServiceIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceIntegrationOutcome DescribeServiceIntegration(const Model::DescribeServiceIntegrationRequest& request) const;


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
         * <p> Returns a list of the anomalies that belong to an insight that you specify
         * using its ID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListAnomaliesForInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnomaliesForInsightOutcome ListAnomaliesForInsight(const Model::ListAnomaliesForInsightRequest& request) const;


        /**
         * <p> Returns the list of log groups that contain log anomalies. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListAnomalousLogGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnomalousLogGroupsOutcome ListAnomalousLogGroups(const Model::ListAnomalousLogGroupsRequest& request) const;


        /**
         * <p> Returns a list of the events emitted by the resources that are evaluated by
         * DevOps Guru. You can use filters to specify which events are returned.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventsOutcome ListEvents(const Model::ListEventsRequest& request) const;


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
         * <p> Returns the list of all log groups that are being monitored and tagged by
         * DevOps Guru. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListMonitoredResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitoredResourcesOutcome ListMonitoredResources(const Model::ListMonitoredResourcesRequest& request) const;


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
         * <p>Returns a list of insights associated with the account or OU
         * Id.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListOrganizationInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationInsightsOutcome ListOrganizationInsights(const Model::ListOrganizationInsightsRequest& request) const;


        /**
         * <p> Returns a list of a specified insight's recommendations. Each recommendation
         * includes a list of related metrics and a list of related events. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendationsOutcome ListRecommendations(const Model::ListRecommendationsRequest& request) const;


        /**
         * <p> Collects customer feedback about the specified insight. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/PutFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFeedbackOutcome PutFeedback(const Model::PutFeedbackRequest& request) const;


        /**
         * <p> Removes a notification channel from DevOps Guru. A notification channel is
         * used to notify you when DevOps Guru generates an insight that contains
         * information about how to improve your operations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/RemoveNotificationChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveNotificationChannelOutcome RemoveNotificationChannel(const Model::RemoveNotificationChannelRequest& request) const;


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
         * <p>Starts the creation of an estimate of the monthly cost to analyze your Amazon
         * Web Services resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/StartCostEstimation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCostEstimationOutcome StartCostEstimation(const Model::StartCostEstimationRequest& request) const;


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
         * <p> Enables or disables integration with a service that can be integrated with
         * DevOps Guru. The one service that can be integrated with DevOps Guru is Amazon
         * Web Services Systems Manager, which can be used to create an OpsItem for each
         * generated insight. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateServiceIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceIntegrationOutcome UpdateServiceIntegration(const Model::UpdateServiceIntegrationRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DevOpsGuruEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const DevOpsGuruClientConfiguration& clientConfiguration);

      DevOpsGuruClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DevOpsGuruEndpointProviderBase> m_endpointProvider;
  };

} // namespace DevOpsGuru
} // namespace Aws
