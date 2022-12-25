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

        static const int CPUUtilization_HASH = HashingUtils::HashString("CPUUtilization");
        static const int NetworkIn_HASH = HashingUtils::HashString("NetworkIn");
        static const int NetworkOut_HASH = HashingUtils::HashString("NetworkOut");
        static const int StatusCheckFailed_HASH = HashingUtils::HashString("StatusCheckFailed");
        static const int StatusCheckFailed_Instance_HASH = HashingUtils::HashString("StatusCheckFailed_Instance");
        static const int StatusCheckFailed_System_HASH = HashingUtils::HashString("StatusCheckFailed_System");
        static const int BurstCapacityTime_HASH = HashingUtils::HashString("BurstCapacityTime");
        static const int BurstCapacityPercentage_HASH = HashingUtils::HashString("BurstCapacityPercentage");
        static const int MetadataNoToken_HASH = HashingUtils::HashString("MetadataNoToken");


        InstanceMetricName GetInstanceMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
