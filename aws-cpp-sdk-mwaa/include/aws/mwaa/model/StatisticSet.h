/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>

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
namespace MWAA
{
namespace Model
{

  /**
   * <p>Internal only API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/StatisticSet">AWS
   * API Reference</a></p>
   */
  class AWS_MWAA_API StatisticSet
  {
  public:
    StatisticSet();
    StatisticSet(Aws::Utils::Json::JsonView jsonValue);
    StatisticSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Internal only API.</p>
     */
    inline double GetMaximum() const{ return m_maximum; }

    /**
     * <p>Internal only API.</p>
     */
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }

    /**
     * <p>Internal only API.</p>
     */
    inline void SetMaximum(double value) { m_maximumHasBeenSet = true; m_maximum = value; }

    /**
     * <p>Internal only API.</p>
     */
    inline StatisticSet& WithMaximum(double value) { SetMaximum(value); return *this;}


    /**
     * <p>Internal only API.</p>
     */
    inline double GetMinimum() const{ return m_minimum; }

    /**
     * <p>Internal only API.</p>
     */
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }

    /**
     * <p>Internal only API.</p>
     */
    inline void SetMinimum(double value) { m_minimumHasBeenSet = true; m_minimum = value; }

    /**
     * <p>Internal only API.</p>
     */
    inline StatisticSet& WithMinimum(double value) { SetMinimum(value); return *this;}


    /**
     * <p>Internal only API.</p>
     */
    inline int GetSampleCount() const{ return m_sampleCount; }

    /**
     * <p>Internal only API.</p>
     */
    inline bool SampleCountHasBeenSet() const { return m_sampleCountHasBeenSet; }

    /**
     * <p>Internal only API.</p>
     */
    inline void SetSampleCount(int value) { m_sampleCountHasBeenSet = true; m_sampleCount = value; }

    /**
     * <p>Internal only API.</p>
     */
    inline StatisticSet& WithSampleCount(int value) { SetSampleCount(value); return *this;}


    /**
     * <p>Internal only API.</p>
     */
    inline double GetSum() const{ return m_sum; }

    /**
     * <p>Internal only API.</p>
     */
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }

    /**
     * <p>Internal only API.</p>
     */
    inline void SetSum(double value) { m_sumHasBeenSet = true; m_sum = value; }

    /**
     * <p>Internal only API.</p>
     */
    inline StatisticSet& WithSum(double value) { SetSum(value); return *this;}

  private:

    double m_maximum;
    bool m_maximumHasBeenSet;

    double m_minimum;
    bool m_minimumHasBeenSet;

    int m_sampleCount;
    bool m_sampleCountHasBeenSet;

    double m_sum;
    bool m_sumHasBeenSet;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
