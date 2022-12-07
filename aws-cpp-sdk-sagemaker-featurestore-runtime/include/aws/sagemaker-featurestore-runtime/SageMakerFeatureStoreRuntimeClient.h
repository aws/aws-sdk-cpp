/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeServiceClientModel.h>

namespace Aws
{
namespace SageMakerFeatureStoreRuntime
{
  /**
   * <p>Contains all data plane API operations and data types for the Amazon
   * SageMaker Feature Store. Use this API to put, delete, and retrieve (get)
   * features from a feature store.</p> <p>Use the following operations to configure
   * your <code>OnlineStore</code> and <code>OfflineStore</code> features, and to
   * create and manage feature groups:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateFeatureGroup.html">CreateFeatureGroup</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DeleteFeatureGroup.html">DeleteFeatureGroup</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeFeatureGroup.html">DescribeFeatureGroup</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ListFeatureGroups.html">ListFeatureGroups</a>
   * </p> </li> </ul>
   */
  class AWS_SAGEMAKERFEATURESTORERUNTIME_API SageMakerFeatureStoreRuntimeClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SageMakerFeatureStoreRuntimeClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerFeatureStoreRuntimeClient(const Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration& clientConfiguration = Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration(),
                                           std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase> endpointProvider = Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerFeatureStoreRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                                           std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase> endpointProvider = Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG),
                                           const Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration& clientConfiguration = Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerFeatureStoreRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase> endpointProvider = Aws::MakeShared<SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG),
                                           const Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration& clientConfiguration = Aws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerFeatureStoreRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerFeatureStoreRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerFeatureStoreRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SageMakerFeatureStoreRuntimeClient();

        /**
         * <p>Retrieves a batch of <code>Records</code> from a
         * <code>FeatureGroup</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/BatchGetRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetRecordOutcome BatchGetRecord(const Model::BatchGetRecordRequest& request) const;

        /**
         * A Callable wrapper for BatchGetRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetRecordOutcomeCallable BatchGetRecordCallable(const Model::BatchGetRecordRequest& request) const;

        /**
         * An Async wrapper for BatchGetRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetRecordAsync(const Model::BatchGetRecordRequest& request, const BatchGetRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <code>Record</code> from a <code>FeatureGroup</code>. When the
         * <code>DeleteRecord</code> API is called a new record will be added to the
         * <code>OfflineStore</code> and the <code>Record</code> will be removed from the
         * <code>OnlineStore</code>. This record will have a value of <code>True</code> in
         * the <code>is_deleted</code> column.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/DeleteRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecordOutcome DeleteRecord(const Model::DeleteRecordRequest& request) const;

        /**
         * A Callable wrapper for DeleteRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRecordOutcomeCallable DeleteRecordCallable(const Model::DeleteRecordRequest& request) const;

        /**
         * An Async wrapper for DeleteRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRecordAsync(const Model::DeleteRecordRequest& request, const DeleteRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use for <code>OnlineStore</code> serving from a <code>FeatureStore</code>.
         * Only the latest records stored in the <code>OnlineStore</code> can be retrieved.
         * If no Record with <code>RecordIdentifierValue</code> is found, then an empty
         * result is returned. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/GetRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecordOutcome GetRecord(const Model::GetRecordRequest& request) const;

        /**
         * A Callable wrapper for GetRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecordOutcomeCallable GetRecordCallable(const Model::GetRecordRequest& request) const;

        /**
         * An Async wrapper for GetRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecordAsync(const Model::GetRecordRequest& request, const GetRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used for data ingestion into the <code>FeatureStore</code>. The
         * <code>PutRecord</code> API writes to both the <code>OnlineStore</code> and
         * <code>OfflineStore</code>. If the record is the latest record for the
         * <code>recordIdentifier</code>, the record is written to both the
         * <code>OnlineStore</code> and <code>OfflineStore</code>. If the record is a
         * historic record, it is written only to the
         * <code>OfflineStore</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/PutRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRecordOutcome PutRecord(const Model::PutRecordRequest& request) const;

        /**
         * A Callable wrapper for PutRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRecordOutcomeCallable PutRecordCallable(const Model::PutRecordRequest& request) const;

        /**
         * An Async wrapper for PutRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRecordAsync(const Model::PutRecordRequest& request, const PutRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SageMakerFeatureStoreRuntimeClient>;
      void init(const SageMakerFeatureStoreRuntimeClientConfiguration& clientConfiguration);

      SageMakerFeatureStoreRuntimeClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SageMakerFeatureStoreRuntimeEndpointProviderBase> m_endpointProvider;
  };

} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
