/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/TimestreamQueryErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-query/model/CancelQueryResult.h>
#include <aws/timestream-query/model/DescribeEndpointsResult.h>
#include <aws/timestream-query/model/QueryResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/ConcurrentCache.h>
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

namespace TimestreamQuery
{

namespace Model
{
        class CancelQueryRequest;
        class DescribeEndpointsRequest;
        class QueryRequest;

        typedef Aws::Utils::Outcome<CancelQueryResult, TimestreamQueryError> CancelQueryOutcome;
        typedef Aws::Utils::Outcome<DescribeEndpointsResult, TimestreamQueryError> DescribeEndpointsOutcome;
        typedef Aws::Utils::Outcome<QueryResult, TimestreamQueryError> QueryOutcome;

        typedef std::future<CancelQueryOutcome> CancelQueryOutcomeCallable;
        typedef std::future<DescribeEndpointsOutcome> DescribeEndpointsOutcomeCallable;
        typedef std::future<QueryOutcome> QueryOutcomeCallable;
} // namespace Model

  class TimestreamQueryClient;

    typedef std::function<void(const TimestreamQueryClient*, const Model::CancelQueryRequest&, const Model::CancelQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelQueryResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::DescribeEndpointsRequest&, const Model::DescribeEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointsResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::QueryRequest&, const Model::QueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > QueryResponseReceivedHandler;

  /**
   * <p> </p>
   */
  class AWS_TIMESTREAMQUERY_API TimestreamQueryClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamQueryClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamQueryClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TimestreamQueryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~TimestreamQueryClient();


        /**
         * <p> Cancels a query that has been issued. Cancellation is guaranteed only if the
         * query has not completed execution before the cancellation request was issued.
         * Because cancellation is an idempotent operation, subsequent cancellation
         * requests will return a <code>CancellationMessage</code>, indicating that the
         * query has already been canceled. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/CancelQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelQueryOutcome CancelQuery(const Model::CancelQueryRequest& request) const;

        /**
         * <p> Cancels a query that has been issued. Cancellation is guaranteed only if the
         * query has not completed execution before the cancellation request was issued.
         * Because cancellation is an idempotent operation, subsequent cancellation
         * requests will return a <code>CancellationMessage</code>, indicating that the
         * query has already been canceled. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/CancelQuery">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelQueryOutcomeCallable CancelQueryCallable(const Model::CancelQueryRequest& request) const;

        /**
         * <p> Cancels a query that has been issued. Cancellation is guaranteed only if the
         * query has not completed execution before the cancellation request was issued.
         * Because cancellation is an idempotent operation, subsequent cancellation
         * requests will return a <code>CancellationMessage</code>, indicating that the
         * query has already been canceled. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/CancelQuery">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelQueryAsync(const Model::CancelQueryRequest& request, const CancelQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>DescribeEndpoints returns a list of available endpoints to make Timestream
         * API calls against. This API is available through both Write and Query.</p>
         * <p>Because Timestream’s SDKs are designed to transparently work with the
         * service’s architecture, including the management and mapping of the service
         * endpoints, <i>it is not recommended that you use this API unless</i>:</p> <ul>
         * <li> <p>Your application uses a programming language that does not yet have SDK
         * support</p> </li> <li> <p>You require better control over the client-side
         * implementation</p> </li> </ul> <p>For detailed information on how to use
         * DescribeEndpoints, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/Using-API.endpoint-discovery.html">The
         * Endpoint Discovery Pattern and REST APIs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/DescribeEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointsOutcome DescribeEndpoints(const Model::DescribeEndpointsRequest& request) const;

        /**
         * <p>DescribeEndpoints returns a list of available endpoints to make Timestream
         * API calls against. This API is available through both Write and Query.</p>
         * <p>Because Timestream’s SDKs are designed to transparently work with the
         * service’s architecture, including the management and mapping of the service
         * endpoints, <i>it is not recommended that you use this API unless</i>:</p> <ul>
         * <li> <p>Your application uses a programming language that does not yet have SDK
         * support</p> </li> <li> <p>You require better control over the client-side
         * implementation</p> </li> </ul> <p>For detailed information on how to use
         * DescribeEndpoints, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/Using-API.endpoint-discovery.html">The
         * Endpoint Discovery Pattern and REST APIs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/DescribeEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointsOutcomeCallable DescribeEndpointsCallable(const Model::DescribeEndpointsRequest& request) const;

        /**
         * <p>DescribeEndpoints returns a list of available endpoints to make Timestream
         * API calls against. This API is available through both Write and Query.</p>
         * <p>Because Timestream’s SDKs are designed to transparently work with the
         * service’s architecture, including the management and mapping of the service
         * endpoints, <i>it is not recommended that you use this API unless</i>:</p> <ul>
         * <li> <p>Your application uses a programming language that does not yet have SDK
         * support</p> </li> <li> <p>You require better control over the client-side
         * implementation</p> </li> </ul> <p>For detailed information on how to use
         * DescribeEndpoints, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/Using-API.endpoint-discovery.html">The
         * Endpoint Discovery Pattern and REST APIs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/DescribeEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointsAsync(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Query is a synchronous operation that enables you to execute a query. Query
         * will timeout after 60 seconds. You must update the default timeout in the SDK to
         * support a timeout of 60 seconds. The result set will be truncated to 1MB.
         * Service quotas apply. For more information, see Quotas in the Timestream
         * Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/Query">AWS
         * API Reference</a></p>
         */
        virtual Model::QueryOutcome Query(const Model::QueryRequest& request) const;

        /**
         * <p> Query is a synchronous operation that enables you to execute a query. Query
         * will timeout after 60 seconds. You must update the default timeout in the SDK to
         * support a timeout of 60 seconds. The result set will be truncated to 1MB.
         * Service quotas apply. For more information, see Quotas in the Timestream
         * Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/Query">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::QueryOutcomeCallable QueryCallable(const Model::QueryRequest& request) const;

        /**
         * <p> Query is a synchronous operation that enables you to execute a query. Query
         * will timeout after 60 seconds. You must update the default timeout in the SDK to
         * support a timeout of 60 seconds. The result set will be truncated to 1MB.
         * Service quotas apply. For more information, see Quotas in the Timestream
         * Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/Query">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void QueryAsync(const Model::QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
      void LoadTimestreamQuerySpecificConfig(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelQueryAsyncHelper(const Model::CancelQueryRequest& request, const CancelQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEndpointsAsyncHelper(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void QueryAsyncHelper(const Model::QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      mutable Aws::Utils::ConcurrentCache<Aws::String, Aws::String> m_endpointsCache;
      bool m_enableEndpointDiscovery;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace TimestreamQuery
} // namespace Aws
