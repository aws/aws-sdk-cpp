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
#include <aws/gamelift/model/EventCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace EventCodeMapper
      {

        static const int GENERIC_EVENT_HASH = HashingUtils::HashString("GENERIC_EVENT");
        static const int FLEET_CREATED_HASH = HashingUtils::HashString("FLEET_CREATED");
        static const int FLEET_DELETED_HASH = HashingUtils::HashString("FLEET_DELETED");
        static const int FLEET_SCALING_EVENT_HASH = HashingUtils::HashString("FLEET_SCALING_EVENT");
        static const int FLEET_STATE_DOWNLOADING_HASH = HashingUtils::HashString("FLEET_STATE_DOWNLOADING");
        static const int FLEET_STATE_VALIDATING_HASH = HashingUtils::HashString("FLEET_STATE_VALIDATING");
        static const int FLEET_STATE_BUILDING_HASH = HashingUtils::HashString("FLEET_STATE_BUILDING");
        static const int FLEET_STATE_ACTIVATING_HASH = HashingUtils::HashString("FLEET_STATE_ACTIVATING");
        static const int FLEET_STATE_ACTIVE_HASH = HashingUtils::HashString("FLEET_STATE_ACTIVE");
        static const int FLEET_STATE_ERROR_HASH = HashingUtils::HashString("FLEET_STATE_ERROR");
        static const int FLEET_INITIALIZATION_FAILED_HASH = HashingUtils::HashString("FLEET_INITIALIZATION_FAILED");
        static const int FLEET_BINARY_DOWNLOAD_FAILED_HASH = HashingUtils::HashString("FLEET_BINARY_DOWNLOAD_FAILED");
        static const int FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND_HASH = HashingUtils::HashString("FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND");
        static const int FLEET_VALIDATION_EXECUTABLE_RUNTIME_FAILURE_HASH = HashingUtils::HashString("FLEET_VALIDATION_EXECUTABLE_RUNTIME_FAILURE");
        static const int FLEET_VALIDATION_TIMED_OUT_HASH = HashingUtils::HashString("FLEET_VALIDATION_TIMED_OUT");
        static const int FLEET_ACTIVATION_FAILED_HASH = HashingUtils::HashString("FLEET_ACTIVATION_FAILED");
        static const int FLEET_ACTIVATION_FAILED_NO_INSTANCES_HASH = HashingUtils::HashString("FLEET_ACTIVATION_FAILED_NO_INSTANCES");
        static const int FLEET_NEW_GAME_SESSION_PROTECTION_POLICY_UPDATED_HASH = HashingUtils::HashString("FLEET_NEW_GAME_SESSION_PROTECTION_POLICY_UPDATED");
        static const int SERVER_PROCESS_INVALID_PATH_HASH = HashingUtils::HashString("SERVER_PROCESS_INVALID_PATH");
        static const int SERVER_PROCESS_SDK_INITIALIZATION_TIMEOUT_HASH = HashingUtils::HashString("SERVER_PROCESS_SDK_INITIALIZATION_TIMEOUT");
        static const int SERVER_PROCESS_PROCESS_READY_TIMEOUT_HASH = HashingUtils::HashString("SERVER_PROCESS_PROCESS_READY_TIMEOUT");
        static const int SERVER_PROCESS_CRASHED_HASH = HashingUtils::HashString("SERVER_PROCESS_CRASHED");
        static const int SERVER_PROCESS_TERMINATED_UNHEALTHY_HASH = HashingUtils::HashString("SERVER_PROCESS_TERMINATED_UNHEALTHY");
        static const int SERVER_PROCESS_FORCE_TERMINATED_HASH = HashingUtils::HashString("SERVER_PROCESS_FORCE_TERMINATED");
        static const int SERVER_PROCESS_PROCESS_EXIT_TIMEOUT_HASH = HashingUtils::HashString("SERVER_PROCESS_PROCESS_EXIT_TIMEOUT");
        static const int GAME_SESSION_ACTIVATION_TIMEOUT_HASH = HashingUtils::HashString("GAME_SESSION_ACTIVATION_TIMEOUT");


        EventCode GetEventCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GENERIC_EVENT_HASH)
          {
            return EventCode::GENERIC_EVENT;
          }
          else if (hashCode == FLEET_CREATED_HASH)
          {
            return EventCode::FLEET_CREATED;
          }
          else if (hashCode == FLEET_DELETED_HASH)
          {
            return EventCode::FLEET_DELETED;
          }
          else if (hashCode == FLEET_SCALING_EVENT_HASH)
          {
            return EventCode::FLEET_SCALING_EVENT;
          }
          else if (hashCode == FLEET_STATE_DOWNLOADING_HASH)
          {
            return EventCode::FLEET_STATE_DOWNLOADING;
          }
          else if (hashCode == FLEET_STATE_VALIDATING_HASH)
          {
            return EventCode::FLEET_STATE_VALIDATING;
          }
          else if (hashCode == FLEET_STATE_BUILDING_HASH)
          {
            return EventCode::FLEET_STATE_BUILDING;
          }
          else if (hashCode == FLEET_STATE_ACTIVATING_HASH)
          {
            return EventCode::FLEET_STATE_ACTIVATING;
          }
          else if (hashCode == FLEET_STATE_ACTIVE_HASH)
          {
            return EventCode::FLEET_STATE_ACTIVE;
          }
          else if (hashCode == FLEET_STATE_ERROR_HASH)
          {
            return EventCode::FLEET_STATE_ERROR;
          }
          else if (hashCode == FLEET_INITIALIZATION_FAILED_HASH)
          {
            return EventCode::FLEET_INITIALIZATION_FAILED;
          }
          else if (hashCode == FLEET_BINARY_DOWNLOAD_FAILED_HASH)
          {
            return EventCode::FLEET_BINARY_DOWNLOAD_FAILED;
          }
          else if (hashCode == FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND_HASH)
          {
            return EventCode::FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND;
          }
          else if (hashCode == FLEET_VALIDATION_EXECUTABLE_RUNTIME_FAILURE_HASH)
          {
            return EventCode::FLEET_VALIDATION_EXECUTABLE_RUNTIME_FAILURE;
          }
          else if (hashCode == FLEET_VALIDATION_TIMED_OUT_HASH)
          {
            return EventCode::FLEET_VALIDATION_TIMED_OUT;
          }
          else if (hashCode == FLEET_ACTIVATION_FAILED_HASH)
          {
            return EventCode::FLEET_ACTIVATION_FAILED;
          }
          else if (hashCode == FLEET_ACTIVATION_FAILED_NO_INSTANCES_HASH)
          {
            return EventCode::FLEET_ACTIVATION_FAILED_NO_INSTANCES;
          }
          else if (hashCode == FLEET_NEW_GAME_SESSION_PROTECTION_POLICY_UPDATED_HASH)
          {
            return EventCode::FLEET_NEW_GAME_SESSION_PROTECTION_POLICY_UPDATED;
          }
          else if (hashCode == SERVER_PROCESS_INVALID_PATH_HASH)
          {
            return EventCode::SERVER_PROCESS_INVALID_PATH;
          }
          else if (hashCode == SERVER_PROCESS_SDK_INITIALIZATION_TIMEOUT_HASH)
          {
            return EventCode::SERVER_PROCESS_SDK_INITIALIZATION_TIMEOUT;
          }
          else if (hashCode == SERVER_PROCESS_PROCESS_READY_TIMEOUT_HASH)
          {
            return EventCode::SERVER_PROCESS_PROCESS_READY_TIMEOUT;
          }
          else if (hashCode == SERVER_PROCESS_CRASHED_HASH)
          {
            return EventCode::SERVER_PROCESS_CRASHED;
          }
          else if (hashCode == SERVER_PROCESS_TERMINATED_UNHEALTHY_HASH)
          {
            return EventCode::SERVER_PROCESS_TERMINATED_UNHEALTHY;
          }
          else if (hashCode == SERVER_PROCESS_FORCE_TERMINATED_HASH)
          {
            return EventCode::SERVER_PROCESS_FORCE_TERMINATED;
          }
          else if (hashCode == SERVER_PROCESS_PROCESS_EXIT_TIMEOUT_HASH)
          {
            return EventCode::SERVER_PROCESS_PROCESS_EXIT_TIMEOUT;
          }
          else if (hashCode == GAME_SESSION_ACTIVATION_TIMEOUT_HASH)
          {
            return EventCode::GAME_SESSION_ACTIVATION_TIMEOUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventCode>(hashCode);
          }

          return EventCode::NOT_SET;
        }

        Aws::String GetNameForEventCode(EventCode enumValue)
        {
          switch(enumValue)
          {
          case EventCode::GENERIC_EVENT:
            return "GENERIC_EVENT";
          case EventCode::FLEET_CREATED:
            return "FLEET_CREATED";
          case EventCode::FLEET_DELETED:
            return "FLEET_DELETED";
          case EventCode::FLEET_SCALING_EVENT:
            return "FLEET_SCALING_EVENT";
          case EventCode::FLEET_STATE_DOWNLOADING:
            return "FLEET_STATE_DOWNLOADING";
          case EventCode::FLEET_STATE_VALIDATING:
            return "FLEET_STATE_VALIDATING";
          case EventCode::FLEET_STATE_BUILDING:
            return "FLEET_STATE_BUILDING";
          case EventCode::FLEET_STATE_ACTIVATING:
            return "FLEET_STATE_ACTIVATING";
          case EventCode::FLEET_STATE_ACTIVE:
            return "FLEET_STATE_ACTIVE";
          case EventCode::FLEET_STATE_ERROR:
            return "FLEET_STATE_ERROR";
          case EventCode::FLEET_INITIALIZATION_FAILED:
            return "FLEET_INITIALIZATION_FAILED";
          case EventCode::FLEET_BINARY_DOWNLOAD_FAILED:
            return "FLEET_BINARY_DOWNLOAD_FAILED";
          case EventCode::FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND:
            return "FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND";
          case EventCode::FLEET_VALIDATION_EXECUTABLE_RUNTIME_FAILURE:
            return "FLEET_VALIDATION_EXECUTABLE_RUNTIME_FAILURE";
          case EventCode::FLEET_VALIDATION_TIMED_OUT:
            return "FLEET_VALIDATION_TIMED_OUT";
          case EventCode::FLEET_ACTIVATION_FAILED:
            return "FLEET_ACTIVATION_FAILED";
          case EventCode::FLEET_ACTIVATION_FAILED_NO_INSTANCES:
            return "FLEET_ACTIVATION_FAILED_NO_INSTANCES";
          case EventCode::FLEET_NEW_GAME_SESSION_PROTECTION_POLICY_UPDATED:
            return "FLEET_NEW_GAME_SESSION_PROTECTION_POLICY_UPDATED";
          case EventCode::SERVER_PROCESS_INVALID_PATH:
            return "SERVER_PROCESS_INVALID_PATH";
          case EventCode::SERVER_PROCESS_SDK_INITIALIZATION_TIMEOUT:
            return "SERVER_PROCESS_SDK_INITIALIZATION_TIMEOUT";
          case EventCode::SERVER_PROCESS_PROCESS_READY_TIMEOUT:
            return "SERVER_PROCESS_PROCESS_READY_TIMEOUT";
          case EventCode::SERVER_PROCESS_CRASHED:
            return "SERVER_PROCESS_CRASHED";
          case EventCode::SERVER_PROCESS_TERMINATED_UNHEALTHY:
            return "SERVER_PROCESS_TERMINATED_UNHEALTHY";
          case EventCode::SERVER_PROCESS_FORCE_TERMINATED:
            return "SERVER_PROCESS_FORCE_TERMINATED";
          case EventCode::SERVER_PROCESS_PROCESS_EXIT_TIMEOUT:
            return "SERVER_PROCESS_PROCESS_EXIT_TIMEOUT";
          case EventCode::GAME_SESSION_ACTIVATION_TIMEOUT:
            return "GAME_SESSION_ACTIVATION_TIMEOUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace EventCodeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
