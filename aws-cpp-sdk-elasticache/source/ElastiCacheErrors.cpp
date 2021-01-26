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

static const int INVALID_A_R_N_FAULT_HASH = HashingUtils::HashString("InvalidARN");
static const int SNAPSHOT_FEATURE_NOT_SUPPORTED_FAULT_HASH = HashingUtils::HashString("SnapshotFeatureNotSupportedFault");
static const int CACHE_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("CacheParameterGroupNotFound");
static const int SNAPSHOT_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("SnapshotAlreadyExistsFault");
static const int RESERVED_CACHE_NODES_OFFERING_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ReservedCacheNodesOfferingNotFound");
static const int CACHE_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("CacheSubnetGroupQuotaExceeded");
static const int DEFAULT_USER_ASSOCIATED_TO_USER_GROUP_FAULT_HASH = HashingUtils::HashString("DefaultUserAssociatedToUserGroup");
static const int REPLICATION_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ReplicationGroupAlreadyExists");
static const int DEFAULT_USER_REQUIRED_HASH = HashingUtils::HashString("DefaultUserRequired");
static const int INVALID_SUBNET_HASH = HashingUtils::HashString("InvalidSubnet");
static const int USER_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("UserAlreadyExists");
static const int CACHE_CLUSTER_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("CacheClusterAlreadyExists");
static const int REPLICATION_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ReplicationGroupNotFoundFault");
static const int USER_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("UserNotFound");
static const int INVALID_K_M_S_KEY_FAULT_HASH = HashingUtils::HashString("InvalidKMSKeyFault");
static const int CACHE_SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("CacheSubnetGroupAlreadyExists");
static const int CACHE_SUBNET_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("CacheSubnetQuotaExceededFault");
static const int SNAPSHOT_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SnapshotNotFoundFault");
static const int SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("SnapshotQuotaExceededFault");
static const int SERVICE_UPDATE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ServiceUpdateNotFoundFault");
static const int INVALID_CACHE_CLUSTER_STATE_FAULT_HASH = HashingUtils::HashString("InvalidCacheClusterState");
static const int NODE_GROUPS_PER_REPLICATION_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("NodeGroupsPerReplicationGroupQuotaExceeded");
static const int CACHE_PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("CacheParameterGroupAlreadyExists");
static const int SUBNET_NOT_ALLOWED_FAULT_HASH = HashingUtils::HashString("SubnetNotAllowedFault");
static const int RESERVED_CACHE_NODE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ReservedCacheNodeQuotaExceeded");
static const int NODE_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("NodeGroupNotFoundFault");
static const int USER_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("UserQuotaExceeded");
static const int INVALID_USER_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidUserGroupState");
static const int INVALID_SNAPSHOT_STATE_FAULT_HASH = HashingUtils::HashString("InvalidSnapshotState");
static const int USER_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("UserGroupQuotaExceeded");
static const int TAG_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("TagNotFound");
static const int CACHE_CLUSTER_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("CacheClusterNotFound");
static const int NODE_QUOTA_FOR_CLUSTER_EXCEEDED_FAULT_HASH = HashingUtils::HashString("NodeQuotaForClusterExceeded");
static const int REPLICATION_GROUP_NOT_UNDER_MIGRATION_FAULT_HASH = HashingUtils::HashString("ReplicationGroupNotUnderMigrationFault");
static const int CACHE_SECURITY_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("CacheSecurityGroupNotFound");
static const int SUBNET_IN_USE_HASH = HashingUtils::HashString("SubnetInUse");
static const int AUTHORIZATION_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("AuthorizationAlreadyExists");
static const int CLUSTER_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ClusterQuotaForCustomerExceeded");
static const int CACHE_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("QuotaExceeded.CacheSecurityGroup");
static const int RESERVED_CACHE_NODE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ReservedCacheNodeNotFound");
static const int CACHE_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("CacheParameterGroupQuotaExceeded");
static const int CACHE_SUBNET_GROUP_IN_USE_HASH = HashingUtils::HashString("CacheSubnetGroupInUse");
static const int CACHE_SECURITY_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("CacheSecurityGroupAlreadyExists");
static const int REPLICATION_GROUP_ALREADY_UNDER_MIGRATION_FAULT_HASH = HashingUtils::HashString("ReplicationGroupAlreadyUnderMigrationFault");
static const int RESERVED_CACHE_NODE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ReservedCacheNodeAlreadyExists");
static const int INVALID_CACHE_SECURITY_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidCacheSecurityGroupState");
static const int CACHE_SUBNET_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("CacheSubnetGroupNotFoundFault");
static const int INVALID_USER_STATE_FAULT_HASH = HashingUtils::HashString("InvalidUserState");
static const int USER_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("UserGroupNotFound");
static const int GLOBAL_REPLICATION_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("GlobalReplicationGroupAlreadyExistsFault");
static const int A_P_I_CALL_RATE_FOR_CUSTOMER_EXCEEDED_FAULT_HASH = HashingUtils::HashString("APICallRateForCustomerExceeded");
static const int USER_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("UserGroupAlreadyExists");
static const int INVALID_REPLICATION_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidReplicationGroupState");
static const int INSUFFICIENT_CACHE_CLUSTER_CAPACITY_FAULT_HASH = HashingUtils::HashString("InsufficientCacheClusterCapacity");
static const int INVALID_CACHE_PARAMETER_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidCacheParameterGroupState");
static const int GLOBAL_REPLICATION_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("GlobalReplicationGroupNotFoundFault");
static const int INVALID_V_P_C_NETWORK_STATE_FAULT_HASH = HashingUtils::HashString("InvalidVPCNetworkStateFault");
static const int SERVICE_LINKED_ROLE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ServiceLinkedRoleNotFoundFault");
static const int AUTHORIZATION_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("AuthorizationNotFound");
static const int TAG_QUOTA_PER_RESOURCE_EXCEEDED_HASH = HashingUtils::HashString("TagQuotaPerResourceExceeded");
static const int INVALID_GLOBAL_REPLICATION_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidGlobalReplicationGroupState");
static const int TEST_FAILOVER_NOT_AVAILABLE_FAULT_HASH = HashingUtils::HashString("TestFailoverNotAvailableFault");
static const int NODE_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT_HASH = HashingUtils::HashString("NodeQuotaForCustomerExceeded");
static const int DUPLICATE_USER_NAME_FAULT_HASH = HashingUtils::HashString("DuplicateUserName");
static const int NO_OPERATION_FAULT_HASH = HashingUtils::HashString("NoOperationFault");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
  else if (hashCode == CACHE_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::CACHE_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == RESERVED_CACHE_NODE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElastiCacheErrors::RESERVED_CACHE_NODE_NOT_FOUND_FAULT), false);
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
