/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rds/RDSErrors.h>

using namespace Aws::Client;
using namespace Aws::RDS;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace RDSErrorMapper
{

static const int D_B_CLUSTER_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBClusterNotFoundFault");
static const int SUBSCRIPTION_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SubscriptionNotFound");
static const int D_B_INSTANCE_ROLE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBInstanceRoleNotFound");
static const int BACKUP_POLICY_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("BackupPolicyNotFoundFault");
static const int OPTION_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("OptionGroupNotFoundFault");
static const int D_B_CLUSTER_ENDPOINT_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBClusterEndpointQuotaExceededFault");
static const int SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SubscriptionCategoryNotFound");
static const int D_B_SECURITY_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBSecurityGroupAlreadyExists");
static const int INVALID_D_B_SUBNET_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBSubnetGroupStateFault");
static const int D_B_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBSubnetGroupQuotaExceeded");
static const int D_B_INSTANCE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBInstanceNotFound");
static const int OPTION_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("OptionGroupQuotaExceededFault");
static const int D_B_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS_HASH = HashingUtils::HashString("DBSubnetGroupDoesNotCoverEnoughAZs");
static const int D_B_LOG_FILE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBLogFileNotFoundFault");
static const int D_B_UPGRADE_DEPENDENCY_FAILURE_FAULT_HASH = HashingUtils::HashString("DBUpgradeDependencyFailure");
static const int INVALID_D_B_SNAPSHOT_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBSnapshotState");
static const int D_B_SUBNET_GROUP_NOT_ALLOWED_FAULT_HASH = HashingUtils::HashString("DBSubnetGroupNotAllowedFault");
static const int SHARED_SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("SharedSnapshotQuotaExceeded");
static const int INVALID_SUBNET_HASH = HashingUtils::HashString("InvalidSubnet");
static const int D_B_CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBClusterParameterGroupNotFound");
static const int DOMAIN_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DomainNotFoundFault");
static const int D_B_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBParameterGroupQuotaExceeded");
static const int INVALID_EVENT_SUBSCRIPTION_STATE_FAULT_HASH = HashingUtils::HashString("InvalidEventSubscriptionState");
static const int D_B_CLUSTER_ROLE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBClusterRoleAlreadyExists");
static const int INSUFFICIENT_STORAGE_CLUSTER_CAPACITY_FAULT_HASH = HashingUtils::HashString("InsufficientStorageClusterCapacity");
static const int D_B_SUBNET_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBSubnetGroupNotFoundFault");
static const int D_B_SECURITY_GROUP_NOT_SUPPORTED_FAULT_HASH = HashingUtils::HashString("DBSecurityGroupNotSupported");
static const int D_B_INSTANCE_AUTOMATED_BACKUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBInstanceAutomatedBackupNotFound");
static const int D_B_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBSnapshotAlreadyExists");
static const int SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("SnapshotQuotaExceeded");
static const int SUBNET_ALREADY_IN_USE_HASH = HashingUtils::HashString("SubnetAlreadyInUse");
static const int D_B_CLUSTER_ENDPOINT_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBClusterEndpointAlreadyExistsFault");
static const int D_B_SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBSubnetGroupAlreadyExists");
static const int D_B_CLUSTER_ENDPOINT_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBClusterEndpointNotFoundFault");
static const int EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("EventSubscriptionQuotaExceeded");
static const int D_B_INSTANCE_ROLE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBInstanceRoleAlreadyExists");
static const int D_B_INSTANCE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBInstanceAlreadyExists");
static const int RESERVED_D_B_INSTANCES_OFFERING_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ReservedDBInstancesOfferingNotFound");
static const int INVALID_D_B_PARAMETER_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBParameterGroupState");
static const int D_B_SECURITY_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBSecurityGroupNotFound");
static const int INVALID_D_B_CLUSTER_SNAPSHOT_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBClusterSnapshotStateFault");
static const int D_B_INSTANCE_ROLE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBInstanceRoleQuotaExceeded");
static const int GLOBAL_CLUSTER_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("GlobalClusterNotFoundFault");
static const int INVALID_D_B_SECURITY_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBSecurityGroupState");
static const int D_B_CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBClusterSnapshotAlreadyExistsFault");
static const int PROVISIONED_IOPS_NOT_AVAILABLE_IN_A_Z_FAULT_HASH = HashingUtils::HashString("ProvisionedIopsNotAvailableInAZFault");
static const int STORAGE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("StorageQuotaExceeded");
static const int INVALID_D_B_SUBNET_GROUP_FAULT_HASH = HashingUtils::HashString("InvalidDBSubnetGroupFault");
static const int INVALID_D_B_INSTANCE_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBInstanceState");
static const int D_B_SUBNET_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBSubnetQuotaExceededFault");
static const int D_B_CLUSTER_SNAPSHOT_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBClusterSnapshotNotFoundFault");
static const int D_B_CLUSTER_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBClusterAlreadyExistsFault");
static const int GLOBAL_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("GlobalClusterQuotaExceededFault");
static const int RESOURCE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ResourceNotFoundFault");
static const int AUTHORIZATION_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("AuthorizationAlreadyExists");
static const int INVALID_D_B_INSTANCE_AUTOMATED_BACKUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBInstanceAutomatedBackupState");
static const int INSUFFICIENT_D_B_INSTANCE_CAPACITY_FAULT_HASH = HashingUtils::HashString("InsufficientDBInstanceCapacity");
static const int RESERVED_D_B_INSTANCE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ReservedDBInstanceQuotaExceeded");
static const int D_B_CLUSTER_ROLE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBClusterRoleQuotaExceeded");
static const int INVALID_S3_BUCKET_FAULT_HASH = HashingUtils::HashString("InvalidS3BucketFault");
static const int RESERVED_D_B_INSTANCE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ReservedDBInstanceAlreadyExists");
static const int INVALID_OPTION_GROUP_STATE_FAULT_HASH = HashingUtils::HashString("InvalidOptionGroupStateFault");
static const int D_B_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBParameterGroupNotFound");
static const int INSTANCE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("InstanceQuotaExceeded");
static const int GLOBAL_CLUSTER_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("GlobalClusterAlreadyExistsFault");
static const int INVALID_D_B_CLUSTER_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBClusterStateFault");
static const int SUBSCRIPTION_ALREADY_EXIST_FAULT_HASH = HashingUtils::HashString("SubscriptionAlreadyExist");
static const int D_B_SNAPSHOT_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBSnapshotNotFound");
static const int K_M_S_KEY_NOT_ACCESSIBLE_FAULT_HASH = HashingUtils::HashString("KMSKeyNotAccessibleFault");
static const int CERTIFICATE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("CertificateNotFound");
static const int D_B_CLUSTER_BACKTRACK_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBClusterBacktrackNotFoundFault");
static const int D_B_PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DBParameterGroupAlreadyExists");
static const int S_N_S_NO_AUTHORIZATION_FAULT_HASH = HashingUtils::HashString("SNSNoAuthorization");
static const int INVALID_D_B_CLUSTER_ENDPOINT_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBClusterEndpointStateFault");
static const int RESERVED_D_B_INSTANCE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ReservedDBInstanceNotFound");
static const int INVALID_RESTORE_FAULT_HASH = HashingUtils::HashString("InvalidRestoreFault");
static const int STORAGE_TYPE_NOT_SUPPORTED_FAULT_HASH = HashingUtils::HashString("StorageTypeNotSupported");
static const int S_N_S_TOPIC_ARN_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SNSTopicArnNotFound");
static const int D_B_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("QuotaExceeded.DBSecurityGroup");
static const int S_N_S_INVALID_TOPIC_FAULT_HASH = HashingUtils::HashString("SNSInvalidTopic");
static const int INVALID_D_B_SUBNET_STATE_FAULT_HASH = HashingUtils::HashString("InvalidDBSubnetStateFault");
static const int INVALID_D_B_CLUSTER_CAPACITY_FAULT_HASH = HashingUtils::HashString("InvalidDBClusterCapacityFault");
static const int INVALID_V_P_C_NETWORK_STATE_FAULT_HASH = HashingUtils::HashString("InvalidVPCNetworkStateFault");
static const int AUTHORIZATION_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("AuthorizationNotFound");
static const int AUTHORIZATION_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("AuthorizationQuotaExceeded");
static const int D_B_CLUSTER_ROLE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("DBClusterRoleNotFound");
static const int D_B_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBClusterQuotaExceededFault");
static const int INSUFFICIENT_D_B_CLUSTER_CAPACITY_FAULT_HASH = HashingUtils::HashString("InsufficientDBClusterCapacityFault");
static const int OPTION_GROUP_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("OptionGroupAlreadyExistsFault");
static const int POINT_IN_TIME_RESTORE_NOT_ENABLED_FAULT_HASH = HashingUtils::HashString("PointInTimeRestoreNotEnabled");
static const int SOURCE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("SourceNotFound");
static const int INVALID_GLOBAL_CLUSTER_STATE_FAULT_HASH = HashingUtils::HashString("InvalidGlobalClusterStateFault");
static const int D_B_INSTANCE_AUTOMATED_BACKUP_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("DBInstanceAutomatedBackupQuotaExceeded");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == D_B_CLUSTER_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == SUBSCRIPTION_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::SUBSCRIPTION_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_INSTANCE_ROLE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_INSTANCE_ROLE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == BACKUP_POLICY_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::BACKUP_POLICY_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == OPTION_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::OPTION_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_ENDPOINT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_ENDPOINT_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::SUBSCRIPTION_CATEGORY_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_SECURITY_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SECURITY_GROUP_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_SUBNET_GROUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_SUBNET_GROUP_STATE_FAULT), false);
  }
  else if (hashCode == D_B_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == D_B_INSTANCE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_INSTANCE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == OPTION_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::OPTION_GROUP_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == D_B_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS), false);
  }
  else if (hashCode == D_B_LOG_FILE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_LOG_FILE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_UPGRADE_DEPENDENCY_FAILURE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_UPGRADE_DEPENDENCY_FAILURE_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_SNAPSHOT_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_SNAPSHOT_STATE_FAULT), false);
  }
  else if (hashCode == D_B_SUBNET_GROUP_NOT_ALLOWED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SUBNET_GROUP_NOT_ALLOWED_FAULT), false);
  }
  else if (hashCode == SHARED_SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::SHARED_SNAPSHOT_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == INVALID_SUBNET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_SUBNET), false);
  }
  else if (hashCode == D_B_CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == DOMAIN_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::DOMAIN_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == INVALID_EVENT_SUBSCRIPTION_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_EVENT_SUBSCRIPTION_STATE_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_ROLE_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_ROLE_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == INSUFFICIENT_STORAGE_CLUSTER_CAPACITY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INSUFFICIENT_STORAGE_CLUSTER_CAPACITY_FAULT), false);
  }
  else if (hashCode == D_B_SUBNET_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SUBNET_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_SECURITY_GROUP_NOT_SUPPORTED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SECURITY_GROUP_NOT_SUPPORTED_FAULT), false);
  }
  else if (hashCode == D_B_INSTANCE_AUTOMATED_BACKUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_INSTANCE_AUTOMATED_BACKUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SNAPSHOT_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == SNAPSHOT_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::SNAPSHOT_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == SUBNET_ALREADY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::SUBNET_ALREADY_IN_USE), false);
  }
  else if (hashCode == D_B_CLUSTER_ENDPOINT_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_ENDPOINT_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == D_B_SUBNET_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SUBNET_GROUP_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_ENDPOINT_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_ENDPOINT_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::EVENT_SUBSCRIPTION_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == D_B_INSTANCE_ROLE_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_INSTANCE_ROLE_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == D_B_INSTANCE_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_INSTANCE_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == RESERVED_D_B_INSTANCES_OFFERING_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::RESERVED_D_B_INSTANCES_OFFERING_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_PARAMETER_GROUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_PARAMETER_GROUP_STATE_FAULT), false);
  }
  else if (hashCode == D_B_SECURITY_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SECURITY_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_CLUSTER_SNAPSHOT_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_CLUSTER_SNAPSHOT_STATE_FAULT), false);
  }
  else if (hashCode == D_B_INSTANCE_ROLE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_INSTANCE_ROLE_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == GLOBAL_CLUSTER_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::GLOBAL_CLUSTER_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_SECURITY_GROUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_SECURITY_GROUP_STATE_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == PROVISIONED_IOPS_NOT_AVAILABLE_IN_A_Z_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::PROVISIONED_IOPS_NOT_AVAILABLE_IN_A_Z_FAULT), false);
  }
  else if (hashCode == STORAGE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::STORAGE_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_SUBNET_GROUP_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_SUBNET_GROUP_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_INSTANCE_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_INSTANCE_STATE_FAULT), false);
  }
  else if (hashCode == D_B_SUBNET_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SUBNET_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_SNAPSHOT_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_SNAPSHOT_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == GLOBAL_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::GLOBAL_CLUSTER_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == RESOURCE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::RESOURCE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == AUTHORIZATION_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::AUTHORIZATION_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_INSTANCE_AUTOMATED_BACKUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_INSTANCE_AUTOMATED_BACKUP_STATE_FAULT), false);
  }
  else if (hashCode == INSUFFICIENT_D_B_INSTANCE_CAPACITY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INSUFFICIENT_D_B_INSTANCE_CAPACITY_FAULT), false);
  }
  else if (hashCode == RESERVED_D_B_INSTANCE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::RESERVED_D_B_INSTANCE_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_ROLE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_ROLE_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == INVALID_S3_BUCKET_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_S3_BUCKET_FAULT), false);
  }
  else if (hashCode == RESERVED_D_B_INSTANCE_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::RESERVED_D_B_INSTANCE_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == INVALID_OPTION_GROUP_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_OPTION_GROUP_STATE_FAULT), false);
  }
  else if (hashCode == D_B_PARAMETER_GROUP_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_PARAMETER_GROUP_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INSTANCE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INSTANCE_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == GLOBAL_CLUSTER_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::GLOBAL_CLUSTER_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_CLUSTER_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_CLUSTER_STATE_FAULT), false);
  }
  else if (hashCode == SUBSCRIPTION_ALREADY_EXIST_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::SUBSCRIPTION_ALREADY_EXIST_FAULT), false);
  }
  else if (hashCode == D_B_SNAPSHOT_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SNAPSHOT_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == K_M_S_KEY_NOT_ACCESSIBLE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::K_M_S_KEY_NOT_ACCESSIBLE_FAULT), false);
  }
  else if (hashCode == CERTIFICATE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::CERTIFICATE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_BACKTRACK_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_BACKTRACK_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_PARAMETER_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_PARAMETER_GROUP_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == S_N_S_NO_AUTHORIZATION_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::S_N_S_NO_AUTHORIZATION_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_CLUSTER_ENDPOINT_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_CLUSTER_ENDPOINT_STATE_FAULT), false);
  }
  else if (hashCode == RESERVED_D_B_INSTANCE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::RESERVED_D_B_INSTANCE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INVALID_RESTORE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_RESTORE_FAULT), false);
  }
  else if (hashCode == STORAGE_TYPE_NOT_SUPPORTED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::STORAGE_TYPE_NOT_SUPPORTED_FAULT), false);
  }
  else if (hashCode == S_N_S_TOPIC_ARN_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::S_N_S_TOPIC_ARN_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == S_N_S_INVALID_TOPIC_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::S_N_S_INVALID_TOPIC_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_SUBNET_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_SUBNET_STATE_FAULT), false);
  }
  else if (hashCode == INVALID_D_B_CLUSTER_CAPACITY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_D_B_CLUSTER_CAPACITY_FAULT), false);
  }
  else if (hashCode == INVALID_V_P_C_NETWORK_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_V_P_C_NETWORK_STATE_FAULT), false);
  }
  else if (hashCode == AUTHORIZATION_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::AUTHORIZATION_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == AUTHORIZATION_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::AUTHORIZATION_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_ROLE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_ROLE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == D_B_CLUSTER_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_CLUSTER_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == INSUFFICIENT_D_B_CLUSTER_CAPACITY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INSUFFICIENT_D_B_CLUSTER_CAPACITY_FAULT), false);
  }
  else if (hashCode == OPTION_GROUP_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::OPTION_GROUP_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == POINT_IN_TIME_RESTORE_NOT_ENABLED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::POINT_IN_TIME_RESTORE_NOT_ENABLED_FAULT), false);
  }
  else if (hashCode == SOURCE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::SOURCE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INVALID_GLOBAL_CLUSTER_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::INVALID_GLOBAL_CLUSTER_STATE_FAULT), false);
  }
  else if (hashCode == D_B_INSTANCE_AUTOMATED_BACKUP_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSErrors::D_B_INSTANCE_AUTOMATED_BACKUP_QUOTA_EXCEEDED_FAULT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace RDSErrorMapper
} // namespace RDS
} // namespace Aws
