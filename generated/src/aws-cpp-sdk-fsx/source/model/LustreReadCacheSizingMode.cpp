﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/LustreReadCacheSizingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace LustreReadCacheSizingModeMapper
      {

        static const int NO_CACHE_HASH = HashingUtils::HashString("NO_CACHE");
        static const int USER_PROVISIONED_HASH = HashingUtils::HashString("USER_PROVISIONED");
        static const int PROPORTIONAL_TO_THROUGHPUT_CAPACITY_HASH = HashingUtils::HashString("PROPORTIONAL_TO_THROUGHPUT_CAPACITY");


        LustreReadCacheSizingMode GetLustreReadCacheSizingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_CACHE_HASH)
          {
            return LustreReadCacheSizingMode::NO_CACHE;
          }
          else if (hashCode == USER_PROVISIONED_HASH)
          {
            return LustreReadCacheSizingMode::USER_PROVISIONED;
          }
          else if (hashCode == PROPORTIONAL_TO_THROUGHPUT_CAPACITY_HASH)
          {
            return LustreReadCacheSizingMode::PROPORTIONAL_TO_THROUGHPUT_CAPACITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LustreReadCacheSizingMode>(hashCode);
          }

          return LustreReadCacheSizingMode::NOT_SET;
        }

        Aws::String GetNameForLustreReadCacheSizingMode(LustreReadCacheSizingMode enumValue)
        {
          switch(enumValue)
          {
          case LustreReadCacheSizingMode::NOT_SET:
            return {};
          case LustreReadCacheSizingMode::NO_CACHE:
            return "NO_CACHE";
          case LustreReadCacheSizingMode::USER_PROVISIONED:
            return "USER_PROVISIONED";
          case LustreReadCacheSizingMode::PROPORTIONAL_TO_THROUGHPUT_CAPACITY:
            return "PROPORTIONAL_TO_THROUGHPUT_CAPACITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LustreReadCacheSizingModeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
