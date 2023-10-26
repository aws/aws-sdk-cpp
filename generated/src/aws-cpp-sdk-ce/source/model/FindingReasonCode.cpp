/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/FindingReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace FindingReasonCodeMapper
      {

        static const int CPU_OVER_PROVISIONED_HASH = HashingUtils::HashString("CPU_OVER_PROVISIONED");
        static const int CPU_UNDER_PROVISIONED_HASH = HashingUtils::HashString("CPU_UNDER_PROVISIONED");
        static const int MEMORY_OVER_PROVISIONED_HASH = HashingUtils::HashString("MEMORY_OVER_PROVISIONED");
        static const int MEMORY_UNDER_PROVISIONED_HASH = HashingUtils::HashString("MEMORY_UNDER_PROVISIONED");
        static const int EBS_THROUGHPUT_OVER_PROVISIONED_HASH = HashingUtils::HashString("EBS_THROUGHPUT_OVER_PROVISIONED");
        static const int EBS_THROUGHPUT_UNDER_PROVISIONED_HASH = HashingUtils::HashString("EBS_THROUGHPUT_UNDER_PROVISIONED");
        static const int EBS_IOPS_OVER_PROVISIONED_HASH = HashingUtils::HashString("EBS_IOPS_OVER_PROVISIONED");
        static const int EBS_IOPS_UNDER_PROVISIONED_HASH = HashingUtils::HashString("EBS_IOPS_UNDER_PROVISIONED");
        static const int NETWORK_BANDWIDTH_OVER_PROVISIONED_HASH = HashingUtils::HashString("NETWORK_BANDWIDTH_OVER_PROVISIONED");
        static const int NETWORK_BANDWIDTH_UNDER_PROVISIONED_HASH = HashingUtils::HashString("NETWORK_BANDWIDTH_UNDER_PROVISIONED");
        static const int NETWORK_PPS_OVER_PROVISIONED_HASH = HashingUtils::HashString("NETWORK_PPS_OVER_PROVISIONED");
        static const int NETWORK_PPS_UNDER_PROVISIONED_HASH = HashingUtils::HashString("NETWORK_PPS_UNDER_PROVISIONED");
        static const int DISK_IOPS_OVER_PROVISIONED_HASH = HashingUtils::HashString("DISK_IOPS_OVER_PROVISIONED");
        static const int DISK_IOPS_UNDER_PROVISIONED_HASH = HashingUtils::HashString("DISK_IOPS_UNDER_PROVISIONED");
        static const int DISK_THROUGHPUT_OVER_PROVISIONED_HASH = HashingUtils::HashString("DISK_THROUGHPUT_OVER_PROVISIONED");
        static const int DISK_THROUGHPUT_UNDER_PROVISIONED_HASH = HashingUtils::HashString("DISK_THROUGHPUT_UNDER_PROVISIONED");


        FindingReasonCode GetFindingReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CPU_OVER_PROVISIONED_HASH)
          {
            return FindingReasonCode::CPU_OVER_PROVISIONED;
          }
          else if (hashCode == CPU_UNDER_PROVISIONED_HASH)
          {
            return FindingReasonCode::CPU_UNDER_PROVISIONED;
          }
          else if (hashCode == MEMORY_OVER_PROVISIONED_HASH)
          {
            return FindingReasonCode::MEMORY_OVER_PROVISIONED;
          }
          else if (hashCode == MEMORY_UNDER_PROVISIONED_HASH)
          {
            return FindingReasonCode::MEMORY_UNDER_PROVISIONED;
          }
          else if (hashCode == EBS_THROUGHPUT_OVER_PROVISIONED_HASH)
          {
            return FindingReasonCode::EBS_THROUGHPUT_OVER_PROVISIONED;
          }
          else if (hashCode == EBS_THROUGHPUT_UNDER_PROVISIONED_HASH)
          {
            return FindingReasonCode::EBS_THROUGHPUT_UNDER_PROVISIONED;
          }
          else if (hashCode == EBS_IOPS_OVER_PROVISIONED_HASH)
          {
            return FindingReasonCode::EBS_IOPS_OVER_PROVISIONED;
          }
          else if (hashCode == EBS_IOPS_UNDER_PROVISIONED_HASH)
          {
            return FindingReasonCode::EBS_IOPS_UNDER_PROVISIONED;
          }
          else if (hashCode == NETWORK_BANDWIDTH_OVER_PROVISIONED_HASH)
          {
            return FindingReasonCode::NETWORK_BANDWIDTH_OVER_PROVISIONED;
          }
          else if (hashCode == NETWORK_BANDWIDTH_UNDER_PROVISIONED_HASH)
          {
            return FindingReasonCode::NETWORK_BANDWIDTH_UNDER_PROVISIONED;
          }
          else if (hashCode == NETWORK_PPS_OVER_PROVISIONED_HASH)
          {
            return FindingReasonCode::NETWORK_PPS_OVER_PROVISIONED;
          }
          else if (hashCode == NETWORK_PPS_UNDER_PROVISIONED_HASH)
          {
            return FindingReasonCode::NETWORK_PPS_UNDER_PROVISIONED;
          }
          else if (hashCode == DISK_IOPS_OVER_PROVISIONED_HASH)
          {
            return FindingReasonCode::DISK_IOPS_OVER_PROVISIONED;
          }
          else if (hashCode == DISK_IOPS_UNDER_PROVISIONED_HASH)
          {
            return FindingReasonCode::DISK_IOPS_UNDER_PROVISIONED;
          }
          else if (hashCode == DISK_THROUGHPUT_OVER_PROVISIONED_HASH)
          {
            return FindingReasonCode::DISK_THROUGHPUT_OVER_PROVISIONED;
          }
          else if (hashCode == DISK_THROUGHPUT_UNDER_PROVISIONED_HASH)
          {
            return FindingReasonCode::DISK_THROUGHPUT_UNDER_PROVISIONED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingReasonCode>(hashCode);
          }

          return FindingReasonCode::NOT_SET;
        }

        Aws::String GetNameForFindingReasonCode(FindingReasonCode enumValue)
        {
          switch(enumValue)
          {
          case FindingReasonCode::NOT_SET:
            return {};
          case FindingReasonCode::CPU_OVER_PROVISIONED:
            return "CPU_OVER_PROVISIONED";
          case FindingReasonCode::CPU_UNDER_PROVISIONED:
            return "CPU_UNDER_PROVISIONED";
          case FindingReasonCode::MEMORY_OVER_PROVISIONED:
            return "MEMORY_OVER_PROVISIONED";
          case FindingReasonCode::MEMORY_UNDER_PROVISIONED:
            return "MEMORY_UNDER_PROVISIONED";
          case FindingReasonCode::EBS_THROUGHPUT_OVER_PROVISIONED:
            return "EBS_THROUGHPUT_OVER_PROVISIONED";
          case FindingReasonCode::EBS_THROUGHPUT_UNDER_PROVISIONED:
            return "EBS_THROUGHPUT_UNDER_PROVISIONED";
          case FindingReasonCode::EBS_IOPS_OVER_PROVISIONED:
            return "EBS_IOPS_OVER_PROVISIONED";
          case FindingReasonCode::EBS_IOPS_UNDER_PROVISIONED:
            return "EBS_IOPS_UNDER_PROVISIONED";
          case FindingReasonCode::NETWORK_BANDWIDTH_OVER_PROVISIONED:
            return "NETWORK_BANDWIDTH_OVER_PROVISIONED";
          case FindingReasonCode::NETWORK_BANDWIDTH_UNDER_PROVISIONED:
            return "NETWORK_BANDWIDTH_UNDER_PROVISIONED";
          case FindingReasonCode::NETWORK_PPS_OVER_PROVISIONED:
            return "NETWORK_PPS_OVER_PROVISIONED";
          case FindingReasonCode::NETWORK_PPS_UNDER_PROVISIONED:
            return "NETWORK_PPS_UNDER_PROVISIONED";
          case FindingReasonCode::DISK_IOPS_OVER_PROVISIONED:
            return "DISK_IOPS_OVER_PROVISIONED";
          case FindingReasonCode::DISK_IOPS_UNDER_PROVISIONED:
            return "DISK_IOPS_UNDER_PROVISIONED";
          case FindingReasonCode::DISK_THROUGHPUT_OVER_PROVISIONED:
            return "DISK_THROUGHPUT_OVER_PROVISIONED";
          case FindingReasonCode::DISK_THROUGHPUT_UNDER_PROVISIONED:
            return "DISK_THROUGHPUT_UNDER_PROVISIONED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingReasonCodeMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
