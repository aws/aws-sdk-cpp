/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ce/model/GetCostAndUsageResult.h>
#include <aws/ce/model/GetDimensionValuesResult.h>
#include <aws/ce/model/GetReservationUtilizationResult.h>
#include <aws/ce/model/GetTagsResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace CostExplorer
{

namespace Model
{
        class GetCostAndUsageRequest;
        class GetDimensionValuesRequest;
        class GetReservationUtilizationRequest;
        class GetTagsRequest;

        typedef Aws::Utils::Outcome<GetCostAndUsageResult, Aws::Client::AWSError<CostExplorerErrors>> GetCostAndUsageOutcome;
        typedef Aws::Utils::Outcome<GetDimensionValuesResult, Aws::Client::AWSError<CostExplorerErrors>> GetDimensionValuesOutcome;
        typedef Aws::Utils::Outcome<GetReservationUtilizationResult, Aws::Client::AWSError<CostExplorerErrors>> GetReservationUtilizationOutcome;
        typedef Aws::Utils::Outcome<GetTagsResult, Aws::Client::AWSError<CostExplorerErrors>> GetTagsOutcome;

        typedef std::future<GetCostAndUsageOutcome> GetCostAndUsageOutcomeCallable;
        typedef std::future<GetDimensionValuesOutcome> GetDimensionValuesOutcomeCallable;
        typedef std::future<GetReservationUtilizationOutcome> GetReservationUtilizationOutcomeCallable;
        typedef std::future<GetTagsOutcome> GetTagsOutcomeCallable;
} // namespace Model

  class CostExplorerClient;

    typedef std::function<void(const CostExplorerClient*, const Model::GetCostAndUsageRequest&, const Model::GetCostAndUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCostAndUsageResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetDimensionValuesRequest&, const Model::GetDimensionValuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDimensionValuesResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetReservationUtilizationRequest&, const Model::GetReservationUtilizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReservationUtilizationResponseReceivedHandler;
    typedef std::function<void(const CostExplorerClient*, const Model::GetTagsRequest&, const Model::GetTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTagsResponseReceivedHandler;

  /**
   * <p>The Cost Explorer API allows you to programmatically query your cost and
   * usage data. You can query for aggregated data such as total monthly costs or
   * total daily usage. You can also query for granular data, such as the number of
   * daily write operations for DynamoDB database tables in your production
   * environment. </p> <p>Service Endpoint</p> <p>The Cost Explorer API provides the
   * following endpoint:</p> <ul> <li> <p>https://ce.us-east-1.amazonaws.com</p>
   * </li> </ul>
   */
  class AWS_COSTEXPLORER_API CostExplorerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostExplorerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostExplorerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CostExplorerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CostExplorerClient();

        inline virtual const char* GetServiceClientName() const override { return "ce"; }


        /**
         * <p>Retrieve cost and usage metrics for your account. You can specify which cost
         * and usage-related metric, such as <code>BlendedCosts</code> or
         * <code>UsageQuantity</code>, that you want the request to return. You can also
         * filter and group your data by various dimensions, such as <code>AWS
         * Service</code> or <code>AvailabilityZone</code>, in a specific time range. See
         * the <code>GetDimensionValues</code> action for a complete list of the valid
         * dimensions. Master accounts in an organization have access to all member
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostAndUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCostAndUsageOutcome GetCostAndUsage(const Model::GetCostAndUsageRequest& request) const;

        /**
         * <p>Retrieve cost and usage metrics for your account. You can specify which cost
         * and usage-related metric, such as <code>BlendedCosts</code> or
         * <code>UsageQuantity</code>, that you want the request to return. You can also
         * filter and group your data by various dimensions, such as <code>AWS
         * Service</code> or <code>AvailabilityZone</code>, in a specific time range. See
         * the <code>GetDimensionValues</code> action for a complete list of the valid
         * dimensions. Master accounts in an organization have access to all member
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostAndUsage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCostAndUsageOutcomeCallable GetCostAndUsageCallable(const Model::GetCostAndUsageRequest& request) const;

        /**
         * <p>Retrieve cost and usage metrics for your account. You can specify which cost
         * and usage-related metric, such as <code>BlendedCosts</code> or
         * <code>UsageQuantity</code>, that you want the request to return. You can also
         * filter and group your data by various dimensions, such as <code>AWS
         * Service</code> or <code>AvailabilityZone</code>, in a specific time range. See
         * the <code>GetDimensionValues</code> action for a complete list of the valid
         * dimensions. Master accounts in an organization have access to all member
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetCostAndUsage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCostAndUsageAsync(const Model::GetCostAndUsageRequest& request, const GetCostAndUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can use <code>GetDimensionValues</code> to retrieve all available filter
         * values for a specific filter over a period of time. You can search the dimension
         * values for an arbitrary string. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetDimensionValues">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDimensionValuesOutcome GetDimensionValues(const Model::GetDimensionValuesRequest& request) const;

        /**
         * <p>You can use <code>GetDimensionValues</code> to retrieve all available filter
         * values for a specific filter over a period of time. You can search the dimension
         * values for an arbitrary string. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetDimensionValues">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDimensionValuesOutcomeCallable GetDimensionValuesCallable(const Model::GetDimensionValuesRequest& request) const;

        /**
         * <p>You can use <code>GetDimensionValues</code> to retrieve all available filter
         * values for a specific filter over a period of time. You can search the dimension
         * values for an arbitrary string. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetDimensionValues">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDimensionValuesAsync(const Model::GetDimensionValuesRequest& request, const GetDimensionValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can retrieve the Reservation utilization for your account. Master
         * accounts in an organization have access to their associated member accounts. You
         * can filter data by dimensions in a time period. You can use
         * <code>GetDimensionValues</code> to determine the possible dimension values.
         * Currently, you can group only by <code>SUBSCRIPTION_ID</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationUtilization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReservationUtilizationOutcome GetReservationUtilization(const Model::GetReservationUtilizationRequest& request) const;

        /**
         * <p>You can retrieve the Reservation utilization for your account. Master
         * accounts in an organization have access to their associated member accounts. You
         * can filter data by dimensions in a time period. You can use
         * <code>GetDimensionValues</code> to determine the possible dimension values.
         * Currently, you can group only by <code>SUBSCRIPTION_ID</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationUtilization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReservationUtilizationOutcomeCallable GetReservationUtilizationCallable(const Model::GetReservationUtilizationRequest& request) const;

        /**
         * <p>You can retrieve the Reservation utilization for your account. Master
         * accounts in an organization have access to their associated member accounts. You
         * can filter data by dimensions in a time period. You can use
         * <code>GetDimensionValues</code> to determine the possible dimension values.
         * Currently, you can group only by <code>SUBSCRIPTION_ID</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetReservationUtilization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReservationUtilizationAsync(const Model::GetReservationUtilizationRequest& request, const GetReservationUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can query for available tag keys and tag values for a specified period.
         * You can search the tag values for an arbitrary string. </p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetTags">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTagsOutcome GetTags(const Model::GetTagsRequest& request) const;

        /**
         * <p>You can query for available tag keys and tag values for a specified period.
         * You can search the tag values for an arbitrary string. </p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetTags">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTagsOutcomeCallable GetTagsCallable(const Model::GetTagsRequest& request) const;

        /**
         * <p>You can query for available tag keys and tag values for a specified period.
         * You can search the tag values for an arbitrary string. </p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GetTags">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTagsAsync(const Model::GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void GetCostAndUsageAsyncHelper(const Model::GetCostAndUsageRequest& request, const GetCostAndUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDimensionValuesAsyncHelper(const Model::GetDimensionValuesRequest& request, const GetDimensionValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReservationUtilizationAsyncHelper(const Model::GetReservationUtilizationRequest& request, const GetReservationUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTagsAsyncHelper(const Model::GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CostExplorer
} // namespace Aws
