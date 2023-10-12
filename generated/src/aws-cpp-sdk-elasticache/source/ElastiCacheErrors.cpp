/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticache/ElastiCacheErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ElastiCache;

namespace Aws
{
namespace ElastiCache
{
namespace ElastiCacheErrorMapper
{

static constexpr uint32_t INVALID_A_R_N_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidARN");
static constexpr uint32_t SNAPSHOT_FEATURE_NOT_SUPPORTED_FAULT_HASH = ConstExprHashingUtils::HashString("SnapshotFeatureNotSupportedFault");
static constexpr uint32_t CACHE_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("CacheParameterGroupNotFound");
static constexpr uint32_t SNAPSHOT_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("SnapshotAlreadyExistsFault");
static constexpr uint32_t RESERVED_CACHE_NODES_OFFERING_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ReservedCacheNodesOfferingNotFound");
static constexpr uint32_t CACHE_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("CacheSubnetGroupQuotaExceeded");
static constexpr uint32_t DEFAULT_USER_ASSOCIATED_TO_USER_GROUP_FAULT_HASH = ConstExprHashingUtils::HashString("DefaultUserAssociatedToUserGroup");
static constexpr uint32_t REPLICATION_GROUP_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("ReplicationGroupAlreadyExists");
static constexpr uint32_t DEFAULT_USER_REQUIRED_HASH = ConstExprHashingUtils::HashString("DefaultUserRequired");
static constexpr uint32_t INVALID_SUBNET_HASH = ConstExprHashingUtils::HashString("InvalidSubnet");
static constexpr uint32_t USER_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("UserAlreadyExists");
static constexpr uint32_t CACHE_CLUSTER_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("CacheClusterAlreadyExists");
static constexpr uint32_t REPLICATION_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ReplicationGroupNotFoundFault");
static constexpr uint32_t USER_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("UserNotFound");
static constexpr uint32_t INVALID_K_M_S_KEY_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidKMSKeyFault");
static constexpr uint32_t CACHE_SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("CacheSubnetGroupAlreadyExists");
static constexpr uint32_t CACHE_SUBNET_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("CacheSubnetQuotaExceededFault");
static constexpr uint32_t SNAPSHOT_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("SnapshotNotFoundFault");
static constexpr uint32_t SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("SnapshotQuotaExceededFault");
static constexpr uint32_t SERVICE_UPDATE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ServiceUpdateNotFoundFault");
static constexpr uint32_t INVALID_CACHE_CLUSTER_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidCacheClusterState");
static constexpr uint32_t NODE_GROUPS_PER_REPLICATION_GROUP_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("NodeGroupsPerReplicationGroupQuotaExceeded");
static constexpr uint32_t CACHE_PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("CacheParameterGroupAlreadyExists");
static constexpr uint32_t SUBNET_NOT_ALLOWED_FAULT_HASH = ConstExprHashingUtils::HashString("SubnetNotAllowedFault");
static constexpr uint32_t RESERVED_CACHE_NODE_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("ReservedCacheNodeQuotaExceeded");
static constexpr uint32_t NODE_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("NodeGroupNotFoundFault");
static constexpr uint32_t USER_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("UserQuotaExceeded");
static constexpr uint32_t INVALID_USER_GROUP_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidUserGroupState");
static constexpr uint32_t INVALID_SNAPSHOT_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidSnapshotState");
static constexpr uint32_t USER_GROUP_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("UserGroupQuotaExceeded");
static constexpr uint32_t TAG_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("TagNotFound");
static constexpr uint32_t CACHE_CLUSTER_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("CacheClusterNotFound");
static constexpr uint32_t NODE_QUOTA_FOR_CLUSTER_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("NodeQuotaForClusterExceeded");
static constexpr uint32_t REPLICATION_GROUP_NOT_UNDER_MIGRATION_FAULT_HASH = ConstExprHashingUtils::HashString("ReplicationGroupNotUnderMigrationFault");
static constexpr uint32_t CACHE_SECURITY_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("CacheSecurityGroupNotFound");
static constexpr uint32_t SUBNET_IN_USE_HASH = ConstExprHashingUtils::HashString("SubnetInUse");
static constexpr uint32_t AUTHORIZATION_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("AuthorizationAlreadyExists");
static constexpr uint32_t CLUSTER_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("ClusterQuotaForCustomerExceeded");
static constexpr uint32_t RESERVED_CACHE_NODE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ReservedCacheNodeNotFound");
static constexpr uint32_t CACHE_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("QuotaExceeded.CacheSecurityGroup");
static constexpr uint32_t CACHE_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("CacheParameterGroupQuotaExceeded");
static constexpr uint32_t CACHE_SUBNET_GROUP_IN_USE_HASH = ConstExprHashingUtils::HashString("CacheSubnetGroupInUse");
static constexpr uint32_t CACHE_SECURITY_GROUP_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("CacheSecurityGroupAlreadyExists");
static constexpr uint32_t REPLICATION_GROUP_ALREADY_UNDER_MIGRATION_FAULT_HASH = ConstExprHashingUtils::HashString("ReplicationGroupAlreadyUnderMigrationFault");
static constexpr uint32_t RESERVED_CACHE_NODE_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("ReservedCacheNodeAlreadyExists");
static constexpr uint32_t INVALID_CACHE_SECURITY_GROUP_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidCacheSecurityGroupState");
static constexpr uint32_t CACHE_SUBNET_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("CacheSubnetGroupNotFoundFault");
static constexpr uint32_t INVALID_USER_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidUserState");
static constexpr uint32_t USER_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("UserGroupNotFound");
static constexpr uint32_t GLOBAL_REPLICATION_GROUP_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("GlobalReplicationGroupAlreadyExistsFault");
static constexpr uint32_t A_P_I_CALL_RATE_FOR_CUSTOMER_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("APICallRateForCustomerExceeded");
static constexpr uint32_t USER_GROUP_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("UserGroupAlreadyExists");
static constexpr uint32_t INVALID_REPLICATION_GROUP_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidReplicationGroupState");
static constexpr uint32_t INSUFFICIENT_CACHE_CLUSTER_CAPACITY_FAULT_HASH = ConstExprHashingUtils::HashString("InsufficientCacheClusterCapacity");
static constexpr uint32_t INVALID_CACHE_PARAMETER_GROUP_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidCacheParameterGroupState");
static constexpr uint32_t GLOBAL_REPLICATION_GROUP_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("GlobalReplicationGroupNotFoundFault");
static constexpr uint32_t INVALID_V_P_C_NETWORK_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidVPCNetworkStateFault");
static constexpr uint32_t SERVICE_LINKED_ROLE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ServiceLinkedRoleNotFoundFault");
static constexpr uint32_t AUTHORIZATION_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("AuthorizationNotFound");
static constexpr uint32_t TAG_QUOTA_PER_RESOURCE_EXCEEDED_HASH = ConstExprHashingUtils::HashString("TagQuotaPerResourceExceeded");
static constexpr uint32_t INVALID_GLOBAL_REPLICATION_GROUP_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidGlobalReplicationGroupState");
static constexpr uint32_t TEST_FAILOVER_NOT_AVAILABLE_FAULT_HASH = ConstExprHashingUtils::HashString("TestFailoverNotAvailableFault");
static constexpr uint32_t NODE_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("NodeQuotaForCustomerExceeded");
static constexpr uint32_t DUPLICATE_USER_NAME_FAULT_HASH = ConstExprHashingUtils::HashString("DuplicateUserName");
static constexpr uint32_t NO_OPERATION_FAULT_HASH = ConstExprHashingUtils::HashString("NoOperationFault");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_A_R_N_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::INVALID_A_R_N_FAULT), false);
  }
  else if (hashCode == SNAPSHOT_FEATURE_NOT_SUPPORTED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::SNAPSHOT_FEATURE_NOT_SUPPORTED_FAULT), false);
  }
  else if (hashCode == CACHE_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::CACHE_PARAMETER_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == SNAPSHOT_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::SNAPSHOT_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == RESERVED_CACHE_NODES_OFFERING_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::RESERVED_CACHE_NODES_OFFERING_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == CACHE_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::CACHE_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == DEFAULT_USER_ASSOCIATED_TO_USER_GROUP_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::DEFAULT_USER_ASSOCIATED_TO_USER_GROUP_FAULT), false);
  }
  else if (hashCode == REPLICATION_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::REPLICATION_GROUP_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == DEFAULT_USER_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::DEFAULT_USER_REQUIRED), false);
  }
  else if (hashCode == INVALID_SUBNET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::INVALID_SUBNET), false);
  }
  else if (hashCode == USER_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::USER_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == CACHE_CLUSTER_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::CACHE_CLUSTER_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == REPLICATION_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::REPLICATION_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == USER_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::USER_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INVALID_K_M_S_KEY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::INVALID_K_M_S_KEY_FAULT), false);
  }
  else if (hashCode == CACHE_SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::CACHE_SUBNET_GROUP_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == CACHE_SUBNET_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::CACHE_SUBNET_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == SNAPSHOT_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::SNAPSHOT_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::SNAPSHOT_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == SERVICE_UPDATE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::SERVICE_UPDATE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INVALID_CACHE_CLUSTER_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::INVALID_CACHE_CLUSTER_STATE_FAULT), false);
  }
  else if (hashCode == NODE_GROUPS_PER_REPLICATION_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::NODE_GROUPS_PER_REPLICATION_GROUP_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == CACHE_PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::CACHE_PARAMETER_GROUP_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == SUBNET_NOT_ALLOWED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::SUBNET_NOT_ALLOWED_FAULT), false);
  }
  else if (hashCode == RESERVED_CACHE_NODE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::RESERVED_CACHE_NODE_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == NODE_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::NODE_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == USER_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::USER_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == INVALID_USER_GROUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::INVALID_USER_GROUP_STATE_FAULT), false);
  }
  else if (hashCode == INVALID_SNAPSHOT_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::INVALID_SNAPSHOT_STATE_FAULT), false);
  }
  else if (hashCode == USER_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::USER_GROUP_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == TAG_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::TAG_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == CACHE_CLUSTER_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::CACHE_CLUSTER_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == NODE_QUOTA_FOR_CLUSTER_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::NODE_QUOTA_FOR_CLUSTER_EXCEEDED_FAULT), false);
  }
  else if (hashCode == REPLICATION_GROUP_NOT_UNDER_MIGRATION_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::REPLICATION_GROUP_NOT_UNDER_MIGRATION_FAULT), false);
  }
  else if (hashCode == CACHE_SECURITY_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::CACHE_SECURITY_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == SUBNET_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::SUBNET_IN_USE), false);
  }
  else if (hashCode == AUTHORIZATION_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::AUTHORIZATION_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == CLUSTER_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::CLUSTER_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT), false);
  }
  else if (hashCode == RESERVED_CACHE_NODE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::RESERVED_CACHE_NODE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == CACHE_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::CACHE_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == CACHE_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::CACHE_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == CACHE_SUBNET_GROUP_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::CACHE_SUBNET_GROUP_IN_USE), false);
  }
  else if (hashCode == CACHE_SECURITY_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::CACHE_SECURITY_GROUP_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == REPLICATION_GROUP_ALREADY_UNDER_MIGRATION_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::REPLICATION_GROUP_ALREADY_UNDER_MIGRATION_FAULT), false);
  }
  else if (hashCode == RESERVED_CACHE_NODE_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::RESERVED_CACHE_NODE_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == INVALID_CACHE_SECURITY_GROUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::INVALID_CACHE_SECURITY_GROUP_STATE_FAULT), false);
  }
  else if (hashCode == CACHE_SUBNET_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::CACHE_SUBNET_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INVALID_USER_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::INVALID_USER_STATE_FAULT), false);
  }
  else if (hashCode == USER_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::USER_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == GLOBAL_REPLICATION_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::GLOBAL_REPLICATION_GROUP_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == A_P_I_CALL_RATE_FOR_CUSTOMER_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::A_P_I_CALL_RATE_FOR_CUSTOMER_EXCEEDED_FAULT), false);
  }
  else if (hashCode == USER_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::USER_GROUP_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == INVALID_REPLICATION_GROUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::INVALID_REPLICATION_GROUP_STATE_FAULT), false);
  }
  else if (hashCode == INSUFFICIENT_CACHE_CLUSTER_CAPACITY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::INSUFFICIENT_CACHE_CLUSTER_CAPACITY_FAULT), false);
  }
  else if (hashCode == INVALID_CACHE_PARAMETER_GROUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::INVALID_CACHE_PARAMETER_GROUP_STATE_FAULT), false);
  }
  else if (hashCode == GLOBAL_REPLICATION_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::GLOBAL_REPLICATION_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INVALID_V_P_C_NETWORK_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::INVALID_V_P_C_NETWORK_STATE_FAULT), false);
  }
  else if (hashCode == SERVICE_LINKED_ROLE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::SERVICE_LINKED_ROLE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == AUTHORIZATION_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::AUTHORIZATION_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == TAG_QUOTA_PER_RESOURCE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::TAG_QUOTA_PER_RESOURCE_EXCEEDED), false);
  }
  else if (hashCode == INVALID_GLOBAL_REPLICATION_GROUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::INVALID_GLOBAL_REPLICATION_GROUP_STATE_FAULT), false);
  }
  else if (hashCode == TEST_FAILOVER_NOT_AVAILABLE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::TEST_FAILOVER_NOT_AVAILABLE_FAULT), false);
  }
  else if (hashCode == NODE_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::NODE_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT), false);
  }
  else if (hashCode == DUPLICATE_USER_NAME_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::DUPLICATE_USER_NAME_FAULT), false);
  }
  else if (hashCode == NO_OPERATION_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::NO_OPERATION_FAULT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ElastiCacheErrorMapper
} // namespace ElastiCache
} // namespace Aws
