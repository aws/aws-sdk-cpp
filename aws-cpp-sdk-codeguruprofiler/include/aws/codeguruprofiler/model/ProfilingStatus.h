/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codeguruprofiler/model/AggregatedProfileTime.h>
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
   * <p> Profiling status includes information about the last time a profile agent
   * pinged back, the last time a profile was received, and the aggregation period
   * and start time for the most recent aggregated profile. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ProfilingStatus">AWS
   * API Reference</a></p>
   */
  class ProfilingStatus
  {
  public:
    AWS_CODEGURUPROFILER_API ProfilingStatus();
    AWS_CODEGURUPROFILER_API ProfilingStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API ProfilingStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time when the profiling agent most recently pinged back. Specify
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestAgentOrchestratedAt() const{ return m_latestAgentOrchestratedAt; }

    /**
     * <p>The date and time when the profiling agent most recently pinged back. Specify
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline bool LatestAgentOrchestratedAtHasBeenSet() const { return m_latestAgentOrchestratedAtHasBeenSet; }

    /**
     * <p>The date and time when the profiling agent most recently pinged back. Specify
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline void SetLatestAgentOrchestratedAt(const Aws::Utils::DateTime& value) { m_latestAgentOrchestratedAtHasBeenSet = true; m_latestAgentOrchestratedAt = value; }

    /**
     * <p>The date and time when the profiling agent most recently pinged back. Specify
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline void SetLatestAgentOrchestratedAt(Aws::Utils::DateTime&& value) { m_latestAgentOrchestratedAtHasBeenSet = true; m_latestAgentOrchestratedAt = std::move(value); }

    /**
     * <p>The date and time when the profiling agent most recently pinged back. Specify
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline ProfilingStatus& WithLatestAgentOrchestratedAt(const Aws::Utils::DateTime& value) { SetLatestAgentOrchestratedAt(value); return *this;}

    /**
     * <p>The date and time when the profiling agent most recently pinged back. Specify
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline ProfilingStatus& WithLatestAgentOrchestratedAt(Aws::Utils::DateTime&& value) { SetLatestAgentOrchestratedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time when the most recent profile was received. Specify using
     * the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestAgentProfileReportedAt() const{ return m_latestAgentProfileReportedAt; }

    /**
     * <p>The date and time when the most recent profile was received. Specify using
     * the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline bool LatestAgentProfileReportedAtHasBeenSet() const { return m_latestAgentProfileReportedAtHasBeenSet; }

    /**
     * <p>The date and time when the most recent profile was received. Specify using
     * the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline void SetLatestAgentProfileReportedAt(const Aws::Utils::DateTime& value) { m_latestAgentProfileReportedAtHasBeenSet = true; m_latestAgentProfileReportedAt = value; }

    /**
     * <p>The date and time when the most recent profile was received. Specify using
     * the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline void SetLatestAgentProfileReportedAt(Aws::Utils::DateTime&& value) { m_latestAgentProfileReportedAtHasBeenSet = true; m_latestAgentProfileReportedAt = std::move(value); }

    /**
     * <p>The date and time when the most recent profile was received. Specify using
     * the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline ProfilingStatus& WithLatestAgentProfileReportedAt(const Aws::Utils::DateTime& value) { SetLatestAgentProfileReportedAt(value); return *this;}

    /**
     * <p>The date and time when the most recent profile was received. Specify using
     * the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline ProfilingStatus& WithLatestAgentProfileReportedAt(Aws::Utils::DateTime&& value) { SetLatestAgentProfileReportedAt(std::move(value)); return *this;}


    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AggregatedProfileTime.html">
     * <code>AggregatedProfileTime</code> </a> object that contains the aggregation
     * period and start time for an aggregated profile. </p>
     */
    inline const AggregatedProfileTime& GetLatestAggregatedProfile() const{ return m_latestAggregatedProfile; }

    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AggregatedProfileTime.html">
     * <code>AggregatedProfileTime</code> </a> object that contains the aggregation
     * period and start time for an aggregated profile. </p>
     */
    inline bool LatestAggregatedProfileHasBeenSet() const { return m_latestAggregatedProfileHasBeenSet; }

    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AggregatedProfileTime.html">
     * <code>AggregatedProfileTime</code> </a> object that contains the aggregation
     * period and start time for an aggregated profile. </p>
     */
    inline void SetLatestAggregatedProfile(const AggregatedProfileTime& value) { m_latestAggregatedProfileHasBeenSet = true; m_latestAggregatedProfile = value; }

    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AggregatedProfileTime.html">
     * <code>AggregatedProfileTime</code> </a> object that contains the aggregation
     * period and start time for an aggregated profile. </p>
     */
    inline void SetLatestAggregatedProfile(AggregatedProfileTime&& value) { m_latestAggregatedProfileHasBeenSet = true; m_latestAggregatedProfile = std::move(value); }

    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AggregatedProfileTime.html">
     * <code>AggregatedProfileTime</code> </a> object that contains the aggregation
     * period and start time for an aggregated profile. </p>
     */
    inline ProfilingStatus& WithLatestAggregatedProfile(const AggregatedProfileTime& value) { SetLatestAggregatedProfile(value); return *this;}

    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AggregatedProfileTime.html">
     * <code>AggregatedProfileTime</code> </a> object that contains the aggregation
     * period and start time for an aggregated profile. </p>
     */
    inline ProfilingStatus& WithLatestAggregatedProfile(AggregatedProfileTime&& value) { SetLatestAggregatedProfile(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_latestAgentOrchestratedAt;
    bool m_latestAgentOrchestratedAtHasBeenSet = false;

    Aws::Utils::DateTime m_latestAgentProfileReportedAt;
    bool m_latestAgentProfileReportedAtHasBeenSet = false;

    AggregatedProfileTime m_latestAggregatedProfile;
    bool m_latestAggregatedProfileHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
