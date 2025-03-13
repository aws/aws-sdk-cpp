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
    AWS_CODEGURUPROFILER_API ProfilingStatus() = default;
    AWS_CODEGURUPROFILER_API ProfilingStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API ProfilingStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time when the profiling agent most recently pinged back. Specify
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestAgentOrchestratedAt() const { return m_latestAgentOrchestratedAt; }
    inline bool LatestAgentOrchestratedAtHasBeenSet() const { return m_latestAgentOrchestratedAtHasBeenSet; }
    template<typename LatestAgentOrchestratedAtT = Aws::Utils::DateTime>
    void SetLatestAgentOrchestratedAt(LatestAgentOrchestratedAtT&& value) { m_latestAgentOrchestratedAtHasBeenSet = true; m_latestAgentOrchestratedAt = std::forward<LatestAgentOrchestratedAtT>(value); }
    template<typename LatestAgentOrchestratedAtT = Aws::Utils::DateTime>
    ProfilingStatus& WithLatestAgentOrchestratedAt(LatestAgentOrchestratedAtT&& value) { SetLatestAgentOrchestratedAt(std::forward<LatestAgentOrchestratedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the most recent profile was received. Specify using
     * the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestAgentProfileReportedAt() const { return m_latestAgentProfileReportedAt; }
    inline bool LatestAgentProfileReportedAtHasBeenSet() const { return m_latestAgentProfileReportedAtHasBeenSet; }
    template<typename LatestAgentProfileReportedAtT = Aws::Utils::DateTime>
    void SetLatestAgentProfileReportedAt(LatestAgentProfileReportedAtT&& value) { m_latestAgentProfileReportedAtHasBeenSet = true; m_latestAgentProfileReportedAt = std::forward<LatestAgentProfileReportedAtT>(value); }
    template<typename LatestAgentProfileReportedAtT = Aws::Utils::DateTime>
    ProfilingStatus& WithLatestAgentProfileReportedAt(LatestAgentProfileReportedAtT&& value) { SetLatestAgentProfileReportedAt(std::forward<LatestAgentProfileReportedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AggregatedProfileTime.html">
     * <code>AggregatedProfileTime</code> </a> object that contains the aggregation
     * period and start time for an aggregated profile. </p>
     */
    inline const AggregatedProfileTime& GetLatestAggregatedProfile() const { return m_latestAggregatedProfile; }
    inline bool LatestAggregatedProfileHasBeenSet() const { return m_latestAggregatedProfileHasBeenSet; }
    template<typename LatestAggregatedProfileT = AggregatedProfileTime>
    void SetLatestAggregatedProfile(LatestAggregatedProfileT&& value) { m_latestAggregatedProfileHasBeenSet = true; m_latestAggregatedProfile = std::forward<LatestAggregatedProfileT>(value); }
    template<typename LatestAggregatedProfileT = AggregatedProfileTime>
    ProfilingStatus& WithLatestAggregatedProfile(LatestAggregatedProfileT&& value) { SetLatestAggregatedProfile(std::forward<LatestAggregatedProfileT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_latestAgentOrchestratedAt{};
    bool m_latestAgentOrchestratedAtHasBeenSet = false;

    Aws::Utils::DateTime m_latestAgentProfileReportedAt{};
    bool m_latestAgentProfileReportedAtHasBeenSet = false;

    AggregatedProfileTime m_latestAggregatedProfile;
    bool m_latestAggregatedProfileHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
