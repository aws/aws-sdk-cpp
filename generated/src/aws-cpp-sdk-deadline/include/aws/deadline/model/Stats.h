/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>

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
namespace deadline
{
namespace Model
{

  /**
   * <p>The minimum, maximum, average, and sum.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/Stats">AWS API
   * Reference</a></p>
   */
  class Stats
  {
  public:
    AWS_DEADLINE_API Stats() = default;
    AWS_DEADLINE_API Stats(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Stats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum of the usage statistics.</p>
     */
    inline double GetMin() const { return m_min; }
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
    inline void SetMin(double value) { m_minHasBeenSet = true; m_min = value; }
    inline Stats& WithMin(double value) { SetMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum among the usage statistics.</p>
     */
    inline double GetMax() const { return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }
    inline Stats& WithMax(double value) { SetMax(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average of the usage statistics.</p>
     */
    inline double GetAvg() const { return m_avg; }
    inline bool AvgHasBeenSet() const { return m_avgHasBeenSet; }
    inline void SetAvg(double value) { m_avgHasBeenSet = true; m_avg = value; }
    inline Stats& WithAvg(double value) { SetAvg(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sum of the usage statistics.</p>
     */
    inline double GetSum() const { return m_sum; }
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }
    inline void SetSum(double value) { m_sumHasBeenSet = true; m_sum = value; }
    inline Stats& WithSum(double value) { SetSum(value); return *this;}
    ///@}
  private:

    double m_min{0.0};
    bool m_minHasBeenSet = false;

    double m_max{0.0};
    bool m_maxHasBeenSet = false;

    double m_avg{0.0};
    bool m_avgHasBeenSet = false;

    double m_sum{0.0};
    bool m_sumHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
