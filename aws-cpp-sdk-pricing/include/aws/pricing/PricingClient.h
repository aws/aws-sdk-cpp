/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/pricing/PricingErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pricing/model/DescribeServicesResult.h>
#include <aws/pricing/model/GetAttributeValuesResult.h>
#include <aws/pricing/model/GetProductsResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
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

namespace Pricing
{

namespace Model
{
        class DescribeServicesRequest;
        class GetAttributeValuesRequest;
        class GetProductsRequest;

        typedef Aws::Utils::Outcome<DescribeServicesResult, Aws::Client::AWSError<PricingErrors>> DescribeServicesOutcome;
        typedef Aws::Utils::Outcome<GetAttributeValuesResult, Aws::Client::AWSError<PricingErrors>> GetAttributeValuesOutcome;
        typedef Aws::Utils::Outcome<GetProductsResult, Aws::Client::AWSError<PricingErrors>> GetProductsOutcome;

        typedef std::future<DescribeServicesOutcome> DescribeServicesOutcomeCallable;
        typedef std::future<GetAttributeValuesOutcome> GetAttributeValuesOutcomeCallable;
        typedef std::future<GetProductsOutcome> GetProductsOutcomeCallable;
} // namespace Model

  class PricingClient;

    typedef std::function<void(const PricingClient*, const Model::DescribeServicesRequest&, const Model::DescribeServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServicesResponseReceivedHandler;
    typedef std::function<void(const PricingClient*, const Model::GetAttributeValuesRequest&, const Model::GetAttributeValuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAttributeValuesResponseReceivedHandler;
    typedef std::function<void(const PricingClient*, const Model::GetProductsRequest&, const Model::GetProductsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProductsResponseReceivedHandler;

  /**
   * <p>AWS Price List Service API (AWS Price List Service) is a centralized and
   * convenient way to programmatically query Amazon Web Services for services,
   * products, and pricing information. The AWS Price List Service uses standardized
   * product attributes such as <code>Location</code>, <code>Storage Class</code>,
   * and <code>Operating System</code>, and provides prices at the SKU level. You can
   * use the AWS Price List Service to build cost control and scenario planning
   * tools, reconcile billing data, forecast future spend for budgeting purposes, and
   * provide cost benefit analysis that compare your internal workloads with AWS.</p>
   * <p>Use <code>GetServices</code> without a service code to retrieve the service
   * codes for all AWS services, then <code>GetServices</code> with a service code to
   * retreive the attribute names for that service. After you have the service code
   * and attribute names, you can use <code>GetAttributeValues</code> to see what
   * values are available for an attribute. With the service code and an attribute
   * name and value, you can use <code>GetProducts</code> to find specific products
   * that you're interested in, such as an <code>AmazonEC2</code> instance, with a
   * <code>Provisioned IOPS</code> <code>volumeType</code>.</p> <p>Service
   * Endpoint</p> <p>AWS Price List Service API provides the following two
   * endpoints:</p> <ul> <li> <p>https://api.pricing.us-east-1.amazonaws.com</p>
   * </li> <li> <p>https://api.pricing.ap-south-1.amazonaws.com</p> </li> </ul>
   */
  class AWS_PRICING_API PricingClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PricingClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PricingClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PricingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~PricingClient();

        inline virtual const char* GetServiceClientName() const override { return "api.pricing"; }


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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServicesOutcomeCallable DescribeServicesCallable(const Model::DescribeServicesRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServicesAsync(const Model::DescribeServicesRequest& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of attribute values. Attibutes are similar to the details in a
         * Price List API offer file. For a list of available attributes, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/reading-an-offer.html#pps-defs">Offer
         * File Definitions</a> in the <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/billing-what-is.html">AWS
         * Billing and Cost Management User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-2017-10-15/GetAttributeValues">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAttributeValuesOutcome GetAttributeValues(const Model::GetAttributeValuesRequest& request) const;

        /**
         * <p>Returns a list of attribute values. Attibutes are similar to the details in a
         * Price List API offer file. For a list of available attributes, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/reading-an-offer.html#pps-defs">Offer
         * File Definitions</a> in the <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/billing-what-is.html">AWS
         * Billing and Cost Management User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-2017-10-15/GetAttributeValues">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAttributeValuesOutcomeCallable GetAttributeValuesCallable(const Model::GetAttributeValuesRequest& request) const;

        /**
         * <p>Returns a list of attribute values. Attibutes are similar to the details in a
         * Price List API offer file. For a list of available attributes, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/reading-an-offer.html#pps-defs">Offer
         * File Definitions</a> in the <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/billing-what-is.html">AWS
         * Billing and Cost Management User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-2017-10-15/GetAttributeValues">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of all products that match the filter criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-2017-10-15/GetProducts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProductsOutcomeCallable GetProductsCallable(const Model::GetProductsRequest& request) const;

        /**
         * <p>Returns a list of all products that match the filter criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-2017-10-15/GetProducts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProductsAsync(const Model::GetProductsRequest& request, const GetProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DescribeServicesAsyncHelper(const Model::DescribeServicesRequest& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAttributeValuesAsyncHelper(const Model::GetAttributeValuesRequest& request, const GetAttributeValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetProductsAsyncHelper(const Model::GetProductsRequest& request, const GetProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Pricing
} // namespace Aws
