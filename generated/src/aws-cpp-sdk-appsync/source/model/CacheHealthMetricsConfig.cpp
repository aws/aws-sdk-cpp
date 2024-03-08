/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/CacheHealthMetricsConfig.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace CacheHealthMetricsConfigMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        CacheHealthMetricsConfig GetCacheHealthMetricsConfigForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return CacheHealthMetricsConfig::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return CacheHealthMetricsConfig::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CacheHealthMetricsConfig>(hashCode);
          }

          return CacheHealthMetricsConfig::NOT_SET;
        }

        Aws::String GetNameForCacheHealthMetricsConfig(CacheHealthMetricsConfig enumValue)
        {
          switch(enumValue)
          {
          case CacheHealthMetricsConfig::NOT_SET:
            return {};
          case CacheHealthMetricsConfig::ENABLED:
            return "ENABLED";
          case CacheHealthMetricsConfig::DISABLED:
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

      } // namespace CacheHealthMetricsConfigMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
