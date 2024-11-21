/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/DashboardStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudTrail
  {
    namespace Model
    {
      namespace DashboardStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPDATED_HASH = HashingUtils::HashString("UPDATED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        DashboardStatus GetDashboardStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return DashboardStatus::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return DashboardStatus::CREATED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return DashboardStatus::UPDATING;
          }
          else if (hashCode == UPDATED_HASH)
          {
            return DashboardStatus::UPDATED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return DashboardStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashboardStatus>(hashCode);
          }

          return DashboardStatus::NOT_SET;
        }

        Aws::String GetNameForDashboardStatus(DashboardStatus enumValue)
        {
          switch(enumValue)
          {
          case DashboardStatus::NOT_SET:
            return {};
          case DashboardStatus::CREATING:
            return "CREATING";
          case DashboardStatus::CREATED:
            return "CREATED";
          case DashboardStatus::UPDATING:
            return "UPDATING";
          case DashboardStatus::UPDATED:
            return "UPDATED";
          case DashboardStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashboardStatusMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
