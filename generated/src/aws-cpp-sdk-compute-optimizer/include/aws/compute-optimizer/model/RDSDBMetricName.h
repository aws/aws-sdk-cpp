/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{
  enum class RDSDBMetricName
  {
    NOT_SET,
    CPU,
    Memory,
    EBSVolumeStorageSpaceUtilization,
    NetworkReceiveThroughput,
    NetworkTransmitThroughput,
    EBSVolumeReadIOPS,
    EBSVolumeWriteIOPS,
    EBSVolumeReadThroughput,
    EBSVolumeWriteThroughput,
    DatabaseConnections,
    StorageNetworkReceiveThroughput,
    StorageNetworkTransmitThroughput,
    AuroraMemoryHealthState,
    AuroraMemoryNumDeclinedSql,
    AuroraMemoryNumKillConnTotal,
    AuroraMemoryNumKillQueryTotal,
    ReadIOPSEphemeralStorage,
    WriteIOPSEphemeralStorage,
    VolumeReadIOPs,
    VolumeBytesUsed,
    VolumeWriteIOPs
  };

namespace RDSDBMetricNameMapper
{
AWS_COMPUTEOPTIMIZER_API RDSDBMetricName GetRDSDBMetricNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForRDSDBMetricName(RDSDBMetricName value);
} // namespace RDSDBMetricNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
