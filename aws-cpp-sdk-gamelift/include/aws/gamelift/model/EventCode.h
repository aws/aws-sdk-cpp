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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{
  enum class EventCode
  {
    NOT_SET,
    GENERIC_EVENT,
    FLEET_CREATED,
    FLEET_DELETED,
    FLEET_SCALING_EVENT,
    FLEET_STATE_DOWNLOADING,
    FLEET_STATE_VALIDATING,
    FLEET_STATE_BUILDING,
    FLEET_STATE_ACTIVATING,
    FLEET_STATE_ACTIVE,
    FLEET_STATE_ERROR,
    FLEET_INITIALIZATION_FAILED,
    FLEET_BINARY_DOWNLOAD_FAILED,
    FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND,
    FLEET_VALIDATION_EXECUTABLE_RUNTIME_FAILURE,
    FLEET_VALIDATION_TIMED_OUT,
    FLEET_ACTIVATION_FAILED,
    FLEET_ACTIVATION_FAILED_NO_INSTANCES,
    FLEET_NEW_GAME_SESSION_PROTECTION_POLICY_UPDATED,
    SERVER_PROCESS_INVALID_PATH,
    SERVER_PROCESS_SDK_INITIALIZATION_TIMEOUT,
    SERVER_PROCESS_PROCESS_READY_TIMEOUT,
    SERVER_PROCESS_CRASHED,
    SERVER_PROCESS_TERMINATED_UNHEALTHY,
    SERVER_PROCESS_FORCE_TERMINATED,
    SERVER_PROCESS_PROCESS_EXIT_TIMEOUT,
    GAME_SESSION_ACTIVATION_TIMEOUT
  };

namespace EventCodeMapper
{
AWS_GAMELIFT_API EventCode GetEventCodeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForEventCode(EventCode value);
} // namespace EventCodeMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
