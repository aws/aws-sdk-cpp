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
   * <p> Elastic Inference public APIs. </p> <p> February 15, 2023: Starting April
   * 15, 2023, AWS will not onboard new customers to Amazon Elastic Inference (EI),
   * and will help current customers migrate their workloads to options that offer
   * better price and performance. After April 15, 2023, new customers will not be
   * able to launch instances with Amazon EI accelerators in Amazon SageMaker, Amazon
   * ECS, or Amazon EC2. However, customers who have used Amazon EI at least once
   * during the past 30-day period are considered current customers and will be able
   * to continue using the service. </p>
   */
  class AWS_ELASTICINFERENCE_API ElasticInferenceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ElasticInferenceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ElasticInferenceClientConfiguration ClientConfigurationType;
      typedef ElasticInferenceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticInferenceClient(const Aws::ElasticInference::ElasticInferenceClientConfiguration& clientConfiguration = Aws::ElasticInference::ElasticInferenceClientConfiguration(),
                               std::shared_ptr<ElasticInferenceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticInferenceClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<ElasticInferenceEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::ElasticInference::ElasticInferenceClientConfiguration& clientConfiguration = Aws::ElasticInference::ElasticInferenceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticInferenceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<ElasticInferenceEndpointProviderBase> endpointProvider = nullptr,
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
         * present in a given region. </p> <p> February 15, 2023: Starting April 15, 2023,
         * AWS will not onboard new customers to Amazon Elastic Inference (EI), and will
         * help current customers migrate their workloads to options that offer better
         * price and performance. After April 15, 2023, new customers will not be able to
         * launch instances with Amazon EI accelerators in Amazon SageMaker, Amazon ECS, or
         * Amazon EC2. However, customers who have used Amazon EI at least once during the
         * past 30-day period are considered current customers and will be able to continue
         * using the service. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/DescribeAcceleratorOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAcceleratorOfferingsOutcome DescribeAcceleratorOfferings(const Model::DescribeAcceleratorOfferingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAcceleratorOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAcceleratorOfferingsRequestT = Model::DescribeAcceleratorOfferingsRequest>
        Model::DescribeAcceleratorOfferingsOutcomeCallable DescribeAcceleratorOfferingsCallable(const DescribeAcceleratorOfferingsRequestT& request) const
        {
            return SubmitCallable(&ElasticInferenceClient::DescribeAcceleratorOfferings, request);
        }

        /**
         * An Async wrapper for DescribeAcceleratorOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAcceleratorOfferingsRequestT = Model::DescribeAcceleratorOfferingsRequest>
        void DescribeAcceleratorOfferingsAsync(const DescribeAcceleratorOfferingsRequestT& request, const DescribeAcceleratorOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticInferenceClient::DescribeAcceleratorOfferings, request, handler, context);
        }

        /**
         * <p> Describes the accelerator types available in a given region, as well as
         * their characteristics, such as memory and throughput. </p> <p> February 15,
         * 2023: Starting April 15, 2023, AWS will not onboard new customers to Amazon
         * Elastic Inference (EI), and will help current customers migrate their workloads
         * to options that offer better price and performance. After April 15, 2023, new
         * customers will not be able to launch instances with Amazon EI accelerators in
         * Amazon SageMaker, Amazon ECS, or Amazon EC2. However, customers who have used
         * Amazon EI at least once during the past 30-day period are considered current
         * customers and will be able to continue using the service. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/DescribeAcceleratorTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAcceleratorTypesOutcome DescribeAcceleratorTypes(const Model::DescribeAcceleratorTypesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAcceleratorTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAcceleratorTypesRequestT = Model::DescribeAcceleratorTypesRequest>
        Model::DescribeAcceleratorTypesOutcomeCallable DescribeAcceleratorTypesCallable(const DescribeAcceleratorTypesRequestT& request) const
        {
            return SubmitCallable(&ElasticInferenceClient::DescribeAcceleratorTypes, request);
        }

        /**
         * An Async wrapper for DescribeAcceleratorTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAcceleratorTypesRequestT = Model::DescribeAcceleratorTypesRequest>
        void DescribeAcceleratorTypesAsync(const DescribeAcceleratorTypesRequestT& request, const DescribeAcceleratorTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticInferenceClient::DescribeAcceleratorTypes, request, handler, context);
        }

        /**
         * <p> Describes information over a provided set of accelerators belonging to an
         * account. </p> <p> February 15, 2023: Starting April 15, 2023, AWS will not
         * onboard new customers to Amazon Elastic Inference (EI), and will help current
         * customers migrate their workloads to options that offer better price and
         * performance. After April 15, 2023, new customers will not be able to launch
         * instances with Amazon EI accelerators in Amazon SageMaker, Amazon ECS, or Amazon
         * EC2. However, customers who have used Amazon EI at least once during the past
         * 30-day period are considered current customers and will be able to continue
         * using the service. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/DescribeAccelerators">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAcceleratorsOutcome DescribeAccelerators(const Model::DescribeAcceleratorsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccelerators that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAcceleratorsRequestT = Model::DescribeAcceleratorsRequest>
        Model::DescribeAcceleratorsOutcomeCallable DescribeAcceleratorsCallable(const DescribeAcceleratorsRequestT& request) const
        {
            return SubmitCallable(&ElasticInferenceClient::DescribeAccelerators, request);
        }

        /**
         * An Async wrapper for DescribeAccelerators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAcceleratorsRequestT = Model::DescribeAcceleratorsRequest>
        void DescribeAcceleratorsAsync(const DescribeAcceleratorsRequestT& request, const DescribeAcceleratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticInferenceClient::DescribeAccelerators, request, handler, context);
        }

        /**
         * <p> Returns all tags of an Elastic Inference Accelerator. </p> <p> February 15,
         * 2023: Starting April 15, 2023, AWS will not onboard new customers to Amazon
         * Elastic Inference (EI), and will help current customers migrate their workloads
         * to options that offer better price and performance. After April 15, 2023, new
         * customers will not be able to launch instances with Amazon EI accelerators in
         * Amazon SageMaker, Amazon ECS, or Amazon EC2. However, customers who have used
         * Amazon EI at least once during the past 30-day period are considered current
         * customers and will be able to continue using the service. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ElasticInferenceClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticInferenceClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p> Adds the specified tags to an Elastic Inference Accelerator. </p> <p>
         * February 15, 2023: Starting April 15, 2023, AWS will not onboard new customers
         * to Amazon Elastic Inference (EI), and will help current customers migrate their
         * workloads to options that offer better price and performance. After April 15,
         * 2023, new customers will not be able to launch instances with Amazon EI
         * accelerators in Amazon SageMaker, Amazon ECS, or Amazon EC2. However, customers
         * who have used Amazon EI at least once during the past 30-day period are
         * considered current customers and will be able to continue using the service.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ElasticInferenceClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticInferenceClient::TagResource, request, handler, context);
        }

        /**
         * <p> Removes the specified tags from an Elastic Inference Accelerator. </p> <p>
         * February 15, 2023: Starting April 15, 2023, AWS will not onboard new customers
         * to Amazon Elastic Inference (EI), and will help current customers migrate their
         * workloads to options that offer better price and performance. After April 15,
         * 2023, new customers will not be able to launch instances with Amazon EI
         * accelerators in Amazon SageMaker, Amazon ECS, or Amazon EC2. However, customers
         * who have used Amazon EI at least once during the past 30-day period are
         * considered current customers and will be able to continue using the service.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ElasticInferenceClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticInferenceClient::UntagResource, request, handler, context);
        }


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
