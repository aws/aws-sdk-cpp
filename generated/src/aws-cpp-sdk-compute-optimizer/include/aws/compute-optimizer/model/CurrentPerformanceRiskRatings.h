/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>

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
   * <p>Describes the performance risk ratings for a given resource type.</p>
   * <p>Resources with a <code>high</code> or <code>medium</code> rating are at risk
   * of not meeting the performance needs of their workloads, while resources with a
   * <code>low</code> rating are performing well in their workloads.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/CurrentPerformanceRiskRatings">AWS
   * API Reference</a></p>
   */
  class CurrentPerformanceRiskRatings
  {
  public:
    AWS_COMPUTEOPTIMIZER_API CurrentPerformanceRiskRatings() = default;
    AWS_COMPUTEOPTIMIZER_API CurrentPerformanceRiskRatings(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API CurrentPerformanceRiskRatings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A count of the applicable resource types with a high performance risk
     * rating.</p>
     */
    inline long long GetHigh() const { return m_high; }
    inline bool HighHasBeenSet() const { return m_highHasBeenSet; }
    inline void SetHigh(long long value) { m_highHasBeenSet = true; m_high = value; }
    inline CurrentPerformanceRiskRatings& WithHigh(long long value) { SetHigh(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A count of the applicable resource types with a medium performance risk
     * rating.</p>
     */
    inline long long GetMedium() const { return m_medium; }
    inline bool MediumHasBeenSet() const { return m_mediumHasBeenSet; }
    inline void SetMedium(long long value) { m_mediumHasBeenSet = true; m_medium = value; }
    inline CurrentPerformanceRiskRatings& WithMedium(long long value) { SetMedium(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A count of the applicable resource types with a low performance risk
     * rating.</p>
     */
    inline long long GetLow() const { return m_low; }
    inline bool LowHasBeenSet() const { return m_lowHasBeenSet; }
    inline void SetLow(long long value) { m_lowHasBeenSet = true; m_low = value; }
    inline CurrentPerformanceRiskRatings& WithLow(long long value) { SetLow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A count of the applicable resource types with a very low performance risk
     * rating.</p>
     */
    inline long long GetVeryLow() const { return m_veryLow; }
    inline bool VeryLowHasBeenSet() const { return m_veryLowHasBeenSet; }
    inline void SetVeryLow(long long value) { m_veryLowHasBeenSet = true; m_veryLow = value; }
    inline CurrentPerformanceRiskRatings& WithVeryLow(long long value) { SetVeryLow(value); return *this;}
    ///@}
  private:

    long long m_high{0};
    bool m_highHasBeenSet = false;

    long long m_medium{0};
    bool m_mediumHasBeenSet = false;

    long long m_low{0};
    bool m_lowHasBeenSet = false;

    long long m_veryLow{0};
    bool m_veryLowHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
