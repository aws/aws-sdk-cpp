/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/IdleMetricName.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {
namespace IdleMetricNameMapper {

static const int CPU_HASH = HashingUtils::HashString("CPU");
static const int Memory_HASH = HashingUtils::HashString("Memory");
static const int NetworkOutBytesPerSecond_HASH = HashingUtils::HashString("NetworkOutBytesPerSecond");
static const int NetworkInBytesPerSecond_HASH = HashingUtils::HashString("NetworkInBytesPerSecond");
static const int DatabaseConnections_HASH = HashingUtils::HashString("DatabaseConnections");
static const int EBSVolumeReadIOPS_HASH = HashingUtils::HashString("EBSVolumeReadIOPS");
static const int EBSVolumeWriteIOPS_HASH = HashingUtils::HashString("EBSVolumeWriteIOPS");
static const int VolumeReadOpsPerSecond_HASH = HashingUtils::HashString("VolumeReadOpsPerSecond");
static const int VolumeWriteOpsPerSecond_HASH = HashingUtils::HashString("VolumeWriteOpsPerSecond");
static const int ActiveConnectionCount_HASH = HashingUtils::HashString("ActiveConnectionCount");
static const int PacketsInFromSource_HASH = HashingUtils::HashString("PacketsInFromSource");
static const int PacketsInFromDestination_HASH = HashingUtils::HashString("PacketsInFromDestination");
static const int ConsumedReadCapacityUnits_HASH = HashingUtils::HashString("ConsumedReadCapacityUnits");
static const int ConsumedWriteCapacityUnits_HASH = HashingUtils::HashString("ConsumedWriteCapacityUnits");
static const int ConsumedChangeDataCaptureUnits_HASH = HashingUtils::HashString("ConsumedChangeDataCaptureUnits");
static const int NewConnections_HASH = HashingUtils::HashString("NewConnections");
static const int EngineCPUUtilization_HASH = HashingUtils::HashString("EngineCPUUtilization");
static const int CacheHits_HASH = HashingUtils::HashString("CacheHits");
static const int CacheMisses_HASH = HashingUtils::HashString("CacheMisses");
static const int KeyspaceHits_HASH = HashingUtils::HashString("KeyspaceHits");
static const int KeyspaceMisses_HASH = HashingUtils::HashString("KeyspaceMisses");
static const int IsIdle_HASH = HashingUtils::HashString("IsIdle");
static const int UserConnected_HASH = HashingUtils::HashString("UserConnected");
static const int Invocations_HASH = HashingUtils::HashString("Invocations");
static const int GetTypeCmds_HASH = HashingUtils::HashString("GetTypeCmds");
static const int SetTypeCmds_HASH = HashingUtils::HashString("SetTypeCmds");
static const int ElastiCacheProcessingUnits_HASH = HashingUtils::HashString("ElastiCacheProcessingUnits");
static const int CurrConnections_HASH = HashingUtils::HashString("CurrConnections");

IdleMetricName GetIdleMetricNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CPU_HASH) {
    return IdleMetricName::CPU;
  } else if (hashCode == Memory_HASH) {
    return IdleMetricName::Memory;
  } else if (hashCode == NetworkOutBytesPerSecond_HASH) {
    return IdleMetricName::NetworkOutBytesPerSecond;
  } else if (hashCode == NetworkInBytesPerSecond_HASH) {
    return IdleMetricName::NetworkInBytesPerSecond;
  } else if (hashCode == DatabaseConnections_HASH) {
    return IdleMetricName::DatabaseConnections;
  } else if (hashCode == EBSVolumeReadIOPS_HASH) {
    return IdleMetricName::EBSVolumeReadIOPS;
  } else if (hashCode == EBSVolumeWriteIOPS_HASH) {
    return IdleMetricName::EBSVolumeWriteIOPS;
  } else if (hashCode == VolumeReadOpsPerSecond_HASH) {
    return IdleMetricName::VolumeReadOpsPerSecond;
  } else if (hashCode == VolumeWriteOpsPerSecond_HASH) {
    return IdleMetricName::VolumeWriteOpsPerSecond;
  } else if (hashCode == ActiveConnectionCount_HASH) {
    return IdleMetricName::ActiveConnectionCount;
  } else if (hashCode == PacketsInFromSource_HASH) {
    return IdleMetricName::PacketsInFromSource;
  } else if (hashCode == PacketsInFromDestination_HASH) {
    return IdleMetricName::PacketsInFromDestination;
  } else if (hashCode == ConsumedReadCapacityUnits_HASH) {
    return IdleMetricName::ConsumedReadCapacityUnits;
  } else if (hashCode == ConsumedWriteCapacityUnits_HASH) {
    return IdleMetricName::ConsumedWriteCapacityUnits;
  } else if (hashCode == ConsumedChangeDataCaptureUnits_HASH) {
    return IdleMetricName::ConsumedChangeDataCaptureUnits;
  } else if (hashCode == NewConnections_HASH) {
    return IdleMetricName::NewConnections;
  } else if (hashCode == EngineCPUUtilization_HASH) {
    return IdleMetricName::EngineCPUUtilization;
  } else if (hashCode == CacheHits_HASH) {
    return IdleMetricName::CacheHits;
  } else if (hashCode == CacheMisses_HASH) {
    return IdleMetricName::CacheMisses;
  } else if (hashCode == KeyspaceHits_HASH) {
    return IdleMetricName::KeyspaceHits;
  } else if (hashCode == KeyspaceMisses_HASH) {
    return IdleMetricName::KeyspaceMisses;
  } else if (hashCode == IsIdle_HASH) {
    return IdleMetricName::IsIdle;
  } else if (hashCode == UserConnected_HASH) {
    return IdleMetricName::UserConnected;
  } else if (hashCode == Invocations_HASH) {
    return IdleMetricName::Invocations;
  } else if (hashCode == GetTypeCmds_HASH) {
    return IdleMetricName::GetTypeCmds;
  } else if (hashCode == SetTypeCmds_HASH) {
    return IdleMetricName::SetTypeCmds;
  } else if (hashCode == ElastiCacheProcessingUnits_HASH) {
    return IdleMetricName::ElastiCacheProcessingUnits;
  } else if (hashCode == CurrConnections_HASH) {
    return IdleMetricName::CurrConnections;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IdleMetricName>(hashCode);
  }

  return IdleMetricName::NOT_SET;
}

