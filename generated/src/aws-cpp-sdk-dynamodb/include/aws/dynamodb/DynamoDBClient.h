/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/dynamodb/DynamoDBServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>

namespace Aws
{
namespace DynamoDB
{
  AWS_DYNAMODB_API extern const char SERVICE_NAME[];
  class AWS_DYNAMODB_API DynamoDBClient : smithy::client::AwsSmithyClientT<Aws::DynamoDB::SERVICE_NAME,
      Aws::DynamoDB::DynamoDBClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      DynamoDBEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome>,
    Aws::Client::ClientWithAsyncTemplateMethods<DynamoDBClient>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "DynamoDB"; }

      typedef DynamoDBClientConfiguration ClientConfigurationType;
      typedef DynamoDBEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DynamoDBClient(const Aws::DynamoDB::DynamoDBClientConfiguration& clientConfiguration = Aws::DynamoDB::DynamoDBClientConfiguration(),
                       std::shared_ptr<DynamoDBEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DynamoDBClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<DynamoDBEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::DynamoDB::DynamoDBClientConfiguration& clientConfiguration = Aws::DynamoDB::DynamoDBClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DynamoDBClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<DynamoDBEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::DynamoDB::DynamoDBClientConfiguration& clientConfiguration = Aws::DynamoDB::DynamoDBClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DynamoDBClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DynamoDBClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DynamoDBClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DynamoDBClient();

        /**
         * 
         */
        virtual Model::BatchGetItemOutcome BatchGetItem(const Model::BatchGetItemRequest& request) const;

        /**
         * A Callable wrapper for BatchGetItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetItemRequestT = Model::BatchGetItemRequest>
        Model::BatchGetItemOutcomeCallable BatchGetItemCallable(const BatchGetItemRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::BatchGetItem, request);
        }

        /**
         * An Async wrapper for BatchGetItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetItemRequestT = Model::BatchGetItemRequest>
        void BatchGetItemAsync(const BatchGetItemRequestT& request, const BatchGetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::BatchGetItem, request, handler, context);
        }

        /**
         * 
         */
        virtual Model::BatchWriteItemOutcome BatchWriteItem(const Model::BatchWriteItemRequest& request) const;

        /**
         * A Callable wrapper for BatchWriteItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchWriteItemRequestT = Model::BatchWriteItemRequest>
        Model::BatchWriteItemOutcomeCallable BatchWriteItemCallable(const BatchWriteItemRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::BatchWriteItem, request);
        }

        /**
         * An Async wrapper for BatchWriteItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchWriteItemRequestT = Model::BatchWriteItemRequest>
        void BatchWriteItemAsync(const BatchWriteItemRequestT& request, const BatchWriteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::BatchWriteItem, request, handler, context);
        }

        /**
         * 
         */
        virtual Model::CreateTableOutcome CreateTable(const Model::CreateTableRequest& request) const;

        /**
         * A Callable wrapper for CreateTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTableRequestT = Model::CreateTableRequest>
        Model::CreateTableOutcomeCallable CreateTableCallable(const CreateTableRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::CreateTable, request);
        }

        /**
         * An Async wrapper for CreateTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTableRequestT = Model::CreateTableRequest>
        void CreateTableAsync(const CreateTableRequestT& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::CreateTable, request, handler, context);
        }

        /**
         * 
         */
        virtual Model::DeleteItemOutcome DeleteItem(const Model::DeleteItemRequest& request) const;

        /**
         * A Callable wrapper for DeleteItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteItemRequestT = Model::DeleteItemRequest>
        Model::DeleteItemOutcomeCallable DeleteItemCallable(const DeleteItemRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DeleteItem, request);
        }

        /**
         * An Async wrapper for DeleteItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteItemRequestT = Model::DeleteItemRequest>
        void DeleteItemAsync(const DeleteItemRequestT& request, const DeleteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DeleteItem, request, handler, context);
        }

        /**
         * 
         */
        virtual Model::DeleteTableOutcome DeleteTable(const Model::DeleteTableRequest& request) const;

        /**
         * A Callable wrapper for DeleteTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTableRequestT = Model::DeleteTableRequest>
        Model::DeleteTableOutcomeCallable DeleteTableCallable(const DeleteTableRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DeleteTable, request);
        }

        /**
         * An Async wrapper for DeleteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTableRequestT = Model::DeleteTableRequest>
        void DeleteTableAsync(const DeleteTableRequestT& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DeleteTable, request, handler, context);
        }

        /**
         * 
         */
        virtual Model::DescribeTableOutcome DescribeTable(const Model::DescribeTableRequest& request) const;

        /**
         * A Callable wrapper for DescribeTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTableRequestT = Model::DescribeTableRequest>
        Model::DescribeTableOutcomeCallable DescribeTableCallable(const DescribeTableRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::DescribeTable, request);
        }

        /**
         * An Async wrapper for DescribeTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTableRequestT = Model::DescribeTableRequest>
        void DescribeTableAsync(const DescribeTableRequestT& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::DescribeTable, request, handler, context);
        }

        /**
         * 
         */
        virtual Model::GetItemOutcome GetItem(const Model::GetItemRequest& request) const;

        /**
         * A Callable wrapper for GetItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetItemRequestT = Model::GetItemRequest>
        Model::GetItemOutcomeCallable GetItemCallable(const GetItemRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::GetItem, request);
        }

        /**
         * An Async wrapper for GetItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetItemRequestT = Model::GetItemRequest>
        void GetItemAsync(const GetItemRequestT& request, const GetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::GetItem, request, handler, context);
        }

        /**
         * 
         */
        virtual Model::ListTablesOutcome ListTables(const Model::ListTablesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTablesRequestT = Model::ListTablesRequest>
        Model::ListTablesOutcomeCallable ListTablesCallable(const ListTablesRequestT& request = {}) const
        {
            return SubmitCallable(&DynamoDBClient::ListTables, request);
        }

        /**
         * An Async wrapper for ListTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTablesRequestT = Model::ListTablesRequest>
        void ListTablesAsync(const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListTablesRequestT& request = {}) const
        {
            return SubmitAsync(&DynamoDBClient::ListTables, request, handler, context);
        }

        /**
         * 
         */
        virtual Model::PutItemOutcome PutItem(const Model::PutItemRequest& request) const;

        /**
         * A Callable wrapper for PutItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutItemRequestT = Model::PutItemRequest>
        Model::PutItemOutcomeCallable PutItemCallable(const PutItemRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::PutItem, request);
        }

        /**
         * An Async wrapper for PutItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutItemRequestT = Model::PutItemRequest>
        void PutItemAsync(const PutItemRequestT& request, const PutItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::PutItem, request, handler, context);
        }

        /**
         * 
         */
        virtual Model::QueryOutcome Query(const Model::QueryRequest& request) const;

        /**
         * A Callable wrapper for Query that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename QueryRequestT = Model::QueryRequest>
        Model::QueryOutcomeCallable QueryCallable(const QueryRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::Query, request);
        }

        /**
         * An Async wrapper for Query that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename QueryRequestT = Model::QueryRequest>
        void QueryAsync(const QueryRequestT& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::Query, request, handler, context);
        }

        /**
         * 
         */
        virtual Model::ScanOutcome Scan(const Model::ScanRequest& request) const;

        /**
         * A Callable wrapper for Scan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ScanRequestT = Model::ScanRequest>
        Model::ScanOutcomeCallable ScanCallable(const ScanRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::Scan, request);
        }

        /**
         * An Async wrapper for Scan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ScanRequestT = Model::ScanRequest>
        void ScanAsync(const ScanRequestT& request, const ScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::Scan, request, handler, context);
        }

        /**
         * 
         */
        virtual Model::UpdateItemOutcome UpdateItem(const Model::UpdateItemRequest& request) const;

        /**
         * A Callable wrapper for UpdateItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateItemRequestT = Model::UpdateItemRequest>
        Model::UpdateItemOutcomeCallable UpdateItemCallable(const UpdateItemRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::UpdateItem, request);
        }

        /**
         * An Async wrapper for UpdateItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateItemRequestT = Model::UpdateItemRequest>
        void UpdateItemAsync(const UpdateItemRequestT& request, const UpdateItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::UpdateItem, request, handler, context);
        }

        /**
         * 
         */
        virtual Model::UpdateTableOutcome UpdateTable(const Model::UpdateTableRequest& request) const;

        /**
         * A Callable wrapper for UpdateTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTableRequestT = Model::UpdateTableRequest>
        Model::UpdateTableOutcomeCallable UpdateTableCallable(const UpdateTableRequestT& request) const
        {
            return SubmitCallable(&DynamoDBClient::UpdateTable, request);
        }

        /**
         * An Async wrapper for UpdateTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTableRequestT = Model::UpdateTableRequest>
        void UpdateTableAsync(const UpdateTableRequestT& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DynamoDBClient::UpdateTable, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DynamoDBEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<DynamoDBClient>;
      void init(const DynamoDBClientConfiguration& clientConfiguration);

  };

} // namespace DynamoDB
} // namespace Aws
