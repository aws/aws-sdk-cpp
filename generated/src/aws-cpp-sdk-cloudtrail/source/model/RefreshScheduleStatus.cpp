/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/RefreshScheduleStatus.h>
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
      namespace RefreshScheduleStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        RefreshScheduleStatus GetRefreshScheduleStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return RefreshScheduleStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return RefreshScheduleStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RefreshScheduleStatus>(hashCode);
          }

          return RefreshScheduleStatus::NOT_SET;
        }

        Aws::String GetNameForRefreshScheduleStatus(RefreshScheduleStatus enumValue)
        {
          switch(enumValue)
          {
          case RefreshScheduleStatus::NOT_SET:
            return {};
          case RefreshScheduleStatus::ENABLED:
            return "ENABLED";
          case RefreshScheduleStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RefreshScheduleStatusMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
