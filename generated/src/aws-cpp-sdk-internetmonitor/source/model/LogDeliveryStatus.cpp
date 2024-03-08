/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/LogDeliveryStatus.h>
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
      namespace LogDeliveryStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        LogDeliveryStatus GetLogDeliveryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return LogDeliveryStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return LogDeliveryStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogDeliveryStatus>(hashCode);
          }

          return LogDeliveryStatus::NOT_SET;
        }

        Aws::String GetNameForLogDeliveryStatus(LogDeliveryStatus enumValue)
        {
          switch(enumValue)
          {
          case LogDeliveryStatus::NOT_SET:
            return {};
          case LogDeliveryStatus::ENABLED:
            return "ENABLED";
          case LogDeliveryStatus::DISABLED:
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

      } // namespace LogDeliveryStatusMapper
    } // namespace Model
  } // namespace InternetMonitor
} // namespace Aws
