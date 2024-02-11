/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/LambdaSavingsEstimationMode.h>
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
   * <p> Describes the effective recommendation preferences for Lambda functions.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/LambdaEffectiveRecommendationPreferences">AWS
   * API Reference</a></p>
   */
  class LambdaEffectiveRecommendationPreferences
  {
  public:
    AWS_COMPUTEOPTIMIZER_API LambdaEffectiveRecommendationPreferences();
    AWS_COMPUTEOPTIMIZER_API LambdaEffectiveRecommendationPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API LambdaEffectiveRecommendationPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Describes the savings estimation mode applied for calculating savings
     * opportunity for Lambda functions. </p>
     */
    inline const LambdaSavingsEstimationMode& GetSavingsEstimationMode() const{ return m_savingsEstimationMode; }

    /**
     * <p> Describes the savings estimation mode applied for calculating savings
     * opportunity for Lambda functions. </p>
     */
    inline bool SavingsEstimationModeHasBeenSet() const { return m_savingsEstimationModeHasBeenSet; }

    /**
     * <p> Describes the savings estimation mode applied for calculating savings
     * opportunity for Lambda functions. </p>
     */
    inline void SetSavingsEstimationMode(const LambdaSavingsEstimationMode& value) { m_savingsEstimationModeHasBeenSet = true; m_savingsEstimationMode = value; }

    /**
     * <p> Describes the savings estimation mode applied for calculating savings
     * opportunity for Lambda functions. </p>
     */
    inline void SetSavingsEstimationMode(LambdaSavingsEstimationMode&& value) { m_savingsEstimationModeHasBeenSet = true; m_savingsEstimationMode = std::move(value); }

    /**
     * <p> Describes the savings estimation mode applied for calculating savings
     * opportunity for Lambda functions. </p>
     */
    inline LambdaEffectiveRecommendationPreferences& WithSavingsEstimationMode(const LambdaSavingsEstimationMode& value) { SetSavingsEstimationMode(value); return *this;}

    /**
     * <p> Describes the savings estimation mode applied for calculating savings
     * opportunity for Lambda functions. </p>
     */
    inline LambdaEffectiveRecommendationPreferences& WithSavingsEstimationMode(LambdaSavingsEstimationMode&& value) { SetSavingsEstimationMode(std::move(value)); return *this;}

  private:

    LambdaSavingsEstimationMode m_savingsEstimationMode;
    bool m_savingsEstimationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
