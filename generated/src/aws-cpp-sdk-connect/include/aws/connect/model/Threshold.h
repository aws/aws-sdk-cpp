/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Comparison.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Threshold">AWS
   * API Reference</a></p>
   */
  class Threshold
  {
  public:
    AWS_CONNECT_API Threshold() = default;
    AWS_CONNECT_API Threshold(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Threshold& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of comparison. Only "less than" (LT) comparisons are supported.</p>
     */
    inline Comparison GetComparison() const { return m_comparison; }
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
    inline void SetComparison(Comparison value) { m_comparisonHasBeenSet = true; m_comparison = value; }
    inline Threshold& WithComparison(Comparison value) { SetComparison(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshold value to compare.</p>
     */
    inline double GetThresholdValue() const { return m_thresholdValue; }
    inline bool ThresholdValueHasBeenSet() const { return m_thresholdValueHasBeenSet; }
    inline void SetThresholdValue(double value) { m_thresholdValueHasBeenSet = true; m_thresholdValue = value; }
    inline Threshold& WithThresholdValue(double value) { SetThresholdValue(value); return *this;}
    ///@}
  private:

    Comparison m_comparison{Comparison::NOT_SET};
    bool m_comparisonHasBeenSet = false;

    double m_thresholdValue{0.0};
    bool m_thresholdValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
