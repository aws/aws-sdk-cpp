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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/AgentOrchestrationConfig">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUPROFILER_API AgentOrchestrationConfig
  {
  public:
    AgentOrchestrationConfig();
    AgentOrchestrationConfig(Aws::Utils::Json::JsonView jsonValue);
    AgentOrchestrationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline bool GetProfilingEnabled() const{ return m_profilingEnabled; }

    /**
     * <p/>
     */
    inline bool ProfilingEnabledHasBeenSet() const { return m_profilingEnabledHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetProfilingEnabled(bool value) { m_profilingEnabledHasBeenSet = true; m_profilingEnabled = value; }

    /**
     * <p/>
     */
    inline AgentOrchestrationConfig& WithProfilingEnabled(bool value) { SetProfilingEnabled(value); return *this;}

  private:

    bool m_profilingEnabled;
    bool m_profilingEnabledHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
