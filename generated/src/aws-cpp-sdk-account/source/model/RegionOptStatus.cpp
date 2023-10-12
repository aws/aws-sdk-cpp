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

        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");
        static constexpr uint32_t ENABLING_HASH = ConstExprHashingUtils::HashString("ENABLING");
        static constexpr uint32_t DISABLING_HASH = ConstExprHashingUtils::HashString("DISABLING");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t ENABLED_BY_DEFAULT_HASH = ConstExprHashingUtils::HashString("ENABLED_BY_DEFAULT");


        RegionOptStatus GetRegionOptStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
