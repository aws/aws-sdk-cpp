/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastic-inference/ElasticInference_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elastic-inference/ElasticInferenceServiceClientModel.h>

namespace Aws
{
namespace ElasticInference
{
  /**
   * <p> Elastic Inference public APIs. </p>
   */
  class AWS_ELASTICINFERENCE_API ElasticInferenceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ElasticInferenceClient>
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

        /**
         * <p> Describes the locations in which a given accelerator type or set of types is
         * present in a given region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/DescribeAcceleratorOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAcceleratorOfferingsOutcome DescribeAcceleratorOfferings(const Model::DescribeAcceleratorOfferingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAcceleratorOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAcceleratorOfferingsOutcomeCallable DescribeAcceleratorOfferingsCallable(const Model::DescribeAcceleratorOfferingsRequest& request) const;

        /**
         * An Async wrapper for DescribeAcceleratorOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAcceleratorOfferingsAsync(const Model::DescribeAcceleratorOfferingsRequest& request, const DescribeAcceleratorOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Describes the accelerator types available in a given region, as well as
         * their characteristics, such as memory and throughput. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/DescribeAcceleratorTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAcceleratorTypesOutcome DescribeAcceleratorTypes(const Model::DescribeAcceleratorTypesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAcceleratorTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAcceleratorTypesOutcomeCallable DescribeAcceleratorTypesCallable(const Model::DescribeAcceleratorTypesRequest& request) const;

        /**
         * An Async wrapper for DescribeAcceleratorTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAcceleratorTypesAsync(const Model::DescribeAcceleratorTypesRequest& request, const DescribeAcceleratorTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Describes information over a provided set of accelerators belonging to an
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/DescribeAccelerators">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAcceleratorsOutcome DescribeAccelerators(const Model::DescribeAcceleratorsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccelerators that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAcceleratorsOutcomeCallable DescribeAcceleratorsCallable(const Model::DescribeAcceleratorsRequest& request) const;

        /**
         * An Async wrapper for DescribeAccelerators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAcceleratorsAsync(const Model::DescribeAcceleratorsRequest& request, const DescribeAcceleratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns all tags of an Elastic Inference Accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Adds the specified tags to an Elastic Inference Accelerator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Removes the specified tags from an Elastic Inference Accelerator.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ElasticInferenceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ElasticInferenceClient>;
      void init(const ElasticInferenceClientConfiguration& clientConfiguration);

      ElasticInferenceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ElasticInferenceEndpointProviderBase> m_endpointProvider;
  };

} // namespace ElasticInference
} // namespace Aws
