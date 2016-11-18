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
#include <aws/workspaces/model/WorkspaceProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

WorkspaceProperties::WorkspaceProperties() : 
    m_runningMode(RunningMode::NOT_SET),
    m_runningModeHasBeenSet(false),
    m_runningModeAutoStopTimeoutInMinutes(0),
    m_runningModeAutoStopTimeoutInMinutesHasBeenSet(false)
{
}

WorkspaceProperties::WorkspaceProperties(const JsonValue& jsonValue) : 
    m_runningMode(RunningMode::NOT_SET),
    m_runningModeHasBeenSet(false),
    m_runningModeAutoStopTimeoutInMinutes(0),
    m_runningModeAutoStopTimeoutInMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

WorkspaceProperties& WorkspaceProperties::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RunningMode"))
  {
    m_runningMode = RunningModeMapper::GetRunningModeForName(jsonValue.GetString("RunningMode"));

    m_runningModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunningModeAutoStopTimeoutInMinutes"))
  {
    m_runningModeAutoStopTimeoutInMinutes = jsonValue.GetInteger("RunningModeAutoStopTimeoutInMinutes");

    m_runningModeAutoStopTimeoutInMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkspaceProperties::Jsonize() const
{
  JsonValue payload;

  if(m_runningModeHasBeenSet)
  {
   payload.WithString("RunningMode", RunningModeMapper::GetNameForRunningMode(m_runningMode));
  }

  if(m_runningModeAutoStopTimeoutInMinutesHasBeenSet)
  {
   payload.WithInteger("RunningModeAutoStopTimeoutInMinutes", m_runningModeAutoStopTimeoutInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws