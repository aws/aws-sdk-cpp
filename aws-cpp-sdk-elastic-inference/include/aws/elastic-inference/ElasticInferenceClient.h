/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastic-inference/ElasticInference_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elastic-inference/ElasticInferenceServiceClientModel.h>
#include <aws/elastic-inference/ElasticInferenceLegacyAsyncMacros.h>

namespace Aws
{
namespace ElasticInference
{
  /**
   * <p> Elastic Inference public APIs. </p>
   */
  class AWS_ELASTICINFERENCE_API ElasticInferenceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticInferenceClient(const Aws::ElasticInference::ElasticInferenceClientConfiguration& clientConfiguration = Aws::ElasticInference::ElasticInferenceClientConfiguration(),
                               std::shared_ptr<ElasticInferenceEndpointProviderBase> endpointProvider = Aws::MakeShared<ElasticInferenceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticInferenceClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<ElasticInferenceEndpointProviderBase> endpointProvider = Aws::MakeShared<ElasticInferenceEndpointProvider>(ALLOCATION_TAG),
                               const Aws::ElasticInference::ElasticInferenceClientConfiguration& clientConfiguration = Aws::ElasticInference::ElasticInferenceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticInferenceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<ElasticInferenceEndpointProviderBase> endpointProvider = Aws::MakeShared<ElasticInferenceEndpointProvider>(ALLOCATION_TAG),
                               const Aws::ElasticInference::ElasticInferenceClientConfiguration& clientConfiguration = Aws::ElasticInference::ElasticInferenceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticInferenceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticInferenceClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticInferenceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ElasticInferenceClient();


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
         * <p> Describes the locations in which a given accelerator type or set of types is
         * present in a given region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/DescribeAcceleratorOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAcceleratorOfferingsOutcome DescribeAcceleratorOfferings(const Model::DescribeAcceleratorOfferingsRequest& request) const;


        /**
         * <p> Describes the accelerator types available in a given region, as well as
         * their characteristics, such as memory and throughput. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/DescribeAcceleratorTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAcceleratorTypesOutcome DescribeAcceleratorTypes(const Model::DescribeAcceleratorTypesRequest& request) const;


        /**
         * <p> Describes information over a provided set of accelerators belonging to an
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/DescribeAccelerators">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAcceleratorsOutcome DescribeAccelerators(const Model::DescribeAcceleratorsRequest& request) const;


        /**
         * <p> Returns all tags of an Elastic Inference Accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p> Adds the specified tags to an Elastic Inference Accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p> Removes the specified tags from an Elastic Inference Accelerator.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ElasticInferenceEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ElasticInferenceClientConfiguration& clientConfiguration);

      ElasticInferenceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ElasticInferenceEndpointProviderBase> m_endpointProvider;
  };

} // namespace ElasticInference
} // namespace Aws
