/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>

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
   * <p> Specifies whether profiling is enabled or disabled for a profiling group. It
   * is used by <a
   * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ConfigureAgent.html">
   * <code>ConfigureAgent</code> </a> to enable or disable profiling for a profiling
   * group. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/AgentOrchestrationConfig">AWS
   * API Reference</a></p>
   */
  class AgentOrchestrationConfig
  {
  public:
    AWS_CODEGURUPROFILER_API AgentOrchestrationConfig();
    AWS_CODEGURUPROFILER_API AgentOrchestrationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API AgentOrchestrationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A <code>Boolean</code> that specifies whether the profiling agent collects
     * profiling data or not. Set to <code>true</code> to enable profiling. </p>
     */
    inline bool GetProfilingEnabled() const{ return m_profilingEnabled; }

    /**
     * <p> A <code>Boolean</code> that specifies whether the profiling agent collects
     * profiling data or not. Set to <code>true</code> to enable profiling. </p>
     */
    inline bool ProfilingEnabledHasBeenSet() const { return m_profilingEnabledHasBeenSet; }

    /**
     * <p> A <code>Boolean</code> that specifies whether the profiling agent collects
     * profiling data or not. Set to <code>true</code> to enable profiling. </p>
     */
    inline void SetProfilingEnabled(bool value) { m_profilingEnabledHasBeenSet = true; m_profilingEnabled = value; }

    /**
     * <p> A <code>Boolean</code> that specifies whether the profiling agent collects
     * profiling data or not. Set to <code>true</code> to enable profiling. </p>
     */
    inline AgentOrchestrationConfig& WithProfilingEnabled(bool value) { SetProfilingEnabled(value); return *this;}

  private:

    bool m_profilingEnabled;
    bool m_profilingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
