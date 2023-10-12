/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/InstanceRecommendationFindingReasonCode.h>
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
      namespace InstanceRecommendationFindingReasonCodeMapper
      {

        static constexpr uint32_t CPUOverprovisioned_HASH = ConstExprHashingUtils::HashString("CPUOverprovisioned");
        static constexpr uint32_t CPUUnderprovisioned_HASH = ConstExprHashingUtils::HashString("CPUUnderprovisioned");
        static constexpr uint32_t MemoryOverprovisioned_HASH = ConstExprHashingUtils::HashString("MemoryOverprovisioned");
        static constexpr uint32_t MemoryUnderprovisioned_HASH = ConstExprHashingUtils::HashString("MemoryUnderprovisioned");
        static constexpr uint32_t EBSThroughputOverprovisioned_HASH = ConstExprHashingUtils::HashString("EBSThroughputOverprovisioned");
        static constexpr uint32_t EBSThroughputUnderprovisioned_HASH = ConstExprHashingUtils::HashString("EBSThroughputUnderprovisioned");
        static constexpr uint32_t EBSIOPSOverprovisioned_HASH = ConstExprHashingUtils::HashString("EBSIOPSOverprovisioned");
        static constexpr uint32_t EBSIOPSUnderprovisioned_HASH = ConstExprHashingUtils::HashString("EBSIOPSUnderprovisioned");
        static constexpr uint32_t NetworkBandwidthOverprovisioned_HASH = ConstExprHashingUtils::HashString("NetworkBandwidthOverprovisioned");
        static constexpr uint32_t NetworkBandwidthUnderprovisioned_HASH = ConstExprHashingUtils::HashString("NetworkBandwidthUnderprovisioned");
        static constexpr uint32_t NetworkPPSOverprovisioned_HASH = ConstExprHashingUtils::HashString("NetworkPPSOverprovisioned");
        static constexpr uint32_t NetworkPPSUnderprovisioned_HASH = ConstExprHashingUtils::HashString("NetworkPPSUnderprovisioned");
        static constexpr uint32_t DiskIOPSOverprovisioned_HASH = ConstExprHashingUtils::HashString("DiskIOPSOverprovisioned");
        static constexpr uint32_t DiskIOPSUnderprovisioned_HASH = ConstExprHashingUtils::HashString("DiskIOPSUnderprovisioned");
        static constexpr uint32_t DiskThroughputOverprovisioned_HASH = ConstExprHashingUtils::HashString("DiskThroughputOverprovisioned");
        static constexpr uint32_t DiskThroughputUnderprovisioned_HASH = ConstExprHashingUtils::HashString("DiskThroughputUnderprovisioned");
        static constexpr uint32_t GPUUnderprovisioned_HASH = ConstExprHashingUtils::HashString("GPUUnderprovisioned");
        static constexpr uint32_t GPUOverprovisioned_HASH = ConstExprHashingUtils::HashString("GPUOverprovisioned");
        static constexpr uint32_t GPUMemoryUnderprovisioned_HASH = ConstExprHashingUtils::HashString("GPUMemoryUnderprovisioned");
        static constexpr uint32_t GPUMemoryOverprovisioned_HASH = ConstExprHashingUtils::HashString("GPUMemoryOverprovisioned");


        InstanceRecommendationFindingReasonCode GetInstanceRecommendationFindingReasonCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CPUOverprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::CPUOverprovisioned;
          }
          else if (hashCode == CPUUnderprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::CPUUnderprovisioned;
          }
          else if (hashCode == MemoryOverprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::MemoryOverprovisioned;
          }
          else if (hashCode == MemoryUnderprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::MemoryUnderprovisioned;
          }
          else if (hashCode == EBSThroughputOverprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::EBSThroughputOverprovisioned;
          }
          else if (hashCode == EBSThroughputUnderprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::EBSThroughputUnderprovisioned;
          }
          else if (hashCode == EBSIOPSOverprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::EBSIOPSOverprovisioned;
          }
          else if (hashCode == EBSIOPSUnderprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::EBSIOPSUnderprovisioned;
          }
          else if (hashCode == NetworkBandwidthOverprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::NetworkBandwidthOverprovisioned;
          }
          else if (hashCode == NetworkBandwidthUnderprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::NetworkBandwidthUnderprovisioned;
          }
          else if (hashCode == NetworkPPSOverprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::NetworkPPSOverprovisioned;
          }
          else if (hashCode == NetworkPPSUnderprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::NetworkPPSUnderprovisioned;
          }
          else if (hashCode == DiskIOPSOverprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::DiskIOPSOverprovisioned;
          }
          else if (hashCode == DiskIOPSUnderprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::DiskIOPSUnderprovisioned;
          }
          else if (hashCode == DiskThroughputOverprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::DiskThroughputOverprovisioned;
          }
          else if (hashCode == DiskThroughputUnderprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::DiskThroughputUnderprovisioned;
          }
          else if (hashCode == GPUUnderprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::GPUUnderprovisioned;
          }
          else if (hashCode == GPUOverprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::GPUOverprovisioned;
          }
          else if (hashCode == GPUMemoryUnderprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::GPUMemoryUnderprovisioned;
          }
          else if (hashCode == GPUMemoryOverprovisioned_HASH)
          {
            return InstanceRecommendationFindingReasonCode::GPUMemoryOverprovisioned;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceRecommendationFindingReasonCode>(hashCode);
          }

          return InstanceRecommendationFindingReasonCode::NOT_SET;
        }

        Aws::String GetNameForInstanceRecommendationFindingReasonCode(InstanceRecommendationFindingReasonCode enumValue)
        {
          switch(enumValue)
          {
          case InstanceRecommendationFindingReasonCode::NOT_SET:
            return {};
          case InstanceRecommendationFindingReasonCode::CPUOverprovisioned:
            return "CPUOverprovisioned";
          case InstanceRecommendationFindingReasonCode::CPUUnderprovisioned:
            return "CPUUnderprovisioned";
          case InstanceRecommendationFindingReasonCode::MemoryOverprovisioned:
            return "MemoryOverprovisioned";
          case InstanceRecommendationFindingReasonCode::MemoryUnderprovisioned:
            return "MemoryUnderprovisioned";
          case InstanceRecommendationFindingReasonCode::EBSThroughputOverprovisioned:
            return "EBSThroughputOverprovisioned";
          case InstanceRecommendationFindingReasonCode::EBSThroughputUnderprovisioned:
            return "EBSThroughputUnderprovisioned";
          case InstanceRecommendationFindingReasonCode::EBSIOPSOverprovisioned:
            return "EBSIOPSOverprovisioned";
          case InstanceRecommendationFindingReasonCode::EBSIOPSUnderprovisioned:
            return "EBSIOPSUnderprovisioned";
          case InstanceRecommendationFindingReasonCode::NetworkBandwidthOverprovisioned:
            return "NetworkBandwidthOverprovisioned";
          case InstanceRecommendationFindingReasonCode::NetworkBandwidthUnderprovisioned:
            return "NetworkBandwidthUnderprovisioned";
          case InstanceRecommendationFindingReasonCode::NetworkPPSOverprovisioned:
            return "NetworkPPSOverprovisioned";
          case InstanceRecommendationFindingReasonCode::NetworkPPSUnderprovisioned:
            return "NetworkPPSUnderprovisioned";
          case InstanceRecommendationFindingReasonCode::DiskIOPSOverprovisioned:
            return "DiskIOPSOverprovisioned";
          case InstanceRecommendationFindingReasonCode::DiskIOPSUnderprovisioned:
            return "DiskIOPSUnderprovisioned";
          case InstanceRecommendationFindingReasonCode::DiskThroughputOverprovisioned:
            return "DiskThroughputOverprovisioned";
          case InstanceRecommendationFindingReasonCode::DiskThroughputUnderprovisioned:
            return "DiskThroughputUnderprovisioned";
          case InstanceRecommendationFindingReasonCode::GPUUnderprovisioned:
            return "GPUUnderprovisioned";
          case InstanceRecommendationFindingReasonCode::GPUOverprovisioned:
            return "GPUOverprovisioned";
          case InstanceRecommendationFindingReasonCode::GPUMemoryUnderprovisioned:
            return "GPUMemoryUnderprovisioned";
          case InstanceRecommendationFindingReasonCode::GPUMemoryOverprovisioned:
            return "GPUMemoryOverprovisioned";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceRecommendationFindingReasonCodeMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
