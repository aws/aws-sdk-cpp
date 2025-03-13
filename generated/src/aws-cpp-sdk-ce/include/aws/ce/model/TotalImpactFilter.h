/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/NumericOperator.h>
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
   * <p>Filters cost anomalies based on the total impact. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/TotalImpactFilter">AWS
   * API Reference</a></p>
   */
  class TotalImpactFilter
  {
  public:
    AWS_COSTEXPLORER_API TotalImpactFilter() = default;
    AWS_COSTEXPLORER_API TotalImpactFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API TotalImpactFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The comparing value that's used in the filter. </p>
     */
    inline NumericOperator GetNumericOperator() const { return m_numericOperator; }
    inline bool NumericOperatorHasBeenSet() const { return m_numericOperatorHasBeenSet; }
    inline void SetNumericOperator(NumericOperator value) { m_numericOperatorHasBeenSet = true; m_numericOperator = value; }
    inline TotalImpactFilter& WithNumericOperator(NumericOperator value) { SetNumericOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lower bound dollar value that's used in the filter. </p>
     */
    inline double GetStartValue() const { return m_startValue; }
    inline bool StartValueHasBeenSet() const { return m_startValueHasBeenSet; }
    inline void SetStartValue(double value) { m_startValueHasBeenSet = true; m_startValue = value; }
    inline TotalImpactFilter& WithStartValue(double value) { SetStartValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper bound dollar value that's used in the filter. </p>
     */
    inline double GetEndValue() const { return m_endValue; }
    inline bool EndValueHasBeenSet() const { return m_endValueHasBeenSet; }
    inline void SetEndValue(double value) { m_endValueHasBeenSet = true; m_endValue = value; }
    inline TotalImpactFilter& WithEndValue(double value) { SetEndValue(value); return *this;}
    ///@}
  private:

    NumericOperator m_numericOperator{NumericOperator::NOT_SET};
    bool m_numericOperatorHasBeenSet = false;

    double m_startValue{0.0};
    bool m_startValueHasBeenSet = false;

    double m_endValue{0.0};
    bool m_endValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
