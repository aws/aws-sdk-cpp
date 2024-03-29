/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SummaryMetricConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace SummaryMetricConfigurationStatusMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        SummaryMetricConfigurationStatus GetSummaryMetricConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return SummaryMetricConfigurationStatus::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return SummaryMetricConfigurationStatus::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SummaryMetricConfigurationStatus>(hashCode);
          }

          return SummaryMetricConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForSummaryMetricConfigurationStatus(SummaryMetricConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case SummaryMetricConfigurationStatus::NOT_SET:
            return {};
          case SummaryMetricConfigurationStatus::Enabled:
            return "Enabled";
          case SummaryMetricConfigurationStatus::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SummaryMetricConfigurationStatusMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
