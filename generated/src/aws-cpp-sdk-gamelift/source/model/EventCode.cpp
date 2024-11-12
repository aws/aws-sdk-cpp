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
        static const int FLEET_STATE_PENDING_HASH = HashingUtils::HashString("FLEET_STATE_PENDING");
        static const int FLEET_STATE_CREATING_HASH = HashingUtils::HashString("FLEET_STATE_CREATING");
        static const int FLEET_STATE_CREATED_HASH = HashingUtils::HashString("FLEET_STATE_CREATED");
        static const int FLEET_STATE_UPDATING_HASH = HashingUtils::HashString("FLEET_STATE_UPDATING");
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
        static const int SERVER_PROCESS_SDK_INITIALIZATION_FAILED_HASH = HashingUtils::HashString("SERVER_PROCESS_SDK_INITIALIZATION_FAILED");
        static const int SERVER_PROCESS_MISCONFIGURED_CONTAINER_PORT_HASH = HashingUtils::HashString("SERVER_PROCESS_MISCONFIGURED_CONTAINER_PORT");
        static const int GAME_SESSION_ACTIVATION_TIMEOUT_HASH = HashingUtils::HashString("GAME_SESSION_ACTIVATION_TIMEOUT");
        static const int FLEET_CREATION_EXTRACTING_BUILD_HASH = HashingUtils::HashString("FLEET_CREATION_EXTRACTING_BUILD");
        static const int FLEET_CREATION_RUNNING_INSTALLER_HASH = HashingUtils::HashString("FLEET_CREATION_RUNNING_INSTALLER");
        static const int FLEET_CREATION_VALIDATING_RUNTIME_CONFIG_HASH = HashingUtils::HashString("FLEET_CREATION_VALIDATING_RUNTIME_CONFIG");
        static const int FLEET_VPC_PEERING_SUCCEEDED_HASH = HashingUtils::HashString("FLEET_VPC_PEERING_SUCCEEDED");
        static const int FLEET_VPC_PEERING_FAILED_HASH = HashingUtils::HashString("FLEET_VPC_PEERING_FAILED");
        static const int FLEET_VPC_PEERING_DELETED_HASH = HashingUtils::HashString("FLEET_VPC_PEERING_DELETED");
        static const int INSTANCE_INTERRUPTED_HASH = HashingUtils::HashString("INSTANCE_INTERRUPTED");
        static const int INSTANCE_RECYCLED_HASH = HashingUtils::HashString("INSTANCE_RECYCLED");
        static const int INSTANCE_REPLACED_UNHEALTHY_HASH = HashingUtils::HashString("INSTANCE_REPLACED_UNHEALTHY");
        static const int FLEET_CREATION_COMPLETED_INSTALLER_HASH = HashingUtils::HashString("FLEET_CREATION_COMPLETED_INSTALLER");
        static const int FLEET_CREATION_FAILED_INSTALLER_HASH = HashingUtils::HashString("FLEET_CREATION_FAILED_INSTALLER");
        static const int COMPUTE_LOG_UPLOAD_FAILED_HASH = HashingUtils::HashString("COMPUTE_LOG_UPLOAD_FAILED");
        static const int GAME_SERVER_CONTAINER_GROUP_CRASHED_HASH = HashingUtils::HashString("GAME_SERVER_CONTAINER_GROUP_CRASHED");
        static const int PER_INSTANCE_CONTAINER_GROUP_CRASHED_HASH = HashingUtils::HashString("PER_INSTANCE_CONTAINER_GROUP_CRASHED");
        static const int GAME_SERVER_CONTAINER_GROUP_REPLACED_UNHEALTHY_HASH = HashingUtils::HashString("GAME_SERVER_CONTAINER_GROUP_REPLACED_UNHEALTHY");
        static const int LOCATION_STATE_PENDING_HASH = HashingUtils::HashString("LOCATION_STATE_PENDING");
        static const int LOCATION_STATE_CREATING_HASH = HashingUtils::HashString("LOCATION_STATE_CREATING");
        static const int LOCATION_STATE_CREATED_HASH = HashingUtils::HashString("LOCATION_STATE_CREATED");
        static const int LOCATION_STATE_ACTIVATING_HASH = HashingUtils::HashString("LOCATION_STATE_ACTIVATING");
        static const int LOCATION_STATE_ACTIVE_HASH = HashingUtils::HashString("LOCATION_STATE_ACTIVE");
        static const int LOCATION_STATE_UPDATING_HASH = HashingUtils::HashString("LOCATION_STATE_UPDATING");
        static const int LOCATION_STATE_ERROR_HASH = HashingUtils::HashString("LOCATION_STATE_ERROR");
        static const int LOCATION_STATE_DELETING_HASH = HashingUtils::HashString("LOCATION_STATE_DELETING");
        static const int LOCATION_STATE_DELETED_HASH = HashingUtils::HashString("LOCATION_STATE_DELETED");


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
          else if (hashCode == FLEET_STATE_PENDING_HASH)
          {
            return EventCode::FLEET_STATE_PENDING;
          }
          else if (hashCode == FLEET_STATE_CREATING_HASH)
          {
            return EventCode::FLEET_STATE_CREATING;
          }
          else if (hashCode == FLEET_STATE_CREATED_HASH)
          {
            return EventCode::FLEET_STATE_CREATED;
          }
          else if (hashCode == FLEET_STATE_UPDATING_HASH)
          {
            return EventCode::FLEET_STATE_UPDATING;
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
          else if (hashCode == SERVER_PROCESS_SDK_INITIALIZATION_FAILED_HASH)
          {
            return EventCode::SERVER_PROCESS_SDK_INITIALIZATION_FAILED;
          }
          else if (hashCode == SERVER_PROCESS_MISCONFIGURED_CONTAINER_PORT_HASH)
          {
            return EventCode::SERVER_PROCESS_MISCONFIGURED_CONTAINER_PORT;
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
          else if (hashCode == INSTANCE_REPLACED_UNHEALTHY_HASH)
          {
            return EventCode::INSTANCE_REPLACED_UNHEALTHY;
          }
          else if (hashCode == FLEET_CREATION_COMPLETED_INSTALLER_HASH)
          {
            return EventCode::FLEET_CREATION_COMPLETED_INSTALLER;
          }
          else if (hashCode == FLEET_CREATION_FAILED_INSTALLER_HASH)
          {
            return EventCode::FLEET_CREATION_FAILED_INSTALLER;
          }
          else if (hashCode == COMPUTE_LOG_UPLOAD_FAILED_HASH)
          {
            return EventCode::COMPUTE_LOG_UPLOAD_FAILED;
          }
          else if (hashCode == GAME_SERVER_CONTAINER_GROUP_CRASHED_HASH)
          {
            return EventCode::GAME_SERVER_CONTAINER_GROUP_CRASHED;
          }
          else if (hashCode == PER_INSTANCE_CONTAINER_GROUP_CRASHED_HASH)
          {
            return EventCode::PER_INSTANCE_CONTAINER_GROUP_CRASHED;
          }
          else if (hashCode == GAME_SERVER_CONTAINER_GROUP_REPLACED_UNHEALTHY_HASH)
          {
            return EventCode::GAME_SERVER_CONTAINER_GROUP_REPLACED_UNHEALTHY;
          }
          else if (hashCode == LOCATION_STATE_PENDING_HASH)
          {
            return EventCode::LOCATION_STATE_PENDING;
          }
          else if (hashCode == LOCATION_STATE_CREATING_HASH)
          {
            return EventCode::LOCATION_STATE_CREATING;
          }
          else if (hashCode == LOCATION_STATE_CREATED_HASH)
          {
            return EventCode::LOCATION_STATE_CREATED;
          }
          else if (hashCode == LOCATION_STATE_ACTIVATING_HASH)
          {
            return EventCode::LOCATION_STATE_ACTIVATING;
          }
          else if (hashCode == LOCATION_STATE_ACTIVE_HASH)
          {
            return EventCode::LOCATION_STATE_ACTIVE;
          }
          else if (hashCode == LOCATION_STATE_UPDATING_HASH)
          {
            return EventCode::LOCATION_STATE_UPDATING;
          }
          else if (hashCode == LOCATION_STATE_ERROR_HASH)
          {
            return EventCode::LOCATION_STATE_ERROR;
          }
          else if (hashCode == LOCATION_STATE_DELETING_HASH)
          {
            return EventCode::LOCATION_STATE_DELETING;
          }
          else if (hashCode == LOCATION_STATE_DELETED_HASH)
          {
            return EventCode::LOCATION_STATE_DELETED;
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
          case EventCode::FLEET_STATE_PENDING:
            return "FLEET_STATE_PENDING";
          case EventCode::FLEET_STATE_CREATING:
            return "FLEET_STATE_CREATING";
          case EventCode::FLEET_STATE_CREATED:
            return "FLEET_STATE_CREATED";
          case EventCode::FLEET_STATE_UPDATING:
            return "FLEET_STATE_UPDATING";
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
          case EventCode::SERVER_PROCESS_SDK_INITIALIZATION_FAILED:
            return "SERVER_PROCESS_SDK_INITIALIZATION_FAILED";
          case EventCode::SERVER_PROCESS_MISCONFIGURED_CONTAINER_PORT:
            return "SERVER_PROCESS_MISCONFIGURED_CONTAINER_PORT";
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
          case EventCode::INSTANCE_REPLACED_UNHEALTHY:
            return "INSTANCE_REPLACED_UNHEALTHY";
          case EventCode::FLEET_CREATION_COMPLETED_INSTALLER:
            return "FLEET_CREATION_COMPLETED_INSTALLER";
          case EventCode::FLEET_CREATION_FAILED_INSTALLER:
            return "FLEET_CREATION_FAILED_INSTALLER";
          case EventCode::COMPUTE_LOG_UPLOAD_FAILED:
            return "COMPUTE_LOG_UPLOAD_FAILED";
          case EventCode::GAME_SERVER_CONTAINER_GROUP_CRASHED:
            return "GAME_SERVER_CONTAINER_GROUP_CRASHED";
          case EventCode::PER_INSTANCE_CONTAINER_GROUP_CRASHED:
            return "PER_INSTANCE_CONTAINER_GROUP_CRASHED";
          case EventCode::GAME_SERVER_CONTAINER_GROUP_REPLACED_UNHEALTHY:
            return "GAME_SERVER_CONTAINER_GROUP_REPLACED_UNHEALTHY";
          case EventCode::LOCATION_STATE_PENDING:
            return "LOCATION_STATE_PENDING";
          case EventCode::LOCATION_STATE_CREATING:
            return "LOCATION_STATE_CREATING";
          case EventCode::LOCATION_STATE_CREATED:
            return "LOCATION_STATE_CREATED";
          case EventCode::LOCATION_STATE_ACTIVATING:
            return "LOCATION_STATE_ACTIVATING";
          case EventCode::LOCATION_STATE_ACTIVE:
            return "LOCATION_STATE_ACTIVE";
          case EventCode::LOCATION_STATE_UPDATING:
            return "LOCATION_STATE_UPDATING";
          case EventCode::LOCATION_STATE_ERROR:
            return "LOCATION_STATE_ERROR";
          case EventCode::LOCATION_STATE_DELETING:
            return "LOCATION_STATE_DELETING";
          case EventCode::LOCATION_STATE_DELETED:
            return "LOCATION_STATE_DELETED";
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
