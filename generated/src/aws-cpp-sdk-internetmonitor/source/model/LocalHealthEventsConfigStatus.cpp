/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/LocalHealthEventsConfigStatus.h>
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
      namespace LocalHealthEventsConfigStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        LocalHealthEventsConfigStatus GetLocalHealthEventsConfigStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return LocalHealthEventsConfigStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return LocalHealthEventsConfigStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocalHealthEventsConfigStatus>(hashCode);
          }

          return LocalHealthEventsConfigStatus::NOT_SET;
        }

        Aws::String GetNameForLocalHealthEventsConfigStatus(LocalHealthEventsConfigStatus enumValue)
        {
          switch(enumValue)
          {
          case LocalHealthEventsConfigStatus::NOT_SET:
            return {};
          case LocalHealthEventsConfigStatus::ENABLED:
            return "ENABLED";
          case LocalHealthEventsConfigStatus::DISABLED:
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

      } // namespace LocalHealthEventsConfigStatusMapper
    } // namespace Model
  } // namespace InternetMonitor
} // namespace Aws
