/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/AutomaticFailoverStatus.h>
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
      namespace AutomaticFailoverStatusMapper
      {

        static constexpr uint32_t enabled_HASH = ConstExprHashingUtils::HashString("enabled");
        static constexpr uint32_t disabled_HASH = ConstExprHashingUtils::HashString("disabled");
        static constexpr uint32_t enabling_HASH = ConstExprHashingUtils::HashString("enabling");
        static constexpr uint32_t disabling_HASH = ConstExprHashingUtils::HashString("disabling");


        AutomaticFailoverStatus GetAutomaticFailoverStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return AutomaticFailoverStatus::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return AutomaticFailoverStatus::disabled;
          }
          else if (hashCode == enabling_HASH)
          {
            return AutomaticFailoverStatus::enabling;
          }
          else if (hashCode == disabling_HASH)
          {
            return AutomaticFailoverStatus::disabling;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomaticFailoverStatus>(hashCode);
          }

          return AutomaticFailoverStatus::NOT_SET;
        }

        Aws::String GetNameForAutomaticFailoverStatus(AutomaticFailoverStatus enumValue)
        {
          switch(enumValue)
          {
          case AutomaticFailoverStatus::NOT_SET:
            return {};
          case AutomaticFailoverStatus::enabled:
            return "enabled";
          case AutomaticFailoverStatus::disabled:
            return "disabled";
          case AutomaticFailoverStatus::enabling:
            return "enabling";
          case AutomaticFailoverStatus::disabling:
            return "disabling";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomaticFailoverStatusMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
