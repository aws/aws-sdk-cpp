/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>A <code>Threshold</code> object that includes a comparison and
   * <code>ThresholdValue</code> to compare to. Used with service level
   * metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Threshold">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API Threshold
  {
  public:
    Threshold();
    Threshold(Aws::Utils::Json::JsonView jsonValue);
    Threshold& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Threshold to use to compare service level metrics to. Only "Less than"
     * (LT) comparisons are supported.</p>
     */
    inline const Comparison& GetComparison() const{ return m_comparison; }

    /**
     * <p>The Threshold to use to compare service level metrics to. Only "Less than"
     * (LT) comparisons are supported.</p>
     */
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }

    /**
     * <p>The Threshold to use to compare service level metrics to. Only "Less than"
     * (LT) comparisons are supported.</p>
     */
    inline void SetComparison(const Comparison& value) { m_comparisonHasBeenSet = true; m_comparison = value; }

    /**
     * <p>The Threshold to use to compare service level metrics to. Only "Less than"
     * (LT) comparisons are supported.</p>
     */
    inline void SetComparison(Comparison&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }

    /**
     * <p>The Threshold to use to compare service level metrics to. Only "Less than"
     * (LT) comparisons are supported.</p>
     */
    inline Threshold& WithComparison(const Comparison& value) { SetComparison(value); return *this;}

    /**
     * <p>The Threshold to use to compare service level metrics to. Only "Less than"
     * (LT) comparisons are supported.</p>
     */
    inline Threshold& WithComparison(Comparison&& value) { SetComparison(std::move(value)); return *this;}


    /**
     * <p>The value of the threshold to compare the metric to. Only "Less than" (LT)
     * comparisons are supported.</p>
     */
    inline double GetThresholdValue() const{ return m_thresholdValue; }

    /**
     * <p>The value of the threshold to compare the metric to. Only "Less than" (LT)
     * comparisons are supported.</p>
     */
    inline bool ThresholdValueHasBeenSet() const { return m_thresholdValueHasBeenSet; }

    /**
     * <p>The value of the threshold to compare the metric to. Only "Less than" (LT)
     * comparisons are supported.</p>
     */
    inline void SetThresholdValue(double value) { m_thresholdValueHasBeenSet = true; m_thresholdValue = value; }

    /**
     * <p>The value of the threshold to compare the metric to. Only "Less than" (LT)
     * comparisons are supported.</p>
     */
    inline Threshold& WithThresholdValue(double value) { SetThresholdValue(value); return *this;}

  private:

    Comparison m_comparison;
    bool m_comparisonHasBeenSet;

    double m_thresholdValue;
    bool m_thresholdValueHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
