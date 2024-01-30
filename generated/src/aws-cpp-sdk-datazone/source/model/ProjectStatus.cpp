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
