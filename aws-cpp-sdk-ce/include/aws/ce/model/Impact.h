/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>

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
   * <p> The anomaly's dollar value. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/Impact">AWS API
   * Reference</a></p>
   */
  class AWS_COSTEXPLORER_API Impact
  {
  public:
    Impact();
    Impact(Aws::Utils::Json::JsonView jsonValue);
    Impact& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The maximum dollar value observed for an anomaly. </p>
     */
    inline double GetMaxImpact() const{ return m_maxImpact; }

    /**
     * <p> The maximum dollar value observed for an anomaly. </p>
     */
    inline bool MaxImpactHasBeenSet() const { return m_maxImpactHasBeenSet; }

    /**
     * <p> The maximum dollar value observed for an anomaly. </p>
     */
    inline void SetMaxImpact(double value) { m_maxImpactHasBeenSet = true; m_maxImpact = value; }

    /**
     * <p> The maximum dollar value observed for an anomaly. </p>
     */
    inline Impact& WithMaxImpact(double value) { SetMaxImpact(value); return *this;}


    /**
     * <p> The cumulative dollar value observed for an anomaly. </p>
     */
    inline double GetTotalImpact() const{ return m_totalImpact; }

    /**
     * <p> The cumulative dollar value observed for an anomaly. </p>
     */
    inline bool TotalImpactHasBeenSet() const { return m_totalImpactHasBeenSet; }

    /**
     * <p> The cumulative dollar value observed for an anomaly. </p>
     */
    inline void SetTotalImpact(double value) { m_totalImpactHasBeenSet = true; m_totalImpact = value; }

    /**
     * <p> The cumulative dollar value observed for an anomaly. </p>
     */
    inline Impact& WithTotalImpact(double value) { SetTotalImpact(value); return *this;}

  private:

    double m_maxImpact;
    bool m_maxImpactHasBeenSet;

    double m_totalImpact;
    bool m_totalImpactHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
