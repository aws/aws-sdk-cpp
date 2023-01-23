/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/RecommendationTarget.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>You can use <code>RightsizingRecommendationConfiguration</code> to customize
   * recommendations across two attributes. You can choose to view recommendations
   * for instances within the same instance families or across different instance
   * families. You can also choose to view your estimated savings that are associated
   * with recommendations with consideration of existing Savings Plans or Reserved
   * Instance (RI) benefits, or neither. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/RightsizingRecommendationConfiguration">AWS
   * API Reference</a></p>
   */
  class RightsizingRecommendationConfiguration
  {
  public:
    AWS_COSTEXPLORER_API RightsizingRecommendationConfiguration();
    AWS_COSTEXPLORER_API RightsizingRecommendationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API RightsizingRecommendationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The option to see recommendations within the same instance family or
     * recommendations for instances across other families. The default value is
     * <code>SAME_INSTANCE_FAMILY</code>. </p>
     */
    inline const RecommendationTarget& GetRecommendationTarget() const{ return m_recommendationTarget; }

    /**
     * <p>The option to see recommendations within the same instance family or
     * recommendations for instances across other families. The default value is
     * <code>SAME_INSTANCE_FAMILY</code>. </p>
     */
    inline bool RecommendationTargetHasBeenSet() const { return m_recommendationTargetHasBeenSet; }

    /**
     * <p>The option to see recommendations within the same instance family or
     * recommendations for instances across other families. The default value is
     * <code>SAME_INSTANCE_FAMILY</code>. </p>
     */
    inline void SetRecommendationTarget(const RecommendationTarget& value) { m_recommendationTargetHasBeenSet = true; m_recommendationTarget = value; }

    /**
     * <p>The option to see recommendations within the same instance family or
     * recommendations for instances across other families. The default value is
     * <code>SAME_INSTANCE_FAMILY</code>. </p>
     */
    inline void SetRecommendationTarget(RecommendationTarget&& value) { m_recommendationTargetHasBeenSet = true; m_recommendationTarget = std::move(value); }

    /**
     * <p>The option to see recommendations within the same instance family or
     * recommendations for instances across other families. The default value is
     * <code>SAME_INSTANCE_FAMILY</code>. </p>
     */
    inline RightsizingRecommendationConfiguration& WithRecommendationTarget(const RecommendationTarget& value) { SetRecommendationTarget(value); return *this;}

    /**
     * <p>The option to see recommendations within the same instance family or
     * recommendations for instances across other families. The default value is
     * <code>SAME_INSTANCE_FAMILY</code>. </p>
     */
    inline RightsizingRecommendationConfiguration& WithRecommendationTarget(RecommendationTarget&& value) { SetRecommendationTarget(std::move(value)); return *this;}


    /**
     * <p>The option to consider RI or Savings Plans discount benefits in your savings
     * calculation. The default value is <code>TRUE</code>. </p>
     */
    inline bool GetBenefitsConsidered() const{ return m_benefitsConsidered; }

    /**
     * <p>The option to consider RI or Savings Plans discount benefits in your savings
     * calculation. The default value is <code>TRUE</code>. </p>
     */
    inline bool BenefitsConsideredHasBeenSet() const { return m_benefitsConsideredHasBeenSet; }

    /**
     * <p>The option to consider RI or Savings Plans discount benefits in your savings
     * calculation. The default value is <code>TRUE</code>. </p>
     */
    inline void SetBenefitsConsidered(bool value) { m_benefitsConsideredHasBeenSet = true; m_benefitsConsidered = value; }

    /**
     * <p>The option to consider RI or Savings Plans discount benefits in your savings
     * calculation. The default value is <code>TRUE</code>. </p>
     */
    inline RightsizingRecommendationConfiguration& WithBenefitsConsidered(bool value) { SetBenefitsConsidered(value); return *this;}

  private:

    RecommendationTarget m_recommendationTarget;
    bool m_recommendationTargetHasBeenSet = false;

    bool m_benefitsConsidered;
    bool m_benefitsConsideredHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
