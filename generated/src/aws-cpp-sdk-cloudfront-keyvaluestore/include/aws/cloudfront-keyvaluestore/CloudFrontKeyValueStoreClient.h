/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStore_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreServiceClientModel.h>

namespace Aws
{
namespace CloudFrontKeyValueStore
{
  /**
   * <p>Amazon CloudFront KeyValueStore Service to View and Update Data in a KVS
   * Resource</p>
   */
  class AWS_CLOUDFRONTKEYVALUESTORE_API CloudFrontKeyValueStoreClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CloudFrontKeyValueStoreClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CloudFrontKeyValueStoreClientConfiguration ClientConfigurationType;
      typedef CloudFrontKeyValueStoreEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFrontKeyValueStoreClient(const Aws::CloudFrontKeyValueStore::CloudFrontKeyValueStoreClientConfiguration& clientConfiguration = Aws::CloudFrontKeyValueStore::CloudFrontKeyValueStoreClientConfiguration(),
                                      std::shared_ptr<CloudFrontKeyValueStoreEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFrontKeyValueStoreClient(const Aws::Auth::AWSCredentials& credentials,
                                      std::shared_ptr<CloudFrontKeyValueStoreEndpointProviderBase> endpointProvider = nullptr,
                                      const Aws::CloudFrontKeyValueStore::CloudFrontKeyValueStoreClientConfiguration& clientConfiguration = Aws::CloudFrontKeyValueStore::CloudFrontKeyValueStoreClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudFrontKeyValueStoreClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      std::shared_ptr<CloudFrontKeyValueStoreEndpointProviderBase> endpointProvider = nullptr,
                                      const Aws::CloudFrontKeyValueStore::CloudFrontKeyValueStoreClientConfiguration& clientConfiguration = Aws::CloudFrontKeyValueStore::CloudFrontKeyValueStoreClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFrontKeyValueStoreClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFrontKeyValueStoreClient(const Aws::Auth::AWSCredentials& credentials,
                                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudFrontKeyValueStoreClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CloudFrontKeyValueStoreClient();

        /**
         * <p>Deletes the key value pair specified by the key.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-keyvaluestore-2022-07-26/DeleteKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKeyOutcome DeleteKey(const Model::DeleteKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKeyRequestT = Model::DeleteKeyRequest>
        Model::DeleteKeyOutcomeCallable DeleteKeyCallable(const DeleteKeyRequestT& request) const
        {
            return SubmitCallable(&CloudFrontKeyValueStoreClient::DeleteKey, request);
        }

        /**
         * An Async wrapper for DeleteKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKeyRequestT = Model::DeleteKeyRequest>
        void DeleteKeyAsync(const DeleteKeyRequestT& request, const DeleteKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontKeyValueStoreClient::DeleteKey, request, handler, context);
        }

        /**
         * <p>Returns metadata information about Key Value Store.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-keyvaluestore-2022-07-26/DescribeKeyValueStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeKeyValueStoreOutcome DescribeKeyValueStore(const Model::DescribeKeyValueStoreRequest& request) const;

        /**
         * A Callable wrapper for DescribeKeyValueStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeKeyValueStoreRequestT = Model::DescribeKeyValueStoreRequest>
        Model::DescribeKeyValueStoreOutcomeCallable DescribeKeyValueStoreCallable(const DescribeKeyValueStoreRequestT& request) const
        {
            return SubmitCallable(&CloudFrontKeyValueStoreClient::DescribeKeyValueStore, request);
        }

        /**
         * An Async wrapper for DescribeKeyValueStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeKeyValueStoreRequestT = Model::DescribeKeyValueStoreRequest>
        void DescribeKeyValueStoreAsync(const DescribeKeyValueStoreRequestT& request, const DescribeKeyValueStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontKeyValueStoreClient::DescribeKeyValueStore, request, handler, context);
        }

        /**
         * <p>Returns a key value pair.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-keyvaluestore-2022-07-26/GetKey">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKeyOutcome GetKey(const Model::GetKeyRequest& request) const;

        /**
         * A Callable wrapper for GetKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKeyRequestT = Model::GetKeyRequest>
        Model::GetKeyOutcomeCallable GetKeyCallable(const GetKeyRequestT& request) const
        {
            return SubmitCallable(&CloudFrontKeyValueStoreClient::GetKey, request);
        }

        /**
         * An Async wrapper for GetKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKeyRequestT = Model::GetKeyRequest>
        void GetKeyAsync(const GetKeyRequestT& request, const GetKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontKeyValueStoreClient::GetKey, request, handler, context);
        }

        /**
         * <p>Returns a list of key value pairs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-keyvaluestore-2022-07-26/ListKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKeysOutcome ListKeys(const Model::ListKeysRequest& request) const;

        /**
         * A Callable wrapper for ListKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKeysRequestT = Model::ListKeysRequest>
        Model::ListKeysOutcomeCallable ListKeysCallable(const ListKeysRequestT& request) const
        {
            return SubmitCallable(&CloudFrontKeyValueStoreClient::ListKeys, request);
        }

        /**
         * An Async wrapper for ListKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKeysRequestT = Model::ListKeysRequest>
        void ListKeysAsync(const ListKeysRequestT& request, const ListKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontKeyValueStoreClient::ListKeys, request, handler, context);
        }

        /**
         * <p>Creates a new key value pair or replaces the value of an existing
         * key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-keyvaluestore-2022-07-26/PutKey">AWS
         * API Reference</a></p>
         */
        virtual Model::PutKeyOutcome PutKey(const Model::PutKeyRequest& request) const;

        /**
         * A Callable wrapper for PutKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutKeyRequestT = Model::PutKeyRequest>
        Model::PutKeyOutcomeCallable PutKeyCallable(const PutKeyRequestT& request) const
        {
            return SubmitCallable(&CloudFrontKeyValueStoreClient::PutKey, request);
        }

        /**
         * An Async wrapper for PutKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutKeyRequestT = Model::PutKeyRequest>
        void PutKeyAsync(const PutKeyRequestT& request, const PutKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontKeyValueStoreClient::PutKey, request, handler, context);
        }

        /**
         * <p>Puts or Deletes multiple key value pairs in a single, all-or-nothing
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-keyvaluestore-2022-07-26/UpdateKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKeysOutcome UpdateKeys(const Model::UpdateKeysRequest& request) const;

        /**
         * A Callable wrapper for UpdateKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateKeysRequestT = Model::UpdateKeysRequest>
        Model::UpdateKeysOutcomeCallable UpdateKeysCallable(const UpdateKeysRequestT& request) const
        {
            return SubmitCallable(&CloudFrontKeyValueStoreClient::UpdateKeys, request);
        }

        /**
         * An Async wrapper for UpdateKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateKeysRequestT = Model::UpdateKeysRequest>
        void UpdateKeysAsync(const UpdateKeysRequestT& request, const UpdateKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontKeyValueStoreClient::UpdateKeys, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CloudFrontKeyValueStoreEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudFrontKeyValueStoreClient>;
      void init(const CloudFrontKeyValueStoreClientConfiguration& clientConfiguration);

      CloudFrontKeyValueStoreClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CloudFrontKeyValueStoreEndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudFrontKeyValueStore
} // namespace Aws
