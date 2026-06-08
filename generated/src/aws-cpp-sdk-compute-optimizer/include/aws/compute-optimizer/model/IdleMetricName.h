/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ComputeOptimizer {
namespace Model {
enum class IdleMetricName {
  NOT_SET,
  CPU,
  Memory,
  NetworkOutBytesPerSecond,
  NetworkInBytesPerSecond,
  DatabaseConnections,
  EBSVolumeReadIOPS,
  EBSVolumeWriteIOPS,
  VolumeReadOpsPerSecond,
  VolumeWriteOpsPerSecond,
  ActiveConnectionCount,
  PacketsInFromSource,
  PacketsInFromDestination,
  ConsumedReadCapacityUnits,
  ConsumedWriteCapacityUnits,
  ConsumedChangeDataCaptureUnits,
  NewConnections,
  EngineCPUUtilization,
  CacheHits,
  CacheMisses,
  KeyspaceHits,
  KeyspaceMisses,
  IsIdle,
  UserConnected,
  Invocations,
  GetTypeCmds,
  SetTypeCmds,
  ElastiCacheProcessingUnits,
  CurrConnections
};

namespace IdleMetricNameMapper {
AWS_COMPUTEOPTIMIZER_API IdleMetricName GetIdleMetricNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForIdleMetricName(IdleMetricName value);
}  // namespace IdleMetricNameMapper
}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws
