﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/PIErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pi/model/DescribeDimensionKeysResult.h>
#include <aws/pi/model/GetDimensionKeyDetailsResult.h>
#include <aws/pi/model/GetResourceMetadataResult.h>
#include <aws/pi/model/GetResourceMetricsResult.h>
#include <aws/pi/model/ListAvailableResourceDimensionsResult.h>
#include <aws/pi/model/ListAvailableResourceMetricsResult.h>
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

namespace PI
{

namespace Model
{
        class DescribeDimensionKeysRequest;
        class GetDimensionKeyDetailsRequest;
        class GetResourceMetadataRequest;
        class GetResourceMetricsRequest;
        class ListAvailableResourceDimensionsRequest;
        class ListAvailableResourceMetricsRequest;

        typedef Aws::Utils::Outcome<DescribeDimensionKeysResult, PIError> DescribeDimensionKeysOutcome;
        typedef Aws::Utils::Outcome<GetDimensionKeyDetailsResult, PIError> GetDimensionKeyDetailsOutcome;
        typedef Aws::Utils::Outcome<GetResourceMetadataResult, PIError> GetResourceMetadataOutcome;
        typedef Aws::Utils::Outcome<GetResourceMetricsResult, PIError> GetResourceMetricsOutcome;
        typedef Aws::Utils::Outcome<ListAvailableResourceDimensionsResult, PIError> ListAvailableResourceDimensionsOutcome;
        typedef Aws::Utils::Outcome<ListAvailableResourceMetricsResult, PIError> ListAvailableResourceMetricsOutcome;

        typedef std::future<DescribeDimensionKeysOutcome> DescribeDimensionKeysOutcomeCallable;
        typedef std::future<GetDimensionKeyDetailsOutcome> GetDimensionKeyDetailsOutcomeCallable;
        typedef std::future<GetResourceMetadataOutcome> GetResourceMetadataOutcomeCallable;
        typedef std::future<GetResourceMetricsOutcome> GetResourceMetricsOutcomeCallable;
        typedef std::future<ListAvailableResourceDimensionsOutcome> ListAvailableResourceDimensionsOutcomeCallable;
        typedef std::future<ListAvailableResourceMetricsOutcome> ListAvailableResourceMetricsOutcomeCallable;
} // namespace Model

  class PIClient;

