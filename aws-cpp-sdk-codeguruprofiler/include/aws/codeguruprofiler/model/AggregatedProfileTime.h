/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p> Specifies the aggregation period and aggregation start time for an
   * aggregated profile. An aggregated profile is used to collect posted agent
   * profiles during an aggregation period. There are three possible aggregation
   * periods (1 day, 1 hour, or 5 minutes). </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/AggregatedProfileTime">AWS
   * API Reference</a></p>
   */
  class AggregatedProfileTime
  {
  public:
    AWS_CODEGURUPROFILER_API AggregatedProfileTime();
    AWS_CODEGURUPROFILER_API AggregatedProfileTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API AggregatedProfileTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The aggregation period. This indicates the period during which an
     * aggregation profile collects posted agent profiles for a profiling group. Use
     * one of three valid durations that are specified using the ISO 8601 format. </p>
     * <ul> <li> <p> <code>P1D</code> — 1 day </p> </li> <li> <p> <code>PT1H</code> — 1
     * hour </p> </li> <li> <p> <code>PT5M</code> — 5 minutes </p> </li> </ul>
     */
    inline const AggregationPeriod& GetPeriod() const{ return m_period; }

    /**
     * <p> The aggregation period. This indicates the period during which an
     * aggregation profile collects posted agent profiles for a profiling group. Use
     * one of three valid durations that are specified using the ISO 8601 format. </p>
     * <ul> <li> <p> <code>P1D</code> — 1 day </p> </li> <li> <p> <code>PT1H</code> — 1
     * hour </p> </li> <li> <p> <code>PT5M</code> — 5 minutes </p> </li> </ul>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p> The aggregation period. This indicates the period during which an
     * aggregation profile collects posted agent profiles for a profiling group. Use
     * one of three valid durations that are specified using the ISO 8601 format. </p>
     * <ul> <li> <p> <code>P1D</code> — 1 day </p> </li> <li> <p> <code>PT1H</code> — 1
     * hour </p> </li> <li> <p> <code>PT5M</code> — 5 minutes </p> </li> </ul>
     */
    inline void SetPeriod(const AggregationPeriod& value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p> The aggregation period. This indicates the period during which an
     * aggregation profile collects posted agent profiles for a profiling group. Use
     * one of three valid durations that are specified using the ISO 8601 format. </p>
     * <ul> <li> <p> <code>P1D</code> — 1 day </p> </li> <li> <p> <code>PT1H</code> — 1
     * hour </p> </li> <li> <p> <code>PT5M</code> — 5 minutes </p> </li> </ul>
     */
    inline void SetPeriod(AggregationPeriod&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }

    /**
     * <p> The aggregation period. This indicates the period during which an
     * aggregation profile collects posted agent profiles for a profiling group. Use
     * one of three valid durations that are specified using the ISO 8601 format. </p>
     * <ul> <li> <p> <code>P1D</code> — 1 day </p> </li> <li> <p> <code>PT1H</code> — 1
     * hour </p> </li> <li> <p> <code>PT5M</code> — 5 minutes </p> </li> </ul>
     */
    inline AggregatedProfileTime& WithPeriod(const AggregationPeriod& value) { SetPeriod(value); return *this;}

    /**
     * <p> The aggregation period. This indicates the period during which an
     * aggregation profile collects posted agent profiles for a profiling group. Use
     * one of three valid durations that are specified using the ISO 8601 format. </p>
     * <ul> <li> <p> <code>P1D</code> — 1 day </p> </li> <li> <p> <code>PT1H</code> — 1
     * hour </p> </li> <li> <p> <code>PT5M</code> — 5 minutes </p> </li> </ul>
     */
    inline AggregatedProfileTime& WithPeriod(AggregationPeriod&& value) { SetPeriod(std::move(value)); return *this;}


    /**
     * <p> The time that aggregation of posted agent profiles for a profiling group
     * starts. The aggregation profile contains profiles posted by the agent starting
     * at this time for an aggregation period specified by the <code>period</code>
     * property of the <code>AggregatedProfileTime</code> object. </p> <p> Specify
     * <code>start</code> using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetStart() const{ return m_start; }

    /**
     * <p> The time that aggregation of posted agent profiles for a profiling group
     * starts. The aggregation profile contains profiles posted by the agent starting
     * at this time for an aggregation period specified by the <code>period</code>
     * property of the <code>AggregatedProfileTime</code> object. </p> <p> Specify
     * <code>start</code> using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p> The time that aggregation of posted agent profiles for a profiling group
     * starts. The aggregation profile contains profiles posted by the agent starting
     * at this time for an aggregation period specified by the <code>period</code>
     * property of the <code>AggregatedProfileTime</code> object. </p> <p> Specify
     * <code>start</code> using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline void SetStart(const Aws::Utils::DateTime& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p> The time that aggregation of posted agent profiles for a profiling group
     * starts. The aggregation profile contains profiles posted by the agent starting
     * at this time for an aggregation period specified by the <code>period</code>
     * property of the <code>AggregatedProfileTime</code> object. </p> <p> Specify
     * <code>start</code> using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline void SetStart(Aws::Utils::DateTime&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * <p> The time that aggregation of posted agent profiles for a profiling group
     * starts. The aggregation profile contains profiles posted by the agent starting
     * at this time for an aggregation period specified by the <code>period</code>
     * property of the <code>AggregatedProfileTime</code> object. </p> <p> Specify
     * <code>start</code> using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline AggregatedProfileTime& WithStart(const Aws::Utils::DateTime& value) { SetStart(value); return *this;}

    /**
     * <p> The time that aggregation of posted agent profiles for a profiling group
     * starts. The aggregation profile contains profiles posted by the agent starting
     * at this time for an aggregation period specified by the <code>period</code>
     * property of the <code>AggregatedProfileTime</code> object. </p> <p> Specify
     * <code>start</code> using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline AggregatedProfileTime& WithStart(Aws::Utils::DateTime&& value) { SetStart(std::move(value)); return *this;}

  private:

    AggregationPeriod m_period;
    bool m_periodHasBeenSet = false;

    Aws::Utils::DateTime m_start;
    bool m_startHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
