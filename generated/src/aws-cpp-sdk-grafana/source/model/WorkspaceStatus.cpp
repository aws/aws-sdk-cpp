/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/WorkspaceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedGrafana
  {
    namespace Model
    {
      namespace WorkspaceStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPGRADING_HASH = HashingUtils::HashString("UPGRADING");
        static const int DELETION_FAILED_HASH = HashingUtils::HashString("DELETION_FAILED");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int UPGRADE_FAILED_HASH = HashingUtils::HashString("UPGRADE_FAILED");
        static const int LICENSE_REMOVAL_FAILED_HASH = HashingUtils::HashString("LICENSE_REMOVAL_FAILED");
        static const int VERSION_UPDATING_HASH = HashingUtils::HashString("VERSION_UPDATING");
        static const int VERSION_UPDATE_FAILED_HASH = HashingUtils::HashString("VERSION_UPDATE_FAILED");


        WorkspaceStatus GetWorkspaceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return WorkspaceStatus::ACTIVE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return WorkspaceStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return WorkspaceStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return WorkspaceStatus::FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return WorkspaceStatus::UPDATING;
          }
          else if (hashCode == UPGRADING_HASH)
          {
            return WorkspaceStatus::UPGRADING;
          }
          else if (hashCode == DELETION_FAILED_HASH)
          {
            return WorkspaceStatus::DELETION_FAILED;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return WorkspaceStatus::CREATION_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return WorkspaceStatus::UPDATE_FAILED;
          }
          else if (hashCode == UPGRADE_FAILED_HASH)
          {
            return WorkspaceStatus::UPGRADE_FAILED;
          }
          else if (hashCode == LICENSE_REMOVAL_FAILED_HASH)
          {
            return WorkspaceStatus::LICENSE_REMOVAL_FAILED;
          }
          else if (hashCode == VERSION_UPDATING_HASH)
          {
            return WorkspaceStatus::VERSION_UPDATING;
          }
          else if (hashCode == VERSION_UPDATE_FAILED_HASH)
          {
            return WorkspaceStatus::VERSION_UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkspaceStatus>(hashCode);
          }

          return WorkspaceStatus::NOT_SET;
        }

        Aws::String GetNameForWorkspaceStatus(WorkspaceStatus enumValue)
        {
          switch(enumValue)
          {
          case WorkspaceStatus::NOT_SET:
            return {};
          case WorkspaceStatus::ACTIVE:
            return "ACTIVE";
          case WorkspaceStatus::CREATING:
            return "CREATING";
          case WorkspaceStatus::DELETING:
            return "DELETING";
          case WorkspaceStatus::FAILED:
            return "FAILED";
          case WorkspaceStatus::UPDATING:
            return "UPDATING";
          case WorkspaceStatus::UPGRADING:
            return "UPGRADING";
          case WorkspaceStatus::DELETION_FAILED:
            return "DELETION_FAILED";
          case WorkspaceStatus::CREATION_FAILED:
            return "CREATION_FAILED";
          case WorkspaceStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case WorkspaceStatus::UPGRADE_FAILED:
            return "UPGRADE_FAILED";
          case WorkspaceStatus::LICENSE_REMOVAL_FAILED:
            return "LICENSE_REMOVAL_FAILED";
          case WorkspaceStatus::VERSION_UPDATING:
            return "VERSION_UPDATING";
          case WorkspaceStatus::VERSION_UPDATE_FAILED:
            return "VERSION_UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkspaceStatusMapper
    } // namespace Model
  } // namespace ManagedGrafana
} // namespace Aws
