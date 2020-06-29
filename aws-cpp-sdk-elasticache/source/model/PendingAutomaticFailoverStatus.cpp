/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/PendingAutomaticFailoverStatus.h>
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
      namespace PendingAutomaticFailoverStatusMapper
      {

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");


        PendingAutomaticFailoverStatus GetPendingAutomaticFailoverStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return PendingAutomaticFailoverStatus::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return PendingAutomaticFailoverStatus::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PendingAutomaticFailoverStatus>(hashCode);
          }

          return PendingAutomaticFailoverStatus::NOT_SET;
        }

        Aws::String GetNameForPendingAutomaticFailoverStatus(PendingAutomaticFailoverStatus enumValue)
        {
          switch(enumValue)
          {
          case PendingAutomaticFailoverStatus::enabled:
            return "enabled";
          case PendingAutomaticFailoverStatus::disabled:
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

      } // namespace PendingAutomaticFailoverStatusMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
