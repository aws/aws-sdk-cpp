/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/savingsplans/SavingsPlansServiceClientModel.h>
#include <aws/savingsplans/SavingsPlansLegacyAsyncMacros.h>

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
  class AWS_SAVINGSPLANS_API SavingsPlansClient : public Aws::Client::AWSJsonClient
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
         * <p>Creates a Savings Plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/CreateSavingsPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSavingsPlanOutcome CreateSavingsPlan(const Model::CreateSavingsPlanRequest& request) const;


        /**
         * <p>Deletes the queued purchase for the specified Savings Plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DeleteQueuedSavingsPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueuedSavingsPlanOutcome DeleteQueuedSavingsPlan(const Model::DeleteQueuedSavingsPlanRequest& request) const;


        /**
         * <p>Describes the specified Savings Plans rates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlanRates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSavingsPlanRatesOutcome DescribeSavingsPlanRates(const Model::DescribeSavingsPlanRatesRequest& request) const;


        /**
         * <p>Describes the specified Savings Plans.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlans">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSavingsPlansOutcome DescribeSavingsPlans(const Model::DescribeSavingsPlansRequest& request) const;


        /**
         * <p>Describes the specified Savings Plans offering rates.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlansOfferingRates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSavingsPlansOfferingRatesOutcome DescribeSavingsPlansOfferingRates(const Model::DescribeSavingsPlansOfferingRatesRequest& request) const;


        /**
         * <p>Describes the specified Savings Plans offerings.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlansOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSavingsPlansOfferingsOutcome DescribeSavingsPlansOfferings(const Model::DescribeSavingsPlansOfferingsRequest& request) const;


        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Adds the specified tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SavingsPlansEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const SavingsPlansClientConfiguration& clientConfiguration);

      SavingsPlansClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SavingsPlansEndpointProviderBase> m_endpointProvider;
  };

} // namespace SavingsPlans
} // namespace Aws
