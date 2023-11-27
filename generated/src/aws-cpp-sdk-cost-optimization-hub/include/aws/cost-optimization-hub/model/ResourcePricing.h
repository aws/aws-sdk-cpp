/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/EstimatedDiscounts.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>Contains pricing information about the specified resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/ResourcePricing">AWS
   * API Reference</a></p>
   */
  class ResourcePricing
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API ResourcePricing();
    AWS_COSTOPTIMIZATIONHUB_API ResourcePricing(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API ResourcePricing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The savings estimate incorporating all discounts with Amazon Web Services,
     * such as Reserved Instances and Savings Plans.</p>
     */
    inline double GetEstimatedCostAfterDiscounts() const{ return m_estimatedCostAfterDiscounts; }

    /**
     * <p>The savings estimate incorporating all discounts with Amazon Web Services,
     * such as Reserved Instances and Savings Plans.</p>
     */
    inline bool EstimatedCostAfterDiscountsHasBeenSet() const { return m_estimatedCostAfterDiscountsHasBeenSet; }

    /**
     * <p>The savings estimate incorporating all discounts with Amazon Web Services,
     * such as Reserved Instances and Savings Plans.</p>
     */
    inline void SetEstimatedCostAfterDiscounts(double value) { m_estimatedCostAfterDiscountsHasBeenSet = true; m_estimatedCostAfterDiscounts = value; }

    /**
     * <p>The savings estimate incorporating all discounts with Amazon Web Services,
     * such as Reserved Instances and Savings Plans.</p>
     */
    inline ResourcePricing& WithEstimatedCostAfterDiscounts(double value) { SetEstimatedCostAfterDiscounts(value); return *this;}


    /**
     * <p>The savings estimate using Amazon Web Services public pricing without
     * incorporating any discounts.</p>
     */
    inline double GetEstimatedCostBeforeDiscounts() const{ return m_estimatedCostBeforeDiscounts; }

    /**
     * <p>The savings estimate using Amazon Web Services public pricing without
     * incorporating any discounts.</p>
     */
    inline bool EstimatedCostBeforeDiscountsHasBeenSet() const { return m_estimatedCostBeforeDiscountsHasBeenSet; }

    /**
     * <p>The savings estimate using Amazon Web Services public pricing without
     * incorporating any discounts.</p>
     */
    inline void SetEstimatedCostBeforeDiscounts(double value) { m_estimatedCostBeforeDiscountsHasBeenSet = true; m_estimatedCostBeforeDiscounts = value; }

    /**
     * <p>The savings estimate using Amazon Web Services public pricing without
     * incorporating any discounts.</p>
     */
    inline ResourcePricing& WithEstimatedCostBeforeDiscounts(double value) { SetEstimatedCostBeforeDiscounts(value); return *this;}


    /**
     * <p>The estimated discounts for a recommendation.</p>
     */
    inline const EstimatedDiscounts& GetEstimatedDiscounts() const{ return m_estimatedDiscounts; }

    /**
     * <p>The estimated discounts for a recommendation.</p>
     */
    inline bool EstimatedDiscountsHasBeenSet() const { return m_estimatedDiscountsHasBeenSet; }

    /**
     * <p>The estimated discounts for a recommendation.</p>
     */
    inline void SetEstimatedDiscounts(const EstimatedDiscounts& value) { m_estimatedDiscountsHasBeenSet = true; m_estimatedDiscounts = value; }

    /**
     * <p>The estimated discounts for a recommendation.</p>
     */
    inline void SetEstimatedDiscounts(EstimatedDiscounts&& value) { m_estimatedDiscountsHasBeenSet = true; m_estimatedDiscounts = std::move(value); }

    /**
     * <p>The estimated discounts for a recommendation.</p>
     */
    inline ResourcePricing& WithEstimatedDiscounts(const EstimatedDiscounts& value) { SetEstimatedDiscounts(value); return *this;}

    /**
     * <p>The estimated discounts for a recommendation.</p>
     */
    inline ResourcePricing& WithEstimatedDiscounts(EstimatedDiscounts&& value) { SetEstimatedDiscounts(std::move(value)); return *this;}


    /**
     * <p>The estimated net unused amortized commitment for the recommendation.</p>
     */
    inline double GetEstimatedNetUnusedAmortizedCommitments() const{ return m_estimatedNetUnusedAmortizedCommitments; }

    /**
     * <p>The estimated net unused amortized commitment for the recommendation.</p>
     */
    inline bool EstimatedNetUnusedAmortizedCommitmentsHasBeenSet() const { return m_estimatedNetUnusedAmortizedCommitmentsHasBeenSet; }

    /**
     * <p>The estimated net unused amortized commitment for the recommendation.</p>
     */
    inline void SetEstimatedNetUnusedAmortizedCommitments(double value) { m_estimatedNetUnusedAmortizedCommitmentsHasBeenSet = true; m_estimatedNetUnusedAmortizedCommitments = value; }

    /**
     * <p>The estimated net unused amortized commitment for the recommendation.</p>
     */
    inline ResourcePricing& WithEstimatedNetUnusedAmortizedCommitments(double value) { SetEstimatedNetUnusedAmortizedCommitments(value); return *this;}

  private:

    double m_estimatedCostAfterDiscounts;
    bool m_estimatedCostAfterDiscountsHasBeenSet = false;

    double m_estimatedCostBeforeDiscounts;
    bool m_estimatedCostBeforeDiscountsHasBeenSet = false;

    EstimatedDiscounts m_estimatedDiscounts;
    bool m_estimatedDiscountsHasBeenSet = false;

    double m_estimatedNetUnusedAmortizedCommitments;
    bool m_estimatedNetUnusedAmortizedCommitmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
