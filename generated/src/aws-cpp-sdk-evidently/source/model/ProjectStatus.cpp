/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ProjectStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchEvidently
  {
    namespace Model
    {
      namespace ProjectStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        ProjectStatus GetProjectStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return ProjectStatus::AVAILABLE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ProjectStatus::UPDATING;
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
          case ProjectStatus::AVAILABLE:
            return "AVAILABLE";
          case ProjectStatus::UPDATING:
            return "UPDATING";
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
  } // namespace CloudWatchEvidently
} // namespace Aws
