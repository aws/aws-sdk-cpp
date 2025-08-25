/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ProjectStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace ProjectStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int MOVING_HASH = HashingUtils::HashString("MOVING");


        ProjectStatus GetProjectStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ProjectStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ProjectStatus::DELETING;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ProjectStatus::DELETE_FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ProjectStatus::UPDATING;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ProjectStatus::UPDATE_FAILED;
          }
          else if (hashCode == MOVING_HASH)
          {
            return ProjectStatus::MOVING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProjectStatus>(hashCode);
          }

          return ProjectStatus::NOT_SET;
        }

        Aws::String GetNameForProjectStatus(ProjectStatus enumValue)
        {
          switch(enumValue)
          {
          case ProjectStatus::NOT_SET:
            return {};
          case ProjectStatus::ACTIVE:
            return "ACTIVE";
          case ProjectStatus::DELETING:
            return "DELETING";
          case ProjectStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case ProjectStatus::UPDATING:
            return "UPDATING";
          case ProjectStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case ProjectStatus::MOVING:
            return "MOVING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProjectStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
