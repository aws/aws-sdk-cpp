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

        static const int CPUOverprovisioned_HASH = HashingUtils::HashString("CPUOverprovisioned");
        static const int CPUUnderprovisioned_HASH = HashingUtils::HashString("CPUUnderprovisioned");
        static const int MemoryOverprovisioned_HASH = HashingUtils::HashString("MemoryOverprovisioned");
        static const int MemoryUnderprovisioned_HASH = HashingUtils::HashString("MemoryUnderprovisioned");
        static const int EBSThroughputOverprovisioned_HASH = HashingUtils::HashString("EBSThroughputOverprovisioned");
        static const int EBSThroughputUnderprovisioned_HASH = HashingUtils::HashString("EBSThroughputUnderprovisioned");
        static const int EBSIOPSOverprovisioned_HASH = HashingUtils::HashString("EBSIOPSOverprovisioned");
        static const int EBSIOPSUnderprovisioned_HASH = HashingUtils::HashString("EBSIOPSUnderprovisioned");
        static const int NetworkBandwidthOverprovisioned_HASH = HashingUtils::HashString("NetworkBandwidthOverprovisioned");
        static const int NetworkBandwidthUnderprovisioned_HASH = HashingUtils::HashString("NetworkBandwidthUnderprovisioned");
        static const int NetworkPPSOverprovisioned_HASH = HashingUtils::HashString("NetworkPPSOverprovisioned");
        static const int NetworkPPSUnderprovisioned_HASH = HashingUtils::HashString("NetworkPPSUnderprovisioned");
        static const int DiskIOPSOverprovisioned_HASH = HashingUtils::HashString("DiskIOPSOverprovisioned");
        static const int DiskIOPSUnderprovisioned_HASH = HashingUtils::HashString("DiskIOPSUnderprovisioned");
        static const int DiskThroughputOverprovisioned_HASH = HashingUtils::HashString("DiskThroughputOverprovisioned");
        static const int DiskThroughputUnderprovisioned_HASH = HashingUtils::HashString("DiskThroughputUnderprovisioned");
        static const int GPUUnderprovisioned_HASH = HashingUtils::HashString("GPUUnderprovisioned");
        static const int GPUOverprovisioned_HASH = HashingUtils::HashString("GPUOverprovisioned");
        static const int GPUMemoryUnderprovisioned_HASH = HashingUtils::HashString("GPUMemoryUnderprovisioned");
        static const int GPUMemoryOverprovisioned_HASH = HashingUtils::HashString("GPUMemoryOverprovisioned");


        InstanceRecommendationFindingReasonCode GetInstanceRecommendationFindingReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
