/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/RunningMode.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the properties of a WorkSpace.</p>
   */
  class AWS_WORKSPACES_API WorkspaceProperties
  {
  public:
    WorkspaceProperties();
    WorkspaceProperties(const Aws::Utils::Json::JsonValue& jsonValue);
    WorkspaceProperties& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The running mode of the WorkSpace. AlwaysOn WorkSpaces are billed monthly.
     * AutoStop WorkSpaces are billed by the hour and stopped when no longer being used
     * in order to save on costs.</p>
     */
    inline const RunningMode& GetRunningMode() const{ return m_runningMode; }

    /**
     * <p>The running mode of the WorkSpace. AlwaysOn WorkSpaces are billed monthly.
     * AutoStop WorkSpaces are billed by the hour and stopped when no longer being used
     * in order to save on costs.</p>
     */
    inline void SetRunningMode(const RunningMode& value) { m_runningModeHasBeenSet = true; m_runningMode = value; }

    /**
     * <p>The running mode of the WorkSpace. AlwaysOn WorkSpaces are billed monthly.
     * AutoStop WorkSpaces are billed by the hour and stopped when no longer being used
     * in order to save on costs.</p>
     */
    inline void SetRunningMode(RunningMode&& value) { m_runningModeHasBeenSet = true; m_runningMode = value; }

    /**
     * <p>The running mode of the WorkSpace. AlwaysOn WorkSpaces are billed monthly.
     * AutoStop WorkSpaces are billed by the hour and stopped when no longer being used
     * in order to save on costs.</p>
     */
    inline WorkspaceProperties& WithRunningMode(const RunningMode& value) { SetRunningMode(value); return *this;}

    /**
     * <p>The running mode of the WorkSpace. AlwaysOn WorkSpaces are billed monthly.
     * AutoStop WorkSpaces are billed by the hour and stopped when no longer being used
     * in order to save on costs.</p>
     */
    inline WorkspaceProperties& WithRunningMode(RunningMode&& value) { SetRunningMode(value); return *this;}

    /**
     * <p>The time after a user logs off when WorkSpaces are automatically stopped.
     * Configured in 60 minute intervals.</p>
     */
    inline int GetRunningModeAutoStopTimeoutInMinutes() const{ return m_runningModeAutoStopTimeoutInMinutes; }

    /**
     * <p>The time after a user logs off when WorkSpaces are automatically stopped.
     * Configured in 60 minute intervals.</p>
     */
    inline void SetRunningModeAutoStopTimeoutInMinutes(int value) { m_runningModeAutoStopTimeoutInMinutesHasBeenSet = true; m_runningModeAutoStopTimeoutInMinutes = value; }

    /**
     * <p>The time after a user logs off when WorkSpaces are automatically stopped.
     * Configured in 60 minute intervals.</p>
     */
    inline WorkspaceProperties& WithRunningModeAutoStopTimeoutInMinutes(int value) { SetRunningModeAutoStopTimeoutInMinutes(value); return *this;}

  private:
    RunningMode m_runningMode;
    bool m_runningModeHasBeenSet;
    int m_runningModeAutoStopTimeoutInMinutes;
    bool m_runningModeAutoStopTimeoutInMinutesHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
