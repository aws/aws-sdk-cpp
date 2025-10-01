/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AutoRefreshMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace AutoRefreshModeMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AutoRefreshMode GetAutoRefreshModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AutoRefreshMode::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AutoRefreshMode::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoRefreshMode>(hashCode);
          }

          return AutoRefreshMode::NOT_SET;
        }

        Aws::String GetNameForAutoRefreshMode(AutoRefreshMode enumValue)
        {
          switch(enumValue)
          {
          case AutoRefreshMode::NOT_SET:
            return {};
          case AutoRefreshMode::ENABLED:
            return "ENABLED";
          case AutoRefreshMode::DISABLED:
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

      } // namespace AutoRefreshModeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
