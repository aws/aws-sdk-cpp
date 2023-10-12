/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/InstanceMetricName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace InstanceMetricNameMapper
      {

        static constexpr uint32_t CPUUtilization_HASH = ConstExprHashingUtils::HashString("CPUUtilization");
        static constexpr uint32_t NetworkIn_HASH = ConstExprHashingUtils::HashString("NetworkIn");
        static constexpr uint32_t NetworkOut_HASH = ConstExprHashingUtils::HashString("NetworkOut");
        static constexpr uint32_t StatusCheckFailed_HASH = ConstExprHashingUtils::HashString("StatusCheckFailed");
        static constexpr uint32_t StatusCheckFailed_Instance_HASH = ConstExprHashingUtils::HashString("StatusCheckFailed_Instance");
        static constexpr uint32_t StatusCheckFailed_System_HASH = ConstExprHashingUtils::HashString("StatusCheckFailed_System");
        static constexpr uint32_t BurstCapacityTime_HASH = ConstExprHashingUtils::HashString("BurstCapacityTime");
        static constexpr uint32_t BurstCapacityPercentage_HASH = ConstExprHashingUtils::HashString("BurstCapacityPercentage");
        static constexpr uint32_t MetadataNoToken_HASH = ConstExprHashingUtils::HashString("MetadataNoToken");


        InstanceMetricName GetInstanceMetricNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CPUUtilization_HASH)
          {
            return InstanceMetricName::CPUUtilization;
          }
          else if (hashCode == NetworkIn_HASH)
          {
            return InstanceMetricName::NetworkIn;
          }
          else if (hashCode == NetworkOut_HASH)
          {
            return InstanceMetricName::NetworkOut;
          }
          else if (hashCode == StatusCheckFailed_HASH)
          {
            return InstanceMetricName::StatusCheckFailed;
          }
          else if (hashCode == StatusCheckFailed_Instance_HASH)
          {
            return InstanceMetricName::StatusCheckFailed_Instance;
          }
          else if (hashCode == StatusCheckFailed_System_HASH)
          {
            return InstanceMetricName::StatusCheckFailed_System;
          }
          else if (hashCode == BurstCapacityTime_HASH)
          {
            return InstanceMetricName::BurstCapacityTime;
          }
          else if (hashCode == BurstCapacityPercentage_HASH)
          {
            return InstanceMetricName::BurstCapacityPercentage;
          }
          else if (hashCode == MetadataNoToken_HASH)
          {
            return InstanceMetricName::MetadataNoToken;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceMetricName>(hashCode);
          }

          return InstanceMetricName::NOT_SET;
        }

        Aws::String GetNameForInstanceMetricName(InstanceMetricName enumValue)
        {
          switch(enumValue)
          {
          case InstanceMetricName::NOT_SET:
            return {};
          case InstanceMetricName::CPUUtilization:
            return "CPUUtilization";
          case InstanceMetricName::NetworkIn:
            return "NetworkIn";
          case InstanceMetricName::NetworkOut:
            return "NetworkOut";
          case InstanceMetricName::StatusCheckFailed:
            return "StatusCheckFailed";
          case InstanceMetricName::StatusCheckFailed_Instance:
            return "StatusCheckFailed_Instance";
          case InstanceMetricName::StatusCheckFailed_System:
            return "StatusCheckFailed_System";
          case InstanceMetricName::BurstCapacityTime:
            return "BurstCapacityTime";
          case InstanceMetricName::BurstCapacityPercentage:
            return "BurstCapacityPercentage";
          case InstanceMetricName::MetadataNoToken:
            return "MetadataNoToken";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceMetricNameMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
