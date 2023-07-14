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

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");


        MultiAZStatus GetMultiAZStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
