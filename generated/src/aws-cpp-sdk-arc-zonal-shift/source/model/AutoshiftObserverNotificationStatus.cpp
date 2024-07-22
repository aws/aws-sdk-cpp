/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/AutoshiftObserverNotificationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ARCZonalShift
  {
    namespace Model
    {
      namespace AutoshiftObserverNotificationStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AutoshiftObserverNotificationStatus GetAutoshiftObserverNotificationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AutoshiftObserverNotificationStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AutoshiftObserverNotificationStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoshiftObserverNotificationStatus>(hashCode);
          }

          return AutoshiftObserverNotificationStatus::NOT_SET;
        }

        Aws::String GetNameForAutoshiftObserverNotificationStatus(AutoshiftObserverNotificationStatus enumValue)
        {
          switch(enumValue)
          {
          case AutoshiftObserverNotificationStatus::NOT_SET:
            return {};
          case AutoshiftObserverNotificationStatus::ENABLED:
            return "ENABLED";
          case AutoshiftObserverNotificationStatus::DISABLED:
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

      } // namespace AutoshiftObserverNotificationStatusMapper
    } // namespace Model
  } // namespace ARCZonalShift
} // namespace Aws
