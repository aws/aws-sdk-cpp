/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSDBMetricName.h>
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
      namespace RDSDBMetricNameMapper
      {

        static const int CPU_HASH = HashingUtils::HashString("CPU");
        static const int Memory_HASH = HashingUtils::HashString("Memory");
        static const int EBSVolumeStorageSpaceUtilization_HASH = HashingUtils::HashString("EBSVolumeStorageSpaceUtilization");
        static const int NetworkReceiveThroughput_HASH = HashingUtils::HashString("NetworkReceiveThroughput");
        static const int NetworkTransmitThroughput_HASH = HashingUtils::HashString("NetworkTransmitThroughput");
        static const int EBSVolumeReadIOPS_HASH = HashingUtils::HashString("EBSVolumeReadIOPS");
        static const int EBSVolumeWriteIOPS_HASH = HashingUtils::HashString("EBSVolumeWriteIOPS");
        static const int EBSVolumeReadThroughput_HASH = HashingUtils::HashString("EBSVolumeReadThroughput");
        static const int EBSVolumeWriteThroughput_HASH = HashingUtils::HashString("EBSVolumeWriteThroughput");
        static const int DatabaseConnections_HASH = HashingUtils::HashString("DatabaseConnections");
        static const int StorageNetworkReceiveThroughput_HASH = HashingUtils::HashString("StorageNetworkReceiveThroughput");
        static const int StorageNetworkTransmitThroughput_HASH = HashingUtils::HashString("StorageNetworkTransmitThroughput");
        static const int AuroraMemoryHealthState_HASH = HashingUtils::HashString("AuroraMemoryHealthState");
        static const int AuroraMemoryNumDeclinedSql_HASH = HashingUtils::HashString("AuroraMemoryNumDeclinedSql");
        static const int AuroraMemoryNumKillConnTotal_HASH = HashingUtils::HashString("AuroraMemoryNumKillConnTotal");
        static const int AuroraMemoryNumKillQueryTotal_HASH = HashingUtils::HashString("AuroraMemoryNumKillQueryTotal");
        static const int ReadIOPSEphemeralStorage_HASH = HashingUtils::HashString("ReadIOPSEphemeralStorage");
        static const int WriteIOPSEphemeralStorage_HASH = HashingUtils::HashString("WriteIOPSEphemeralStorage");
        static const int VolumeReadIOPs_HASH = HashingUtils::HashString("VolumeReadIOPs");
        static const int VolumeBytesUsed_HASH = HashingUtils::HashString("VolumeBytesUsed");
        static const int VolumeWriteIOPs_HASH = HashingUtils::HashString("VolumeWriteIOPs");


        RDSDBMetricName GetRDSDBMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CPU_HASH)
          {
            return RDSDBMetricName::CPU;
          }
          else if (hashCode == Memory_HASH)
          {
            return RDSDBMetricName::Memory;
          }
          else if (hashCode == EBSVolumeStorageSpaceUtilization_HASH)
          {
            return RDSDBMetricName::EBSVolumeStorageSpaceUtilization;
          }
          else if (hashCode == NetworkReceiveThroughput_HASH)
          {
            return RDSDBMetricName::NetworkReceiveThroughput;
          }
          else if (hashCode == NetworkTransmitThroughput_HASH)
          {
            return RDSDBMetricName::NetworkTransmitThroughput;
          }
          else if (hashCode == EBSVolumeReadIOPS_HASH)
          {
            return RDSDBMetricName::EBSVolumeReadIOPS;
          }
          else if (hashCode == EBSVolumeWriteIOPS_HASH)
          {
            return RDSDBMetricName::EBSVolumeWriteIOPS;
          }
          else if (hashCode == EBSVolumeReadThroughput_HASH)
          {
            return RDSDBMetricName::EBSVolumeReadThroughput;
          }
          else if (hashCode == EBSVolumeWriteThroughput_HASH)
          {
            return RDSDBMetricName::EBSVolumeWriteThroughput;
          }
          else if (hashCode == DatabaseConnections_HASH)
          {
            return RDSDBMetricName::DatabaseConnections;
          }
          else if (hashCode == StorageNetworkReceiveThroughput_HASH)
          {
            return RDSDBMetricName::StorageNetworkReceiveThroughput;
          }
          else if (hashCode == StorageNetworkTransmitThroughput_HASH)
          {
            return RDSDBMetricName::StorageNetworkTransmitThroughput;
          }
          else if (hashCode == AuroraMemoryHealthState_HASH)
          {
            return RDSDBMetricName::AuroraMemoryHealthState;
          }
          else if (hashCode == AuroraMemoryNumDeclinedSql_HASH)
          {
            return RDSDBMetricName::AuroraMemoryNumDeclinedSql;
          }
          else if (hashCode == AuroraMemoryNumKillConnTotal_HASH)
          {
            return RDSDBMetricName::AuroraMemoryNumKillConnTotal;
          }
          else if (hashCode == AuroraMemoryNumKillQueryTotal_HASH)
          {
            return RDSDBMetricName::AuroraMemoryNumKillQueryTotal;
          }
          else if (hashCode == ReadIOPSEphemeralStorage_HASH)
          {
            return RDSDBMetricName::ReadIOPSEphemeralStorage;
          }
          else if (hashCode == WriteIOPSEphemeralStorage_HASH)
          {
            return RDSDBMetricName::WriteIOPSEphemeralStorage;
          }
          else if (hashCode == VolumeReadIOPs_HASH)
          {
            return RDSDBMetricName::VolumeReadIOPs;
          }
          else if (hashCode == VolumeBytesUsed_HASH)
          {
            return RDSDBMetricName::VolumeBytesUsed;
          }
          else if (hashCode == VolumeWriteIOPs_HASH)
          {
            return RDSDBMetricName::VolumeWriteIOPs;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RDSDBMetricName>(hashCode);
          }

          return RDSDBMetricName::NOT_SET;
        }

        Aws::String GetNameForRDSDBMetricName(RDSDBMetricName enumValue)
        {
          switch(enumValue)
          {
          case RDSDBMetricName::NOT_SET:
            return {};
          case RDSDBMetricName::CPU:
            return "CPU";
          case RDSDBMetricName::Memory:
            return "Memory";
          case RDSDBMetricName::EBSVolumeStorageSpaceUtilization:
            return "EBSVolumeStorageSpaceUtilization";
          case RDSDBMetricName::NetworkReceiveThroughput:
            return "NetworkReceiveThroughput";
          case RDSDBMetricName::NetworkTransmitThroughput:
            return "NetworkTransmitThroughput";
          case RDSDBMetricName::EBSVolumeReadIOPS:
            return "EBSVolumeReadIOPS";
          case RDSDBMetricName::EBSVolumeWriteIOPS:
            return "EBSVolumeWriteIOPS";
          case RDSDBMetricName::EBSVolumeReadThroughput:
            return "EBSVolumeReadThroughput";
          case RDSDBMetricName::EBSVolumeWriteThroughput:
            return "EBSVolumeWriteThroughput";
          case RDSDBMetricName::DatabaseConnections:
            return "DatabaseConnections";
          case RDSDBMetricName::StorageNetworkReceiveThroughput:
            return "StorageNetworkReceiveThroughput";
          case RDSDBMetricName::StorageNetworkTransmitThroughput:
            return "StorageNetworkTransmitThroughput";
          case RDSDBMetricName::AuroraMemoryHealthState:
            return "AuroraMemoryHealthState";
          case RDSDBMetricName::AuroraMemoryNumDeclinedSql:
            return "AuroraMemoryNumDeclinedSql";
          case RDSDBMetricName::AuroraMemoryNumKillConnTotal:
            return "AuroraMemoryNumKillConnTotal";
          case RDSDBMetricName::AuroraMemoryNumKillQueryTotal:
            return "AuroraMemoryNumKillQueryTotal";
          case RDSDBMetricName::ReadIOPSEphemeralStorage:
            return "ReadIOPSEphemeralStorage";
          case RDSDBMetricName::WriteIOPSEphemeralStorage:
            return "WriteIOPSEphemeralStorage";
          case RDSDBMetricName::VolumeReadIOPs:
            return "VolumeReadIOPs";
          case RDSDBMetricName::VolumeBytesUsed:
            return "VolumeBytesUsed";
          case RDSDBMetricName::VolumeWriteIOPs:
            return "VolumeWriteIOPs";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RDSDBMetricNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
