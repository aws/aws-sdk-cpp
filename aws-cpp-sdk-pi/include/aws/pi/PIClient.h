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

        typedef Aws::Utils::Outcome<DescribeDimensionKeysResult, Aws::Client::AWSError<PIErrors>> DescribeDimensionKeysOutcome;
        typedef Aws::Utils::Outcome<GetResourceMetricsResult, Aws::Client::AWSError<PIErrors>> GetResourceMetricsOutcome;

        typedef std::future<DescribeDimensionKeysOutcome> DescribeDimensionKeysOutcomeCallable;
        typedef std::future<GetResourceMetricsOutcome> GetResourceMetricsOutcomeCallable;
} // namespace Model

  class PIClient;

    typedef std::function<void(const PIClient*, const Model::DescribeDimensionKeysRequest&, const Model::DescribeDimensionKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDimensionKeysResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::GetResourceMetricsRequest&, const Model::GetResourceMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceMetricsResponseReceivedHandler;

  /**
   * <p>AWS Performance Insights enables you to monitor and explore different
   * dimensions of database load based on data captured from a running RDS instance.
   * The guide provides detailed information about Performance Insights data types,
   * parameters and errors. For more information about Performance Insights
   * capabilities see <a
   * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using
   * Amazon RDS Performance Insights </a> in the <i>Amazon RDS User Guide</i>.</p>
   * <p> The AWS Performance Insights API provides visibility into the performance of
   * your RDS instance, when Performance Insights is enabled for supported engine
   * types. While Amazon CloudWatch provides the authoritative source for AWS service
   * vended monitoring metrics, AWS Performance Insights offers a domain-specific
   * view of database load measured as Average Active Sessions and provided to API
   * consumers as a 2-dimensional time-series dataset. The time dimension of the data
   * provides DB load data for each time point in the queried time range, and each
   * time point decomposes overall load in relation to the requested dimensions, such
   * as SQL, Wait-event, User or Host, measured at that time point.</p>
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

        inline virtual const char* GetServiceClientName() const override { return "PI"; }


        /**
         * <p>For a specific time period, retrieve the top <code>N</code> dimension keys
         * for a metric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/DescribeDimensionKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDimensionKeysOutcome DescribeDimensionKeys(const Model::DescribeDimensionKeysRequest& request) const;

        /**
         * <p>For a specific time period, retrieve the top <code>N</code> dimension keys
         * for a metric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/DescribeDimensionKeys">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDimensionKeysOutcomeCallable DescribeDimensionKeysCallable(const Model::DescribeDimensionKeysRequest& request) const;

        /**
         * <p>For a specific time period, retrieve the top <code>N</code> dimension keys
         * for a metric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/DescribeDimensionKeys">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDimensionKeysAsync(const Model::DescribeDimensionKeysRequest& request, const DescribeDimensionKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve Performance Insights metrics for a set of data sources, over a time
         * period. You can provide specific dimension groups and dimensions, and provide
         * aggregation and filtering criteria for each group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/GetResourceMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceMetricsOutcome GetResourceMetrics(const Model::GetResourceMetricsRequest& request) const;

        /**
         * <p>Retrieve Performance Insights metrics for a set of data sources, over a time
         * period. You can provide specific dimension groups and dimensions, and provide
         * aggregation and filtering criteria for each group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/GetResourceMetrics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceMetricsOutcomeCallable GetResourceMetricsCallable(const Model::GetResourceMetricsRequest& request) const;

        /**
         * <p>Retrieve Performance Insights metrics for a set of data sources, over a time
         * period. You can provide specific dimension groups and dimensions, and provide
         * aggregation and filtering criteria for each group.</p><p><h3>See Also:</h3>   <a
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
