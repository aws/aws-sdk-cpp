/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t GENERIC_EVENT_HASH = ConstExprHashingUtils::HashString("GENERIC_EVENT");
        static constexpr uint32_t FLEET_CREATED_HASH = ConstExprHashingUtils::HashString("FLEET_CREATED");
        static constexpr uint32_t FLEET_DELETED_HASH = ConstExprHashingUtils::HashString("FLEET_DELETED");
        static constexpr uint32_t FLEET_SCALING_EVENT_HASH = ConstExprHashingUtils::HashString("FLEET_SCALING_EVENT");
        static constexpr uint32_t FLEET_STATE_DOWNLOADING_HASH = ConstExprHashingUtils::HashString("FLEET_STATE_DOWNLOADING");
        static constexpr uint32_t FLEET_STATE_VALIDATING_HASH = ConstExprHashingUtils::HashString("FLEET_STATE_VALIDATING");
        static constexpr uint32_t FLEET_STATE_BUILDING_HASH = ConstExprHashingUtils::HashString("FLEET_STATE_BUILDING");
        static constexpr uint32_t FLEET_STATE_ACTIVATING_HASH = ConstExprHashingUtils::HashString("FLEET_STATE_ACTIVATING");
        static constexpr uint32_t FLEET_STATE_ACTIVE_HASH = ConstExprHashingUtils::HashString("FLEET_STATE_ACTIVE");
        static constexpr uint32_t FLEET_STATE_ERROR_HASH = ConstExprHashingUtils::HashString("FLEET_STATE_ERROR");
        static constexpr uint32_t FLEET_INITIALIZATION_FAILED_HASH = ConstExprHashingUtils::HashString("FLEET_INITIALIZATION_FAILED");
        static constexpr uint32_t FLEET_BINARY_DOWNLOAD_FAILED_HASH = ConstExprHashingUtils::HashString("FLEET_BINARY_DOWNLOAD_FAILED");
        static constexpr uint32_t FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND");
        static constexpr uint32_t FLEET_VALIDATION_EXECUTABLE_RUNTIME_FAILURE_HASH = ConstExprHashingUtils::HashString("FLEET_VALIDATION_EXECUTABLE_RUNTIME_FAILURE");
        static constexpr uint32_t FLEET_VALIDATION_TIMED_OUT_HASH = ConstExprHashingUtils::HashString("FLEET_VALIDATION_TIMED_OUT");
        static constexpr uint32_t FLEET_ACTIVATION_FAILED_HASH = ConstExprHashingUtils::HashString("FLEET_ACTIVATION_FAILED");
        static constexpr uint32_t FLEET_ACTIVATION_FAILED_NO_INSTANCES_HASH = ConstExprHashingUtils::HashString("FLEET_ACTIVATION_FAILED_NO_INSTANCES");
        static constexpr uint32_t FLEET_NEW_GAME_SESSION_PROTECTION_POLICY_UPDATED_HASH = ConstExprHashingUtils::HashString("FLEET_NEW_GAME_SESSION_PROTECTION_POLICY_UPDATED");
        static constexpr uint32_t SERVER_PROCESS_INVALID_PATH_HASH = ConstExprHashingUtils::HashString("SERVER_PROCESS_INVALID_PATH");
        static constexpr uint32_t SERVER_PROCESS_SDK_INITIALIZATION_TIMEOUT_HASH = ConstExprHashingUtils::HashString("SERVER_PROCESS_SDK_INITIALIZATION_TIMEOUT");
        static constexpr uint32_t SERVER_PROCESS_PROCESS_READY_TIMEOUT_HASH = ConstExprHashingUtils::HashString("SERVER_PROCESS_PROCESS_READY_TIMEOUT");
        static constexpr uint32_t SERVER_PROCESS_CRASHED_HASH = ConstExprHashingUtils::HashString("SERVER_PROCESS_CRASHED");
        static constexpr uint32_t SERVER_PROCESS_TERMINATED_UNHEALTHY_HASH = ConstExprHashingUtils::HashString("SERVER_PROCESS_TERMINATED_UNHEALTHY");
        static constexpr uint32_t SERVER_PROCESS_FORCE_TERMINATED_HASH = ConstExprHashingUtils::HashString("SERVER_PROCESS_FORCE_TERMINATED");
        static constexpr uint32_t SERVER_PROCESS_PROCESS_EXIT_TIMEOUT_HASH = ConstExprHashingUtils::HashString("SERVER_PROCESS_PROCESS_EXIT_TIMEOUT");
        static constexpr uint32_t GAME_SESSION_ACTIVATION_TIMEOUT_HASH = ConstExprHashingUtils::HashString("GAME_SESSION_ACTIVATION_TIMEOUT");
        static constexpr uint32_t FLEET_CREATION_EXTRACTING_BUILD_HASH = ConstExprHashingUtils::HashString("FLEET_CREATION_EXTRACTING_BUILD");
        static constexpr uint32_t FLEET_CREATION_RUNNING_INSTALLER_HASH = ConstExprHashingUtils::HashString("FLEET_CREATION_RUNNING_INSTALLER");
        static constexpr uint32_t FLEET_CREATION_VALIDATING_RUNTIME_CONFIG_HASH = ConstExprHashingUtils::HashString("FLEET_CREATION_VALIDATING_RUNTIME_CONFIG");
        static constexpr uint32_t FLEET_VPC_PEERING_SUCCEEDED_HASH = ConstExprHashingUtils::HashString("FLEET_VPC_PEERING_SUCCEEDED");
        static constexpr uint32_t FLEET_VPC_PEERING_FAILED_HASH = ConstExprHashingUtils::HashString("FLEET_VPC_PEERING_FAILED");
        static constexpr uint32_t FLEET_VPC_PEERING_DELETED_HASH = ConstExprHashingUtils::HashString("FLEET_VPC_PEERING_DELETED");
        static constexpr uint32_t INSTANCE_INTERRUPTED_HASH = ConstExprHashingUtils::HashString("INSTANCE_INTERRUPTED");
        static constexpr uint32_t INSTANCE_RECYCLED_HASH = ConstExprHashingUtils::HashString("INSTANCE_RECYCLED");


        EventCode GetEventCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == FLEET_CREATION_EXTRACTING_BUILD_HASH)
          {
            return EventCode::FLEET_CREATION_EXTRACTING_BUILD;
          }
          else if (hashCode == FLEET_CREATION_RUNNING_INSTALLER_HASH)
          {
            return EventCode::FLEET_CREATION_RUNNING_INSTALLER;
          }
          else if (hashCode == FLEET_CREATION_VALIDATING_RUNTIME_CONFIG_HASH)
          {
            return EventCode::FLEET_CREATION_VALIDATING_RUNTIME_CONFIG;
          }
          else if (hashCode == FLEET_VPC_PEERING_SUCCEEDED_HASH)
          {
            return EventCode::FLEET_VPC_PEERING_SUCCEEDED;
          }
          else if (hashCode == FLEET_VPC_PEERING_FAILED_HASH)
          {
            return EventCode::FLEET_VPC_PEERING_FAILED;
          }
          else if (hashCode == FLEET_VPC_PEERING_DELETED_HASH)
          {
            return EventCode::FLEET_VPC_PEERING_DELETED;
          }
          else if (hashCode == INSTANCE_INTERRUPTED_HASH)
          {
            return EventCode::INSTANCE_INTERRUPTED;
          }
          else if (hashCode == INSTANCE_RECYCLED_HASH)
          {
            return EventCode::INSTANCE_RECYCLED;
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
          case EventCode::NOT_SET:
            return {};
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
          case EventCode::FLEET_CREATION_EXTRACTING_BUILD:
            return "FLEET_CREATION_EXTRACTING_BUILD";
          case EventCode::FLEET_CREATION_RUNNING_INSTALLER:
            return "FLEET_CREATION_RUNNING_INSTALLER";
          case EventCode::FLEET_CREATION_VALIDATING_RUNTIME_CONFIG:
            return "FLEET_CREATION_VALIDATING_RUNTIME_CONFIG";
          case EventCode::FLEET_VPC_PEERING_SUCCEEDED:
            return "FLEET_VPC_PEERING_SUCCEEDED";
          case EventCode::FLEET_VPC_PEERING_FAILED:
            return "FLEET_VPC_PEERING_FAILED";
          case EventCode::FLEET_VPC_PEERING_DELETED:
            return "FLEET_VPC_PEERING_DELETED";
          case EventCode::INSTANCE_INTERRUPTED:
            return "INSTANCE_INTERRUPTED";
          case EventCode::INSTANCE_RECYCLED:
            return "INSTANCE_RECYCLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventCodeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
