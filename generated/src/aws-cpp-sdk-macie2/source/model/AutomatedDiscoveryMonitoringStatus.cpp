/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/AutomatedDiscoveryMonitoringStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace AutomatedDiscoveryMonitoringStatusMapper
      {

        static const int MONITORED_HASH = HashingUtils::HashString("MONITORED");
        static const int NOT_MONITORED_HASH = HashingUtils::HashString("NOT_MONITORED");


        AutomatedDiscoveryMonitoringStatus GetAutomatedDiscoveryMonitoringStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MONITORED_HASH)
          {
            return AutomatedDiscoveryMonitoringStatus::MONITORED;
          }
          else if (hashCode == NOT_MONITORED_HASH)
          {
            return AutomatedDiscoveryMonitoringStatus::NOT_MONITORED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomatedDiscoveryMonitoringStatus>(hashCode);
          }

          return AutomatedDiscoveryMonitoringStatus::NOT_SET;
        }

        Aws::String GetNameForAutomatedDiscoveryMonitoringStatus(AutomatedDiscoveryMonitoringStatus enumValue)
        {
          switch(enumValue)
          {
          case AutomatedDiscoveryMonitoringStatus::NOT_SET:
            return {};
          case AutomatedDiscoveryMonitoringStatus::MONITORED:
            return "MONITORED";
          case AutomatedDiscoveryMonitoringStatus::NOT_MONITORED:
            return "NOT_MONITORED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomatedDiscoveryMonitoringStatusMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
