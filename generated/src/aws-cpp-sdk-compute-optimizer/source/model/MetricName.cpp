/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/MetricName.h>
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
      namespace MetricNameMapper
      {

        static const int Cpu_HASH = HashingUtils::HashString("Cpu");
        static const int Memory_HASH = HashingUtils::HashString("Memory");
        static const int EBS_READ_OPS_PER_SECOND_HASH = HashingUtils::HashString("EBS_READ_OPS_PER_SECOND");
        static const int EBS_WRITE_OPS_PER_SECOND_HASH = HashingUtils::HashString("EBS_WRITE_OPS_PER_SECOND");
        static const int EBS_READ_BYTES_PER_SECOND_HASH = HashingUtils::HashString("EBS_READ_BYTES_PER_SECOND");
        static const int EBS_WRITE_BYTES_PER_SECOND_HASH = HashingUtils::HashString("EBS_WRITE_BYTES_PER_SECOND");
        static const int DISK_READ_OPS_PER_SECOND_HASH = HashingUtils::HashString("DISK_READ_OPS_PER_SECOND");
        static const int DISK_WRITE_OPS_PER_SECOND_HASH = HashingUtils::HashString("DISK_WRITE_OPS_PER_SECOND");
        static const int DISK_READ_BYTES_PER_SECOND_HASH = HashingUtils::HashString("DISK_READ_BYTES_PER_SECOND");
        static const int DISK_WRITE_BYTES_PER_SECOND_HASH = HashingUtils::HashString("DISK_WRITE_BYTES_PER_SECOND");
        static const int NETWORK_IN_BYTES_PER_SECOND_HASH = HashingUtils::HashString("NETWORK_IN_BYTES_PER_SECOND");
        static const int NETWORK_OUT_BYTES_PER_SECOND_HASH = HashingUtils::HashString("NETWORK_OUT_BYTES_PER_SECOND");
        static const int NETWORK_PACKETS_IN_PER_SECOND_HASH = HashingUtils::HashString("NETWORK_PACKETS_IN_PER_SECOND");
        static const int NETWORK_PACKETS_OUT_PER_SECOND_HASH = HashingUtils::HashString("NETWORK_PACKETS_OUT_PER_SECOND");
        static const int GPU_PERCENTAGE_HASH = HashingUtils::HashString("GPU_PERCENTAGE");
        static const int GPU_MEMORY_PERCENTAGE_HASH = HashingUtils::HashString("GPU_MEMORY_PERCENTAGE");


        MetricName GetMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Cpu_HASH)
          {
            return MetricName::Cpu;
          }
          else if (hashCode == Memory_HASH)
          {
            return MetricName::Memory;
          }
          else if (hashCode == EBS_READ_OPS_PER_SECOND_HASH)
          {
            return MetricName::EBS_READ_OPS_PER_SECOND;
          }
          else if (hashCode == EBS_WRITE_OPS_PER_SECOND_HASH)
          {
            return MetricName::EBS_WRITE_OPS_PER_SECOND;
          }
          else if (hashCode == EBS_READ_BYTES_PER_SECOND_HASH)
          {
            return MetricName::EBS_READ_BYTES_PER_SECOND;
          }
          else if (hashCode == EBS_WRITE_BYTES_PER_SECOND_HASH)
          {
            return MetricName::EBS_WRITE_BYTES_PER_SECOND;
          }
          else if (hashCode == DISK_READ_OPS_PER_SECOND_HASH)
          {
            return MetricName::DISK_READ_OPS_PER_SECOND;
          }
          else if (hashCode == DISK_WRITE_OPS_PER_SECOND_HASH)
          {
            return MetricName::DISK_WRITE_OPS_PER_SECOND;
          }
          else if (hashCode == DISK_READ_BYTES_PER_SECOND_HASH)
          {
            return MetricName::DISK_READ_BYTES_PER_SECOND;
          }
          else if (hashCode == DISK_WRITE_BYTES_PER_SECOND_HASH)
          {
            return MetricName::DISK_WRITE_BYTES_PER_SECOND;
          }
          else if (hashCode == NETWORK_IN_BYTES_PER_SECOND_HASH)
          {
            return MetricName::NETWORK_IN_BYTES_PER_SECOND;
          }
          else if (hashCode == NETWORK_OUT_BYTES_PER_SECOND_HASH)
          {
            return MetricName::NETWORK_OUT_BYTES_PER_SECOND;
          }
          else if (hashCode == NETWORK_PACKETS_IN_PER_SECOND_HASH)
          {
            return MetricName::NETWORK_PACKETS_IN_PER_SECOND;
          }
          else if (hashCode == NETWORK_PACKETS_OUT_PER_SECOND_HASH)
          {
            return MetricName::NETWORK_PACKETS_OUT_PER_SECOND;
          }
          else if (hashCode == GPU_PERCENTAGE_HASH)
          {
            return MetricName::GPU_PERCENTAGE;
          }
          else if (hashCode == GPU_MEMORY_PERCENTAGE_HASH)
          {
            return MetricName::GPU_MEMORY_PERCENTAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricName>(hashCode);
          }

          return MetricName::NOT_SET;
        }

        Aws::String GetNameForMetricName(MetricName enumValue)
        {
          switch(enumValue)
          {
          case MetricName::NOT_SET:
            return {};
          case MetricName::Cpu:
            return "Cpu";
          case MetricName::Memory:
            return "Memory";
          case MetricName::EBS_READ_OPS_PER_SECOND:
            return "EBS_READ_OPS_PER_SECOND";
          case MetricName::EBS_WRITE_OPS_PER_SECOND:
            return "EBS_WRITE_OPS_PER_SECOND";
          case MetricName::EBS_READ_BYTES_PER_SECOND:
            return "EBS_READ_BYTES_PER_SECOND";
          case MetricName::EBS_WRITE_BYTES_PER_SECOND:
            return "EBS_WRITE_BYTES_PER_SECOND";
          case MetricName::DISK_READ_OPS_PER_SECOND:
            return "DISK_READ_OPS_PER_SECOND";
          case MetricName::DISK_WRITE_OPS_PER_SECOND:
            return "DISK_WRITE_OPS_PER_SECOND";
          case MetricName::DISK_READ_BYTES_PER_SECOND:
            return "DISK_READ_BYTES_PER_SECOND";
          case MetricName::DISK_WRITE_BYTES_PER_SECOND:
            return "DISK_WRITE_BYTES_PER_SECOND";
          case MetricName::NETWORK_IN_BYTES_PER_SECOND:
            return "NETWORK_IN_BYTES_PER_SECOND";
          case MetricName::NETWORK_OUT_BYTES_PER_SECOND:
            return "NETWORK_OUT_BYTES_PER_SECOND";
          case MetricName::NETWORK_PACKETS_IN_PER_SECOND:
            return "NETWORK_PACKETS_IN_PER_SECOND";
          case MetricName::NETWORK_PACKETS_OUT_PER_SECOND:
            return "NETWORK_PACKETS_OUT_PER_SECOND";
          case MetricName::GPU_PERCENTAGE:
            return "GPU_PERCENTAGE";
          case MetricName::GPU_MEMORY_PERCENTAGE:
            return "GPU_MEMORY_PERCENTAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
