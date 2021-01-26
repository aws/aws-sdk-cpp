/**
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
#include <aws/pi/model/GetResourceMetricsResult.h>
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
        class GetResourceMetricsRequest;

        typedef Aws::Utils::Outcome<DescribeDimensionKeysResult, PIError> DescribeDimensionKeysOutcome;
        typedef Aws::Utils::Outcome<GetResourceMetricsResult, PIError> GetResourceMetricsOutcome;

        typedef std::future<DescribeDimensionKeysOutcome> DescribeDimensionKeysOutcomeCallable;
        typedef std::future<GetResourceMetricsOutcome> GetResourceMetricsOutcomeCallable;
} // namespace Model

  class PIClient;

    typedef std::function<void(const PIClient*, const Model::DescribeDimensionKeysRequest&, const Model::DescribeDimensionKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDimensionKeysResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::GetResourceMetricsRequest&, const Model::GetResourceMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceMetricsResponseReceivedHandler;

  /**
   * <fullname>Amazon RDS Performance Insights</fullname> <p>Amazon RDS Performance
   * Insights enables you to monitor and explore different dimensions of database
   * load based on data captured from a running DB instance. The guide provides
   * detailed information about Performance Insights data types, parameters and
   * errors.</p> <p>When Performance Insights is enabled, the Amazon RDS Performance
   * Insights API provides visibility into the performance of your DB instance.
   * Amazon CloudWatch provides the authoritative source for AWS service-vended
   * monitoring metrics. Performance Insights offers a domain-specific view of DB
   * load. </p> <p>DB load is measured as Average Active Sessions. Performance
   * Insights provides the data to API consumers as a two-dimensional time-series
   * dataset. The time dimension provides DB load data for each time point in the
   * queried time range. Each time point decomposes overall load in relation to the
   * requested dimensions, measured at that time point. Examples include SQL, Wait
   * event, User, and Host.</p> <ul> <li> <p>To learn more about Performance Insights
   * and Amazon Aurora DB instances, go to the <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights.html">Amazon
   * Aurora User Guide</a>.</p> </li> <li> <p>To learn more about Performance
   * Insights and Amazon RDS DB instances, go to the <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Amazon
   * RDS User Guide</a>.</p> </li> </ul>
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
        PIClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PIClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~PIClient();


        /**
         * <p>For a specific time period, retrieve the top <code>N</code> dimension keys
         * for a metric.</p>  <p>Each response element returns a maximum of 500
         * bytes. For larger elements, such as SQL statements, only the first 500 bytes are
         * returned.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/DescribeDimensionKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDimensionKeysOutcome DescribeDimensionKeys(const Model::DescribeDimensionKeysRequest& request) const;

        /**
         * <p>For a specific time period, retrieve the top <code>N</code> dimension keys
         * for a metric.</p>  <p>Each response element returns a maximum of 500
         * bytes. For larger elements, such as SQL statements, only the first 500 bytes are
         * returned.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/DescribeDimensionKeys">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDimensionKeysOutcomeCallable DescribeDimensionKeysCallable(const Model::DescribeDimensionKeysRequest& request) const;

        /**
         * <p>For a specific time period, retrieve the top <code>N</code> dimension keys
         * for a metric.</p>  <p>Each response element returns a maximum of 500
         * bytes. For larger elements, such as SQL statements, only the first 500 bytes are
         * returned.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/DescribeDimensionKeys">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDimensionKeysAsync(const Model::DescribeDimensionKeysRequest& request, const DescribeDimensionKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve Performance Insights metrics for a set of data sources, over a time
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
         * <p>Retrieve Performance Insights metrics for a set of data sources, over a time
         * period. You can provide specific dimension groups and dimensions, and provide
         * aggregation and filtering criteria for each group.</p>  <p>Each response
         * element returns a maximum of 500 bytes. For larger elements, such as SQL
         * statements, only the first 500 bytes are returned.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/GetResourceMetrics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceMetricsOutcomeCallable GetResourceMetricsCallable(const Model::GetResourceMetricsRequest& request) const;

        /**
         * <p>Retrieve Performance Insights metrics for a set of data sources, over a time
         * period. You can provide specific dimension groups and dimensions, and provide
         * aggregation and filtering criteria for each group.</p>  <p>Each response
         * element returns a maximum of 500 bytes. For larger elements, such as SQL
         * statements, only the first 500 bytes are returned.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/GetResourceMetrics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceMetricsAsync(const Model::GetResourceMetricsRequest& request, const GetResourceMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DescribeDimensionKeysAsyncHelper(const Model::DescribeDimensionKeysRequest& request, const DescribeDimensionKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceMetricsAsyncHelper(const Model::GetResourceMetricsRequest& request, const GetResourceMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace PI
} // namespace Aws
