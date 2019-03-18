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
#include <aws/shield/Shield_EXPORTS.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>The counter that describes a DDoS attack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/SummarizedCounter">AWS
   * API Reference</a></p>
   */
  class AWS_SHIELD_API SummarizedCounter
  {
  public:
    SummarizedCounter();
    SummarizedCounter(Aws::Utils::Json::JsonView jsonValue);
    SummarizedCounter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The counter name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The counter name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The counter name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The counter name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The counter name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The counter name.</p>
     */
    inline SummarizedCounter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The counter name.</p>
     */
    inline SummarizedCounter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The counter name.</p>
     */
    inline SummarizedCounter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The maximum value of the counter for a specified time period.</p>
     */
    inline double GetMax() const{ return m_max; }

    /**
     * <p>The maximum value of the counter for a specified time period.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The maximum value of the counter for a specified time period.</p>
     */
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The maximum value of the counter for a specified time period.</p>
     */
    inline SummarizedCounter& WithMax(double value) { SetMax(value); return *this;}


    /**
     * <p>The average value of the counter for a specified time period.</p>
     */
    inline double GetAverage() const{ return m_average; }

    /**
     * <p>The average value of the counter for a specified time period.</p>
     */
    inline bool AverageHasBeenSet() const { return m_averageHasBeenSet; }

    /**
     * <p>The average value of the counter for a specified time period.</p>
     */
    inline void SetAverage(double value) { m_averageHasBeenSet = true; m_average = value; }

    /**
     * <p>The average value of the counter for a specified time period.</p>
     */
    inline SummarizedCounter& WithAverage(double value) { SetAverage(value); return *this;}


    /**
     * <p>The total of counter values for a specified time period.</p>
     */
    inline double GetSum() const{ return m_sum; }

    /**
     * <p>The total of counter values for a specified time period.</p>
     */
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }

    /**
     * <p>The total of counter values for a specified time period.</p>
     */
    inline void SetSum(double value) { m_sumHasBeenSet = true; m_sum = value; }

    /**
     * <p>The total of counter values for a specified time period.</p>
     */
    inline SummarizedCounter& WithSum(double value) { SetSum(value); return *this;}


    /**
     * <p>The number of counters for a specified time period.</p>
     */
    inline int GetN() const{ return m_n; }

    /**
     * <p>The number of counters for a specified time period.</p>
     */
    inline bool NHasBeenSet() const { return m_nHasBeenSet; }

    /**
     * <p>The number of counters for a specified time period.</p>
     */
    inline void SetN(int value) { m_nHasBeenSet = true; m_n = value; }

    /**
     * <p>The number of counters for a specified time period.</p>
     */
    inline SummarizedCounter& WithN(int value) { SetN(value); return *this;}


    /**
     * <p>The unit of the counters.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of the counters.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of the counters.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of the counters.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of the counters.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The unit of the counters.</p>
     */
    inline SummarizedCounter& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of the counters.</p>
     */
    inline SummarizedCounter& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The unit of the counters.</p>
     */
    inline SummarizedCounter& WithUnit(const char* value) { SetUnit(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    double m_max;
    bool m_maxHasBeenSet;

    double m_average;
    bool m_averageHasBeenSet;

    double m_sum;
    bool m_sumHasBeenSet;

    int m_n;
    bool m_nHasBeenSet;

    Aws::String m_unit;
    bool m_unitHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
