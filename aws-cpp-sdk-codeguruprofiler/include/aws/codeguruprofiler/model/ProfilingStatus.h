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
   * <p>Information about the profiling status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ProfilingStatus">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUPROFILER_API ProfilingStatus
  {
  public:
    ProfilingStatus();
    ProfilingStatus(Aws::Utils::Json::JsonView jsonValue);
    ProfilingStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time, in milliseconds since the epoch, when the latest agent was
     * orchestrated.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestAgentOrchestratedAt() const{ return m_latestAgentOrchestratedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the latest agent was
     * orchestrated.</p>
     */
    inline bool LatestAgentOrchestratedAtHasBeenSet() const { return m_latestAgentOrchestratedAtHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the latest agent was
     * orchestrated.</p>
     */
    inline void SetLatestAgentOrchestratedAt(const Aws::Utils::DateTime& value) { m_latestAgentOrchestratedAtHasBeenSet = true; m_latestAgentOrchestratedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the latest agent was
     * orchestrated.</p>
     */
    inline void SetLatestAgentOrchestratedAt(Aws::Utils::DateTime&& value) { m_latestAgentOrchestratedAtHasBeenSet = true; m_latestAgentOrchestratedAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the latest agent was
     * orchestrated.</p>
     */
    inline ProfilingStatus& WithLatestAgentOrchestratedAt(const Aws::Utils::DateTime& value) { SetLatestAgentOrchestratedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the latest agent was
     * orchestrated.</p>
     */
    inline ProfilingStatus& WithLatestAgentOrchestratedAt(Aws::Utils::DateTime&& value) { SetLatestAgentOrchestratedAt(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the latest agent was
     * reported..</p>
     */
    inline const Aws::Utils::DateTime& GetLatestAgentProfileReportedAt() const{ return m_latestAgentProfileReportedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the latest agent was
     * reported..</p>
     */
    inline bool LatestAgentProfileReportedAtHasBeenSet() const { return m_latestAgentProfileReportedAtHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the latest agent was
     * reported..</p>
     */
    inline void SetLatestAgentProfileReportedAt(const Aws::Utils::DateTime& value) { m_latestAgentProfileReportedAtHasBeenSet = true; m_latestAgentProfileReportedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the latest agent was
     * reported..</p>
     */
    inline void SetLatestAgentProfileReportedAt(Aws::Utils::DateTime&& value) { m_latestAgentProfileReportedAtHasBeenSet = true; m_latestAgentProfileReportedAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the latest agent was
     * reported..</p>
     */
    inline ProfilingStatus& WithLatestAgentProfileReportedAt(const Aws::Utils::DateTime& value) { SetLatestAgentProfileReportedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the latest agent was
     * reported..</p>
     */
    inline ProfilingStatus& WithLatestAgentProfileReportedAt(Aws::Utils::DateTime&& value) { SetLatestAgentProfileReportedAt(std::move(value)); return *this;}


    /**
     * <p>The latest aggregated profile</p>
     */
    inline const AggregatedProfileTime& GetLatestAggregatedProfile() const{ return m_latestAggregatedProfile; }

    /**
     * <p>The latest aggregated profile</p>
     */
    inline bool LatestAggregatedProfileHasBeenSet() const { return m_latestAggregatedProfileHasBeenSet; }

    /**
     * <p>The latest aggregated profile</p>
     */
    inline void SetLatestAggregatedProfile(const AggregatedProfileTime& value) { m_latestAggregatedProfileHasBeenSet = true; m_latestAggregatedProfile = value; }

    /**
     * <p>The latest aggregated profile</p>
     */
    inline void SetLatestAggregatedProfile(AggregatedProfileTime&& value) { m_latestAggregatedProfileHasBeenSet = true; m_latestAggregatedProfile = std::move(value); }

    /**
     * <p>The latest aggregated profile</p>
     */
    inline ProfilingStatus& WithLatestAggregatedProfile(const AggregatedProfileTime& value) { SetLatestAggregatedProfile(value); return *this;}

    /**
     * <p>The latest aggregated profile</p>
     */
    inline ProfilingStatus& WithLatestAggregatedProfile(AggregatedProfileTime&& value) { SetLatestAggregatedProfile(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_latestAgentOrchestratedAt;
    bool m_latestAgentOrchestratedAtHasBeenSet;

    Aws::Utils::DateTime m_latestAgentProfileReportedAt;
    bool m_latestAgentProfileReportedAtHasBeenSet;

    AggregatedProfileTime m_latestAggregatedProfile;
    bool m_latestAggregatedProfileHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
