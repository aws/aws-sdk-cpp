/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorServiceClientModel.h>

namespace Aws
{
namespace BCMPricingCalculator
{
  /**
   * <p> You can use the Pricing Calculator API to programmatically create estimates
   * for your planned cloud use. You can model usage and commitments such as Savings
   * Plans and Reserved Instances, and generate estimated costs using your discounts
   * and benefit sharing preferences. </p> <p>The Pricing Calculator API provides the
   * following endpoint:</p> <ul> <li> <p>
   * <code>https://bcm-pricing-calculator.us-east-1.api.aws</code> </p> </li> </ul>
   */
  class AWS_BCMPRICINGCALCULATOR_API BCMPricingCalculatorClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BCMPricingCalculatorClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef BCMPricingCalculatorClientConfiguration ClientConfigurationType;
      typedef BCMPricingCalculatorEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BCMPricingCalculatorClient(const Aws::BCMPricingCalculator::BCMPricingCalculatorClientConfiguration& clientConfiguration = Aws::BCMPricingCalculator::BCMPricingCalculatorClientConfiguration(),
                                   std::shared_ptr<BCMPricingCalculatorEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BCMPricingCalculatorClient(const Aws::Auth::AWSCredentials& credentials,
                                   std::shared_ptr<BCMPricingCalculatorEndpointProviderBase> endpointProvider = nullptr,
                                   const Aws::BCMPricingCalculator::BCMPricingCalculatorClientConfiguration& clientConfiguration = Aws::BCMPricingCalculator::BCMPricingCalculatorClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BCMPricingCalculatorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<BCMPricingCalculatorEndpointProviderBase> endpointProvider = nullptr,
                                   const Aws::BCMPricingCalculator::BCMPricingCalculatorClientConfiguration& clientConfiguration = Aws::BCMPricingCalculator::BCMPricingCalculatorClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BCMPricingCalculatorClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BCMPricingCalculatorClient(const Aws::Auth::AWSCredentials& credentials,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BCMPricingCalculatorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~BCMPricingCalculatorClient();

        /**
         * <p> Create Compute Savings Plans, EC2 Instance Savings Plans, or EC2 Reserved
         * Instances commitments that you want to model in a Bill Scenario. </p> 
         * <p>The <code>BatchCreateBillScenarioCommitmentModification</code> operation
         * doesn't have its own IAM permission. To authorize this operation for Amazon Web
         * Services principals, include the permission
         * <code>bcm-pricing-calculator:CreateBillScenarioCommitmentModification</code> in
         * your policies.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchCreateBillScenarioCommitmentModification">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateBillScenarioCommitmentModificationOutcome BatchCreateBillScenarioCommitmentModification(const Model::BatchCreateBillScenarioCommitmentModificationRequest& request) const;

        /**
         * A Callable wrapper for BatchCreateBillScenarioCommitmentModification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchCreateBillScenarioCommitmentModificationRequestT = Model::BatchCreateBillScenarioCommitmentModificationRequest>
        Model::BatchCreateBillScenarioCommitmentModificationOutcomeCallable BatchCreateBillScenarioCommitmentModificationCallable(const BatchCreateBillScenarioCommitmentModificationRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::BatchCreateBillScenarioCommitmentModification, request);
        }

        /**
         * An Async wrapper for BatchCreateBillScenarioCommitmentModification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchCreateBillScenarioCommitmentModificationRequestT = Model::BatchCreateBillScenarioCommitmentModificationRequest>
        void BatchCreateBillScenarioCommitmentModificationAsync(const BatchCreateBillScenarioCommitmentModificationRequestT& request, const BatchCreateBillScenarioCommitmentModificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::BatchCreateBillScenarioCommitmentModification, request, handler, context);
        }

        /**
         * <p> Create Amazon Web Services service usage that you want to model in a Bill
         * Scenario. </p>  <p>The
         * <code>BatchCreateBillScenarioUsageModification</code> operation doesn't have its
         * own IAM permission. To authorize this operation for Amazon Web Services
         * principals, include the permission
         * <code>bcm-pricing-calculator:CreateBillScenarioUsageModification</code> in your
         * policies.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchCreateBillScenarioUsageModification">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateBillScenarioUsageModificationOutcome BatchCreateBillScenarioUsageModification(const Model::BatchCreateBillScenarioUsageModificationRequest& request) const;

        /**
         * A Callable wrapper for BatchCreateBillScenarioUsageModification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchCreateBillScenarioUsageModificationRequestT = Model::BatchCreateBillScenarioUsageModificationRequest>
        Model::BatchCreateBillScenarioUsageModificationOutcomeCallable BatchCreateBillScenarioUsageModificationCallable(const BatchCreateBillScenarioUsageModificationRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::BatchCreateBillScenarioUsageModification, request);
        }

        /**
         * An Async wrapper for BatchCreateBillScenarioUsageModification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchCreateBillScenarioUsageModificationRequestT = Model::BatchCreateBillScenarioUsageModificationRequest>
        void BatchCreateBillScenarioUsageModificationAsync(const BatchCreateBillScenarioUsageModificationRequestT& request, const BatchCreateBillScenarioUsageModificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::BatchCreateBillScenarioUsageModification, request, handler, context);
        }

        /**
         * <p> Create Amazon Web Services service usage that you want to model in a
         * Workload Estimate. </p>  <p>The
         * <code>BatchCreateWorkloadEstimateUsage</code> operation doesn't have its own IAM
         * permission. To authorize this operation for Amazon Web Services principals,
         * include the permission
         * <code>bcm-pricing-calculator:CreateWorkloadEstimateUsage</code> in your
         * policies.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchCreateWorkloadEstimateUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateWorkloadEstimateUsageOutcome BatchCreateWorkloadEstimateUsage(const Model::BatchCreateWorkloadEstimateUsageRequest& request) const;

        /**
         * A Callable wrapper for BatchCreateWorkloadEstimateUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchCreateWorkloadEstimateUsageRequestT = Model::BatchCreateWorkloadEstimateUsageRequest>
        Model::BatchCreateWorkloadEstimateUsageOutcomeCallable BatchCreateWorkloadEstimateUsageCallable(const BatchCreateWorkloadEstimateUsageRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::BatchCreateWorkloadEstimateUsage, request);
        }

        /**
         * An Async wrapper for BatchCreateWorkloadEstimateUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchCreateWorkloadEstimateUsageRequestT = Model::BatchCreateWorkloadEstimateUsageRequest>
        void BatchCreateWorkloadEstimateUsageAsync(const BatchCreateWorkloadEstimateUsageRequestT& request, const BatchCreateWorkloadEstimateUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::BatchCreateWorkloadEstimateUsage, request, handler, context);
        }

        /**
         * <p> Delete commitment that you have created in a Bill Scenario. You can only
         * delete a commitment that you had added and cannot model deletion (or removal) of
         * a existing commitment. If you want model deletion of an existing commitment, see
         * the negate <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AWSBCMPricingCalculator_BillScenarioCommitmentModificationAction.html">
         * BillScenarioCommitmentModificationAction</a> of <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AWSBCMPricingCalculator_BatchCreateBillScenarioUsageModification.html">
         * BatchCreateBillScenarioCommitmentModification</a> operation. </p>  <p>The
         * <code>BatchDeleteBillScenarioCommitmentModification</code> operation doesn't
         * have its own IAM permission. To authorize this operation for Amazon Web Services
         * principals, include the permission
         * <code>bcm-pricing-calculator:DeleteBillScenarioCommitmentModification</code> in
         * your policies.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchDeleteBillScenarioCommitmentModification">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteBillScenarioCommitmentModificationOutcome BatchDeleteBillScenarioCommitmentModification(const Model::BatchDeleteBillScenarioCommitmentModificationRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteBillScenarioCommitmentModification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteBillScenarioCommitmentModificationRequestT = Model::BatchDeleteBillScenarioCommitmentModificationRequest>
        Model::BatchDeleteBillScenarioCommitmentModificationOutcomeCallable BatchDeleteBillScenarioCommitmentModificationCallable(const BatchDeleteBillScenarioCommitmentModificationRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::BatchDeleteBillScenarioCommitmentModification, request);
        }

        /**
         * An Async wrapper for BatchDeleteBillScenarioCommitmentModification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteBillScenarioCommitmentModificationRequestT = Model::BatchDeleteBillScenarioCommitmentModificationRequest>
        void BatchDeleteBillScenarioCommitmentModificationAsync(const BatchDeleteBillScenarioCommitmentModificationRequestT& request, const BatchDeleteBillScenarioCommitmentModificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::BatchDeleteBillScenarioCommitmentModification, request, handler, context);
        }

        /**
         * <p> Delete usage that you have created in a Bill Scenario. You can only delete
         * usage that you had added and cannot model deletion (or removal) of a existing
         * usage. If you want model removal of an existing usage, see <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AWSBCMPricingCalculator_BatchUpdateBillScenarioUsageModification.html">
         * BatchUpdateBillScenarioUsageModification</a>. </p>  <p>The
         * <code>BatchDeleteBillScenarioUsageModification</code> operation doesn't have its
         * own IAM permission. To authorize this operation for Amazon Web Services
         * principals, include the permission
         * <code>bcm-pricing-calculator:DeleteBillScenarioUsageModification</code> in your
         * policies.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchDeleteBillScenarioUsageModification">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteBillScenarioUsageModificationOutcome BatchDeleteBillScenarioUsageModification(const Model::BatchDeleteBillScenarioUsageModificationRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteBillScenarioUsageModification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteBillScenarioUsageModificationRequestT = Model::BatchDeleteBillScenarioUsageModificationRequest>
        Model::BatchDeleteBillScenarioUsageModificationOutcomeCallable BatchDeleteBillScenarioUsageModificationCallable(const BatchDeleteBillScenarioUsageModificationRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::BatchDeleteBillScenarioUsageModification, request);
        }

        /**
         * An Async wrapper for BatchDeleteBillScenarioUsageModification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteBillScenarioUsageModificationRequestT = Model::BatchDeleteBillScenarioUsageModificationRequest>
        void BatchDeleteBillScenarioUsageModificationAsync(const BatchDeleteBillScenarioUsageModificationRequestT& request, const BatchDeleteBillScenarioUsageModificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::BatchDeleteBillScenarioUsageModification, request, handler, context);
        }

        /**
         * <p> Delete usage that you have created in a Workload estimate. You can only
         * delete usage that you had added and cannot model deletion (or removal) of a
         * existing usage. If you want model removal of an existing usage, see <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AWSBCMPricingCalculator_BatchUpdateWorkloadEstimateUsage.html">
         * BatchUpdateWorkloadEstimateUsage</a>. </p>  <p>The
         * <code>BatchDeleteWorkloadEstimateUsage</code> operation doesn't have its own IAM
         * permission. To authorize this operation for Amazon Web Services principals,
         * include the permission
         * <code>bcm-pricing-calculator:DeleteWorkloadEstimateUsage</code> in your
         * policies.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchDeleteWorkloadEstimateUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteWorkloadEstimateUsageOutcome BatchDeleteWorkloadEstimateUsage(const Model::BatchDeleteWorkloadEstimateUsageRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteWorkloadEstimateUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteWorkloadEstimateUsageRequestT = Model::BatchDeleteWorkloadEstimateUsageRequest>
        Model::BatchDeleteWorkloadEstimateUsageOutcomeCallable BatchDeleteWorkloadEstimateUsageCallable(const BatchDeleteWorkloadEstimateUsageRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::BatchDeleteWorkloadEstimateUsage, request);
        }

        /**
         * An Async wrapper for BatchDeleteWorkloadEstimateUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteWorkloadEstimateUsageRequestT = Model::BatchDeleteWorkloadEstimateUsageRequest>
        void BatchDeleteWorkloadEstimateUsageAsync(const BatchDeleteWorkloadEstimateUsageRequestT& request, const BatchDeleteWorkloadEstimateUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::BatchDeleteWorkloadEstimateUsage, request, handler, context);
        }

        /**
         * <p> Update a newly added or existing commitment. You can update the commitment
         * group based on a commitment ID and a Bill scenario ID. </p>  <p>The
         * <code>BatchUpdateBillScenarioCommitmentModification</code> operation doesn't
         * have its own IAM permission. To authorize this operation for Amazon Web Services
         * principals, include the permission
         * <code>bcm-pricing-calculator:UpdateBillScenarioCommitmentModification</code> in
         * your policies.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchUpdateBillScenarioCommitmentModification">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateBillScenarioCommitmentModificationOutcome BatchUpdateBillScenarioCommitmentModification(const Model::BatchUpdateBillScenarioCommitmentModificationRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateBillScenarioCommitmentModification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdateBillScenarioCommitmentModificationRequestT = Model::BatchUpdateBillScenarioCommitmentModificationRequest>
        Model::BatchUpdateBillScenarioCommitmentModificationOutcomeCallable BatchUpdateBillScenarioCommitmentModificationCallable(const BatchUpdateBillScenarioCommitmentModificationRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::BatchUpdateBillScenarioCommitmentModification, request);
        }

        /**
         * An Async wrapper for BatchUpdateBillScenarioCommitmentModification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdateBillScenarioCommitmentModificationRequestT = Model::BatchUpdateBillScenarioCommitmentModificationRequest>
        void BatchUpdateBillScenarioCommitmentModificationAsync(const BatchUpdateBillScenarioCommitmentModificationRequestT& request, const BatchUpdateBillScenarioCommitmentModificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::BatchUpdateBillScenarioCommitmentModification, request, handler, context);
        }

        /**
         * <p> Update a newly added or existing usage lines. You can update the usage
         * amounts, usage hour, and usage group based on a usage ID and a Bill scenario ID.
         * </p>  <p>The <code>BatchUpdateBillScenarioUsageModification</code>
         * operation doesn't have its own IAM permission. To authorize this operation for
         * Amazon Web Services principals, include the permission
         * <code>bcm-pricing-calculator:UpdateBillScenarioUsageModification</code> in your
         * policies.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchUpdateBillScenarioUsageModification">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateBillScenarioUsageModificationOutcome BatchUpdateBillScenarioUsageModification(const Model::BatchUpdateBillScenarioUsageModificationRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateBillScenarioUsageModification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdateBillScenarioUsageModificationRequestT = Model::BatchUpdateBillScenarioUsageModificationRequest>
        Model::BatchUpdateBillScenarioUsageModificationOutcomeCallable BatchUpdateBillScenarioUsageModificationCallable(const BatchUpdateBillScenarioUsageModificationRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::BatchUpdateBillScenarioUsageModification, request);
        }

        /**
         * An Async wrapper for BatchUpdateBillScenarioUsageModification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdateBillScenarioUsageModificationRequestT = Model::BatchUpdateBillScenarioUsageModificationRequest>
        void BatchUpdateBillScenarioUsageModificationAsync(const BatchUpdateBillScenarioUsageModificationRequestT& request, const BatchUpdateBillScenarioUsageModificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::BatchUpdateBillScenarioUsageModification, request, handler, context);
        }

        /**
         * <p> Update a newly added or existing usage lines. You can update the usage
         * amounts and usage group based on a usage ID and a Workload estimate ID. </p>
         *  <p>The <code>BatchUpdateWorkloadEstimateUsage</code> operation doesn't
         * have its own IAM permission. To authorize this operation for Amazon Web Services
         * principals, include the permission
         * <code>bcm-pricing-calculator:UpdateWorkloadEstimateUsage</code> in your
         * policies.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchUpdateWorkloadEstimateUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateWorkloadEstimateUsageOutcome BatchUpdateWorkloadEstimateUsage(const Model::BatchUpdateWorkloadEstimateUsageRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateWorkloadEstimateUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdateWorkloadEstimateUsageRequestT = Model::BatchUpdateWorkloadEstimateUsageRequest>
        Model::BatchUpdateWorkloadEstimateUsageOutcomeCallable BatchUpdateWorkloadEstimateUsageCallable(const BatchUpdateWorkloadEstimateUsageRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::BatchUpdateWorkloadEstimateUsage, request);
        }

        /**
         * An Async wrapper for BatchUpdateWorkloadEstimateUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdateWorkloadEstimateUsageRequestT = Model::BatchUpdateWorkloadEstimateUsageRequest>
        void BatchUpdateWorkloadEstimateUsageAsync(const BatchUpdateWorkloadEstimateUsageRequestT& request, const BatchUpdateWorkloadEstimateUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::BatchUpdateWorkloadEstimateUsage, request, handler, context);
        }

        /**
         * <p> Create a Bill estimate from a Bill scenario. In the Bill scenario you can
         * model usage addition, usage changes, and usage removal. You can also model
         * commitment addition and commitment removal. After all changes in a Bill scenario
         * is made satisfactorily, you can call this API with a Bill scenario ID to
         * generate the Bill estimate. Bill estimate calculates the pre-tax cost for your
         * consolidated billing family, incorporating all modeled usage and commitments
         * alongside existing usage and commitments from your most recent completed
         * anniversary bill, with any applicable discounts applied. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/CreateBillEstimate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBillEstimateOutcome CreateBillEstimate(const Model::CreateBillEstimateRequest& request) const;

        /**
         * A Callable wrapper for CreateBillEstimate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBillEstimateRequestT = Model::CreateBillEstimateRequest>
        Model::CreateBillEstimateOutcomeCallable CreateBillEstimateCallable(const CreateBillEstimateRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::CreateBillEstimate, request);
        }

        /**
         * An Async wrapper for CreateBillEstimate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBillEstimateRequestT = Model::CreateBillEstimateRequest>
        void CreateBillEstimateAsync(const CreateBillEstimateRequestT& request, const CreateBillEstimateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::CreateBillEstimate, request, handler, context);
        }

        /**
         * <p> Creates a new bill scenario to model potential changes to Amazon Web
         * Services usage and costs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/CreateBillScenario">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBillScenarioOutcome CreateBillScenario(const Model::CreateBillScenarioRequest& request) const;

        /**
         * A Callable wrapper for CreateBillScenario that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBillScenarioRequestT = Model::CreateBillScenarioRequest>
        Model::CreateBillScenarioOutcomeCallable CreateBillScenarioCallable(const CreateBillScenarioRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::CreateBillScenario, request);
        }

        /**
         * An Async wrapper for CreateBillScenario that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBillScenarioRequestT = Model::CreateBillScenarioRequest>
        void CreateBillScenarioAsync(const CreateBillScenarioRequestT& request, const CreateBillScenarioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::CreateBillScenario, request, handler, context);
        }

        /**
         * <p> Creates a new workload estimate to model costs for a specific workload.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/CreateWorkloadEstimate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkloadEstimateOutcome CreateWorkloadEstimate(const Model::CreateWorkloadEstimateRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkloadEstimate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkloadEstimateRequestT = Model::CreateWorkloadEstimateRequest>
        Model::CreateWorkloadEstimateOutcomeCallable CreateWorkloadEstimateCallable(const CreateWorkloadEstimateRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::CreateWorkloadEstimate, request);
        }

        /**
         * An Async wrapper for CreateWorkloadEstimate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkloadEstimateRequestT = Model::CreateWorkloadEstimateRequest>
        void CreateWorkloadEstimateAsync(const CreateWorkloadEstimateRequestT& request, const CreateWorkloadEstimateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::CreateWorkloadEstimate, request, handler, context);
        }

        /**
         * <p> Deletes an existing bill estimate. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/DeleteBillEstimate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBillEstimateOutcome DeleteBillEstimate(const Model::DeleteBillEstimateRequest& request) const;

        /**
         * A Callable wrapper for DeleteBillEstimate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBillEstimateRequestT = Model::DeleteBillEstimateRequest>
        Model::DeleteBillEstimateOutcomeCallable DeleteBillEstimateCallable(const DeleteBillEstimateRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::DeleteBillEstimate, request);
        }

        /**
         * An Async wrapper for DeleteBillEstimate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBillEstimateRequestT = Model::DeleteBillEstimateRequest>
        void DeleteBillEstimateAsync(const DeleteBillEstimateRequestT& request, const DeleteBillEstimateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::DeleteBillEstimate, request, handler, context);
        }

        /**
         * <p> Deletes an existing bill scenario. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/DeleteBillScenario">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBillScenarioOutcome DeleteBillScenario(const Model::DeleteBillScenarioRequest& request) const;

        /**
         * A Callable wrapper for DeleteBillScenario that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBillScenarioRequestT = Model::DeleteBillScenarioRequest>
        Model::DeleteBillScenarioOutcomeCallable DeleteBillScenarioCallable(const DeleteBillScenarioRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::DeleteBillScenario, request);
        }

        /**
         * An Async wrapper for DeleteBillScenario that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBillScenarioRequestT = Model::DeleteBillScenarioRequest>
        void DeleteBillScenarioAsync(const DeleteBillScenarioRequestT& request, const DeleteBillScenarioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::DeleteBillScenario, request, handler, context);
        }

        /**
         * <p> Deletes an existing workload estimate. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/DeleteWorkloadEstimate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkloadEstimateOutcome DeleteWorkloadEstimate(const Model::DeleteWorkloadEstimateRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkloadEstimate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkloadEstimateRequestT = Model::DeleteWorkloadEstimateRequest>
        Model::DeleteWorkloadEstimateOutcomeCallable DeleteWorkloadEstimateCallable(const DeleteWorkloadEstimateRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::DeleteWorkloadEstimate, request);
        }

        /**
         * An Async wrapper for DeleteWorkloadEstimate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkloadEstimateRequestT = Model::DeleteWorkloadEstimateRequest>
        void DeleteWorkloadEstimateAsync(const DeleteWorkloadEstimateRequestT& request, const DeleteWorkloadEstimateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::DeleteWorkloadEstimate, request, handler, context);
        }

        /**
         * <p> Retrieves details of a specific bill estimate. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/GetBillEstimate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBillEstimateOutcome GetBillEstimate(const Model::GetBillEstimateRequest& request) const;

        /**
         * A Callable wrapper for GetBillEstimate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBillEstimateRequestT = Model::GetBillEstimateRequest>
        Model::GetBillEstimateOutcomeCallable GetBillEstimateCallable(const GetBillEstimateRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::GetBillEstimate, request);
        }

        /**
         * An Async wrapper for GetBillEstimate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBillEstimateRequestT = Model::GetBillEstimateRequest>
        void GetBillEstimateAsync(const GetBillEstimateRequestT& request, const GetBillEstimateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::GetBillEstimate, request, handler, context);
        }

        /**
         * <p> Retrieves details of a specific bill scenario. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/GetBillScenario">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBillScenarioOutcome GetBillScenario(const Model::GetBillScenarioRequest& request) const;

        /**
         * A Callable wrapper for GetBillScenario that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBillScenarioRequestT = Model::GetBillScenarioRequest>
        Model::GetBillScenarioOutcomeCallable GetBillScenarioCallable(const GetBillScenarioRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::GetBillScenario, request);
        }

        /**
         * An Async wrapper for GetBillScenario that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBillScenarioRequestT = Model::GetBillScenarioRequest>
        void GetBillScenarioAsync(const GetBillScenarioRequestT& request, const GetBillScenarioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::GetBillScenario, request, handler, context);
        }

        /**
         * <p> Retrieves the current preferences for Pricing Calculator. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/GetPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPreferencesOutcome GetPreferences(const Model::GetPreferencesRequest& request = {}) const;

        /**
         * A Callable wrapper for GetPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPreferencesRequestT = Model::GetPreferencesRequest>
        Model::GetPreferencesOutcomeCallable GetPreferencesCallable(const GetPreferencesRequestT& request = {}) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::GetPreferences, request);
        }

        /**
         * An Async wrapper for GetPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPreferencesRequestT = Model::GetPreferencesRequest>
        void GetPreferencesAsync(const GetPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetPreferencesRequestT& request = {}) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::GetPreferences, request, handler, context);
        }

        /**
         * <p> Retrieves details of a specific workload estimate. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/GetWorkloadEstimate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkloadEstimateOutcome GetWorkloadEstimate(const Model::GetWorkloadEstimateRequest& request) const;

        /**
         * A Callable wrapper for GetWorkloadEstimate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkloadEstimateRequestT = Model::GetWorkloadEstimateRequest>
        Model::GetWorkloadEstimateOutcomeCallable GetWorkloadEstimateCallable(const GetWorkloadEstimateRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::GetWorkloadEstimate, request);
        }

        /**
         * An Async wrapper for GetWorkloadEstimate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkloadEstimateRequestT = Model::GetWorkloadEstimateRequest>
        void GetWorkloadEstimateAsync(const GetWorkloadEstimateRequestT& request, const GetWorkloadEstimateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::GetWorkloadEstimate, request, handler, context);
        }

        /**
         * <p> Lists the commitments associated with a bill estimate. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/ListBillEstimateCommitments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBillEstimateCommitmentsOutcome ListBillEstimateCommitments(const Model::ListBillEstimateCommitmentsRequest& request) const;

        /**
         * A Callable wrapper for ListBillEstimateCommitments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBillEstimateCommitmentsRequestT = Model::ListBillEstimateCommitmentsRequest>
        Model::ListBillEstimateCommitmentsOutcomeCallable ListBillEstimateCommitmentsCallable(const ListBillEstimateCommitmentsRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::ListBillEstimateCommitments, request);
        }

        /**
         * An Async wrapper for ListBillEstimateCommitments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBillEstimateCommitmentsRequestT = Model::ListBillEstimateCommitmentsRequest>
        void ListBillEstimateCommitmentsAsync(const ListBillEstimateCommitmentsRequestT& request, const ListBillEstimateCommitmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::ListBillEstimateCommitments, request, handler, context);
        }

        /**
         * <p> Lists the input commitment modifications associated with a bill estimate.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/ListBillEstimateInputCommitmentModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBillEstimateInputCommitmentModificationsOutcome ListBillEstimateInputCommitmentModifications(const Model::ListBillEstimateInputCommitmentModificationsRequest& request) const;

        /**
         * A Callable wrapper for ListBillEstimateInputCommitmentModifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBillEstimateInputCommitmentModificationsRequestT = Model::ListBillEstimateInputCommitmentModificationsRequest>
        Model::ListBillEstimateInputCommitmentModificationsOutcomeCallable ListBillEstimateInputCommitmentModificationsCallable(const ListBillEstimateInputCommitmentModificationsRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::ListBillEstimateInputCommitmentModifications, request);
        }

        /**
         * An Async wrapper for ListBillEstimateInputCommitmentModifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBillEstimateInputCommitmentModificationsRequestT = Model::ListBillEstimateInputCommitmentModificationsRequest>
        void ListBillEstimateInputCommitmentModificationsAsync(const ListBillEstimateInputCommitmentModificationsRequestT& request, const ListBillEstimateInputCommitmentModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::ListBillEstimateInputCommitmentModifications, request, handler, context);
        }

        /**
         * <p> Lists the input usage modifications associated with a bill estimate.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/ListBillEstimateInputUsageModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBillEstimateInputUsageModificationsOutcome ListBillEstimateInputUsageModifications(const Model::ListBillEstimateInputUsageModificationsRequest& request) const;

        /**
         * A Callable wrapper for ListBillEstimateInputUsageModifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBillEstimateInputUsageModificationsRequestT = Model::ListBillEstimateInputUsageModificationsRequest>
        Model::ListBillEstimateInputUsageModificationsOutcomeCallable ListBillEstimateInputUsageModificationsCallable(const ListBillEstimateInputUsageModificationsRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::ListBillEstimateInputUsageModifications, request);
        }

        /**
         * An Async wrapper for ListBillEstimateInputUsageModifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBillEstimateInputUsageModificationsRequestT = Model::ListBillEstimateInputUsageModificationsRequest>
        void ListBillEstimateInputUsageModificationsAsync(const ListBillEstimateInputUsageModificationsRequestT& request, const ListBillEstimateInputUsageModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::ListBillEstimateInputUsageModifications, request, handler, context);
        }

        /**
         * <p> Lists the line items associated with a bill estimate. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/ListBillEstimateLineItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBillEstimateLineItemsOutcome ListBillEstimateLineItems(const Model::ListBillEstimateLineItemsRequest& request) const;

        /**
         * A Callable wrapper for ListBillEstimateLineItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBillEstimateLineItemsRequestT = Model::ListBillEstimateLineItemsRequest>
        Model::ListBillEstimateLineItemsOutcomeCallable ListBillEstimateLineItemsCallable(const ListBillEstimateLineItemsRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::ListBillEstimateLineItems, request);
        }

        /**
         * An Async wrapper for ListBillEstimateLineItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBillEstimateLineItemsRequestT = Model::ListBillEstimateLineItemsRequest>
        void ListBillEstimateLineItemsAsync(const ListBillEstimateLineItemsRequestT& request, const ListBillEstimateLineItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::ListBillEstimateLineItems, request, handler, context);
        }

        /**
         * <p> Lists all bill estimates for the account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/ListBillEstimates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBillEstimatesOutcome ListBillEstimates(const Model::ListBillEstimatesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListBillEstimates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBillEstimatesRequestT = Model::ListBillEstimatesRequest>
        Model::ListBillEstimatesOutcomeCallable ListBillEstimatesCallable(const ListBillEstimatesRequestT& request = {}) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::ListBillEstimates, request);
        }

        /**
         * An Async wrapper for ListBillEstimates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBillEstimatesRequestT = Model::ListBillEstimatesRequest>
        void ListBillEstimatesAsync(const ListBillEstimatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListBillEstimatesRequestT& request = {}) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::ListBillEstimates, request, handler, context);
        }

        /**
         * <p> Lists the commitment modifications associated with a bill scenario.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/ListBillScenarioCommitmentModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBillScenarioCommitmentModificationsOutcome ListBillScenarioCommitmentModifications(const Model::ListBillScenarioCommitmentModificationsRequest& request) const;

        /**
         * A Callable wrapper for ListBillScenarioCommitmentModifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBillScenarioCommitmentModificationsRequestT = Model::ListBillScenarioCommitmentModificationsRequest>
        Model::ListBillScenarioCommitmentModificationsOutcomeCallable ListBillScenarioCommitmentModificationsCallable(const ListBillScenarioCommitmentModificationsRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::ListBillScenarioCommitmentModifications, request);
        }

        /**
         * An Async wrapper for ListBillScenarioCommitmentModifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBillScenarioCommitmentModificationsRequestT = Model::ListBillScenarioCommitmentModificationsRequest>
        void ListBillScenarioCommitmentModificationsAsync(const ListBillScenarioCommitmentModificationsRequestT& request, const ListBillScenarioCommitmentModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::ListBillScenarioCommitmentModifications, request, handler, context);
        }

        /**
         * <p> Lists the usage modifications associated with a bill scenario.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/ListBillScenarioUsageModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBillScenarioUsageModificationsOutcome ListBillScenarioUsageModifications(const Model::ListBillScenarioUsageModificationsRequest& request) const;

        /**
         * A Callable wrapper for ListBillScenarioUsageModifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBillScenarioUsageModificationsRequestT = Model::ListBillScenarioUsageModificationsRequest>
        Model::ListBillScenarioUsageModificationsOutcomeCallable ListBillScenarioUsageModificationsCallable(const ListBillScenarioUsageModificationsRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::ListBillScenarioUsageModifications, request);
        }

        /**
         * An Async wrapper for ListBillScenarioUsageModifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBillScenarioUsageModificationsRequestT = Model::ListBillScenarioUsageModificationsRequest>
        void ListBillScenarioUsageModificationsAsync(const ListBillScenarioUsageModificationsRequestT& request, const ListBillScenarioUsageModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::ListBillScenarioUsageModifications, request, handler, context);
        }

        /**
         * <p> Lists all bill scenarios for the account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/ListBillScenarios">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBillScenariosOutcome ListBillScenarios(const Model::ListBillScenariosRequest& request = {}) const;

        /**
         * A Callable wrapper for ListBillScenarios that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBillScenariosRequestT = Model::ListBillScenariosRequest>
        Model::ListBillScenariosOutcomeCallable ListBillScenariosCallable(const ListBillScenariosRequestT& request = {}) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::ListBillScenarios, request);
        }

        /**
         * An Async wrapper for ListBillScenarios that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBillScenariosRequestT = Model::ListBillScenariosRequest>
        void ListBillScenariosAsync(const ListBillScenariosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListBillScenariosRequestT& request = {}) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::ListBillScenarios, request, handler, context);
        }

        /**
         * <p> Lists all tags associated with a specified resource. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p> Lists the usage associated with a workload estimate. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/ListWorkloadEstimateUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkloadEstimateUsageOutcome ListWorkloadEstimateUsage(const Model::ListWorkloadEstimateUsageRequest& request) const;

        /**
         * A Callable wrapper for ListWorkloadEstimateUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkloadEstimateUsageRequestT = Model::ListWorkloadEstimateUsageRequest>
        Model::ListWorkloadEstimateUsageOutcomeCallable ListWorkloadEstimateUsageCallable(const ListWorkloadEstimateUsageRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::ListWorkloadEstimateUsage, request);
        }

        /**
         * An Async wrapper for ListWorkloadEstimateUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkloadEstimateUsageRequestT = Model::ListWorkloadEstimateUsageRequest>
        void ListWorkloadEstimateUsageAsync(const ListWorkloadEstimateUsageRequestT& request, const ListWorkloadEstimateUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::ListWorkloadEstimateUsage, request, handler, context);
        }

        /**
         * <p> Lists all workload estimates for the account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/ListWorkloadEstimates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkloadEstimatesOutcome ListWorkloadEstimates(const Model::ListWorkloadEstimatesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListWorkloadEstimates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkloadEstimatesRequestT = Model::ListWorkloadEstimatesRequest>
        Model::ListWorkloadEstimatesOutcomeCallable ListWorkloadEstimatesCallable(const ListWorkloadEstimatesRequestT& request = {}) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::ListWorkloadEstimates, request);
        }

        /**
         * An Async wrapper for ListWorkloadEstimates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkloadEstimatesRequestT = Model::ListWorkloadEstimatesRequest>
        void ListWorkloadEstimatesAsync(const ListWorkloadEstimatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListWorkloadEstimatesRequestT& request = {}) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::ListWorkloadEstimates, request, handler, context);
        }

        /**
         * <p> Adds one or more tags to a specified resource. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::TagResource, request, handler, context);
        }

        /**
         * <p> Removes one or more tags from a specified resource. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::UntagResource, request, handler, context);
        }

        /**
         * <p> Updates an existing bill estimate. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/UpdateBillEstimate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBillEstimateOutcome UpdateBillEstimate(const Model::UpdateBillEstimateRequest& request) const;

        /**
         * A Callable wrapper for UpdateBillEstimate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBillEstimateRequestT = Model::UpdateBillEstimateRequest>
        Model::UpdateBillEstimateOutcomeCallable UpdateBillEstimateCallable(const UpdateBillEstimateRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::UpdateBillEstimate, request);
        }

        /**
         * An Async wrapper for UpdateBillEstimate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBillEstimateRequestT = Model::UpdateBillEstimateRequest>
        void UpdateBillEstimateAsync(const UpdateBillEstimateRequestT& request, const UpdateBillEstimateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::UpdateBillEstimate, request, handler, context);
        }

        /**
         * <p> Updates an existing bill scenario. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/UpdateBillScenario">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBillScenarioOutcome UpdateBillScenario(const Model::UpdateBillScenarioRequest& request) const;

        /**
         * A Callable wrapper for UpdateBillScenario that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBillScenarioRequestT = Model::UpdateBillScenarioRequest>
        Model::UpdateBillScenarioOutcomeCallable UpdateBillScenarioCallable(const UpdateBillScenarioRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::UpdateBillScenario, request);
        }

        /**
         * An Async wrapper for UpdateBillScenario that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBillScenarioRequestT = Model::UpdateBillScenarioRequest>
        void UpdateBillScenarioAsync(const UpdateBillScenarioRequestT& request, const UpdateBillScenarioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::UpdateBillScenario, request, handler, context);
        }

        /**
         * <p> Updates the preferences for Pricing Calculator. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/UpdatePreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePreferencesOutcome UpdatePreferences(const Model::UpdatePreferencesRequest& request = {}) const;

        /**
         * A Callable wrapper for UpdatePreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePreferencesRequestT = Model::UpdatePreferencesRequest>
        Model::UpdatePreferencesOutcomeCallable UpdatePreferencesCallable(const UpdatePreferencesRequestT& request = {}) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::UpdatePreferences, request);
        }

        /**
         * An Async wrapper for UpdatePreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePreferencesRequestT = Model::UpdatePreferencesRequest>
        void UpdatePreferencesAsync(const UpdatePreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const UpdatePreferencesRequestT& request = {}) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::UpdatePreferences, request, handler, context);
        }

        /**
         * <p> Updates an existing workload estimate. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/UpdateWorkloadEstimate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkloadEstimateOutcome UpdateWorkloadEstimate(const Model::UpdateWorkloadEstimateRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkloadEstimate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkloadEstimateRequestT = Model::UpdateWorkloadEstimateRequest>
        Model::UpdateWorkloadEstimateOutcomeCallable UpdateWorkloadEstimateCallable(const UpdateWorkloadEstimateRequestT& request) const
        {
            return SubmitCallable(&BCMPricingCalculatorClient::UpdateWorkloadEstimate, request);
        }

        /**
         * An Async wrapper for UpdateWorkloadEstimate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkloadEstimateRequestT = Model::UpdateWorkloadEstimateRequest>
        void UpdateWorkloadEstimateAsync(const UpdateWorkloadEstimateRequestT& request, const UpdateWorkloadEstimateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BCMPricingCalculatorClient::UpdateWorkloadEstimate, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BCMPricingCalculatorEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BCMPricingCalculatorClient>;
      void init(const BCMPricingCalculatorClientConfiguration& clientConfiguration);

      BCMPricingCalculatorClientConfiguration m_clientConfiguration;
      std::shared_ptr<BCMPricingCalculatorEndpointProviderBase> m_endpointProvider;
  };

} // namespace BCMPricingCalculator
} // namespace Aws
