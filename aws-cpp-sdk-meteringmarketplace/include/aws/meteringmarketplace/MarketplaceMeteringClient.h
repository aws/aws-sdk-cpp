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
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/meteringmarketplace/MarketplaceMeteringErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/meteringmarketplace/model/BatchMeterUsageResult.h>
#include <aws/meteringmarketplace/model/MeterUsageResult.h>
#include <aws/meteringmarketplace/model/RegisterUsageResult.h>
#include <aws/meteringmarketplace/model/ResolveCustomerResult.h>
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

namespace MarketplaceMetering
{

namespace Model
{
        class BatchMeterUsageRequest;
        class MeterUsageRequest;
        class RegisterUsageRequest;
        class ResolveCustomerRequest;

        typedef Aws::Utils::Outcome<BatchMeterUsageResult, Aws::Client::AWSError<MarketplaceMeteringErrors>> BatchMeterUsageOutcome;
        typedef Aws::Utils::Outcome<MeterUsageResult, Aws::Client::AWSError<MarketplaceMeteringErrors>> MeterUsageOutcome;
        typedef Aws::Utils::Outcome<RegisterUsageResult, Aws::Client::AWSError<MarketplaceMeteringErrors>> RegisterUsageOutcome;
        typedef Aws::Utils::Outcome<ResolveCustomerResult, Aws::Client::AWSError<MarketplaceMeteringErrors>> ResolveCustomerOutcome;

        typedef std::future<BatchMeterUsageOutcome> BatchMeterUsageOutcomeCallable;
        typedef std::future<MeterUsageOutcome> MeterUsageOutcomeCallable;
        typedef std::future<RegisterUsageOutcome> RegisterUsageOutcomeCallable;
        typedef std::future<ResolveCustomerOutcome> ResolveCustomerOutcomeCallable;
} // namespace Model

  class MarketplaceMeteringClient;

