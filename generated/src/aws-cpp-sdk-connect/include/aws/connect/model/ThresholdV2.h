/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about the threshold for service level
   * metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ThresholdV2">AWS
   * API Reference</a></p>
   */
  class ThresholdV2
  {
  public:
    AWS_CONNECT_API ThresholdV2() = default;
    AWS_CONNECT_API ThresholdV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ThresholdV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of comparison. Currently, "less than" (LT), "less than equal" (LTE),
     * and "greater than" (GT) comparisons are supported.</p>
     */
    inline const Aws::String& GetComparison() const { return m_comparison; }
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
    template<typename ComparisonT = Aws::String>
    void SetComparison(ComparisonT&& value) { m_comparisonHasBeenSet = true; m_comparison = std::forward<ComparisonT>(value); }
    template<typename ComparisonT = Aws::String>
    ThresholdV2& WithComparison(ComparisonT&& value) { SetComparison(std::forward<ComparisonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshold value to compare.</p>
     */
    inline double GetThresholdValue() const { return m_thresholdValue; }
    inline bool ThresholdValueHasBeenSet() const { return m_thresholdValueHasBeenSet; }
    inline void SetThresholdValue(double value) { m_thresholdValueHasBeenSet = true; m_thresholdValue = value; }
    inline ThresholdV2& WithThresholdValue(double value) { SetThresholdValue(value); return *this;}
    ///@}
  private:

    Aws::String m_comparison;
    bool m_comparisonHasBeenSet = false;

    double m_thresholdValue{0.0};
    bool m_thresholdValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
