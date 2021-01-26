/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/savingsplans/SavingsPlansErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/savingsplans/model/CreateSavingsPlanResult.h>
#include <aws/savingsplans/model/DeleteQueuedSavingsPlanResult.h>
#include <aws/savingsplans/model/DescribeSavingsPlanRatesResult.h>
#include <aws/savingsplans/model/DescribeSavingsPlansResult.h>
#include <aws/savingsplans/model/DescribeSavingsPlansOfferingRatesResult.h>
#include <aws/savingsplans/model/DescribeSavingsPlansOfferingsResult.h>
#include <aws/savingsplans/model/ListTagsForResourceResult.h>
#include <aws/savingsplans/model/TagResourceResult.h>
#include <aws/savingsplans/model/UntagResourceResult.h>
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

namespace SavingsPlans
{

namespace Model
{
        class CreateSavingsPlanRequest;
        class DeleteQueuedSavingsPlanRequest;
        class DescribeSavingsPlanRatesRequest;
        class DescribeSavingsPlansRequest;
        class DescribeSavingsPlansOfferingRatesRequest;
        class DescribeSavingsPlansOfferingsRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<CreateSavingsPlanResult, SavingsPlansError> CreateSavingsPlanOutcome;
        typedef Aws::Utils::Outcome<DeleteQueuedSavingsPlanResult, SavingsPlansError> DeleteQueuedSavingsPlanOutcome;
        typedef Aws::Utils::Outcome<DescribeSavingsPlanRatesResult, SavingsPlansError> DescribeSavingsPlanRatesOutcome;
        typedef Aws::Utils::Outcome<DescribeSavingsPlansResult, SavingsPlansError> DescribeSavingsPlansOutcome;
        typedef Aws::Utils::Outcome<DescribeSavingsPlansOfferingRatesResult, SavingsPlansError> DescribeSavingsPlansOfferingRatesOutcome;
        typedef Aws::Utils::Outcome<DescribeSavingsPlansOfferingsResult, SavingsPlansError> DescribeSavingsPlansOfferingsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, SavingsPlansError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, SavingsPlansError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, SavingsPlansError> UntagResourceOutcome;

        typedef std::future<CreateSavingsPlanOutcome> CreateSavingsPlanOutcomeCallable;
        typedef std::future<DeleteQueuedSavingsPlanOutcome> DeleteQueuedSavingsPlanOutcomeCallable;
        typedef std::future<DescribeSavingsPlanRatesOutcome> DescribeSavingsPlanRatesOutcomeCallable;
        typedef std::future<DescribeSavingsPlansOutcome> DescribeSavingsPlansOutcomeCallable;
        typedef std::future<DescribeSavingsPlansOfferingRatesOutcome> DescribeSavingsPlansOfferingRatesOutcomeCallable;
        typedef std::future<DescribeSavingsPlansOfferingsOutcome> DescribeSavingsPlansOfferingsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class SavingsPlansClient;

