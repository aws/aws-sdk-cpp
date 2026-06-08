/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/IdleRecommendationResourceType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {
namespace IdleRecommendationResourceTypeMapper {

static const int EC2Instance_HASH = HashingUtils::HashString("EC2Instance");
static const int AutoScalingGroup_HASH = HashingUtils::HashString("AutoScalingGroup");
static const int EBSVolume_HASH = HashingUtils::HashString("EBSVolume");
static const int ECSService_HASH = HashingUtils::HashString("ECSService");
static const int RDSDBInstance_HASH = HashingUtils::HashString("RDSDBInstance");
static const int NatGateway_HASH = HashingUtils::HashString("NatGateway");
static const int DynamoDBTable_HASH = HashingUtils::HashString("DynamoDBTable");
static const int ElastiCacheCluster_HASH = HashingUtils::HashString("ElastiCacheCluster");
static const int MemoryDBCluster_HASH = HashingUtils::HashString("MemoryDBCluster");
static const int DocumentDBCluster_HASH = HashingUtils::HashString("DocumentDBCluster");
static const int WorkSpaces_HASH = HashingUtils::HashString("WorkSpaces");
static const int SageMakerEndpoint_HASH = HashingUtils::HashString("SageMakerEndpoint");

IdleRecommendationResourceType GetIdleRecommendationResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EC2Instance_HASH) {
    return IdleRecommendationResourceType::EC2Instance;
  } else if (hashCode == AutoScalingGroup_HASH) {
    return IdleRecommendationResourceType::AutoScalingGroup;
  } else if (hashCode == EBSVolume_HASH) {
    return IdleRecommendationResourceType::EBSVolume;
  } else if (hashCode == ECSService_HASH) {
    return IdleRecommendationResourceType::ECSService;
  } else if (hashCode == RDSDBInstance_HASH) {
    return IdleRecommendationResourceType::RDSDBInstance;
  } else if (hashCode == NatGateway_HASH) {
    return IdleRecommendationResourceType::NatGateway;
  } else if (hashCode == DynamoDBTable_HASH) {
    return IdleRecommendationResourceType::DynamoDBTable;
  } else if (hashCode == ElastiCacheCluster_HASH) {
    return IdleRecommendationResourceType::ElastiCacheCluster;
  } else if (hashCode == MemoryDBCluster_HASH) {
    return IdleRecommendationResourceType::MemoryDBCluster;
  } else if (hashCode == DocumentDBCluster_HASH) {
    return IdleRecommendationResourceType::DocumentDBCluster;
  } else if (hashCode == WorkSpaces_HASH) {
    return IdleRecommendationResourceType::WorkSpaces;
  } else if (hashCode == SageMakerEndpoint_HASH) {
    return IdleRecommendationResourceType::SageMakerEndpoint;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IdleRecommendationResourceType>(hashCode);
  }

  return IdleRecommendationResourceType::NOT_SET;
}

Aws::String GetNameForIdleRecommendationResourceType(IdleRecommendationResourceType enumValue) {
  switch (enumValue) {
    case IdleRecommendationResourceType::NOT_SET:
      return {};
    case IdleRecommendationResourceType::EC2Instance:
      return "EC2Instance";
    case IdleRecommendationResourceType::AutoScalingGroup:
      return "AutoScalingGroup";
    case IdleRecommendationResourceType::EBSVolume:
      return "EBSVolume";
    case IdleRecommendationResourceType::ECSService:
      return "ECSService";
    case IdleRecommendationResourceType::RDSDBInstance:
      return "RDSDBInstance";
    case IdleRecommendationResourceType::NatGateway:
      return "NatGateway";
    case IdleRecommendationResourceType::DynamoDBTable:
      return "DynamoDBTable";
    case IdleRecommendationResourceType::ElastiCacheCluster:
      return "ElastiCacheCluster";
    case IdleRecommendationResourceType::MemoryDBCluster:
      return "MemoryDBCluster";
    case IdleRecommendationResourceType::DocumentDBCluster:
      return "DocumentDBCluster";
    case IdleRecommendationResourceType::WorkSpaces:
      return "WorkSpaces";
    case IdleRecommendationResourceType::SageMakerEndpoint:
      return "SageMakerEndpoint";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IdleRecommendationResourceTypeMapper
}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws
