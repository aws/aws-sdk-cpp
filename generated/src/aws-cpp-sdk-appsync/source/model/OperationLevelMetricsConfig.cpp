/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/OperationLevelMetricsConfig.h>
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
      namespace OperationLevelMetricsConfigMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        OperationLevelMetricsConfig GetOperationLevelMetricsConfigForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return OperationLevelMetricsConfig::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return OperationLevelMetricsConfig::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperationLevelMetricsConfig>(hashCode);
          }

          return OperationLevelMetricsConfig::NOT_SET;
        }

        Aws::String GetNameForOperationLevelMetricsConfig(OperationLevelMetricsConfig enumValue)
        {
          switch(enumValue)
          {
          case OperationLevelMetricsConfig::NOT_SET:
            return {};
          case OperationLevelMetricsConfig::ENABLED:
            return "ENABLED";
          case OperationLevelMetricsConfig::DISABLED:
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

      } // namespace OperationLevelMetricsConfigMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
