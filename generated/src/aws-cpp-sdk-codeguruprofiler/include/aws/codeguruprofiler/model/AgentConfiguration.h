/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/codeguruprofiler/model/AgentParameterField.h>
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
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p> The response of <a
   * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ConfigureAgent.html">
   * <code>ConfigureAgent</code> </a> that specifies if an agent profiles or not and
   * for how long to return profiling data. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/AgentConfiguration">AWS
   * API Reference</a></p>
   */
  class AgentConfiguration
  {
  public:
    AWS_CODEGURUPROFILER_API AgentConfiguration();
    AWS_CODEGURUPROFILER_API AgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API AgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Parameters used by the profiler. The valid parameters are: </p> <ul> <li>
     * <p> <code>MaxStackDepth</code> - The maximum depth of the stacks in the code
     * that is represented in the profile. For example, if CodeGuru Profiler finds a
     * method <code>A</code>, which calls method <code>B</code>, which calls method
     * <code>C</code>, which calls method <code>D</code>, then the depth is 4. If the
     * <code>maxDepth</code> is set to 2, then the profiler evaluates <code>A</code>
     * and <code>B</code>. </p> </li> <li> <p> <code>MemoryUsageLimitPercent</code> -
     * The percentage of memory that is used by the profiler.</p> </li> <li> <p>
     * <code>MinimumTimeForReportingInMilliseconds</code> - The minimum time in
     * milliseconds between sending reports. </p> </li> <li> <p>
     * <code>ReportingIntervalInMilliseconds</code> - The reporting interval in
     * milliseconds used to report profiles. </p> </li> <li> <p>
     * <code>SamplingIntervalInMilliseconds</code> - The sampling interval in
     * milliseconds that is used to profile samples. </p> </li> </ul>
     */
    inline const Aws::Map<AgentParameterField, Aws::String>& GetAgentParameters() const{ return m_agentParameters; }

    /**
     * <p> Parameters used by the profiler. The valid parameters are: </p> <ul> <li>
     * <p> <code>MaxStackDepth</code> - The maximum depth of the stacks in the code
     * that is represented in the profile. For example, if CodeGuru Profiler finds a
     * method <code>A</code>, which calls method <code>B</code>, which calls method
     * <code>C</code>, which calls method <code>D</code>, then the depth is 4. If the
     * <code>maxDepth</code> is set to 2, then the profiler evaluates <code>A</code>
     * and <code>B</code>. </p> </li> <li> <p> <code>MemoryUsageLimitPercent</code> -
     * The percentage of memory that is used by the profiler.</p> </li> <li> <p>
     * <code>MinimumTimeForReportingInMilliseconds</code> - The minimum time in
     * milliseconds between sending reports. </p> </li> <li> <p>
     * <code>ReportingIntervalInMilliseconds</code> - The reporting interval in
     * milliseconds used to report profiles. </p> </li> <li> <p>
     * <code>SamplingIntervalInMilliseconds</code> - The sampling interval in
     * milliseconds that is used to profile samples. </p> </li> </ul>
     */
    inline bool AgentParametersHasBeenSet() const { return m_agentParametersHasBeenSet; }

    /**
     * <p> Parameters used by the profiler. The valid parameters are: </p> <ul> <li>
     * <p> <code>MaxStackDepth</code> - The maximum depth of the stacks in the code
     * that is represented in the profile. For example, if CodeGuru Profiler finds a
     * method <code>A</code>, which calls method <code>B</code>, which calls method
     * <code>C</code>, which calls method <code>D</code>, then the depth is 4. If the
     * <code>maxDepth</code> is set to 2, then the profiler evaluates <code>A</code>
     * and <code>B</code>. </p> </li> <li> <p> <code>MemoryUsageLimitPercent</code> -
     * The percentage of memory that is used by the profiler.</p> </li> <li> <p>
     * <code>MinimumTimeForReportingInMilliseconds</code> - The minimum time in
     * milliseconds between sending reports. </p> </li> <li> <p>
     * <code>ReportingIntervalInMilliseconds</code> - The reporting interval in
     * milliseconds used to report profiles. </p> </li> <li> <p>
     * <code>SamplingIntervalInMilliseconds</code> - The sampling interval in
     * milliseconds that is used to profile samples. </p> </li> </ul>
     */
    inline void SetAgentParameters(const Aws::Map<AgentParameterField, Aws::String>& value) { m_agentParametersHasBeenSet = true; m_agentParameters = value; }

    /**
     * <p> Parameters used by the profiler. The valid parameters are: </p> <ul> <li>
     * <p> <code>MaxStackDepth</code> - The maximum depth of the stacks in the code
     * that is represented in the profile. For example, if CodeGuru Profiler finds a
     * method <code>A</code>, which calls method <code>B</code>, which calls method
     * <code>C</code>, which calls method <code>D</code>, then the depth is 4. If the
     * <code>maxDepth</code> is set to 2, then the profiler evaluates <code>A</code>
     * and <code>B</code>. </p> </li> <li> <p> <code>MemoryUsageLimitPercent</code> -
     * The percentage of memory that is used by the profiler.</p> </li> <li> <p>
     * <code>MinimumTimeForReportingInMilliseconds</code> - The minimum time in
     * milliseconds between sending reports. </p> </li> <li> <p>
     * <code>ReportingIntervalInMilliseconds</code> - The reporting interval in
     * milliseconds used to report profiles. </p> </li> <li> <p>
     * <code>SamplingIntervalInMilliseconds</code> - The sampling interval in
     * milliseconds that is used to profile samples. </p> </li> </ul>
     */
    inline void SetAgentParameters(Aws::Map<AgentParameterField, Aws::String>&& value) { m_agentParametersHasBeenSet = true; m_agentParameters = std::move(value); }

    /**
     * <p> Parameters used by the profiler. The valid parameters are: </p> <ul> <li>
     * <p> <code>MaxStackDepth</code> - The maximum depth of the stacks in the code
     * that is represented in the profile. For example, if CodeGuru Profiler finds a
     * method <code>A</code>, which calls method <code>B</code>, which calls method
     * <code>C</code>, which calls method <code>D</code>, then the depth is 4. If the
     * <code>maxDepth</code> is set to 2, then the profiler evaluates <code>A</code>
     * and <code>B</code>. </p> </li> <li> <p> <code>MemoryUsageLimitPercent</code> -
     * The percentage of memory that is used by the profiler.</p> </li> <li> <p>
     * <code>MinimumTimeForReportingInMilliseconds</code> - The minimum time in
     * milliseconds between sending reports. </p> </li> <li> <p>
     * <code>ReportingIntervalInMilliseconds</code> - The reporting interval in
     * milliseconds used to report profiles. </p> </li> <li> <p>
     * <code>SamplingIntervalInMilliseconds</code> - The sampling interval in
     * milliseconds that is used to profile samples. </p> </li> </ul>
     */
    inline AgentConfiguration& WithAgentParameters(const Aws::Map<AgentParameterField, Aws::String>& value) { SetAgentParameters(value); return *this;}

    /**
     * <p> Parameters used by the profiler. The valid parameters are: </p> <ul> <li>
     * <p> <code>MaxStackDepth</code> - The maximum depth of the stacks in the code
     * that is represented in the profile. For example, if CodeGuru Profiler finds a
     * method <code>A</code>, which calls method <code>B</code>, which calls method
     * <code>C</code>, which calls method <code>D</code>, then the depth is 4. If the
     * <code>maxDepth</code> is set to 2, then the profiler evaluates <code>A</code>
     * and <code>B</code>. </p> </li> <li> <p> <code>MemoryUsageLimitPercent</code> -
     * The percentage of memory that is used by the profiler.</p> </li> <li> <p>
     * <code>MinimumTimeForReportingInMilliseconds</code> - The minimum time in
     * milliseconds between sending reports. </p> </li> <li> <p>
     * <code>ReportingIntervalInMilliseconds</code> - The reporting interval in
     * milliseconds used to report profiles. </p> </li> <li> <p>
     * <code>SamplingIntervalInMilliseconds</code> - The sampling interval in
     * milliseconds that is used to profile samples. </p> </li> </ul>
     */
    inline AgentConfiguration& WithAgentParameters(Aws::Map<AgentParameterField, Aws::String>&& value) { SetAgentParameters(std::move(value)); return *this;}

    /**
     * <p> Parameters used by the profiler. The valid parameters are: </p> <ul> <li>
     * <p> <code>MaxStackDepth</code> - The maximum depth of the stacks in the code
     * that is represented in the profile. For example, if CodeGuru Profiler finds a
     * method <code>A</code>, which calls method <code>B</code>, which calls method
     * <code>C</code>, which calls method <code>D</code>, then the depth is 4. If the
     * <code>maxDepth</code> is set to 2, then the profiler evaluates <code>A</code>
     * and <code>B</code>. </p> </li> <li> <p> <code>MemoryUsageLimitPercent</code> -
     * The percentage of memory that is used by the profiler.</p> </li> <li> <p>
     * <code>MinimumTimeForReportingInMilliseconds</code> - The minimum time in
     * milliseconds between sending reports. </p> </li> <li> <p>
     * <code>ReportingIntervalInMilliseconds</code> - The reporting interval in
     * milliseconds used to report profiles. </p> </li> <li> <p>
     * <code>SamplingIntervalInMilliseconds</code> - The sampling interval in
     * milliseconds that is used to profile samples. </p> </li> </ul>
     */
    inline AgentConfiguration& AddAgentParameters(const AgentParameterField& key, const Aws::String& value) { m_agentParametersHasBeenSet = true; m_agentParameters.emplace(key, value); return *this; }

    /**
     * <p> Parameters used by the profiler. The valid parameters are: </p> <ul> <li>
     * <p> <code>MaxStackDepth</code> - The maximum depth of the stacks in the code
     * that is represented in the profile. For example, if CodeGuru Profiler finds a
     * method <code>A</code>, which calls method <code>B</code>, which calls method
     * <code>C</code>, which calls method <code>D</code>, then the depth is 4. If the
     * <code>maxDepth</code> is set to 2, then the profiler evaluates <code>A</code>
     * and <code>B</code>. </p> </li> <li> <p> <code>MemoryUsageLimitPercent</code> -
     * The percentage of memory that is used by the profiler.</p> </li> <li> <p>
     * <code>MinimumTimeForReportingInMilliseconds</code> - The minimum time in
     * milliseconds between sending reports. </p> </li> <li> <p>
     * <code>ReportingIntervalInMilliseconds</code> - The reporting interval in
     * milliseconds used to report profiles. </p> </li> <li> <p>
     * <code>SamplingIntervalInMilliseconds</code> - The sampling interval in
     * milliseconds that is used to profile samples. </p> </li> </ul>
     */
    inline AgentConfiguration& AddAgentParameters(AgentParameterField&& key, const Aws::String& value) { m_agentParametersHasBeenSet = true; m_agentParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p> Parameters used by the profiler. The valid parameters are: </p> <ul> <li>
     * <p> <code>MaxStackDepth</code> - The maximum depth of the stacks in the code
     * that is represented in the profile. For example, if CodeGuru Profiler finds a
     * method <code>A</code>, which calls method <code>B</code>, which calls method
     * <code>C</code>, which calls method <code>D</code>, then the depth is 4. If the
     * <code>maxDepth</code> is set to 2, then the profiler evaluates <code>A</code>
     * and <code>B</code>. </p> </li> <li> <p> <code>MemoryUsageLimitPercent</code> -
     * The percentage of memory that is used by the profiler.</p> </li> <li> <p>
     * <code>MinimumTimeForReportingInMilliseconds</code> - The minimum time in
     * milliseconds between sending reports. </p> </li> <li> <p>
     * <code>ReportingIntervalInMilliseconds</code> - The reporting interval in
     * milliseconds used to report profiles. </p> </li> <li> <p>
     * <code>SamplingIntervalInMilliseconds</code> - The sampling interval in
     * milliseconds that is used to profile samples. </p> </li> </ul>
     */
    inline AgentConfiguration& AddAgentParameters(const AgentParameterField& key, Aws::String&& value) { m_agentParametersHasBeenSet = true; m_agentParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Parameters used by the profiler. The valid parameters are: </p> <ul> <li>
     * <p> <code>MaxStackDepth</code> - The maximum depth of the stacks in the code
     * that is represented in the profile. For example, if CodeGuru Profiler finds a
     * method <code>A</code>, which calls method <code>B</code>, which calls method
     * <code>C</code>, which calls method <code>D</code>, then the depth is 4. If the
     * <code>maxDepth</code> is set to 2, then the profiler evaluates <code>A</code>
     * and <code>B</code>. </p> </li> <li> <p> <code>MemoryUsageLimitPercent</code> -
     * The percentage of memory that is used by the profiler.</p> </li> <li> <p>
     * <code>MinimumTimeForReportingInMilliseconds</code> - The minimum time in
     * milliseconds between sending reports. </p> </li> <li> <p>
     * <code>ReportingIntervalInMilliseconds</code> - The reporting interval in
     * milliseconds used to report profiles. </p> </li> <li> <p>
     * <code>SamplingIntervalInMilliseconds</code> - The sampling interval in
     * milliseconds that is used to profile samples. </p> </li> </ul>
     */
    inline AgentConfiguration& AddAgentParameters(AgentParameterField&& key, Aws::String&& value) { m_agentParametersHasBeenSet = true; m_agentParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Parameters used by the profiler. The valid parameters are: </p> <ul> <li>
     * <p> <code>MaxStackDepth</code> - The maximum depth of the stacks in the code
     * that is represented in the profile. For example, if CodeGuru Profiler finds a
     * method <code>A</code>, which calls method <code>B</code>, which calls method
     * <code>C</code>, which calls method <code>D</code>, then the depth is 4. If the
     * <code>maxDepth</code> is set to 2, then the profiler evaluates <code>A</code>
     * and <code>B</code>. </p> </li> <li> <p> <code>MemoryUsageLimitPercent</code> -
     * The percentage of memory that is used by the profiler.</p> </li> <li> <p>
     * <code>MinimumTimeForReportingInMilliseconds</code> - The minimum time in
     * milliseconds between sending reports. </p> </li> <li> <p>
     * <code>ReportingIntervalInMilliseconds</code> - The reporting interval in
     * milliseconds used to report profiles. </p> </li> <li> <p>
     * <code>SamplingIntervalInMilliseconds</code> - The sampling interval in
     * milliseconds that is used to profile samples. </p> </li> </ul>
     */
    inline AgentConfiguration& AddAgentParameters(AgentParameterField&& key, const char* value) { m_agentParametersHasBeenSet = true; m_agentParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p> Parameters used by the profiler. The valid parameters are: </p> <ul> <li>
     * <p> <code>MaxStackDepth</code> - The maximum depth of the stacks in the code
     * that is represented in the profile. For example, if CodeGuru Profiler finds a
     * method <code>A</code>, which calls method <code>B</code>, which calls method
     * <code>C</code>, which calls method <code>D</code>, then the depth is 4. If the
     * <code>maxDepth</code> is set to 2, then the profiler evaluates <code>A</code>
     * and <code>B</code>. </p> </li> <li> <p> <code>MemoryUsageLimitPercent</code> -
     * The percentage of memory that is used by the profiler.</p> </li> <li> <p>
     * <code>MinimumTimeForReportingInMilliseconds</code> - The minimum time in
     * milliseconds between sending reports. </p> </li> <li> <p>
     * <code>ReportingIntervalInMilliseconds</code> - The reporting interval in
     * milliseconds used to report profiles. </p> </li> <li> <p>
     * <code>SamplingIntervalInMilliseconds</code> - The sampling interval in
     * milliseconds that is used to profile samples. </p> </li> </ul>
     */
    inline AgentConfiguration& AddAgentParameters(const AgentParameterField& key, const char* value) { m_agentParametersHasBeenSet = true; m_agentParameters.emplace(key, value); return *this; }


    /**
     * <p> How long a profiling agent should send profiling data using <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ConfigureAgent.html">
     * <code>ConfigureAgent</code> </a>. For example, if this is set to 300, the
     * profiling agent calls <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ConfigureAgent.html">
     * <code>ConfigureAgent</code> </a> every 5 minutes to submit the profiled data
     * collected during that period. </p>
     */
    inline int GetPeriodInSeconds() const{ return m_periodInSeconds; }

    /**
     * <p> How long a profiling agent should send profiling data using <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ConfigureAgent.html">
     * <code>ConfigureAgent</code> </a>. For example, if this is set to 300, the
     * profiling agent calls <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ConfigureAgent.html">
     * <code>ConfigureAgent</code> </a> every 5 minutes to submit the profiled data
     * collected during that period. </p>
     */
    inline bool PeriodInSecondsHasBeenSet() const { return m_periodInSecondsHasBeenSet; }

    /**
     * <p> How long a profiling agent should send profiling data using <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ConfigureAgent.html">
     * <code>ConfigureAgent</code> </a>. For example, if this is set to 300, the
     * profiling agent calls <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ConfigureAgent.html">
     * <code>ConfigureAgent</code> </a> every 5 minutes to submit the profiled data
     * collected during that period. </p>
     */
    inline void SetPeriodInSeconds(int value) { m_periodInSecondsHasBeenSet = true; m_periodInSeconds = value; }

    /**
     * <p> How long a profiling agent should send profiling data using <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ConfigureAgent.html">
     * <code>ConfigureAgent</code> </a>. For example, if this is set to 300, the
     * profiling agent calls <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ConfigureAgent.html">
     * <code>ConfigureAgent</code> </a> every 5 minutes to submit the profiled data
     * collected during that period. </p>
     */
    inline AgentConfiguration& WithPeriodInSeconds(int value) { SetPeriodInSeconds(value); return *this;}


    /**
     * <p> A <code>Boolean</code> that specifies whether the profiling agent collects
     * profiling data or not. Set to <code>true</code> to enable profiling. </p>
     */
    inline bool GetShouldProfile() const{ return m_shouldProfile; }

    /**
     * <p> A <code>Boolean</code> that specifies whether the profiling agent collects
     * profiling data or not. Set to <code>true</code> to enable profiling. </p>
     */
    inline bool ShouldProfileHasBeenSet() const { return m_shouldProfileHasBeenSet; }

    /**
     * <p> A <code>Boolean</code> that specifies whether the profiling agent collects
     * profiling data or not. Set to <code>true</code> to enable profiling. </p>
     */
    inline void SetShouldProfile(bool value) { m_shouldProfileHasBeenSet = true; m_shouldProfile = value; }

    /**
     * <p> A <code>Boolean</code> that specifies whether the profiling agent collects
     * profiling data or not. Set to <code>true</code> to enable profiling. </p>
     */
    inline AgentConfiguration& WithShouldProfile(bool value) { SetShouldProfile(value); return *this;}

  private:

    Aws::Map<AgentParameterField, Aws::String> m_agentParameters;
    bool m_agentParametersHasBeenSet = false;

    int m_periodInSeconds;
    bool m_periodInSecondsHasBeenSet = false;

    bool m_shouldProfile;
    bool m_shouldProfileHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
