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
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/AgentConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUPROFILER_API AgentConfiguration
  {
  public:
    AgentConfiguration();
    AgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline int GetPeriodInSeconds() const{ return m_periodInSeconds; }

    /**
     * <p/>
     */
    inline bool PeriodInSecondsHasBeenSet() const { return m_periodInSecondsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetPeriodInSeconds(int value) { m_periodInSecondsHasBeenSet = true; m_periodInSeconds = value; }

    /**
     * <p/>
     */
    inline AgentConfiguration& WithPeriodInSeconds(int value) { SetPeriodInSeconds(value); return *this;}


    /**
     * <p/>
     */
    inline bool GetShouldProfile() const{ return m_shouldProfile; }

    /**
     * <p/>
     */
    inline bool ShouldProfileHasBeenSet() const { return m_shouldProfileHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetShouldProfile(bool value) { m_shouldProfileHasBeenSet = true; m_shouldProfile = value; }

    /**
     * <p/>
     */
    inline AgentConfiguration& WithShouldProfile(bool value) { SetShouldProfile(value); return *this;}

  private:

    int m_periodInSeconds;
    bool m_periodInSecondsHasBeenSet;

    bool m_shouldProfile;
    bool m_shouldProfileHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
