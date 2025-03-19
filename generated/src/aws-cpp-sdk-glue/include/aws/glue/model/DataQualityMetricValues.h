/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>

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
namespace Glue
{
namespace Model
{

  /**
   * <p>Describes the data quality metric value according to the analysis of
   * historical data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityMetricValues">AWS
   * API Reference</a></p>
   */
  class DataQualityMetricValues
  {
  public:
    AWS_GLUE_API DataQualityMetricValues() = default;
    AWS_GLUE_API DataQualityMetricValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityMetricValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The actual value of the data quality metric.</p>
     */
    inline double GetActualValue() const { return m_actualValue; }
    inline bool ActualValueHasBeenSet() const { return m_actualValueHasBeenSet; }
    inline void SetActualValue(double value) { m_actualValueHasBeenSet = true; m_actualValue = value; }
    inline DataQualityMetricValues& WithActualValue(double value) { SetActualValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected value of the data quality metric according to the analysis of
     * historical data.</p>
     */
    inline double GetExpectedValue() const { return m_expectedValue; }
    inline bool ExpectedValueHasBeenSet() const { return m_expectedValueHasBeenSet; }
    inline void SetExpectedValue(double value) { m_expectedValueHasBeenSet = true; m_expectedValue = value; }
    inline DataQualityMetricValues& WithExpectedValue(double value) { SetExpectedValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lower limit of the data quality metric value according to the analysis of
     * historical data.</p>
     */
    inline double GetLowerLimit() const { return m_lowerLimit; }
    inline bool LowerLimitHasBeenSet() const { return m_lowerLimitHasBeenSet; }
    inline void SetLowerLimit(double value) { m_lowerLimitHasBeenSet = true; m_lowerLimit = value; }
    inline DataQualityMetricValues& WithLowerLimit(double value) { SetLowerLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper limit of the data quality metric value according to the analysis of
     * historical data.</p>
     */
    inline double GetUpperLimit() const { return m_upperLimit; }
    inline bool UpperLimitHasBeenSet() const { return m_upperLimitHasBeenSet; }
    inline void SetUpperLimit(double value) { m_upperLimitHasBeenSet = true; m_upperLimit = value; }
    inline DataQualityMetricValues& WithUpperLimit(double value) { SetUpperLimit(value); return *this;}
    ///@}
  private:

    double m_actualValue{0.0};
    bool m_actualValueHasBeenSet = false;

    double m_expectedValue{0.0};
    bool m_expectedValueHasBeenSet = false;

    double m_lowerLimit{0.0};
    bool m_lowerLimitHasBeenSet = false;

    double m_upperLimit{0.0};
    bool m_upperLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
