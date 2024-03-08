/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/HealthEventStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace InternetMonitor
  {
    namespace Model
    {
      namespace HealthEventStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int RESOLVED_HASH = HashingUtils::HashString("RESOLVED");


        HealthEventStatus GetHealthEventStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return HealthEventStatus::ACTIVE;
          }
          else if (hashCode == RESOLVED_HASH)
          {
            return HealthEventStatus::RESOLVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HealthEventStatus>(hashCode);
          }

          return HealthEventStatus::NOT_SET;
        }

        Aws::String GetNameForHealthEventStatus(HealthEventStatus enumValue)
        {
          switch(enumValue)
          {
          case HealthEventStatus::NOT_SET:
            return {};
          case HealthEventStatus::ACTIVE:
            return "ACTIVE";
          case HealthEventStatus::RESOLVED:
            return "RESOLVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HealthEventStatusMapper
    } // namespace Model
  } // namespace InternetMonitor
} // namespace Aws
