/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/GlobalAuroraUngracefulBehavior.h>
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
      namespace GlobalAuroraUngracefulBehaviorMapper
      {

        static const int failover_HASH = HashingUtils::HashString("failover");


        GlobalAuroraUngracefulBehavior GetGlobalAuroraUngracefulBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == failover_HASH)
          {
            return GlobalAuroraUngracefulBehavior::failover;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlobalAuroraUngracefulBehavior>(hashCode);
          }

          return GlobalAuroraUngracefulBehavior::NOT_SET;
        }

        Aws::String GetNameForGlobalAuroraUngracefulBehavior(GlobalAuroraUngracefulBehavior enumValue)
        {
          switch(enumValue)
          {
          case GlobalAuroraUngracefulBehavior::NOT_SET:
            return {};
          case GlobalAuroraUngracefulBehavior::failover:
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

      } // namespace GlobalAuroraUngracefulBehaviorMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
