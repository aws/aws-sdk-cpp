/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/BehaviorEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace BehaviorEnumMapper
      {

        static constexpr uint32_t dont_cache_HASH = ConstExprHashingUtils::HashString("dont-cache");
        static constexpr uint32_t cache_HASH = ConstExprHashingUtils::HashString("cache");


        BehaviorEnum GetBehaviorEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == dont_cache_HASH)
          {
            return BehaviorEnum::dont_cache;
          }
          else if (hashCode == cache_HASH)
          {
            return BehaviorEnum::cache;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BehaviorEnum>(hashCode);
          }

          return BehaviorEnum::NOT_SET;
        }

        Aws::String GetNameForBehaviorEnum(BehaviorEnum enumValue)
        {
          switch(enumValue)
          {
          case BehaviorEnum::NOT_SET:
            return {};
          case BehaviorEnum::dont_cache:
            return "dont-cache";
          case BehaviorEnum::cache:
            return "cache";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BehaviorEnumMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
