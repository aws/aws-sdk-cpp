/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/ECSSavingsEstimationMode.h>
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
   * <p> Describes the effective recommendation preferences for Amazon ECS services.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ECSEffectiveRecommendationPreferences">AWS
   * API Reference</a></p>
   */
  class ECSEffectiveRecommendationPreferences
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ECSEffectiveRecommendationPreferences();
    AWS_COMPUTEOPTIMIZER_API ECSEffectiveRecommendationPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ECSEffectiveRecommendationPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Describes the savings estimation mode preference applied for calculating
     * savings opportunity for Amazon ECS services. </p>
     */
    inline const ECSSavingsEstimationMode& GetSavingsEstimationMode() const{ return m_savingsEstimationMode; }

    /**
     * <p> Describes the savings estimation mode preference applied for calculating
     * savings opportunity for Amazon ECS services. </p>
     */
    inline bool SavingsEstimationModeHasBeenSet() const { return m_savingsEstimationModeHasBeenSet; }

    /**
     * <p> Describes the savings estimation mode preference applied for calculating
     * savings opportunity for Amazon ECS services. </p>
     */
    inline void SetSavingsEstimationMode(const ECSSavingsEstimationMode& value) { m_savingsEstimationModeHasBeenSet = true; m_savingsEstimationMode = value; }

    /**
     * <p> Describes the savings estimation mode preference applied for calculating
     * savings opportunity for Amazon ECS services. </p>
     */
    inline void SetSavingsEstimationMode(ECSSavingsEstimationMode&& value) { m_savingsEstimationModeHasBeenSet = true; m_savingsEstimationMode = std::move(value); }

    /**
     * <p> Describes the savings estimation mode preference applied for calculating
     * savings opportunity for Amazon ECS services. </p>
     */
    inline ECSEffectiveRecommendationPreferences& WithSavingsEstimationMode(const ECSSavingsEstimationMode& value) { SetSavingsEstimationMode(value); return *this;}

    /**
     * <p> Describes the savings estimation mode preference applied for calculating
     * savings opportunity for Amazon ECS services. </p>
     */
    inline ECSEffectiveRecommendationPreferences& WithSavingsEstimationMode(ECSSavingsEstimationMode&& value) { SetSavingsEstimationMode(std::move(value)); return *this;}

  private:

    ECSSavingsEstimationMode m_savingsEstimationMode;
    bool m_savingsEstimationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
