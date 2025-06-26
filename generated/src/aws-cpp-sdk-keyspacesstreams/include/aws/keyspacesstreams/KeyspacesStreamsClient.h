/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/keyspacesstreams/KeyspacesStreamsServiceClientModel.h>

namespace Aws
{
namespace KeyspacesStreams
{
  /**
   * <p>Amazon Keyspaces (for Apache Cassandra) change data capture (CDC) records
   * change events for Amazon Keyspaces tables. The change events captured in a
   * stream are time-ordered and de-duplicated write operations. Using stream data
   * you can build event driven applications that incorporate near-real time change
   * events from Amazon Keyspaces tables. </p> <p>Amazon Keyspaces CDC is serverless
   * and scales the infrastructure for change events automatically based on the
   * volume of changes on your table. </p> <p> This API reference describes the
   * Amazon Keyspaces CDC stream API in detail. </p> <p>For more information about
   * Amazon Keyspaces CDC, see <a
   * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/cdc.html">Working
   * with change data capture (CDC) streams in Amazon Keyspaces</a> in the <i>Amazon
   * Keyspaces Developer Guide</i>.</p> <p>To learn how Amazon Keyspaces CDC API
   * actions are recorded with CloudTrail, see <a
   * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/logging-using-cloudtrail.html#service-name-info-in-cloudtrail">Amazon
   * Keyspaces information in CloudTrail</a> in the <i>Amazon Keyspaces Developer
   * Guide</i>.</p> <p>To see the metrics Amazon Keyspaces CDC sends to Amazon
   * CloudWatch, see <a
   * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/metrics-dimensions.html#keyspaces-cdc-metrics">Amazon
   * Keyspaces change data capture (CDC) CloudWatch metrics</a> in the <i>Amazon
   * Keyspaces Developer Guide</i>.</p>
   */
  class AWS_KEYSPACESSTREAMS_API KeyspacesStreamsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<KeyspacesStreamsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef KeyspacesStreamsClientConfiguration ClientConfigurationType;
      typedef KeyspacesStreamsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KeyspacesStreamsClient(const Aws::KeyspacesStreams::KeyspacesStreamsClientConfiguration& clientConfiguration = Aws::KeyspacesStreams::KeyspacesStreamsClientConfiguration(),
                               std::shared_ptr<KeyspacesStreamsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KeyspacesStreamsClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<KeyspacesStreamsEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::KeyspacesStreams::KeyspacesStreamsClientConfiguration& clientConfiguration = Aws::KeyspacesStreams::KeyspacesStreamsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KeyspacesStreamsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<KeyspacesStreamsEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::KeyspacesStreams::KeyspacesStreamsClientConfiguration& clientConfiguration = Aws::KeyspacesStreams::KeyspacesStreamsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KeyspacesStreamsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KeyspacesStreamsClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KeyspacesStreamsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~KeyspacesStreamsClient();

        /**
         * <p>Retrieves data records from a specified shard in an Amazon Keyspaces data
         * stream. This operation returns a collection of data records from the shard,
         * including the primary key columns and information about modifications made to
         * the captured table data. Each record represents a single data modification in
         * the Amazon Keyspaces table and includes metadata about when the change
         * occurred.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspacesstreams-2024-09-09/GetRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecordsOutcome GetRecords(const Model::GetRecordsRequest& request) const;

        /**
         * A Callable wrapper for GetRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRecordsRequestT = Model::GetRecordsRequest>
        Model::GetRecordsOutcomeCallable GetRecordsCallable(const GetRecordsRequestT& request) const
        {
            return SubmitCallable(&KeyspacesStreamsClient::GetRecords, request);
        }

        /**
         * An Async wrapper for GetRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRecordsRequestT = Model::GetRecordsRequest>
        void GetRecordsAsync(const GetRecordsRequestT& request, const GetRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesStreamsClient::GetRecords, request, handler, context);
        }

        /**
         * <p>Returns a shard iterator that serves as a bookmark for reading data from a
         * specific position in an Amazon Keyspaces data stream's shard. The shard iterator
         * specifies the shard position from which to start reading data records
         * sequentially. You can specify whether to begin reading at the latest record, the
         * oldest record, or at a particular sequence number within the
         * shard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspacesstreams-2024-09-09/GetShardIterator">AWS
         * API Reference</a></p>
         */
        virtual Model::GetShardIteratorOutcome GetShardIterator(const Model::GetShardIteratorRequest& request) const;

        /**
         * A Callable wrapper for GetShardIterator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetShardIteratorRequestT = Model::GetShardIteratorRequest>
        Model::GetShardIteratorOutcomeCallable GetShardIteratorCallable(const GetShardIteratorRequestT& request) const
        {
            return SubmitCallable(&KeyspacesStreamsClient::GetShardIterator, request);
        }

        /**
         * An Async wrapper for GetShardIterator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetShardIteratorRequestT = Model::GetShardIteratorRequest>
        void GetShardIteratorAsync(const GetShardIteratorRequestT& request, const GetShardIteratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesStreamsClient::GetShardIterator, request, handler, context);
        }

        /**
         * <p>Returns detailed information about a specific data capture stream for an
         * Amazon Keyspaces table. The information includes the stream's Amazon Resource
         * Name (ARN), creation time, current status, retention period, shard composition,
         * and associated table details. This operation helps you monitor and manage the
         * configuration of your Amazon Keyspaces data streams.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspacesstreams-2024-09-09/GetStream">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamOutcome GetStream(const Model::GetStreamRequest& request) const;

        /**
         * A Callable wrapper for GetStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStreamRequestT = Model::GetStreamRequest>
        Model::GetStreamOutcomeCallable GetStreamCallable(const GetStreamRequestT& request) const
        {
            return SubmitCallable(&KeyspacesStreamsClient::GetStream, request);
        }

        /**
         * An Async wrapper for GetStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStreamRequestT = Model::GetStreamRequest>
        void GetStreamAsync(const GetStreamRequestT& request, const GetStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesStreamsClient::GetStream, request, handler, context);
        }

        /**
         * <p>Returns a list of all data capture streams associated with your Amazon
         * Keyspaces account or for a specific keyspace or table. The response includes
         * information such as stream ARNs, table associations, creation timestamps, and
         * current status. This operation helps you discover and manage all active data
         * streams in your Amazon Keyspaces environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspacesstreams-2024-09-09/ListStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamsOutcome ListStreams(const Model::ListStreamsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListStreams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStreamsRequestT = Model::ListStreamsRequest>
        Model::ListStreamsOutcomeCallable ListStreamsCallable(const ListStreamsRequestT& request = {}) const
        {
            return SubmitCallable(&KeyspacesStreamsClient::ListStreams, request);
        }

        /**
         * An Async wrapper for ListStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStreamsRequestT = Model::ListStreamsRequest>
        void ListStreamsAsync(const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListStreamsRequestT& request = {}) const
        {
            return SubmitAsync(&KeyspacesStreamsClient::ListStreams, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<KeyspacesStreamsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<KeyspacesStreamsClient>;
      void init(const KeyspacesStreamsClientConfiguration& clientConfiguration);

      KeyspacesStreamsClientConfiguration m_clientConfiguration;
      std::shared_ptr<KeyspacesStreamsEndpointProviderBase> m_endpointProvider;
  };

} // namespace KeyspacesStreams
} // namespace Aws
