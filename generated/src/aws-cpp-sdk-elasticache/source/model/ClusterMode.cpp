/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ClusterMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace ClusterModeMapper
      {

        static constexpr uint32_t enabled_HASH = ConstExprHashingUtils::HashString("enabled");
        static constexpr uint32_t disabled_HASH = ConstExprHashingUtils::HashString("disabled");
        static constexpr uint32_t compatible_HASH = ConstExprHashingUtils::HashString("compatible");


        ClusterMode GetClusterModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return ClusterMode::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return ClusterMode::disabled;
          }
          else if (hashCode == compatible_HASH)
          {
            return ClusterMode::compatible;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterMode>(hashCode);
          }

          return ClusterMode::NOT_SET;
        }

        Aws::String GetNameForClusterMode(ClusterMode enumValue)
        {
          switch(enumValue)
          {
          case ClusterMode::NOT_SET:
            return {};
          case ClusterMode::enabled:
            return "enabled";
          case ClusterMode::disabled:
            return "disabled";
          case ClusterMode::compatible:
            return "compatible";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterModeMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
