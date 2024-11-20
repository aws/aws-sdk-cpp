/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSInstanceFindingReasonCode.h>
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
      namespace RDSInstanceFindingReasonCodeMapper
      {

        static const int CPUOverprovisioned_HASH = HashingUtils::HashString("CPUOverprovisioned");
        static const int NetworkBandwidthOverprovisioned_HASH = HashingUtils::HashString("NetworkBandwidthOverprovisioned");
        static const int EBSIOPSOverprovisioned_HASH = HashingUtils::HashString("EBSIOPSOverprovisioned");
        static const int EBSIOPSUnderprovisioned_HASH = HashingUtils::HashString("EBSIOPSUnderprovisioned");
        static const int EBSThroughputOverprovisioned_HASH = HashingUtils::HashString("EBSThroughputOverprovisioned");
        static const int CPUUnderprovisioned_HASH = HashingUtils::HashString("CPUUnderprovisioned");
        static const int NetworkBandwidthUnderprovisioned_HASH = HashingUtils::HashString("NetworkBandwidthUnderprovisioned");
        static const int EBSThroughputUnderprovisioned_HASH = HashingUtils::HashString("EBSThroughputUnderprovisioned");
        static const int NewGenerationDBInstanceClassAvailable_HASH = HashingUtils::HashString("NewGenerationDBInstanceClassAvailable");
        static const int NewEngineVersionAvailable_HASH = HashingUtils::HashString("NewEngineVersionAvailable");
        static const int DBClusterWriterUnderprovisioned_HASH = HashingUtils::HashString("DBClusterWriterUnderprovisioned");
        static const int MemoryUnderprovisioned_HASH = HashingUtils::HashString("MemoryUnderprovisioned");
        static const int InstanceStorageReadIOPSUnderprovisioned_HASH = HashingUtils::HashString("InstanceStorageReadIOPSUnderprovisioned");
        static const int InstanceStorageWriteIOPSUnderprovisioned_HASH = HashingUtils::HashString("InstanceStorageWriteIOPSUnderprovisioned");


        RDSInstanceFindingReasonCode GetRDSInstanceFindingReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CPUOverprovisioned_HASH)
          {
            return RDSInstanceFindingReasonCode::CPUOverprovisioned;
          }
          else if (hashCode == NetworkBandwidthOverprovisioned_HASH)
          {
            return RDSInstanceFindingReasonCode::NetworkBandwidthOverprovisioned;
          }
          else if (hashCode == EBSIOPSOverprovisioned_HASH)
          {
            return RDSInstanceFindingReasonCode::EBSIOPSOverprovisioned;
          }
          else if (hashCode == EBSIOPSUnderprovisioned_HASH)
          {
            return RDSInstanceFindingReasonCode::EBSIOPSUnderprovisioned;
          }
          else if (hashCode == EBSThroughputOverprovisioned_HASH)
          {
            return RDSInstanceFindingReasonCode::EBSThroughputOverprovisioned;
          }
          else if (hashCode == CPUUnderprovisioned_HASH)
          {
            return RDSInstanceFindingReasonCode::CPUUnderprovisioned;
          }
          else if (hashCode == NetworkBandwidthUnderprovisioned_HASH)
          {
            return RDSInstanceFindingReasonCode::NetworkBandwidthUnderprovisioned;
          }
          else if (hashCode == EBSThroughputUnderprovisioned_HASH)
          {
            return RDSInstanceFindingReasonCode::EBSThroughputUnderprovisioned;
          }
          else if (hashCode == NewGenerationDBInstanceClassAvailable_HASH)
          {
            return RDSInstanceFindingReasonCode::NewGenerationDBInstanceClassAvailable;
          }
          else if (hashCode == NewEngineVersionAvailable_HASH)
          {
            return RDSInstanceFindingReasonCode::NewEngineVersionAvailable;
          }
          else if (hashCode == DBClusterWriterUnderprovisioned_HASH)
          {
            return RDSInstanceFindingReasonCode::DBClusterWriterUnderprovisioned;
          }
          else if (hashCode == MemoryUnderprovisioned_HASH)
          {
            return RDSInstanceFindingReasonCode::MemoryUnderprovisioned;
          }
          else if (hashCode == InstanceStorageReadIOPSUnderprovisioned_HASH)
          {
            return RDSInstanceFindingReasonCode::InstanceStorageReadIOPSUnderprovisioned;
          }
          else if (hashCode == InstanceStorageWriteIOPSUnderprovisioned_HASH)
          {
            return RDSInstanceFindingReasonCode::InstanceStorageWriteIOPSUnderprovisioned;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RDSInstanceFindingReasonCode>(hashCode);
          }

          return RDSInstanceFindingReasonCode::NOT_SET;
        }

        Aws::String GetNameForRDSInstanceFindingReasonCode(RDSInstanceFindingReasonCode enumValue)
        {
          switch(enumValue)
          {
          case RDSInstanceFindingReasonCode::NOT_SET:
            return {};
          case RDSInstanceFindingReasonCode::CPUOverprovisioned:
            return "CPUOverprovisioned";
          case RDSInstanceFindingReasonCode::NetworkBandwidthOverprovisioned:
            return "NetworkBandwidthOverprovisioned";
          case RDSInstanceFindingReasonCode::EBSIOPSOverprovisioned:
            return "EBSIOPSOverprovisioned";
          case RDSInstanceFindingReasonCode::EBSIOPSUnderprovisioned:
            return "EBSIOPSUnderprovisioned";
          case RDSInstanceFindingReasonCode::EBSThroughputOverprovisioned:
            return "EBSThroughputOverprovisioned";
          case RDSInstanceFindingReasonCode::CPUUnderprovisioned:
            return "CPUUnderprovisioned";
          case RDSInstanceFindingReasonCode::NetworkBandwidthUnderprovisioned:
            return "NetworkBandwidthUnderprovisioned";
          case RDSInstanceFindingReasonCode::EBSThroughputUnderprovisioned:
            return "EBSThroughputUnderprovisioned";
          case RDSInstanceFindingReasonCode::NewGenerationDBInstanceClassAvailable:
            return "NewGenerationDBInstanceClassAvailable";
          case RDSInstanceFindingReasonCode::NewEngineVersionAvailable:
            return "NewEngineVersionAvailable";
          case RDSInstanceFindingReasonCode::DBClusterWriterUnderprovisioned:
            return "DBClusterWriterUnderprovisioned";
          case RDSInstanceFindingReasonCode::MemoryUnderprovisioned:
            return "MemoryUnderprovisioned";
          case RDSInstanceFindingReasonCode::InstanceStorageReadIOPSUnderprovisioned:
            return "InstanceStorageReadIOPSUnderprovisioned";
          case RDSInstanceFindingReasonCode::InstanceStorageWriteIOPSUnderprovisioned:
            return "InstanceStorageWriteIOPSUnderprovisioned";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RDSInstanceFindingReasonCodeMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