    typedef std::function<void(const SavingsPlansClient*, const Model::CreateSavingsPlanRequest&, const Model::CreateSavingsPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSavingsPlanResponseReceivedHandler;
    typedef std::function<void(const SavingsPlansClient*, const Model::DeleteQueuedSavingsPlanRequest&, const Model::DeleteQueuedSavingsPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQueuedSavingsPlanResponseReceivedHandler;
    typedef std::function<void(const SavingsPlansClient*, const Model::DescribeSavingsPlanRatesRequest&, const Model::DescribeSavingsPlanRatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSavingsPlanRatesResponseReceivedHandler;
    typedef std::function<void(const SavingsPlansClient*, const Model::DescribeSavingsPlansRequest&, const Model::DescribeSavingsPlansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSavingsPlansResponseReceivedHandler;
    typedef std::function<void(const SavingsPlansClient*, const Model::DescribeSavingsPlansOfferingRatesRequest&, const Model::DescribeSavingsPlansOfferingRatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSavingsPlansOfferingRatesResponseReceivedHandler;
    typedef std::function<void(const SavingsPlansClient*, const Model::DescribeSavingsPlansOfferingsRequest&, const Model::DescribeSavingsPlansOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSavingsPlansOfferingsResponseReceivedHandler;
    typedef std::function<void(const SavingsPlansClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SavingsPlansClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SavingsPlansClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <p>Savings Plans are a pricing model that offer significant savings on AWS usage
   * (for example, on Amazon EC2 instances). You commit to a consistent amount of
   * usage, in USD per hour, for a term of 1 or 3 years, and receive a lower price
   * for that usage. For more information, see the <a
   * href="https://docs.aws.amazon.com/savingsplans/latest/userguide/">AWS Savings
   * Plans User Guide</a>.</p>
   */
  class AWS_SAVINGSPLANS_API SavingsPlansClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SavingsPlansClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SavingsPlansClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SavingsPlansClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SavingsPlansClient();


        /**
         * <p>Creates a Savings Plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/CreateSavingsPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSavingsPlanOutcome CreateSavingsPlan(const Model::CreateSavingsPlanRequest& request) const;

        /**
         * <p>Creates a Savings Plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/CreateSavingsPlan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSavingsPlanOutcomeCallable CreateSavingsPlanCallable(const Model::CreateSavingsPlanRequest& request) const;

        /**
         * <p>Creates a Savings Plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/CreateSavingsPlan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSavingsPlanAsync(const Model::CreateSavingsPlanRequest& request, const CreateSavingsPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the queued purchase for the specified Savings Plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DeleteQueuedSavingsPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueuedSavingsPlanOutcome DeleteQueuedSavingsPlan(const Model::DeleteQueuedSavingsPlanRequest& request) const;

        /**
         * <p>Deletes the queued purchase for the specified Savings Plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DeleteQueuedSavingsPlan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteQueuedSavingsPlanOutcomeCallable DeleteQueuedSavingsPlanCallable(const Model::DeleteQueuedSavingsPlanRequest& request) const;

        /**
         * <p>Deletes the queued purchase for the specified Savings Plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DeleteQueuedSavingsPlan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteQueuedSavingsPlanAsync(const Model::DeleteQueuedSavingsPlanRequest& request, const DeleteQueuedSavingsPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified Savings Plans rates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlanRates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSavingsPlanRatesOutcome DescribeSavingsPlanRates(const Model::DescribeSavingsPlanRatesRequest& request) const;

        /**
         * <p>Describes the specified Savings Plans rates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlanRates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSavingsPlanRatesOutcomeCallable DescribeSavingsPlanRatesCallable(const Model::DescribeSavingsPlanRatesRequest& request) const;

        /**
         * <p>Describes the specified Savings Plans rates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlanRates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSavingsPlanRatesAsync(const Model::DescribeSavingsPlanRatesRequest& request, const DescribeSavingsPlanRatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified Savings Plans.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlans">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSavingsPlansOutcome DescribeSavingsPlans(const Model::DescribeSavingsPlansRequest& request) const;

        /**
         * <p>Describes the specified Savings Plans.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlans">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSavingsPlansOutcomeCallable DescribeSavingsPlansCallable(const Model::DescribeSavingsPlansRequest& request) const;

        /**
         * <p>Describes the specified Savings Plans.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlans">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSavingsPlansAsync(const Model::DescribeSavingsPlansRequest& request, const DescribeSavingsPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified Savings Plans offering rates.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlansOfferingRates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSavingsPlansOfferingRatesOutcome DescribeSavingsPlansOfferingRates(const Model::DescribeSavingsPlansOfferingRatesRequest& request) const;

        /**
         * <p>Describes the specified Savings Plans offering rates.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlansOfferingRates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSavingsPlansOfferingRatesOutcomeCallable DescribeSavingsPlansOfferingRatesCallable(const Model::DescribeSavingsPlansOfferingRatesRequest& request) const;

        /**
         * <p>Describes the specified Savings Plans offering rates.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlansOfferingRates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSavingsPlansOfferingRatesAsync(const Model::DescribeSavingsPlansOfferingRatesRequest& request, const DescribeSavingsPlansOfferingRatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified Savings Plans offerings.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlansOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSavingsPlansOfferingsOutcome DescribeSavingsPlansOfferings(const Model::DescribeSavingsPlansOfferingsRequest& request) const;

        /**
         * <p>Describes the specified Savings Plans offerings.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlansOfferings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSavingsPlansOfferingsOutcomeCallable DescribeSavingsPlansOfferingsCallable(const Model::DescribeSavingsPlansOfferingsRequest& request) const;

        /**
         * <p>Describes the specified Savings Plans offerings.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlansOfferings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSavingsPlansOfferingsAsync(const Model::DescribeSavingsPlansOfferingsRequest& request, const DescribeSavingsPlansOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateSavingsPlanAsyncHelper(const Model::CreateSavingsPlanRequest& request, const CreateSavingsPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteQueuedSavingsPlanAsyncHelper(const Model::DeleteQueuedSavingsPlanRequest& request, const DeleteQueuedSavingsPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSavingsPlanRatesAsyncHelper(const Model::DescribeSavingsPlanRatesRequest& request, const DescribeSavingsPlanRatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSavingsPlansAsyncHelper(const Model::DescribeSavingsPlansRequest& request, const DescribeSavingsPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSavingsPlansOfferingRatesAsyncHelper(const Model::DescribeSavingsPlansOfferingRatesRequest& request, const DescribeSavingsPlansOfferingRatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSavingsPlansOfferingsAsyncHelper(const Model::DescribeSavingsPlansOfferingsRequest& request, const DescribeSavingsPlansOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SavingsPlans
} // namespace Aws
