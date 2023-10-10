/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account/model/RegionOptStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Account
  {
    namespace Model
    {
      namespace RegionOptStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
        static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_BY_DEFAULT_HASH = HashingUtils::HashString("ENABLED_BY_DEFAULT");


        RegionOptStatus GetRegionOptStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return RegionOptStatus::ENABLED;
          }
          else if (hashCode == ENABLING_HASH)
          {
            return RegionOptStatus::ENABLING;
          }
          else if (hashCode == DISABLING_HASH)
          {
            return RegionOptStatus::DISABLING;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return RegionOptStatus::DISABLED;
          }
          else if (hashCode == ENABLED_BY_DEFAULT_HASH)
          {
            return RegionOptStatus::ENABLED_BY_DEFAULT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegionOptStatus>(hashCode);
          }

          return RegionOptStatus::NOT_SET;
        }

        Aws::String GetNameForRegionOptStatus(RegionOptStatus enumValue)
        {
          switch(enumValue)
          {
          case RegionOptStatus::NOT_SET:
            return {};
          case RegionOptStatus::ENABLED:
            return "ENABLED";
          case RegionOptStatus::ENABLING:
            return "ENABLING";
          case RegionOptStatus::DISABLING:
            return "DISABLING";
          case RegionOptStatus::DISABLED:
            return "DISABLED";
          case RegionOptStatus::ENABLED_BY_DEFAULT:
            return "ENABLED_BY_DEFAULT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegionOptStatusMapper
    } // namespace Model
  } // namespace Account
} // namespace Aws
