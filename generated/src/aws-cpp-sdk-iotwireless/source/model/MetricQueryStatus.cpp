/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/MetricQueryStatus.h>
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
      namespace MetricQueryStatusMapper
      {

        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        MetricQueryStatus GetMetricQueryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Succeeded_HASH)
          {
            return MetricQueryStatus::Succeeded;
          }
          else if (hashCode == Failed_HASH)
          {
            return MetricQueryStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricQueryStatus>(hashCode);
          }

          return MetricQueryStatus::NOT_SET;
        }

        Aws::String GetNameForMetricQueryStatus(MetricQueryStatus enumValue)
        {
          switch(enumValue)
          {
          case MetricQueryStatus::NOT_SET:
            return {};
          case MetricQueryStatus::Succeeded:
            return "Succeeded";
          case MetricQueryStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricQueryStatusMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