    typedef std::function<void(const PIClient*, const Model::DescribeDimensionKeysRequest&, const Model::DescribeDimensionKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDimensionKeysResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::GetDimensionKeyDetailsRequest&, const Model::GetDimensionKeyDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDimensionKeyDetailsResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::GetResourceMetadataRequest&, const Model::GetResourceMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceMetadataResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::GetResourceMetricsRequest&, const Model::GetResourceMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceMetricsResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::ListAvailableResourceDimensionsRequest&, const Model::ListAvailableResourceDimensionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAvailableResourceDimensionsResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::ListAvailableResourceMetricsRequest&, const Model::ListAvailableResourceMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAvailableResourceMetricsResponseReceivedHandler;

  /**
   * <fullname>Amazon RDS Performance Insights</fullname> <p>Amazon RDS Performance
   * Insights enables you to monitor and explore different dimensions of database
   * load based on data captured from a running DB instance. The guide provides
   * detailed information about Performance Insights data types, parameters and
   * errors.</p> <p>When Performance Insights is enabled, the Amazon RDS Performance
   * Insights API provides visibility into the performance of your DB instance.
   * Amazon CloudWatch provides the authoritative source for Amazon Web Services
   * service-vended monitoring metrics. Performance Insights offers a domain-specific
   * view of DB load.</p> <p>DB load is measured as average active sessions.
   * Performance Insights provides the data to API consumers as a two-dimensional
   * time-series dataset. The time dimension provides DB load data for each time
   * point in the queried time range. Each time point decomposes overall load in
   * relation to the requested dimensions, measured at that time point. Examples
   * include SQL, Wait event, User, and Host.</p> <ul> <li> <p>To learn more about
   * Performance Insights and Amazon Aurora DB instances, go to the <i> <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights.html">
   * Amazon Aurora User Guide</a> </i>. </p> </li> <li> <p>To learn more about
   * Performance Insights and Amazon RDS DB instances, go to the <i> <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">
   * Amazon RDS User Guide</a> </i>. </p> </li> <li> <p>To learn more about
   * Performance Insights and Amazon DocumentDB clusters, go to the <i> <a
   * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/performance-insights.html">
   * Amazon DocumentDB Developer Guide</a> </i>.</p> </li> </ul>
   */
  class AWS_PI_API PIClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PIClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PIClient(const Aws::Auth::AWSCredentials& credentials,
                 const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PIClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                 const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~PIClient();


        /**
         * <p>For a specific time period, retrieve the top <code>N</code> dimension keys
         * for a metric. </p>  <p>Each response element returns a maximum of 500
         * bytes. For larger elements, such as SQL statements, only the first 500 bytes are
         * returned.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/DescribeDimensionKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDimensionKeysOutcome DescribeDimensionKeys(const Model::DescribeDimensionKeysRequest& request) const;

        /**
         * A Callable wrapper for DescribeDimensionKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDimensionKeysOutcomeCallable DescribeDimensionKeysCallable(const Model::DescribeDimensionKeysRequest& request) const;

        /**
         * An Async wrapper for DescribeDimensionKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDimensionKeysAsync(const Model::DescribeDimensionKeysRequest& request, const DescribeDimensionKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the attributes of the specified dimension group for a DB instance or data
         * source. For example, if you specify a SQL ID,
         * <code>GetDimensionKeyDetails</code> retrieves the full text of the dimension
         * <code>db.sql.statement</code> associated with this ID. This operation is useful
         * because <code>GetResourceMetrics</code> and <code>DescribeDimensionKeys</code>
         * don't support retrieval of large SQL statement text.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/GetDimensionKeyDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDimensionKeyDetailsOutcome GetDimensionKeyDetails(const Model::GetDimensionKeyDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetDimensionKeyDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDimensionKeyDetailsOutcomeCallable GetDimensionKeyDetailsCallable(const Model::GetDimensionKeyDetailsRequest& request) const;

        /**
         * An Async wrapper for GetDimensionKeyDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDimensionKeyDetailsAsync(const Model::GetDimensionKeyDetailsRequest& request, const GetDimensionKeyDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve the metadata for different features. For example, the metadata might
         * indicate that a feature is turned on or off on a specific DB instance.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/GetResourceMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceMetadataOutcome GetResourceMetadata(const Model::GetResourceMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetResourceMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceMetadataOutcomeCallable GetResourceMetadataCallable(const Model::GetResourceMetadataRequest& request) const;

        /**
         * An Async wrapper for GetResourceMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceMetadataAsync(const Model::GetResourceMetadataRequest& request, const GetResourceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve Performance Insights metrics for a set of data sources over a time
         * period. You can provide specific dimension groups and dimensions, and provide
         * aggregation and filtering criteria for each group.</p>  <p>Each response
         * element returns a maximum of 500 bytes. For larger elements, such as SQL
         * statements, only the first 500 bytes are returned.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/GetResourceMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceMetricsOutcome GetResourceMetrics(const Model::GetResourceMetricsRequest& request) const;

        /**
         * A Callable wrapper for GetResourceMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceMetricsOutcomeCallable GetResourceMetricsCallable(const Model::GetResourceMetricsRequest& request) const;

        /**
         * An Async wrapper for GetResourceMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceMetricsAsync(const Model::GetResourceMetricsRequest& request, const GetResourceMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve the dimensions that can be queried for each specified metric type on
         * a specified DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/ListAvailableResourceDimensions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailableResourceDimensionsOutcome ListAvailableResourceDimensions(const Model::ListAvailableResourceDimensionsRequest& request) const;

        /**
         * A Callable wrapper for ListAvailableResourceDimensions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAvailableResourceDimensionsOutcomeCallable ListAvailableResourceDimensionsCallable(const Model::ListAvailableResourceDimensionsRequest& request) const;

        /**
         * An Async wrapper for ListAvailableResourceDimensions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAvailableResourceDimensionsAsync(const Model::ListAvailableResourceDimensionsRequest& request, const ListAvailableResourceDimensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve metrics of the specified types that can be queried for a specified
         * DB instance. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/ListAvailableResourceMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailableResourceMetricsOutcome ListAvailableResourceMetrics(const Model::ListAvailableResourceMetricsRequest& request) const;

        /**
         * A Callable wrapper for ListAvailableResourceMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAvailableResourceMetricsOutcomeCallable ListAvailableResourceMetricsCallable(const Model::ListAvailableResourceMetricsRequest& request) const;

        /**
         * An Async wrapper for ListAvailableResourceMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAvailableResourceMetricsAsync(const Model::ListAvailableResourceMetricsRequest& request, const ListAvailableResourceMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DescribeDimensionKeysAsyncHelper(const Model::DescribeDimensionKeysRequest& request, const DescribeDimensionKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDimensionKeyDetailsAsyncHelper(const Model::GetDimensionKeyDetailsRequest& request, const GetDimensionKeyDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceMetadataAsyncHelper(const Model::GetResourceMetadataRequest& request, const GetResourceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceMetricsAsyncHelper(const Model::GetResourceMetricsRequest& request, const GetResourceMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAvailableResourceDimensionsAsyncHelper(const Model::ListAvailableResourceDimensionsRequest& request, const ListAvailableResourceDimensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAvailableResourceMetricsAsyncHelper(const Model::ListAvailableResourceMetricsRequest& request, const ListAvailableResourceMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace PI
} // namespace Aws
