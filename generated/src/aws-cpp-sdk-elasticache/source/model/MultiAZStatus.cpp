/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/MultiAZStatus.h>
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
      namespace MultiAZStatusMapper
      {

        static constexpr uint32_t enabled_HASH = ConstExprHashingUtils::HashString("enabled");
        static constexpr uint32_t disabled_HASH = ConstExprHashingUtils::HashString("disabled");


        MultiAZStatus GetMultiAZStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return MultiAZStatus::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return MultiAZStatus::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MultiAZStatus>(hashCode);
          }

          return MultiAZStatus::NOT_SET;
        }

        Aws::String GetNameForMultiAZStatus(MultiAZStatus enumValue)
        {
          switch(enumValue)
          {
          case MultiAZStatus::NOT_SET:
            return {};
          case MultiAZStatus::enabled:
            return "enabled";
          case MultiAZStatus::disabled:
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

      } // namespace MultiAZStatusMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
