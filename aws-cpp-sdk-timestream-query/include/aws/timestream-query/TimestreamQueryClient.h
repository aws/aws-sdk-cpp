/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-query/TimestreamQueryServiceClientModel.h>
#include <aws/timestream-query/TimestreamQueryLegacyAsyncMacros.h>

namespace Aws
{
namespace TimestreamQuery
{
  /**
   * <fullname>Amazon Timestream Query </fullname> <p/>
   */
  class AWS_TIMESTREAMQUERY_API TimestreamQueryClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamQueryClient(const Aws::TimestreamQuery::TimestreamQueryClientConfiguration& clientConfiguration = Aws::TimestreamQuery::TimestreamQueryClientConfiguration(),
                              std::shared_ptr<TimestreamQueryEndpointProviderBase> endpointProvider = Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamQueryClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<TimestreamQueryEndpointProviderBase> endpointProvider = Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG),
                              const Aws::TimestreamQuery::TimestreamQueryClientConfiguration& clientConfiguration = Aws::TimestreamQuery::TimestreamQueryClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TimestreamQueryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<TimestreamQueryEndpointProviderBase> endpointProvider = Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG),
                              const Aws::TimestreamQuery::TimestreamQueryClientConfiguration& clientConfiguration = Aws::TimestreamQuery::TimestreamQueryClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamQueryClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamQueryClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TimestreamQueryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~TimestreamQueryClient();


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
         * <p> Cancels a query that has been issued. Cancellation is provided only if the
         * query has not completed running before the cancellation request was issued.
         * Because cancellation is an idempotent operation, subsequent cancellation
         * requests will return a <code>CancellationMessage</code>, indicating that the
         * query has already been canceled. See <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.cancel-query.html">code
         * sample</a> for details. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/CancelQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelQueryOutcome CancelQuery(const Model::CancelQueryRequest& request) const;


        /**
         * <p> Create a scheduled query that will be run on your behalf at the configured
         * schedule. Timestream assumes the execution role provided as part of the
         * <code>ScheduledQueryExecutionRoleArn</code> parameter to run the query. You can
         * use the <code>NotificationConfiguration</code> parameter to configure
         * notification for your scheduled query operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/CreateScheduledQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScheduledQueryOutcome CreateScheduledQuery(const Model::CreateScheduledQueryRequest& request) const;


        /**
         * <p>Deletes a given scheduled query. This is an irreversible operation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/DeleteScheduledQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduledQueryOutcome DeleteScheduledQuery(const Model::DeleteScheduledQueryRequest& request) const;


        /**
         * <p>DescribeEndpoints returns a list of available endpoints to make Timestream
         * API calls against. This API is available through both Write and Query.</p>
         * <p>Because the Timestream SDKs are designed to transparently work with the
         * service’s architecture, including the management and mapping of the service
         * endpoints, <i>it is not recommended that you use this API unless</i>:</p> <ul>
         * <li> <p>You are using <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/VPCEndpoints">VPC
         * endpoints (Amazon Web Services PrivateLink) with Timestream </a> </p> </li> <li>
         * <p>Your application uses a programming language that does not yet have SDK
         * support</p> </li> <li> <p>You require better control over the client-side
         * implementation</p> </li> </ul> <p>For detailed information on how and when to
         * use and implement DescribeEndpoints, see <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/Using.API.html#Using-API.endpoint-discovery">The
         * Endpoint Discovery Pattern</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/DescribeEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointsOutcome DescribeEndpoints(const Model::DescribeEndpointsRequest& request) const;


        /**
         * <p>Provides detailed information about a scheduled query.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/DescribeScheduledQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduledQueryOutcome DescribeScheduledQuery(const Model::DescribeScheduledQueryRequest& request) const;


        /**
         * <p> You can use this API to run a scheduled query manually. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ExecuteScheduledQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteScheduledQueryOutcome ExecuteScheduledQuery(const Model::ExecuteScheduledQueryRequest& request) const;


        /**
         * <p>Gets a list of all scheduled queries in the caller's Amazon account and
         * Region. <code>ListScheduledQueries</code> is eventually consistent.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ListScheduledQueries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListScheduledQueriesOutcome ListScheduledQueries(const Model::ListScheduledQueriesRequest& request) const;


        /**
         * <p>List all tags on a Timestream query resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>A synchronous operation that allows you to submit a query with parameters to
         * be stored by Timestream for later running. Timestream only supports using this
         * operation with the <code>PrepareQueryRequest$ValidateOnly</code> set to
         * <code>true</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/PrepareQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::PrepareQueryOutcome PrepareQuery(const Model::PrepareQueryRequest& request) const;


        /**
         * <p> <code>Query</code> is a synchronous operation that enables you to run a
         * query against your Amazon Timestream data. <code>Query</code> will time out
         * after 60 seconds. You must update the default timeout in the SDK to support a
         * timeout of 60 seconds. See the <a
         * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.run-query.html">code
         * sample</a> for details. </p> <p>Your query request will fail in the following
         * cases:</p> <ul> <li> <p> If you submit a <code>Query</code> request with the
         * same client token outside of the 5-minute idempotency window. </p> </li> <li>
         * <p> If you submit a <code>Query</code> request with the same client token, but
         * change other parameters, within the 5-minute idempotency window. </p> </li> <li>
         * <p> If the size of the row (including the query metadata) exceeds 1 MB, then the
         * query will fail with the following error message: </p> <p> <code>Query aborted
         * as max page response size has been exceeded by the output result row</code> </p>
         * </li> <li> <p> If the IAM principal of the query initiator and the result reader
         * are not the same and/or the query initiator and the result reader do not have
         * the same query string in the query requests, the query will fail with an
         * <code>Invalid pagination token</code> error. </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/Query">AWS
         * API Reference</a></p>
         */
        virtual Model::QueryOutcome Query(const Model::QueryRequest& request) const;


        /**
         * <p>Associate a set of tags with a Timestream resource. You can then activate
         * these user-defined tags so that they appear on the Billing and Cost Management
         * console for cost allocation tracking. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes the association of tags from a Timestream query
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Update a scheduled query.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/UpdateScheduledQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateScheduledQueryOutcome UpdateScheduledQuery(const Model::UpdateScheduledQueryRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<TimestreamQueryEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const TimestreamQueryClientConfiguration& clientConfiguration);

      mutable Aws::Utils::ConcurrentCache<Aws::String, Aws::String> m_endpointsCache;
      TimestreamQueryClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<TimestreamQueryEndpointProviderBase> m_endpointProvider;
  };

} // namespace TimestreamQuery
} // namespace Aws
