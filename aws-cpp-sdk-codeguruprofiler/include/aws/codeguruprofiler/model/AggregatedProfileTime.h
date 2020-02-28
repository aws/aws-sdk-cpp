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
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/model/AggregationPeriod.h>
#include <aws/core/utils/DateTime.h>
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
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>Information about the time range of the latest available aggregated
   * profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/AggregatedProfileTime">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUPROFILER_API AggregatedProfileTime
  {
  public:
    AggregatedProfileTime();
    AggregatedProfileTime(Aws::Utils::Json::JsonView jsonValue);
    AggregatedProfileTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time period.</p>
     */
    inline const AggregationPeriod& GetPeriod() const{ return m_period; }

    /**
     * <p>The time period.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The time period.</p>
     */
    inline void SetPeriod(const AggregationPeriod& value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The time period.</p>
     */
    inline void SetPeriod(AggregationPeriod&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }

    /**
     * <p>The time period.</p>
     */
    inline AggregatedProfileTime& WithPeriod(const AggregationPeriod& value) { SetPeriod(value); return *this;}

    /**
     * <p>The time period.</p>
     */
    inline AggregatedProfileTime& WithPeriod(AggregationPeriod&& value) { SetPeriod(std::move(value)); return *this;}


    /**
     * <p>The start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStart() const{ return m_start; }

    /**
     * <p>The start time.</p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>The start time.</p>
     */
    inline void SetStart(const Aws::Utils::DateTime& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>The start time.</p>
     */
    inline void SetStart(Aws::Utils::DateTime&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * <p>The start time.</p>
     */
    inline AggregatedProfileTime& WithStart(const Aws::Utils::DateTime& value) { SetStart(value); return *this;}

    /**
     * <p>The start time.</p>
     */
    inline AggregatedProfileTime& WithStart(Aws::Utils::DateTime&& value) { SetStart(std::move(value)); return *this;}

  private:

    AggregationPeriod m_period;
    bool m_periodHasBeenSet;

    Aws::Utils::DateTime m_start;
    bool m_startHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
