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
    AWS_COSTEXPLORER_API TotalImpactFilter();
    AWS_COSTEXPLORER_API TotalImpactFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API TotalImpactFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The comparing value that's used in the filter. </p>
     */
    inline const NumericOperator& GetNumericOperator() const{ return m_numericOperator; }

    /**
     * <p>The comparing value that's used in the filter. </p>
     */
    inline bool NumericOperatorHasBeenSet() const { return m_numericOperatorHasBeenSet; }

    /**
     * <p>The comparing value that's used in the filter. </p>
     */
    inline void SetNumericOperator(const NumericOperator& value) { m_numericOperatorHasBeenSet = true; m_numericOperator = value; }

    /**
     * <p>The comparing value that's used in the filter. </p>
     */
    inline void SetNumericOperator(NumericOperator&& value) { m_numericOperatorHasBeenSet = true; m_numericOperator = std::move(value); }

    /**
     * <p>The comparing value that's used in the filter. </p>
     */
    inline TotalImpactFilter& WithNumericOperator(const NumericOperator& value) { SetNumericOperator(value); return *this;}

    /**
     * <p>The comparing value that's used in the filter. </p>
     */
    inline TotalImpactFilter& WithNumericOperator(NumericOperator&& value) { SetNumericOperator(std::move(value)); return *this;}


    /**
     * <p>The lower bound dollar value that's used in the filter. </p>
     */
    inline double GetStartValue() const{ return m_startValue; }

    /**
     * <p>The lower bound dollar value that's used in the filter. </p>
     */
    inline bool StartValueHasBeenSet() const { return m_startValueHasBeenSet; }

    /**
     * <p>The lower bound dollar value that's used in the filter. </p>
     */
    inline void SetStartValue(double value) { m_startValueHasBeenSet = true; m_startValue = value; }

    /**
     * <p>The lower bound dollar value that's used in the filter. </p>
     */
    inline TotalImpactFilter& WithStartValue(double value) { SetStartValue(value); return *this;}


    /**
     * <p>The upper bound dollar value that's used in the filter. </p>
     */
    inline double GetEndValue() const{ return m_endValue; }

    /**
     * <p>The upper bound dollar value that's used in the filter. </p>
     */
    inline bool EndValueHasBeenSet() const { return m_endValueHasBeenSet; }

    /**
     * <p>The upper bound dollar value that's used in the filter. </p>
     */
    inline void SetEndValue(double value) { m_endValueHasBeenSet = true; m_endValue = value; }

    /**
     * <p>The upper bound dollar value that's used in the filter. </p>
     */
    inline TotalImpactFilter& WithEndValue(double value) { SetEndValue(value); return *this;}

  private:

    NumericOperator m_numericOperator;
    bool m_numericOperatorHasBeenSet = false;

    double m_startValue;
    bool m_startValueHasBeenSet = false;

    double m_endValue;
    bool m_endValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
