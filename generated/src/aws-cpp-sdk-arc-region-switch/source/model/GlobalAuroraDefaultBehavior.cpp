/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/GlobalAuroraDefaultBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ARCRegionswitch
  {
    namespace Model
    {
      namespace GlobalAuroraDefaultBehaviorMapper
      {

        static const int switchoverOnly_HASH = HashingUtils::HashString("switchoverOnly");
        static const int failover_HASH = HashingUtils::HashString("failover");


        GlobalAuroraDefaultBehavior GetGlobalAuroraDefaultBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == switchoverOnly_HASH)
          {
            return GlobalAuroraDefaultBehavior::switchoverOnly;
          }
          else if (hashCode == failover_HASH)
          {
            return GlobalAuroraDefaultBehavior::failover;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlobalAuroraDefaultBehavior>(hashCode);
          }

          return GlobalAuroraDefaultBehavior::NOT_SET;
        }

        Aws::String GetNameForGlobalAuroraDefaultBehavior(GlobalAuroraDefaultBehavior enumValue)
        {
          switch(enumValue)
          {
          case GlobalAuroraDefaultBehavior::NOT_SET:
            return {};
          case GlobalAuroraDefaultBehavior::switchoverOnly:
            return "switchoverOnly";
          case GlobalAuroraDefaultBehavior::failover:
            return "failover";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GlobalAuroraDefaultBehaviorMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