Aws::String GetNameForIdleMetricName(IdleMetricName enumValue) {
  switch (enumValue) {
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
    case IdleMetricName::ActiveConnectionCount:
      return "ActiveConnectionCount";
    case IdleMetricName::PacketsInFromSource:
      return "PacketsInFromSource";
    case IdleMetricName::PacketsInFromDestination:
      return "PacketsInFromDestination";
    case IdleMetricName::ConsumedReadCapacityUnits:
      return "ConsumedReadCapacityUnits";
    case IdleMetricName::ConsumedWriteCapacityUnits:
      return "ConsumedWriteCapacityUnits";
    case IdleMetricName::ConsumedChangeDataCaptureUnits:
      return "ConsumedChangeDataCaptureUnits";
    case IdleMetricName::NewConnections:
      return "NewConnections";
    case IdleMetricName::EngineCPUUtilization:
      return "EngineCPUUtilization";
    case IdleMetricName::CacheHits:
      return "CacheHits";
    case IdleMetricName::CacheMisses:
      return "CacheMisses";
    case IdleMetricName::KeyspaceHits:
      return "KeyspaceHits";
    case IdleMetricName::KeyspaceMisses:
      return "KeyspaceMisses";
    case IdleMetricName::IsIdle:
      return "IsIdle";
    case IdleMetricName::UserConnected:
      return "UserConnected";
    case IdleMetricName::Invocations:
      return "Invocations";
    case IdleMetricName::GetTypeCmds:
      return "GetTypeCmds";
    case IdleMetricName::SetTypeCmds:
      return "SetTypeCmds";
    case IdleMetricName::ElastiCacheProcessingUnits:
      return "ElastiCacheProcessingUnits";
    case IdleMetricName::CurrConnections:
      return "CurrConnections";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IdleMetricNameMapper
}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws
