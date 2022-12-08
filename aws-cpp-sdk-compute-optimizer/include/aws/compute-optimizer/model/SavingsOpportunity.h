/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/EstimatedMonthlySavings.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes the savings opportunity for recommendations of a given resource
   * type or for the recommendation option of an individual resource.</p> <p>Savings
   * opportunity represents the estimated monthly savings you can achieve by
   * implementing a given Compute Optimizer recommendation.</p> 
   * <p>Savings opportunity data requires that you opt in to Cost Explorer, as well
   * as activate <b>Receive Amazon EC2 resource recommendations</b> in the Cost
   * Explorer preferences page. That creates a connection between Cost Explorer and
   * Compute Optimizer. With this connection, Cost Explorer generates savings
   * estimates considering the price of existing resources, the price of recommended
   * resources, and historical usage data. Estimated monthly savings reflects the
   * projected dollar savings associated with each of the recommendations generated.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/cost-management/latest/userguide/ce-enable.html">Enabling
   * Cost Explorer</a> and <a
   * href="https://docs.aws.amazon.com/cost-management/latest/userguide/ce-rightsizing.html">Optimizing
   * your cost with Rightsizing Recommendations</a> in the <i>Cost Management User
   * Guide</i>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/SavingsOpportunity">AWS
   * API Reference</a></p>
   */
  class SavingsOpportunity
  {
  public:
    AWS_COMPUTEOPTIMIZER_API SavingsOpportunity();
    AWS_COMPUTEOPTIMIZER_API SavingsOpportunity(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API SavingsOpportunity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The estimated monthly savings possible as a percentage of monthly cost by
     * adopting Compute Optimizer recommendations for a given resource.</p>
     */
    inline double GetSavingsOpportunityPercentage() const{ return m_savingsOpportunityPercentage; }

    /**
     * <p>The estimated monthly savings possible as a percentage of monthly cost by
     * adopting Compute Optimizer recommendations for a given resource.</p>
     */
    inline bool SavingsOpportunityPercentageHasBeenSet() const { return m_savingsOpportunityPercentageHasBeenSet; }

    /**
     * <p>The estimated monthly savings possible as a percentage of monthly cost by
     * adopting Compute Optimizer recommendations for a given resource.</p>
     */
    inline void SetSavingsOpportunityPercentage(double value) { m_savingsOpportunityPercentageHasBeenSet = true; m_savingsOpportunityPercentage = value; }

    /**
     * <p>The estimated monthly savings possible as a percentage of monthly cost by
     * adopting Compute Optimizer recommendations for a given resource.</p>
     */
    inline SavingsOpportunity& WithSavingsOpportunityPercentage(double value) { SetSavingsOpportunityPercentage(value); return *this;}


    /**
     * <p>An object that describes the estimated monthly savings amount possible, based
     * on On-Demand instance pricing, by adopting Compute Optimizer recommendations for
     * a given resource.</p>
     */
    inline const EstimatedMonthlySavings& GetEstimatedMonthlySavings() const{ return m_estimatedMonthlySavings; }

    /**
     * <p>An object that describes the estimated monthly savings amount possible, based
     * on On-Demand instance pricing, by adopting Compute Optimizer recommendations for
     * a given resource.</p>
     */
    inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }

    /**
     * <p>An object that describes the estimated monthly savings amount possible, based
     * on On-Demand instance pricing, by adopting Compute Optimizer recommendations for
     * a given resource.</p>
     */
    inline void SetEstimatedMonthlySavings(const EstimatedMonthlySavings& value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = value; }

    /**
     * <p>An object that describes the estimated monthly savings amount possible, based
     * on On-Demand instance pricing, by adopting Compute Optimizer recommendations for
     * a given resource.</p>
     */
    inline void SetEstimatedMonthlySavings(EstimatedMonthlySavings&& value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = std::move(value); }

    /**
     * <p>An object that describes the estimated monthly savings amount possible, based
     * on On-Demand instance pricing, by adopting Compute Optimizer recommendations for
     * a given resource.</p>
     */
    inline SavingsOpportunity& WithEstimatedMonthlySavings(const EstimatedMonthlySavings& value) { SetEstimatedMonthlySavings(value); return *this;}

    /**
     * <p>An object that describes the estimated monthly savings amount possible, based
     * on On-Demand instance pricing, by adopting Compute Optimizer recommendations for
     * a given resource.</p>
     */
    inline SavingsOpportunity& WithEstimatedMonthlySavings(EstimatedMonthlySavings&& value) { SetEstimatedMonthlySavings(std::move(value)); return *this;}

  private:

    double m_savingsOpportunityPercentage;
    bool m_savingsOpportunityPercentageHasBeenSet = false;

    EstimatedMonthlySavings m_estimatedMonthlySavings;
    bool m_estimatedMonthlySavingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
