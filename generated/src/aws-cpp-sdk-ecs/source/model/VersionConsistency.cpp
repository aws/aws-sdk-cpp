/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/VersionConsistency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace VersionConsistencyMapper
      {

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");


        VersionConsistency GetVersionConsistencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return VersionConsistency::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return VersionConsistency::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VersionConsistency>(hashCode);
          }

          return VersionConsistency::NOT_SET;
        }

        Aws::String GetNameForVersionConsistency(VersionConsistency enumValue)
        {
          switch(enumValue)
          {
          case VersionConsistency::NOT_SET:
            return {};
          case VersionConsistency::enabled:
            return "enabled";
          case VersionConsistency::disabled:
            return "disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VersionConsistencyMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
