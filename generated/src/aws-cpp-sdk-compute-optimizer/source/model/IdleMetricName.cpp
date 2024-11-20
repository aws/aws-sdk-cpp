/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/IdleMetricName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace IdleMetricNameMapper
      {

        static const int CPU_HASH = HashingUtils::HashString("CPU");
        static const int Memory_HASH = HashingUtils::HashString("Memory");
        static const int NetworkOutBytesPerSecond_HASH = HashingUtils::HashString("NetworkOutBytesPerSecond");
        static const int NetworkInBytesPerSecond_HASH = HashingUtils::HashString("NetworkInBytesPerSecond");
        static const int DatabaseConnections_HASH = HashingUtils::HashString("DatabaseConnections");
        static const int EBSVolumeReadIOPS_HASH = HashingUtils::HashString("EBSVolumeReadIOPS");
        static const int EBSVolumeWriteIOPS_HASH = HashingUtils::HashString("EBSVolumeWriteIOPS");
        static const int VolumeReadOpsPerSecond_HASH = HashingUtils::HashString("VolumeReadOpsPerSecond");
        static const int VolumeWriteOpsPerSecond_HASH = HashingUtils::HashString("VolumeWriteOpsPerSecond");


        IdleMetricName GetIdleMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CPU_HASH)
          {
            return IdleMetricName::CPU;
          }
          else if (hashCode == Memory_HASH)
          {
            return IdleMetricName::Memory;
          }
          else if (hashCode == NetworkOutBytesPerSecond_HASH)
          {
            return IdleMetricName::NetworkOutBytesPerSecond;
          }
          else if (hashCode == NetworkInBytesPerSecond_HASH)
          {
            return IdleMetricName::NetworkInBytesPerSecond;
          }
          else if (hashCode == DatabaseConnections_HASH)
          {
            return IdleMetricName::DatabaseConnections;
          }
          else if (hashCode == EBSVolumeReadIOPS_HASH)
          {
            return IdleMetricName::EBSVolumeReadIOPS;
          }
          else if (hashCode == EBSVolumeWriteIOPS_HASH)
          {
            return IdleMetricName::EBSVolumeWriteIOPS;
          }
          else if (hashCode == VolumeReadOpsPerSecond_HASH)
          {
            return IdleMetricName::VolumeReadOpsPerSecond;
          }
          else if (hashCode == VolumeWriteOpsPerSecond_HASH)
          {
            return IdleMetricName::VolumeWriteOpsPerSecond;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdleMetricName>(hashCode);
          }

          return IdleMetricName::NOT_SET;
        }

        Aws::String GetNameForIdleMetricName(IdleMetricName enumValue)
        {
          switch(enumValue)
          {
          case IdleMetricName::NOT_SET:
            return {};
          case IdleMetricName::CPU:
            return "CPU";
          case IdleMetricName::Memory:
            return "Memory";
          case IdleMetricName::NetworkOutBytesPerSecond:
            return "NetworkOutBytesPerSecond";
          case IdleMetricName::NetworkInBytesPerSecond:
            return "NetworkInBytesPerSecond";
          case IdleMetricName::DatabaseConnections:
            return "DatabaseConnections";
          case IdleMetricName::EBSVolumeReadIOPS:
            return "EBSVolumeReadIOPS";
          case IdleMetricName::EBSVolumeWriteIOPS:
            return "EBSVolumeWriteIOPS";
          case IdleMetricName::VolumeReadOpsPerSecond:
            return "VolumeReadOpsPerSecond";
          case IdleMetricName::VolumeWriteOpsPerSecond:
            return "VolumeWriteOpsPerSecond";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdleMetricNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
