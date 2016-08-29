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
#include <aws/workspaces/model/WorkspaceState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace WorkspaceStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int IMPAIRED_HASH = HashingUtils::HashString("IMPAIRED");
        static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");
        static const int REBOOTING_HASH = HashingUtils::HashString("REBOOTING");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int REBUILDING_HASH = HashingUtils::HashString("REBUILDING");
        static const int MAINTENANCE_HASH = HashingUtils::HashString("MAINTENANCE");
        static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        WorkspaceState GetWorkspaceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return WorkspaceState::PENDING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return WorkspaceState::AVAILABLE;
          }
          else if (hashCode == IMPAIRED_HASH)
          {
            return WorkspaceState::IMPAIRED;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return WorkspaceState::UNHEALTHY;
          }
          else if (hashCode == REBOOTING_HASH)
          {
            return WorkspaceState::REBOOTING;
          }
          else if (hashCode == STARTING_HASH)
          {
            return WorkspaceState::STARTING;
          }
          else if (hashCode == REBUILDING_HASH)
          {
            return WorkspaceState::REBUILDING;
          }
          else if (hashCode == MAINTENANCE_HASH)
          {
            return WorkspaceState::MAINTENANCE;
          }
          else if (hashCode == TERMINATING_HASH)
          {
            return WorkspaceState::TERMINATING;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return WorkspaceState::TERMINATED;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return WorkspaceState::SUSPENDED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return WorkspaceState::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return WorkspaceState::STOPPED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return WorkspaceState::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkspaceState>(hashCode);
          }

          return WorkspaceState::NOT_SET;
        }

        Aws::String GetNameForWorkspaceState(WorkspaceState enumValue)
        {
          switch(enumValue)
          {
          case WorkspaceState::PENDING:
            return "PENDING";
          case WorkspaceState::AVAILABLE:
            return "AVAILABLE";
          case WorkspaceState::IMPAIRED:
            return "IMPAIRED";
          case WorkspaceState::UNHEALTHY:
            return "UNHEALTHY";
          case WorkspaceState::REBOOTING:
            return "REBOOTING";
          case WorkspaceState::STARTING:
            return "STARTING";
          case WorkspaceState::REBUILDING:
            return "REBUILDING";
          case WorkspaceState::MAINTENANCE:
            return "MAINTENANCE";
          case WorkspaceState::TERMINATING:
            return "TERMINATING";
          case WorkspaceState::TERMINATED:
            return "TERMINATED";
          case WorkspaceState::SUSPENDED:
            return "SUSPENDED";
          case WorkspaceState::STOPPING:
            return "STOPPING";
          case WorkspaceState::STOPPED:
            return "STOPPED";
          case WorkspaceState::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace WorkspaceStateMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