    typedef std::function<void(const MarketplaceMeteringClient*, const Model::BatchMeterUsageRequest&, const Model::BatchMeterUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchMeterUsageResponseReceivedHandler;
    typedef std::function<void(const MarketplaceMeteringClient*, const Model::MeterUsageRequest&, const Model::MeterUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MeterUsageResponseReceivedHandler;
    typedef std::function<void(const MarketplaceMeteringClient*, const Model::RegisterUsageRequest&, const Model::RegisterUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterUsageResponseReceivedHandler;
    typedef std::function<void(const MarketplaceMeteringClient*, const Model::ResolveCustomerRequest&, const Model::ResolveCustomerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResolveCustomerResponseReceivedHandler;

  /**
   * <fullname>AWS Marketplace Metering Service</fullname> <p>This reference provides
   * descriptions of the low-level AWS Marketplace Metering Service API.</p> <p>AWS
   * Marketplace sellers can use this API to submit usage data for custom usage
   * dimensions.</p> <p> <b>Submitting Metering Records</b> </p> <ul> <li> <p>
   * <i>MeterUsage</i>- Submits the metering record for a Marketplace product.
   * MeterUsage is called from an EC2 instance.</p> </li> <li> <p>
   * <i>BatchMeterUsage</i>- Submits the metering record for a set of customers.
   * BatchMeterUsage is called from a software-as-a-service (SaaS) application.</p>
   * </li> </ul> <p> <b>Accepting New Customers</b> </p> <ul> <li> <p>
   * <i>ResolveCustomer</i>- Called by a SaaS application during the registration
   * process. When a buyer visits your website during the registration process, the
   * buyer submits a Registration Token through the browser. The Registration Token
   * is resolved through this API to obtain a CustomerIdentifier and Product
   * Code.</p> </li> </ul> <p> <b>Entitlement and Metering for Paid Container
   * Products</b> </p> <ul> <li> <p> Paid container software products sold through
   * AWS Marketplace must integrate with the AWS Marketplace Metering Service and
   * call the RegisterUsage operation for software entitlement and metering. Calling
   * RegisterUsage from containers running outside of Amazon Elastic Container
   * Service (Amazon ECR) isn't supported. Free and BYOL products for ECS aren't
   * required to call RegisterUsage, but you can do so if you want to receive usage
   * data in your seller reports. For more information on using the RegisterUsage
   * operation, see <a
   * href="https://docs.aws.amazon.com/marketplace/latest/userguide/container-based-products.html">Container-Based
   * Products</a>. </p> </li> </ul> <p>BatchMeterUsage API calls are captured by AWS
   * CloudTrail. You can use Cloudtrail to verify that the SaaS metering records that
   * you sent are accurate by searching for records with the eventName of
   * BatchMeterUsage. You can also use CloudTrail to audit records over time. For
   * more information, see the <i> <a
   * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html">AWS
   * CloudTrail User Guide</a> </i>.</p>
   */
  class AWS_MARKETPLACEMETERING_API MarketplaceMeteringClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceMeteringClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceMeteringClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceMeteringClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MarketplaceMeteringClient();

        inline virtual const char* GetServiceClientName() const override { return "Marketplace Metering"; }


        /**
         * <p>BatchMeterUsage is called from a SaaS application listed on the AWS
         * Marketplace to post metering records for a set of customers.</p> <p>For
         * identical requests, the API is idempotent; requests can be retried with the same
         * records or a subset of the input records.</p> <p>Every request to
         * BatchMeterUsage is for one product. If you need to meter usage for multiple
         * products, you must make multiple calls to BatchMeterUsage.</p>
         * <p>BatchMeterUsage can process up to 25 UsageRecords at a time.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/BatchMeterUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchMeterUsageOutcome BatchMeterUsage(const Model::BatchMeterUsageRequest& request) const;

        /**
         * <p>BatchMeterUsage is called from a SaaS application listed on the AWS
         * Marketplace to post metering records for a set of customers.</p> <p>For
         * identical requests, the API is idempotent; requests can be retried with the same
         * records or a subset of the input records.</p> <p>Every request to
         * BatchMeterUsage is for one product. If you need to meter usage for multiple
         * products, you must make multiple calls to BatchMeterUsage.</p>
         * <p>BatchMeterUsage can process up to 25 UsageRecords at a time.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/BatchMeterUsage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchMeterUsageOutcomeCallable BatchMeterUsageCallable(const Model::BatchMeterUsageRequest& request) const;

        /**
         * <p>BatchMeterUsage is called from a SaaS application listed on the AWS
         * Marketplace to post metering records for a set of customers.</p> <p>For
         * identical requests, the API is idempotent; requests can be retried with the same
         * records or a subset of the input records.</p> <p>Every request to
         * BatchMeterUsage is for one product. If you need to meter usage for multiple
         * products, you must make multiple calls to BatchMeterUsage.</p>
         * <p>BatchMeterUsage can process up to 25 UsageRecords at a time.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/BatchMeterUsage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchMeterUsageAsync(const Model::BatchMeterUsageRequest& request, const BatchMeterUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>API to emit metering records. For identical requests, the API is idempotent.
         * It simply returns the metering record ID.</p> <p>MeterUsage is authenticated on
         * the buyer's AWS account, generally when running from an EC2 instance on the AWS
         * Marketplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/MeterUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::MeterUsageOutcome MeterUsage(const Model::MeterUsageRequest& request) const;

        /**
         * <p>API to emit metering records. For identical requests, the API is idempotent.
         * It simply returns the metering record ID.</p> <p>MeterUsage is authenticated on
         * the buyer's AWS account, generally when running from an EC2 instance on the AWS
         * Marketplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/MeterUsage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MeterUsageOutcomeCallable MeterUsageCallable(const Model::MeterUsageRequest& request) const;

        /**
         * <p>API to emit metering records. For identical requests, the API is idempotent.
         * It simply returns the metering record ID.</p> <p>MeterUsage is authenticated on
         * the buyer's AWS account, generally when running from an EC2 instance on the AWS
         * Marketplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/MeterUsage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MeterUsageAsync(const Model::MeterUsageRequest& request, const MeterUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Paid container software products sold through AWS Marketplace must integrate
         * with the AWS Marketplace Metering Service and call the RegisterUsage operation
         * for software entitlement and metering. Calling RegisterUsage from containers
         * running outside of ECS is not currently supported. Free and BYOL products for
         * ECS aren't required to call RegisterUsage, but you may choose to do so if you
         * would like to receive usage data in your seller reports. The sections below
         * explain the behavior of RegisterUsage. RegisterUsage performs two primary
         * functions: metering and entitlement.</p> <ul> <li> <p> <i>Entitlement</i>:
         * RegisterUsage allows you to verify that the customer running your paid software
         * is subscribed to your product on AWS Marketplace, enabling you to guard against
         * unauthorized use. Your container image that integrates with RegisterUsage is
         * only required to guard against unauthorized use at container startup, as such a
         * CustomerNotSubscribedException/PlatformNotSupportedException will only be thrown
         * on the initial call to RegisterUsage. Subsequent calls from the same Amazon ECS
         * task instance (e.g. task-id) will not throw a CustomerNotSubscribedException,
         * even if the customer unsubscribes while the Amazon ECS task is still
         * running.</p> </li> <li> <p> <i>Metering</i>: RegisterUsage meters software use
         * per ECS task, per hour, with usage prorated to the second. A minimum of 1 minute
         * of usage applies to tasks that are short lived. For example, if a customer has a
         * 10 node ECS cluster and creates an ECS service configured as a Daemon Set, then
         * ECS will launch a task on all 10 cluster nodes and the customer will be charged:
         * (10 * hourly_rate). Metering for software use is automatically handled by the
         * AWS Marketplace Metering Control Plane -- your software is not required to
         * perform any metering specific actions, other than call RegisterUsage once for
         * metering of software use to commence. The AWS Marketplace Metering Control Plane
         * will also continue to bill customers for running ECS tasks, regardless of the
         * customers subscription state, removing the need for your software to perform
         * entitlement checks at runtime.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/RegisterUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterUsageOutcome RegisterUsage(const Model::RegisterUsageRequest& request) const;

        /**
         * <p>Paid container software products sold through AWS Marketplace must integrate
         * with the AWS Marketplace Metering Service and call the RegisterUsage operation
         * for software entitlement and metering. Calling RegisterUsage from containers
         * running outside of ECS is not currently supported. Free and BYOL products for
         * ECS aren't required to call RegisterUsage, but you may choose to do so if you
         * would like to receive usage data in your seller reports. The sections below
         * explain the behavior of RegisterUsage. RegisterUsage performs two primary
         * functions: metering and entitlement.</p> <ul> <li> <p> <i>Entitlement</i>:
         * RegisterUsage allows you to verify that the customer running your paid software
         * is subscribed to your product on AWS Marketplace, enabling you to guard against
         * unauthorized use. Your container image that integrates with RegisterUsage is
         * only required to guard against unauthorized use at container startup, as such a
         * CustomerNotSubscribedException/PlatformNotSupportedException will only be thrown
         * on the initial call to RegisterUsage. Subsequent calls from the same Amazon ECS
         * task instance (e.g. task-id) will not throw a CustomerNotSubscribedException,
         * even if the customer unsubscribes while the Amazon ECS task is still
         * running.</p> </li> <li> <p> <i>Metering</i>: RegisterUsage meters software use
         * per ECS task, per hour, with usage prorated to the second. A minimum of 1 minute
         * of usage applies to tasks that are short lived. For example, if a customer has a
         * 10 node ECS cluster and creates an ECS service configured as a Daemon Set, then
         * ECS will launch a task on all 10 cluster nodes and the customer will be charged:
         * (10 * hourly_rate). Metering for software use is automatically handled by the
         * AWS Marketplace Metering Control Plane -- your software is not required to
         * perform any metering specific actions, other than call RegisterUsage once for
         * metering of software use to commence. The AWS Marketplace Metering Control Plane
         * will also continue to bill customers for running ECS tasks, regardless of the
         * customers subscription state, removing the need for your software to perform
         * entitlement checks at runtime.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/RegisterUsage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterUsageOutcomeCallable RegisterUsageCallable(const Model::RegisterUsageRequest& request) const;

        /**
         * <p>Paid container software products sold through AWS Marketplace must integrate
         * with the AWS Marketplace Metering Service and call the RegisterUsage operation
         * for software entitlement and metering. Calling RegisterUsage from containers
         * running outside of ECS is not currently supported. Free and BYOL products for
         * ECS aren't required to call RegisterUsage, but you may choose to do so if you
         * would like to receive usage data in your seller reports. The sections below
         * explain the behavior of RegisterUsage. RegisterUsage performs two primary
         * functions: metering and entitlement.</p> <ul> <li> <p> <i>Entitlement</i>:
         * RegisterUsage allows you to verify that the customer running your paid software
         * is subscribed to your product on AWS Marketplace, enabling you to guard against
         * unauthorized use. Your container image that integrates with RegisterUsage is
         * only required to guard against unauthorized use at container startup, as such a
         * CustomerNotSubscribedException/PlatformNotSupportedException will only be thrown
         * on the initial call to RegisterUsage. Subsequent calls from the same Amazon ECS
         * task instance (e.g. task-id) will not throw a CustomerNotSubscribedException,
         * even if the customer unsubscribes while the Amazon ECS task is still
         * running.</p> </li> <li> <p> <i>Metering</i>: RegisterUsage meters software use
         * per ECS task, per hour, with usage prorated to the second. A minimum of 1 minute
         * of usage applies to tasks that are short lived. For example, if a customer has a
         * 10 node ECS cluster and creates an ECS service configured as a Daemon Set, then
         * ECS will launch a task on all 10 cluster nodes and the customer will be charged:
         * (10 * hourly_rate). Metering for software use is automatically handled by the
         * AWS Marketplace Metering Control Plane -- your software is not required to
         * perform any metering specific actions, other than call RegisterUsage once for
         * metering of software use to commence. The AWS Marketplace Metering Control Plane
         * will also continue to bill customers for running ECS tasks, regardless of the
         * customers subscription state, removing the need for your software to perform
         * entitlement checks at runtime.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/RegisterUsage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterUsageAsync(const Model::RegisterUsageRequest& request, const RegisterUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>ResolveCustomer is called by a SaaS application during the registration
         * process. When a buyer visits your website during the registration process, the
         * buyer submits a registration token through their browser. The registration token
         * is resolved through this API to obtain a CustomerIdentifier and product
         * code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/ResolveCustomer">AWS
         * API Reference</a></p>
         */
        virtual Model::ResolveCustomerOutcome ResolveCustomer(const Model::ResolveCustomerRequest& request) const;

        /**
         * <p>ResolveCustomer is called by a SaaS application during the registration
         * process. When a buyer visits your website during the registration process, the
         * buyer submits a registration token through their browser. The registration token
         * is resolved through this API to obtain a CustomerIdentifier and product
         * code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/ResolveCustomer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResolveCustomerOutcomeCallable ResolveCustomerCallable(const Model::ResolveCustomerRequest& request) const;

        /**
         * <p>ResolveCustomer is called by a SaaS application during the registration
         * process. When a buyer visits your website during the registration process, the
         * buyer submits a registration token through their browser. The registration token
         * is resolved through this API to obtain a CustomerIdentifier and product
         * code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/ResolveCustomer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResolveCustomerAsync(const Model::ResolveCustomerRequest& request, const ResolveCustomerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchMeterUsageAsyncHelper(const Model::BatchMeterUsageRequest& request, const BatchMeterUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void MeterUsageAsyncHelper(const Model::MeterUsageRequest& request, const MeterUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterUsageAsyncHelper(const Model::RegisterUsageRequest& request, const RegisterUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResolveCustomerAsyncHelper(const Model::ResolveCustomerRequest& request, const ResolveCustomerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MarketplaceMetering
} // namespace Aws
