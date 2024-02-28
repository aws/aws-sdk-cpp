/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ce/CostExplorerServiceClientModel.h>

namespace Aws
{
namespace CostExplorer
{
  /**
   * <p>You can use the Cost Explorer API to programmatically query your cost and
   * usage data. You can query for aggregated data such as total monthly costs or
   * total daily usage. You can also query for granular data. This might include the
   * number of daily write operations for Amazon DynamoDB database tables in your
   * production environment. </p> <p>Service Endpoint</p> <p>The Cost Explorer API
   * provides the following endpoint:</p> <ul> <li> <p>
   * <code>https://ce.us-east-1.amazonaws.com</code> </p> </li> </ul> <p>For
   * information about the costs that are associated with the Cost Explorer API, see
   * <a href="http://aws.amazon.com/aws-cost-management/pricing/">Amazon Web Services
   * Cost Management Pricing</a>.</p>
   */
  class AWS_COSTEXPLORER_API CostExplorerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CostExplorerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CostExplorerClientConfiguration ClientConfigurationType;
      typedef CostExplorerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostExplorerClient(const Aws::CostExplorer::CostExplorerClientConfiguration& clientConfiguration = Aws::CostExplorer::CostExplorerClientConfiguration(),
                           std::shared_ptr<CostExplorerEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostExplorerClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<CostExplorerEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::CostExplorer::CostExplorerClientConfiguration& clientConfiguration = Aws::CostExplorer::CostExplorerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CostExplorerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<CostExplorerEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::CostExplorer::CostExplorerClientConfiguration& clientConfiguration = Aws::CostExplorer::CostExplorerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostExplorerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostExplorerClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CostExplorerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CostExplorerClient();

        /**
         * <p>Creates a new cost anomaly detection monitor with the requested type and
         * monitor specification. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CreateAnomalyMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnomalyMonitorOutcome CreateAnomalyMonitor(const Model::CreateAnomalyMonitorRequest& request) const;

        /**
         * A Callable wrapper for CreateAnomalyMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAnomalyMonitorRequestT = Model::CreateAnomalyMonitorRequest>
        Model::CreateAnomalyMonitorOutcomeCallable CreateAnomalyMonitorCallable(const CreateAnomalyMonitorRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::CreateAnomalyMonitor, request);
        }

        /**
         * An Async wrapper for CreateAnomalyMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAnomalyMonitorRequestT = Model::CreateAnomalyMonitorRequest>
        void CreateAnomalyMonitorAsync(const CreateAnomalyMonitorRequestT& request, const CreateAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::CreateAnomalyMonitor, request, handler, context);
        }

        /**
         * <p>Adds an alert subscription to a cost anomaly detection monitor. You can use
         * each subscription to define subscribers with email or SNS notifications. Email
         * subscribers can set an absolute or percentage threshold and a time frequency for
         * receiving notifications. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CreateAnomalySubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnomalySubscriptionOutcome CreateAnomalySubscription(const Model::CreateAnomalySubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CreateAnomalySubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAnomalySubscriptionRequestT = Model::CreateAnomalySubscriptionRequest>
        Model::CreateAnomalySubscriptionOutcomeCallable CreateAnomalySubscriptionCallable(const CreateAnomalySubscriptionRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::CreateAnomalySubscription, request);
        }

        /**
         * An Async wrapper for CreateAnomalySubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAnomalySubscriptionRequestT = Model::CreateAnomalySubscriptionRequest>
        void CreateAnomalySubscriptionAsync(const CreateAnomalySubscriptionRequestT& request, const CreateAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::CreateAnomalySubscription, request, handler, context);
        }

        /**
         * <p>Creates a new Cost Category with the requested name and rules.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CreateCostCategoryDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCostCategoryDefinitionOutcome CreateCostCategoryDefinition(const Model::CreateCostCategoryDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateCostCategoryDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCostCategoryDefinitionRequestT = Model::CreateCostCategoryDefinitionRequest>
        Model::CreateCostCategoryDefinitionOutcomeCallable CreateCostCategoryDefinitionCallable(const CreateCostCategoryDefinitionRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::CreateCostCategoryDefinition, request);
        }

        /**
         * An Async wrapper for CreateCostCategoryDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCostCategoryDefinitionRequestT = Model::CreateCostCategoryDefinitionRequest>
        void CreateCostCategoryDefinitionAsync(const CreateCostCategoryDefinitionRequestT& request, const CreateCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::CreateCostCategoryDefinition, request, handler, context);
        }

        /**
         * <p>Deletes a cost anomaly monitor. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/DeleteAnomalyMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnomalyMonitorOutcome DeleteAnomalyMonitor(const Model::DeleteAnomalyMonitorRequest& request) const;

        /**
         * A Callable wrapper for DeleteAnomalyMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAnomalyMonitorRequestT = Model::DeleteAnomalyMonitorRequest>
        Model::DeleteAnomalyMonitorOutcomeCallable DeleteAnomalyMonitorCallable(const DeleteAnomalyMonitorRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::DeleteAnomalyMonitor, request);
        }

        /**
         * An Async wrapper for DeleteAnomalyMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAnomalyMonitorRequestT = Model::DeleteAnomalyMonitorRequest>
        void DeleteAnomalyMonitorAsync(const DeleteAnomalyMonitorRequestT& request, const DeleteAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::DeleteAnomalyMonitor, request, handler, context);
        }

        /**
         * <p>Deletes a cost anomaly subscription. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/DeleteAnomalySubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnomalySubscriptionOutcome DeleteAnomalySubscription(const Model::DeleteAnomalySubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteAnomalySubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAnomalySubscriptionRequestT = Model::DeleteAnomalySubscriptionRequest>
        Model::DeleteAnomalySubscriptionOutcomeCallable DeleteAnomalySubscriptionCallable(const DeleteAnomalySubscriptionRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::DeleteAnomalySubscription, request);
        }

        /**
         * An Async wrapper for DeleteAnomalySubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAnomalySubscriptionRequestT = Model::DeleteAnomalySubscriptionRequest>
        void DeleteAnomalySubscriptionAsync(const DeleteAnomalySubscriptionRequestT& request, const DeleteAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::DeleteAnomalySubscription, request, handler, context);
        }

        /**
         * <p>Deletes a Cost Category. Expenses from this month going forward will no
         * longer be categorized with this Cost Category.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/DeleteCostCategoryDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCostCategoryDefinitionOutcome DeleteCostCategoryDefinition(const Model::DeleteCostCategoryDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteCostCategoryDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCostCategoryDefinitionRequestT = Model::DeleteCostCategoryDefinitionRequest>
        Model::DeleteCostCategoryDefinitionOutcomeCallable DeleteCostCategoryDefinitionCallable(const DeleteCostCategoryDefinitionRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::DeleteCostCategoryDefinition, request);
        }

        /**
         * An Async wrapper for DeleteCostCategoryDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCostCategoryDefinitionRequestT = Model::DeleteCostCategoryDefinitionRequest>
        void DeleteCostCategoryDefinitionAsync(const DeleteCostCategoryDefinitionRequestT& request, const DeleteCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::DeleteCostCategoryDefinition, request, handler, context);
        }

        /**
         * <p>Returns the name, Amazon Resource Name (ARN), rules, definition, and
         * effective dates of a Cost Category that's defined in the account.</p> <p>You
         * have the option to use <code>EffectiveOn</code> to return a Cost Category that's
         * active on a specific date. If there's no <code>EffectiveOn</code> specified, you
         * see a Cost Category that's effective on the current date. If Cost Category is
         * still effective, <code>EffectiveEnd</code> is omitted in the response.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/DescribeCostCategoryDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCostCategoryDefinitionOutcome DescribeCostCategoryDefinition(const Model::DescribeCostCategoryDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeCostCategoryDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCostCategoryDefinitionRequestT = Model::DescribeCostCategoryDefinitionRequest>
        Model::DescribeCostCategoryDefinitionOutcomeCallable DescribeCostCategoryDefinitionCallable(const DescribeCostCategoryDefinitionRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::DescribeCostCategoryDefinition, request);
        }

        /**
         * An Async wrapper for DescribeCostCategoryDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCostCategoryDefinitionRequestT = Model::DescribeCostCategoryDefinitionRequest>
        void DescribeCostCategoryDefinitionAsync(const DescribeCostCategoryDefinitionRequestT& request, const DescribeCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::DescribeCostCategoryDefinition, request, handler, context);
        }

        /**
         * <p>Retrieves all of the cost anomalies detected on your account during the time
         * period that's specified by the <code>DateInterval</code> object. Anomalies are
         * available for up to 90 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetAnomalies">AWS API
         * Reference</a></p>
         */
        virtual Model::GetAnomaliesOutcome GetAnomalies(const Model::GetAnomaliesRequest& request) const;

        /**
         * A Callable wrapper for GetAnomalies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAnomaliesRequestT = Model::GetAnomaliesRequest>
        Model::GetAnomaliesOutcomeCallable GetAnomaliesCallable(const GetAnomaliesRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetAnomalies, request);
        }

        /**
         * An Async wrapper for GetAnomalies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAnomaliesRequestT = Model::GetAnomaliesRequest>
        void GetAnomaliesAsync(const GetAnomaliesRequestT& request, const GetAnomaliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetAnomalies, request, handler, context);
        }

        /**
         * <p>Retrieves the cost anomaly monitor definitions for your account. You can
         * filter using a list of cost anomaly monitor Amazon Resource Names (ARNs).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetAnomalyMonitors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnomalyMonitorsOutcome GetAnomalyMonitors(const Model::GetAnomalyMonitorsRequest& request) const;

        /**
         * A Callable wrapper for GetAnomalyMonitors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAnomalyMonitorsRequestT = Model::GetAnomalyMonitorsRequest>
        Model::GetAnomalyMonitorsOutcomeCallable GetAnomalyMonitorsCallable(const GetAnomalyMonitorsRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetAnomalyMonitors, request);
        }

        /**
         * An Async wrapper for GetAnomalyMonitors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAnomalyMonitorsRequestT = Model::GetAnomalyMonitorsRequest>
        void GetAnomalyMonitorsAsync(const GetAnomalyMonitorsRequestT& request, const GetAnomalyMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetAnomalyMonitors, request, handler, context);
        }

        /**
         * <p>Retrieves the cost anomaly subscription objects for your account. You can
         * filter using a list of cost anomaly monitor Amazon Resource Names (ARNs).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetAnomalySubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnomalySubscriptionsOutcome GetAnomalySubscriptions(const Model::GetAnomalySubscriptionsRequest& request) const;

        /**
         * A Callable wrapper for GetAnomalySubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAnomalySubscriptionsRequestT = Model::GetAnomalySubscriptionsRequest>
        Model::GetAnomalySubscriptionsOutcomeCallable GetAnomalySubscriptionsCallable(const GetAnomalySubscriptionsRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetAnomalySubscriptions, request);
        }

        /**
         * An Async wrapper for GetAnomalySubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAnomalySubscriptionsRequestT = Model::GetAnomalySubscriptionsRequest>
        void GetAnomalySubscriptionsAsync(const GetAnomalySubscriptionsRequestT& request, const GetAnomalySubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetAnomalySubscriptions, request, handler, context);
        }

        /**
         * <p>Retrieves estimated usage records for hourly granularity or resource-level
         * data at daily granularity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetApproximateUsageRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApproximateUsageRecordsOutcome GetApproximateUsageRecords(const Model::GetApproximateUsageRecordsRequest& request) const;

        /**
         * A Callable wrapper for GetApproximateUsageRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApproximateUsageRecordsRequestT = Model::GetApproximateUsageRecordsRequest>
        Model::GetApproximateUsageRecordsOutcomeCallable GetApproximateUsageRecordsCallable(const GetApproximateUsageRecordsRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetApproximateUsageRecords, request);
        }

        /**
         * An Async wrapper for GetApproximateUsageRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApproximateUsageRecordsRequestT = Model::GetApproximateUsageRecordsRequest>
        void GetApproximateUsageRecordsAsync(const GetApproximateUsageRecordsRequestT& request, const GetApproximateUsageRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetApproximateUsageRecords, request, handler, context);
        }

        /**
         * <p>Retrieves cost and usage metrics for your account. You can specify which cost
         * and usage-related metric that you want the request to return. For example, you
         * can specify <code>BlendedCosts</code> or <code>UsageQuantity</code>. You can
         * also filter and group your data by various dimensions, such as
         * <code>SERVICE</code> or <code>AZ</code>, in a specific time range. For a
         * complete list of valid dimensions, see the <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_GetDimensionValues.html">GetDimensionValues</a>
         * operation. Management account in an organization in Organizations have access to
         * all member accounts.</p> <p>For information about filter limitations, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/billing-limits.html">Quotas
         * and restrictions</a> in the <i>Billing and Cost Management User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostAndUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCostAndUsageOutcome GetCostAndUsage(const Model::GetCostAndUsageRequest& request) const;

        /**
         * A Callable wrapper for GetCostAndUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCostAndUsageRequestT = Model::GetCostAndUsageRequest>
        Model::GetCostAndUsageOutcomeCallable GetCostAndUsageCallable(const GetCostAndUsageRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetCostAndUsage, request);
        }

        /**
         * An Async wrapper for GetCostAndUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCostAndUsageRequestT = Model::GetCostAndUsageRequest>
        void GetCostAndUsageAsync(const GetCostAndUsageRequestT& request, const GetCostAndUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetCostAndUsage, request, handler, context);
        }

        /**
         * <p>Retrieves cost and usage metrics with resources for your account. You can
         * specify which cost and usage-related metric, such as <code>BlendedCosts</code>
         * or <code>UsageQuantity</code>, that you want the request to return. You can also
         * filter and group your data by various dimensions, such as <code>SERVICE</code>
         * or <code>AZ</code>, in a specific time range. For a complete list of valid
         * dimensions, see the <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_GetDimensionValues.html">GetDimensionValues</a>
         * operation. Management account in an organization in Organizations have access to
         * all member accounts. This API is currently available for the Amazon Elastic
         * Compute Cloud – Compute service only.</p>  <p>This is an opt-in only
         * feature. You can enable this feature from the Cost Explorer Settings page. For
         * information about how to access the Settings page, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/ce-access.html">Controlling
         * Access for Cost Explorer</a> in the <i>Billing and Cost Management User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostAndUsageWithResources">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCostAndUsageWithResourcesOutcome GetCostAndUsageWithResources(const Model::GetCostAndUsageWithResourcesRequest& request) const;

        /**
         * A Callable wrapper for GetCostAndUsageWithResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCostAndUsageWithResourcesRequestT = Model::GetCostAndUsageWithResourcesRequest>
        Model::GetCostAndUsageWithResourcesOutcomeCallable GetCostAndUsageWithResourcesCallable(const GetCostAndUsageWithResourcesRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetCostAndUsageWithResources, request);
        }

        /**
         * An Async wrapper for GetCostAndUsageWithResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCostAndUsageWithResourcesRequestT = Model::GetCostAndUsageWithResourcesRequest>
        void GetCostAndUsageWithResourcesAsync(const GetCostAndUsageWithResourcesRequestT& request, const GetCostAndUsageWithResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetCostAndUsageWithResources, request, handler, context);
        }

        /**
         * <p>Retrieves an array of Cost Category names and values incurred cost.</p>
         *  <p>If some Cost Category names and values are not associated with any
         * cost, they will not be returned by this API.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostCategories">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCostCategoriesOutcome GetCostCategories(const Model::GetCostCategoriesRequest& request) const;

        /**
         * A Callable wrapper for GetCostCategories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCostCategoriesRequestT = Model::GetCostCategoriesRequest>
        Model::GetCostCategoriesOutcomeCallable GetCostCategoriesCallable(const GetCostCategoriesRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetCostCategories, request);
        }

        /**
         * An Async wrapper for GetCostCategories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCostCategoriesRequestT = Model::GetCostCategoriesRequest>
        void GetCostCategoriesAsync(const GetCostCategoriesRequestT& request, const GetCostCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetCostCategories, request, handler, context);
        }

        /**
         * <p>Retrieves a forecast for how much Amazon Web Services predicts that you will
         * spend over the forecast time period that you select, based on your past costs.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCostForecastOutcome GetCostForecast(const Model::GetCostForecastRequest& request) const;

        /**
         * A Callable wrapper for GetCostForecast that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCostForecastRequestT = Model::GetCostForecastRequest>
        Model::GetCostForecastOutcomeCallable GetCostForecastCallable(const GetCostForecastRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetCostForecast, request);
        }

        /**
         * An Async wrapper for GetCostForecast that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCostForecastRequestT = Model::GetCostForecastRequest>
        void GetCostForecastAsync(const GetCostForecastRequestT& request, const GetCostForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetCostForecast, request, handler, context);
        }

        /**
         * <p>Retrieves all available filter values for a specified filter over a period of
         * time. You can search the dimension values for an arbitrary string.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetDimensionValues">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDimensionValuesOutcome GetDimensionValues(const Model::GetDimensionValuesRequest& request) const;

        /**
         * A Callable wrapper for GetDimensionValues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDimensionValuesRequestT = Model::GetDimensionValuesRequest>
        Model::GetDimensionValuesOutcomeCallable GetDimensionValuesCallable(const GetDimensionValuesRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetDimensionValues, request);
        }

        /**
         * An Async wrapper for GetDimensionValues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDimensionValuesRequestT = Model::GetDimensionValuesRequest>
        void GetDimensionValuesAsync(const GetDimensionValuesRequestT& request, const GetDimensionValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetDimensionValues, request, handler, context);
        }

        /**
         * <p>Retrieves the reservation coverage for your account, which you can use to see
         * how much of your Amazon Elastic Compute Cloud, Amazon ElastiCache, Amazon
         * Relational Database Service, or Amazon Redshift usage is covered by a
         * reservation. An organization's management account can see the coverage of the
         * associated member accounts. This supports dimensions, Cost Categories, and
         * nested expressions. For any time period, you can filter data about reservation
         * usage by the following dimensions:</p> <ul> <li> <p>AZ</p> </li> <li>
         * <p>CACHE_ENGINE</p> </li> <li> <p>DATABASE_ENGINE</p> </li> <li>
         * <p>DEPLOYMENT_OPTION</p> </li> <li> <p>INSTANCE_TYPE</p> </li> <li>
         * <p>LINKED_ACCOUNT</p> </li> <li> <p>OPERATING_SYSTEM</p> </li> <li>
         * <p>PLATFORM</p> </li> <li> <p>REGION</p> </li> <li> <p>SERVICE</p> </li> <li>
         * <p>TAG</p> </li> <li> <p>TENANCY</p> </li> </ul> <p>To determine valid values
         * for a dimension, use the <code>GetDimensionValues</code> operation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationCoverage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReservationCoverageOutcome GetReservationCoverage(const Model::GetReservationCoverageRequest& request) const;

        /**
         * A Callable wrapper for GetReservationCoverage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReservationCoverageRequestT = Model::GetReservationCoverageRequest>
        Model::GetReservationCoverageOutcomeCallable GetReservationCoverageCallable(const GetReservationCoverageRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetReservationCoverage, request);
        }

        /**
         * An Async wrapper for GetReservationCoverage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReservationCoverageRequestT = Model::GetReservationCoverageRequest>
        void GetReservationCoverageAsync(const GetReservationCoverageRequestT& request, const GetReservationCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetReservationCoverage, request, handler, context);
        }

        /**
         * <p>Gets recommendations for reservation purchases. These recommendations might
         * help you to reduce your costs. Reservations provide a discounted hourly rate (up
         * to 75%) compared to On-Demand pricing.</p> <p>Amazon Web Services generates your
         * recommendations by identifying your On-Demand usage during a specific time
         * period and collecting your usage into categories that are eligible for a
         * reservation. After Amazon Web Services has these categories, it simulates every
         * combination of reservations in each category of usage to identify the best
         * number of each type of Reserved Instance (RI) to purchase to maximize your
         * estimated savings. </p> <p>For example, Amazon Web Services automatically
         * aggregates your Amazon EC2 Linux, shared tenancy, and c4 family usage in the US
         * West (Oregon) Region and recommends that you buy size-flexible regional
         * reservations to apply to the c4 family usage. Amazon Web Services recommends the
         * smallest size instance in an instance family. This makes it easier to purchase a
         * size-flexible Reserved Instance (RI). Amazon Web Services also shows the equal
         * number of normalized units. This way, you can purchase any instance size that
         * you want. For this example, your RI recommendation is for <code>c4.large</code>
         * because that is the smallest size instance in the c4 instance
         * family.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationPurchaseRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReservationPurchaseRecommendationOutcome GetReservationPurchaseRecommendation(const Model::GetReservationPurchaseRecommendationRequest& request) const;

        /**
         * A Callable wrapper for GetReservationPurchaseRecommendation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReservationPurchaseRecommendationRequestT = Model::GetReservationPurchaseRecommendationRequest>
        Model::GetReservationPurchaseRecommendationOutcomeCallable GetReservationPurchaseRecommendationCallable(const GetReservationPurchaseRecommendationRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetReservationPurchaseRecommendation, request);
        }

        /**
         * An Async wrapper for GetReservationPurchaseRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReservationPurchaseRecommendationRequestT = Model::GetReservationPurchaseRecommendationRequest>
        void GetReservationPurchaseRecommendationAsync(const GetReservationPurchaseRecommendationRequestT& request, const GetReservationPurchaseRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetReservationPurchaseRecommendation, request, handler, context);
        }

        /**
         * <p>Retrieves the reservation utilization for your account. Management account in
         * an organization have access to member accounts. You can filter data by
         * dimensions in a time period. You can use <code>GetDimensionValues</code> to
         * determine the possible dimension values. Currently, you can group only by
         * <code>SUBSCRIPTION_ID</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationUtilization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReservationUtilizationOutcome GetReservationUtilization(const Model::GetReservationUtilizationRequest& request) const;

        /**
         * A Callable wrapper for GetReservationUtilization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReservationUtilizationRequestT = Model::GetReservationUtilizationRequest>
        Model::GetReservationUtilizationOutcomeCallable GetReservationUtilizationCallable(const GetReservationUtilizationRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetReservationUtilization, request);
        }

        /**
         * An Async wrapper for GetReservationUtilization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReservationUtilizationRequestT = Model::GetReservationUtilizationRequest>
        void GetReservationUtilizationAsync(const GetReservationUtilizationRequestT& request, const GetReservationUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetReservationUtilization, request, handler, context);
        }

        /**
         * <p>Creates recommendations that help you save cost by identifying idle and
         * underutilized Amazon EC2 instances.</p> <p>Recommendations are generated to
         * either downsize or terminate instances, along with providing savings detail and
         * metrics. For more information about calculation and function, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/ce-rightsizing.html">Optimizing
         * Your Cost with Rightsizing Recommendations</a> in the <i>Billing and Cost
         * Management User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetRightsizingRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRightsizingRecommendationOutcome GetRightsizingRecommendation(const Model::GetRightsizingRecommendationRequest& request) const;

        /**
         * A Callable wrapper for GetRightsizingRecommendation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRightsizingRecommendationRequestT = Model::GetRightsizingRecommendationRequest>
        Model::GetRightsizingRecommendationOutcomeCallable GetRightsizingRecommendationCallable(const GetRightsizingRecommendationRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetRightsizingRecommendation, request);
        }

        /**
         * An Async wrapper for GetRightsizingRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRightsizingRecommendationRequestT = Model::GetRightsizingRecommendationRequest>
        void GetRightsizingRecommendationAsync(const GetRightsizingRecommendationRequestT& request, const GetRightsizingRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetRightsizingRecommendation, request, handler, context);
        }

        /**
         * <p>Retrieves the details for a Savings Plan recommendation. These details
         * include the hourly data-points that construct the cost, coverage, and
         * utilization charts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlanPurchaseRecommendationDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSavingsPlanPurchaseRecommendationDetailsOutcome GetSavingsPlanPurchaseRecommendationDetails(const Model::GetSavingsPlanPurchaseRecommendationDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetSavingsPlanPurchaseRecommendationDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSavingsPlanPurchaseRecommendationDetailsRequestT = Model::GetSavingsPlanPurchaseRecommendationDetailsRequest>
        Model::GetSavingsPlanPurchaseRecommendationDetailsOutcomeCallable GetSavingsPlanPurchaseRecommendationDetailsCallable(const GetSavingsPlanPurchaseRecommendationDetailsRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetSavingsPlanPurchaseRecommendationDetails, request);
        }

        /**
         * An Async wrapper for GetSavingsPlanPurchaseRecommendationDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSavingsPlanPurchaseRecommendationDetailsRequestT = Model::GetSavingsPlanPurchaseRecommendationDetailsRequest>
        void GetSavingsPlanPurchaseRecommendationDetailsAsync(const GetSavingsPlanPurchaseRecommendationDetailsRequestT& request, const GetSavingsPlanPurchaseRecommendationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetSavingsPlanPurchaseRecommendationDetails, request, handler, context);
        }

        /**
         * <p>Retrieves the Savings Plans covered for your account. This enables you to see
         * how much of your cost is covered by a Savings Plan. An organization’s management
         * account can see the coverage of the associated member accounts. This supports
         * dimensions, Cost Categories, and nested expressions. For any time period, you
         * can filter data for Savings Plans usage with the following dimensions:</p> <ul>
         * <li> <p> <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>REGION</code>
         * </p> </li> <li> <p> <code>SERVICE</code> </p> </li> <li> <p>
         * <code>INSTANCE_FAMILY</code> </p> </li> </ul> <p>To determine valid values for a
         * dimension, use the <code>GetDimensionValues</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansCoverage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSavingsPlansCoverageOutcome GetSavingsPlansCoverage(const Model::GetSavingsPlansCoverageRequest& request) const;

        /**
         * A Callable wrapper for GetSavingsPlansCoverage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSavingsPlansCoverageRequestT = Model::GetSavingsPlansCoverageRequest>
        Model::GetSavingsPlansCoverageOutcomeCallable GetSavingsPlansCoverageCallable(const GetSavingsPlansCoverageRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetSavingsPlansCoverage, request);
        }

        /**
         * An Async wrapper for GetSavingsPlansCoverage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSavingsPlansCoverageRequestT = Model::GetSavingsPlansCoverageRequest>
        void GetSavingsPlansCoverageAsync(const GetSavingsPlansCoverageRequestT& request, const GetSavingsPlansCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetSavingsPlansCoverage, request, handler, context);
        }

        /**
         * <p>Retrieves the Savings Plans recommendations for your account. First use
         * <code>StartSavingsPlansPurchaseRecommendationGeneration</code> to generate a new
         * set of recommendations, and then use
         * <code>GetSavingsPlansPurchaseRecommendation</code> to retrieve
         * them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansPurchaseRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSavingsPlansPurchaseRecommendationOutcome GetSavingsPlansPurchaseRecommendation(const Model::GetSavingsPlansPurchaseRecommendationRequest& request) const;

        /**
         * A Callable wrapper for GetSavingsPlansPurchaseRecommendation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSavingsPlansPurchaseRecommendationRequestT = Model::GetSavingsPlansPurchaseRecommendationRequest>
        Model::GetSavingsPlansPurchaseRecommendationOutcomeCallable GetSavingsPlansPurchaseRecommendationCallable(const GetSavingsPlansPurchaseRecommendationRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetSavingsPlansPurchaseRecommendation, request);
        }

        /**
         * An Async wrapper for GetSavingsPlansPurchaseRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSavingsPlansPurchaseRecommendationRequestT = Model::GetSavingsPlansPurchaseRecommendationRequest>
        void GetSavingsPlansPurchaseRecommendationAsync(const GetSavingsPlansPurchaseRecommendationRequestT& request, const GetSavingsPlansPurchaseRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetSavingsPlansPurchaseRecommendation, request, handler, context);
        }

        /**
         * <p>Retrieves the Savings Plans utilization for your account across date ranges
         * with daily or monthly granularity. Management account in an organization have
         * access to member accounts. You can use <code>GetDimensionValues</code> in
         * <code>SAVINGS_PLANS</code> to determine the possible dimension values.</p>
         *  <p>You can't group by any dimension values for
         * <code>GetSavingsPlansUtilization</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansUtilization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSavingsPlansUtilizationOutcome GetSavingsPlansUtilization(const Model::GetSavingsPlansUtilizationRequest& request) const;

        /**
         * A Callable wrapper for GetSavingsPlansUtilization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSavingsPlansUtilizationRequestT = Model::GetSavingsPlansUtilizationRequest>
        Model::GetSavingsPlansUtilizationOutcomeCallable GetSavingsPlansUtilizationCallable(const GetSavingsPlansUtilizationRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetSavingsPlansUtilization, request);
        }

        /**
         * An Async wrapper for GetSavingsPlansUtilization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSavingsPlansUtilizationRequestT = Model::GetSavingsPlansUtilizationRequest>
        void GetSavingsPlansUtilizationAsync(const GetSavingsPlansUtilizationRequestT& request, const GetSavingsPlansUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetSavingsPlansUtilization, request, handler, context);
        }

        /**
         * <p>Retrieves attribute data along with aggregate utilization and savings data
         * for a given time period. This doesn't support granular or grouped data
         * (daily/monthly) in response. You can't retrieve data by dates in a single
         * response similar to <code>GetSavingsPlanUtilization</code>, but you have the
         * option to make multiple calls to <code>GetSavingsPlanUtilizationDetails</code>
         * by providing individual dates. You can use <code>GetDimensionValues</code> in
         * <code>SAVINGS_PLANS</code> to determine the possible dimension values.</p>
         *  <p> <code>GetSavingsPlanUtilizationDetails</code> internally groups data
         * by <code>SavingsPlansArn</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetSavingsPlansUtilizationDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSavingsPlansUtilizationDetailsOutcome GetSavingsPlansUtilizationDetails(const Model::GetSavingsPlansUtilizationDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetSavingsPlansUtilizationDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSavingsPlansUtilizationDetailsRequestT = Model::GetSavingsPlansUtilizationDetailsRequest>
        Model::GetSavingsPlansUtilizationDetailsOutcomeCallable GetSavingsPlansUtilizationDetailsCallable(const GetSavingsPlansUtilizationDetailsRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetSavingsPlansUtilizationDetails, request);
        }

        /**
         * An Async wrapper for GetSavingsPlansUtilizationDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSavingsPlansUtilizationDetailsRequestT = Model::GetSavingsPlansUtilizationDetailsRequest>
        void GetSavingsPlansUtilizationDetailsAsync(const GetSavingsPlansUtilizationDetailsRequestT& request, const GetSavingsPlansUtilizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetSavingsPlansUtilizationDetails, request, handler, context);
        }

        /**
         * <p>Queries for available tag keys and tag values for a specified period. You can
         * search the tag values for an arbitrary string. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetTags">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTagsOutcome GetTags(const Model::GetTagsRequest& request) const;

        /**
         * A Callable wrapper for GetTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTagsRequestT = Model::GetTagsRequest>
        Model::GetTagsOutcomeCallable GetTagsCallable(const GetTagsRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetTags, request);
        }

        /**
         * An Async wrapper for GetTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTagsRequestT = Model::GetTagsRequest>
        void GetTagsAsync(const GetTagsRequestT& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetTags, request, handler, context);
        }

        /**
         * <p>Retrieves a forecast for how much Amazon Web Services predicts that you will
         * use over the forecast time period that you select, based on your past usage.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetUsageForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsageForecastOutcome GetUsageForecast(const Model::GetUsageForecastRequest& request) const;

        /**
         * A Callable wrapper for GetUsageForecast that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUsageForecastRequestT = Model::GetUsageForecastRequest>
        Model::GetUsageForecastOutcomeCallable GetUsageForecastCallable(const GetUsageForecastRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::GetUsageForecast, request);
        }

        /**
         * An Async wrapper for GetUsageForecast that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUsageForecastRequestT = Model::GetUsageForecastRequest>
        void GetUsageForecastAsync(const GetUsageForecastRequestT& request, const GetUsageForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::GetUsageForecast, request, handler, context);
        }

        /**
         * <p>Get a list of cost allocation tags. All inputs in the API are optional and
         * serve as filters. By default, all cost allocation tags are returned.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ListCostAllocationTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCostAllocationTagsOutcome ListCostAllocationTags(const Model::ListCostAllocationTagsRequest& request) const;

        /**
         * A Callable wrapper for ListCostAllocationTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCostAllocationTagsRequestT = Model::ListCostAllocationTagsRequest>
        Model::ListCostAllocationTagsOutcomeCallable ListCostAllocationTagsCallable(const ListCostAllocationTagsRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::ListCostAllocationTags, request);
        }

        /**
         * An Async wrapper for ListCostAllocationTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCostAllocationTagsRequestT = Model::ListCostAllocationTagsRequest>
        void ListCostAllocationTagsAsync(const ListCostAllocationTagsRequestT& request, const ListCostAllocationTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::ListCostAllocationTags, request, handler, context);
        }

        /**
         * <p>Returns the name, Amazon Resource Name (ARN), <code>NumberOfRules</code> and
         * effective dates of all Cost Categories defined in the account. You have the
         * option to use <code>EffectiveOn</code> to return a list of Cost Categories that
         * were active on a specific date. If there is no <code>EffectiveOn</code>
         * specified, you’ll see Cost Categories that are effective on the current date. If
         * Cost Category is still effective, <code>EffectiveEnd</code> is omitted in the
         * response. <code>ListCostCategoryDefinitions</code> supports pagination. The
         * request can have a <code>MaxResults</code> range up to 100.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ListCostCategoryDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCostCategoryDefinitionsOutcome ListCostCategoryDefinitions(const Model::ListCostCategoryDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListCostCategoryDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCostCategoryDefinitionsRequestT = Model::ListCostCategoryDefinitionsRequest>
        Model::ListCostCategoryDefinitionsOutcomeCallable ListCostCategoryDefinitionsCallable(const ListCostCategoryDefinitionsRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::ListCostCategoryDefinitions, request);
        }

        /**
         * An Async wrapper for ListCostCategoryDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCostCategoryDefinitionsRequestT = Model::ListCostCategoryDefinitionsRequest>
        void ListCostCategoryDefinitionsAsync(const ListCostCategoryDefinitionsRequestT& request, const ListCostCategoryDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::ListCostCategoryDefinitions, request, handler, context);
        }

        /**
         * <p>Retrieves a list of your historical recommendation generations within the
         * past 30 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ListSavingsPlansPurchaseRecommendationGeneration">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSavingsPlansPurchaseRecommendationGenerationOutcome ListSavingsPlansPurchaseRecommendationGeneration(const Model::ListSavingsPlansPurchaseRecommendationGenerationRequest& request) const;

        /**
         * A Callable wrapper for ListSavingsPlansPurchaseRecommendationGeneration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSavingsPlansPurchaseRecommendationGenerationRequestT = Model::ListSavingsPlansPurchaseRecommendationGenerationRequest>
        Model::ListSavingsPlansPurchaseRecommendationGenerationOutcomeCallable ListSavingsPlansPurchaseRecommendationGenerationCallable(const ListSavingsPlansPurchaseRecommendationGenerationRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::ListSavingsPlansPurchaseRecommendationGeneration, request);
        }

        /**
         * An Async wrapper for ListSavingsPlansPurchaseRecommendationGeneration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSavingsPlansPurchaseRecommendationGenerationRequestT = Model::ListSavingsPlansPurchaseRecommendationGenerationRequest>
        void ListSavingsPlansPurchaseRecommendationGenerationAsync(const ListSavingsPlansPurchaseRecommendationGenerationRequestT& request, const ListSavingsPlansPurchaseRecommendationGenerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::ListSavingsPlansPurchaseRecommendationGeneration, request, handler, context);
        }

        /**
         * <p>Returns a list of resource tags associated with the resource specified by the
         * Amazon Resource Name (ARN). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Modifies the feedback property of a given cost anomaly. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ProvideAnomalyFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::ProvideAnomalyFeedbackOutcome ProvideAnomalyFeedback(const Model::ProvideAnomalyFeedbackRequest& request) const;

        /**
         * A Callable wrapper for ProvideAnomalyFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ProvideAnomalyFeedbackRequestT = Model::ProvideAnomalyFeedbackRequest>
        Model::ProvideAnomalyFeedbackOutcomeCallable ProvideAnomalyFeedbackCallable(const ProvideAnomalyFeedbackRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::ProvideAnomalyFeedback, request);
        }

        /**
         * An Async wrapper for ProvideAnomalyFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ProvideAnomalyFeedbackRequestT = Model::ProvideAnomalyFeedbackRequest>
        void ProvideAnomalyFeedbackAsync(const ProvideAnomalyFeedbackRequestT& request, const ProvideAnomalyFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::ProvideAnomalyFeedback, request, handler, context);
        }

        /**
         * <p>Requests a Savings Plans recommendation generation. This enables you to
         * calculate a fresh set of Savings Plans recommendations that takes your latest
         * usage data and current Savings Plans inventory into account. You can refresh
         * Savings Plans recommendations up to three times daily for a consolidated billing
         * family.</p>  <p>
         * <code>StartSavingsPlansPurchaseRecommendationGeneration</code> has no request
         * syntax because no input parameters are needed to support this operation.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/StartSavingsPlansPurchaseRecommendationGeneration">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSavingsPlansPurchaseRecommendationGenerationOutcome StartSavingsPlansPurchaseRecommendationGeneration(const Model::StartSavingsPlansPurchaseRecommendationGenerationRequest& request) const;

        /**
         * A Callable wrapper for StartSavingsPlansPurchaseRecommendationGeneration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSavingsPlansPurchaseRecommendationGenerationRequestT = Model::StartSavingsPlansPurchaseRecommendationGenerationRequest>
        Model::StartSavingsPlansPurchaseRecommendationGenerationOutcomeCallable StartSavingsPlansPurchaseRecommendationGenerationCallable(const StartSavingsPlansPurchaseRecommendationGenerationRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::StartSavingsPlansPurchaseRecommendationGeneration, request);
        }

        /**
         * An Async wrapper for StartSavingsPlansPurchaseRecommendationGeneration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSavingsPlansPurchaseRecommendationGenerationRequestT = Model::StartSavingsPlansPurchaseRecommendationGenerationRequest>
        void StartSavingsPlansPurchaseRecommendationGenerationAsync(const StartSavingsPlansPurchaseRecommendationGenerationRequestT& request, const StartSavingsPlansPurchaseRecommendationGenerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::StartSavingsPlansPurchaseRecommendationGeneration, request, handler, context);
        }

        /**
         * <p>An API operation for adding one or more tags (key-value pairs) to a
         * resource.</p> <p>You can use the <code>TagResource</code> operation with a
         * resource that already has tags. If you specify a new tag key for the resource,
         * this tag is appended to the list of tags associated with the resource. If you
         * specify a tag key that is already associated with the resource, the new tag
         * value you specify replaces the previous value for that tag.</p> <p>Although the
         * maximum number of array members is 200, user-tag maximum is 50. The remaining
         * are reserved for Amazon Web Services use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from a resource. Specify only tag keys in your
         * request. Don't specify the value. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing cost anomaly monitor. The changes made are applied going
         * forward, and doesn't change anomalies detected in the past. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/UpdateAnomalyMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnomalyMonitorOutcome UpdateAnomalyMonitor(const Model::UpdateAnomalyMonitorRequest& request) const;

        /**
         * A Callable wrapper for UpdateAnomalyMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAnomalyMonitorRequestT = Model::UpdateAnomalyMonitorRequest>
        Model::UpdateAnomalyMonitorOutcomeCallable UpdateAnomalyMonitorCallable(const UpdateAnomalyMonitorRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::UpdateAnomalyMonitor, request);
        }

        /**
         * An Async wrapper for UpdateAnomalyMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAnomalyMonitorRequestT = Model::UpdateAnomalyMonitorRequest>
        void UpdateAnomalyMonitorAsync(const UpdateAnomalyMonitorRequestT& request, const UpdateAnomalyMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::UpdateAnomalyMonitor, request, handler, context);
        }

        /**
         * <p>Updates an existing cost anomaly subscription. Specify the fields that you
         * want to update. Omitted fields are unchanged.</p>  <p>The JSON below
         * describes the generic construct for each type. See <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_UpdateAnomalySubscription.html#API_UpdateAnomalySubscription_RequestParameters">Request
         * Parameters</a> for possible values as they apply to
         * <code>AnomalySubscription</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/UpdateAnomalySubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnomalySubscriptionOutcome UpdateAnomalySubscription(const Model::UpdateAnomalySubscriptionRequest& request) const;

        /**
         * A Callable wrapper for UpdateAnomalySubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAnomalySubscriptionRequestT = Model::UpdateAnomalySubscriptionRequest>
        Model::UpdateAnomalySubscriptionOutcomeCallable UpdateAnomalySubscriptionCallable(const UpdateAnomalySubscriptionRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::UpdateAnomalySubscription, request);
        }

        /**
         * An Async wrapper for UpdateAnomalySubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAnomalySubscriptionRequestT = Model::UpdateAnomalySubscriptionRequest>
        void UpdateAnomalySubscriptionAsync(const UpdateAnomalySubscriptionRequestT& request, const UpdateAnomalySubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::UpdateAnomalySubscription, request, handler, context);
        }

        /**
         * <p>Updates status for cost allocation tags in bulk, with maximum batch size of
         * 20. If the tag status that's updated is the same as the existing tag status, the
         * request doesn't fail. Instead, it doesn't have any effect on the tag status (for
         * example, activating the active tag). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/UpdateCostAllocationTagsStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCostAllocationTagsStatusOutcome UpdateCostAllocationTagsStatus(const Model::UpdateCostAllocationTagsStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateCostAllocationTagsStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCostAllocationTagsStatusRequestT = Model::UpdateCostAllocationTagsStatusRequest>
        Model::UpdateCostAllocationTagsStatusOutcomeCallable UpdateCostAllocationTagsStatusCallable(const UpdateCostAllocationTagsStatusRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::UpdateCostAllocationTagsStatus, request);
        }

        /**
         * An Async wrapper for UpdateCostAllocationTagsStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCostAllocationTagsStatusRequestT = Model::UpdateCostAllocationTagsStatusRequest>
        void UpdateCostAllocationTagsStatusAsync(const UpdateCostAllocationTagsStatusRequestT& request, const UpdateCostAllocationTagsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::UpdateCostAllocationTagsStatus, request, handler, context);
        }

        /**
         * <p>Updates an existing Cost Category. Changes made to the Cost Category rules
         * will be used to categorize the current month’s expenses and future expenses.
         * This won’t change categorization for the previous months.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/UpdateCostCategoryDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCostCategoryDefinitionOutcome UpdateCostCategoryDefinition(const Model::UpdateCostCategoryDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateCostCategoryDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCostCategoryDefinitionRequestT = Model::UpdateCostCategoryDefinitionRequest>
        Model::UpdateCostCategoryDefinitionOutcomeCallable UpdateCostCategoryDefinitionCallable(const UpdateCostCategoryDefinitionRequestT& request) const
        {
            return SubmitCallable(&CostExplorerClient::UpdateCostCategoryDefinition, request);
        }

        /**
         * An Async wrapper for UpdateCostCategoryDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCostCategoryDefinitionRequestT = Model::UpdateCostCategoryDefinitionRequest>
        void UpdateCostCategoryDefinitionAsync(const UpdateCostCategoryDefinitionRequestT& request, const UpdateCostCategoryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostExplorerClient::UpdateCostCategoryDefinition, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CostExplorerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CostExplorerClient>;
      void init(const CostExplorerClientConfiguration& clientConfiguration);

      CostExplorerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CostExplorerEndpointProviderBase> m_endpointProvider;
  };

} // namespace CostExplorer
} // namespace Aws
