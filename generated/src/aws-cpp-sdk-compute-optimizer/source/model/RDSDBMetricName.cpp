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
