/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pricing/PricingServiceClientModel.h>

namespace Aws
{
namespace Pricing
{
  /**
   * <p>Amazon Web Services Price List API is a centralized and convenient way to
   * programmatically query Amazon Web Services for services, products, and pricing
   * information. The Amazon Web Services Price List uses standardized product
   * attributes such as <code>Location</code>, <code>Storage Class</code>, and
   * <code>Operating System</code>, and provides prices at the SKU level. You can use
   * the Amazon Web Services Price List to build cost control and scenario planning
   * tools, reconcile billing data, forecast future spend for budgeting purposes, and
   * provide cost benefit analysis that compare your internal workloads with Amazon
   * Web Services.</p> <p>Use <code>GetServices</code> without a service code to
   * retrieve the service codes for all AWS services, then <code>GetServices</code>
   * with a service code to retrieve the attribute names for that service. After you
   * have the service code and attribute names, you can use
   * <code>GetAttributeValues</code> to see what values are available for an
   * attribute. With the service code and an attribute name and value, you can use
   * <code>GetProducts</code> to find specific products that you're interested in,
   * such as an <code>AmazonEC2</code> instance, with a <code>Provisioned IOPS</code>
   * <code>volumeType</code>.</p> <p>Service Endpoint</p> <p>Amazon Web Services
   * Price List service API provides the following two endpoints:</p> <ul> <li>
   * <p>https://api.pricing.us-east-1.amazonaws.com</p> </li> <li>
   * <p>https://api.pricing.ap-south-1.amazonaws.com</p> </li> </ul>
   */
  class AWS_PRICING_API PricingClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PricingClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PricingClient(const Aws::Pricing::PricingClientConfiguration& clientConfiguration = Aws::Pricing::PricingClientConfiguration(),
                      std::shared_ptr<PricingEndpointProviderBase> endpointProvider = Aws::MakeShared<PricingEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PricingClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<PricingEndpointProviderBase> endpointProvider = Aws::MakeShared<PricingEndpointProvider>(ALLOCATION_TAG),
                      const Aws::Pricing::PricingClientConfiguration& clientConfiguration = Aws::Pricing::PricingClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PricingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<PricingEndpointProviderBase> endpointProvider = Aws::MakeShared<PricingEndpointProvider>(ALLOCATION_TAG),
                      const Aws::Pricing::PricingClientConfiguration& clientConfiguration = Aws::Pricing::PricingClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PricingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PricingClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PricingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PricingClient();

        /**
         * <p>Returns the metadata for one service or a list of the metadata for all
         * services. Use this without a service code to get the service codes for all
         * services. Use it with a service code, such as <code>AmazonEC2</code>, to get
         * information specific to that service, such as the attribute names available for
         * that service. For example, some of the attribute names available for EC2 are
         * <code>volumeType</code>, <code>maxIopsVolume</code>, <code>operation</code>,
         * <code>locationType</code>, and
         * <code>instanceCapacity10xlarge</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-2017-10-15/DescribeServices">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServicesOutcome DescribeServices(const Model::DescribeServicesRequest& request) const;

        /**
         * A Callable wrapper for DescribeServices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServicesOutcomeCallable DescribeServicesCallable(const Model::DescribeServicesRequest& request) const;

        /**
         * An Async wrapper for DescribeServices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServicesAsync(const Model::DescribeServicesRequest& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of attribute values. Attributes are similar to the details in
         * a Price List API offer file. For a list of available attributes, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/reading-an-offer.html#pps-defs">Offer
         * File Definitions</a> in the <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/billing-what-is.html">Billing
         * and Cost Management User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-2017-10-15/GetAttributeValues">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAttributeValuesOutcome GetAttributeValues(const Model::GetAttributeValuesRequest& request) const;

        /**
         * A Callable wrapper for GetAttributeValues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAttributeValuesOutcomeCallable GetAttributeValuesCallable(const Model::GetAttributeValuesRequest& request) const;

        /**
         * An Async wrapper for GetAttributeValues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAttributeValuesAsync(const Model::GetAttributeValuesRequest& request, const GetAttributeValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all products that match the filter criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-2017-10-15/GetProducts">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProductsOutcome GetProducts(const Model::GetProductsRequest& request) const;

        /**
         * A Callable wrapper for GetProducts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProductsOutcomeCallable GetProductsCallable(const Model::GetProductsRequest& request) const;

        /**
         * An Async wrapper for GetProducts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProductsAsync(const Model::GetProductsRequest& request, const GetProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PricingEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PricingClient>;
      void init(const PricingClientConfiguration& clientConfiguration);

      PricingClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PricingEndpointProviderBase> m_endpointProvider;
  };

} // namespace Pricing
} // namespace Aws
