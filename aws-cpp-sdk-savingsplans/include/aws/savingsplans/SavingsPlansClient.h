/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/savingsplans/SavingsPlansServiceClientModel.h>

namespace Aws
{
namespace SavingsPlans
{
  /**
   * <p>Savings Plans are a pricing model that offer significant savings on AWS usage
   * (for example, on Amazon EC2 instances). You commit to a consistent amount of
   * usage, in USD per hour, for a term of 1 or 3 years, and receive a lower price
   * for that usage. For more information, see the <a
   * href="https://docs.aws.amazon.com/savingsplans/latest/userguide/">AWS Savings
   * Plans User Guide</a>.</p>
   */
  class AWS_SAVINGSPLANS_API SavingsPlansClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SavingsPlansClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SavingsPlansClient(const Aws::SavingsPlans::SavingsPlansClientConfiguration& clientConfiguration = Aws::SavingsPlans::SavingsPlansClientConfiguration(),
                           std::shared_ptr<SavingsPlansEndpointProviderBase> endpointProvider = Aws::MakeShared<SavingsPlansEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SavingsPlansClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<SavingsPlansEndpointProviderBase> endpointProvider = Aws::MakeShared<SavingsPlansEndpointProvider>(ALLOCATION_TAG),
                           const Aws::SavingsPlans::SavingsPlansClientConfiguration& clientConfiguration = Aws::SavingsPlans::SavingsPlansClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SavingsPlansClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<SavingsPlansEndpointProviderBase> endpointProvider = Aws::MakeShared<SavingsPlansEndpointProvider>(ALLOCATION_TAG),
                           const Aws::SavingsPlans::SavingsPlansClientConfiguration& clientConfiguration = Aws::SavingsPlans::SavingsPlansClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SavingsPlansClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SavingsPlansClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SavingsPlansClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SavingsPlansClient();

        /**
         * <p>Creates a Savings Plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/CreateSavingsPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSavingsPlanOutcome CreateSavingsPlan(const Model::CreateSavingsPlanRequest& request) const;

        /**
         * A Callable wrapper for CreateSavingsPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSavingsPlanOutcomeCallable CreateSavingsPlanCallable(const Model::CreateSavingsPlanRequest& request) const;

        /**
         * An Async wrapper for CreateSavingsPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteQueuedSavingsPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteQueuedSavingsPlanOutcomeCallable DeleteQueuedSavingsPlanCallable(const Model::DeleteQueuedSavingsPlanRequest& request) const;

        /**
         * An Async wrapper for DeleteQueuedSavingsPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteQueuedSavingsPlanAsync(const Model::DeleteQueuedSavingsPlanRequest& request, const DeleteQueuedSavingsPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified Savings Plans rates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlanRates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSavingsPlanRatesOutcome DescribeSavingsPlanRates(const Model::DescribeSavingsPlanRatesRequest& request) const;

        /**
         * A Callable wrapper for DescribeSavingsPlanRates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSavingsPlanRatesOutcomeCallable DescribeSavingsPlanRatesCallable(const Model::DescribeSavingsPlanRatesRequest& request) const;

        /**
         * An Async wrapper for DescribeSavingsPlanRates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSavingsPlanRatesAsync(const Model::DescribeSavingsPlanRatesRequest& request, const DescribeSavingsPlanRatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified Savings Plans.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlans">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSavingsPlansOutcome DescribeSavingsPlans(const Model::DescribeSavingsPlansRequest& request) const;

        /**
         * A Callable wrapper for DescribeSavingsPlans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSavingsPlansOutcomeCallable DescribeSavingsPlansCallable(const Model::DescribeSavingsPlansRequest& request) const;

        /**
         * An Async wrapper for DescribeSavingsPlans that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeSavingsPlansOfferingRates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSavingsPlansOfferingRatesOutcomeCallable DescribeSavingsPlansOfferingRatesCallable(const Model::DescribeSavingsPlansOfferingRatesRequest& request) const;

        /**
         * An Async wrapper for DescribeSavingsPlansOfferingRates that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeSavingsPlansOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSavingsPlansOfferingsOutcomeCallable DescribeSavingsPlansOfferingsCallable(const Model::DescribeSavingsPlansOfferingsRequest& request) const;

        /**
         * An Async wrapper for DescribeSavingsPlansOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSavingsPlansOfferingsAsync(const Model::DescribeSavingsPlansOfferingsRequest& request, const DescribeSavingsPlansOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/ListTagsForResource">AWS
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
         * <p>Adds the specified tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/TagResource">AWS
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
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/UntagResource">AWS
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
      std::shared_ptr<SavingsPlansEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SavingsPlansClient>;
      void init(const SavingsPlansClientConfiguration& clientConfiguration);

      SavingsPlansClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SavingsPlansEndpointProviderBase> m_endpointProvider;
  };

} // namespace SavingsPlans
} // namespace Aws
