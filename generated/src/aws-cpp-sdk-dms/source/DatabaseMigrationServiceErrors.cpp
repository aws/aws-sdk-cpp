/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dms/DatabaseMigrationServiceErrors.h>
#include <aws/dms/model/ResourceAlreadyExistsFault.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DatabaseMigrationService;
using namespace Aws::DatabaseMigrationService::Model;

namespace Aws
{
namespace DatabaseMigrationService
{
template<> AWS_DATABASEMIGRATIONSERVICE_API ResourceAlreadyExistsFault DatabaseMigrationServiceError::GetModeledError()
{
  assert(this->GetErrorType() == DatabaseMigrationServiceErrors::RESOURCE_ALREADY_EXISTS_FAULT);
  return ResourceAlreadyExistsFault(this->GetJsonPayload().View());
}

namespace DatabaseMigrationServiceErrorMapper
{

static constexpr uint32_t K_M_S_DISABLED_FAULT_HASH = ConstExprHashingUtils::HashString("KMSDisabledFault");
static constexpr uint32_t STORAGE_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("StorageQuotaExceededFault");
static constexpr uint32_t RESOURCE_ALREADY_EXISTS_FAULT_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExistsFault");
static constexpr uint32_t S3_ACCESS_DENIED_FAULT_HASH = ConstExprHashingUtils::HashString("S3AccessDeniedFault");
static constexpr uint32_t INVALID_CERTIFICATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidCertificateFault");
static constexpr uint32_t K_M_S_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("KMSNotFoundFault");
static constexpr uint32_t S3_RESOURCE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("S3ResourceNotFoundFault");
static constexpr uint32_t INSUFFICIENT_RESOURCE_CAPACITY_FAULT_HASH = ConstExprHashingUtils::HashString("InsufficientResourceCapacityFault");
static constexpr uint32_t RESOURCE_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("ResourceNotFoundFault");
static constexpr uint32_t K_M_S_FAULT_HASH = ConstExprHashingUtils::HashString("KMSFault");
static constexpr uint32_t K_M_S_ACCESS_DENIED_FAULT_HASH = ConstExprHashingUtils::HashString("KMSAccessDeniedFault");
static constexpr uint32_t COLLECTOR_NOT_FOUND_FAULT_HASH = ConstExprHashingUtils::HashString("CollectorNotFoundFault");
static constexpr uint32_t ACCESS_DENIED_FAULT_HASH = ConstExprHashingUtils::HashString("AccessDeniedFault");
static constexpr uint32_t INVALID_SUBNET_HASH = ConstExprHashingUtils::HashString("InvalidSubnet");
static constexpr uint32_t K_M_S_KEY_NOT_ACCESSIBLE_FAULT_HASH = ConstExprHashingUtils::HashString("KMSKeyNotAccessibleFault");
static constexpr uint32_t S_N_S_NO_AUTHORIZATION_FAULT_HASH = ConstExprHashingUtils::HashString("SNSNoAuthorizationFault");
static constexpr uint32_t UPGRADE_DEPENDENCY_FAILURE_FAULT_HASH = ConstExprHashingUtils::HashString("UpgradeDependencyFailureFault");
static constexpr uint32_t RESOURCE_QUOTA_EXCEEDED_FAULT_HASH = ConstExprHashingUtils::HashString("ResourceQuotaExceededFault");
static constexpr uint32_t K_M_S_INVALID_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("KMSInvalidStateFault");
static constexpr uint32_t INVALID_RESOURCE_STATE_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidResourceStateFault");
static constexpr uint32_t SUBNET_ALREADY_IN_USE_HASH = ConstExprHashingUtils::HashString("SubnetAlreadyInUse");
static constexpr uint32_t S_N_S_INVALID_TOPIC_FAULT_HASH = ConstExprHashingUtils::HashString("SNSInvalidTopicFault");
static constexpr uint32_t INVALID_OPERATION_FAULT_HASH = ConstExprHashingUtils::HashString("InvalidOperationFault");
static constexpr uint32_t K_M_S_THROTTLING_FAULT_HASH = ConstExprHashingUtils::HashString("KMSThrottlingFault");
static constexpr uint32_t REPLICATION_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS_HASH = ConstExprHashingUtils::HashString("ReplicationSubnetGroupDoesNotCoverEnoughAZs");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == K_M_S_DISABLED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::K_M_S_DISABLED_FAULT), false);
  }
  else if (hashCode == STORAGE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::STORAGE_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::RESOURCE_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == S3_ACCESS_DENIED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::S3_ACCESS_DENIED_FAULT), false);
  }
  else if (hashCode == INVALID_CERTIFICATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::INVALID_CERTIFICATE_FAULT), false);
  }
  else if (hashCode == K_M_S_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::K_M_S_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == S3_RESOURCE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::S3_RESOURCE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == INSUFFICIENT_RESOURCE_CAPACITY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::INSUFFICIENT_RESOURCE_CAPACITY_FAULT), false);
  }
  else if (hashCode == RESOURCE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::RESOURCE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == K_M_S_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::K_M_S_FAULT), false);
  }
  else if (hashCode == K_M_S_ACCESS_DENIED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::K_M_S_ACCESS_DENIED_FAULT), false);
  }
  else if (hashCode == COLLECTOR_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::COLLECTOR_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == ACCESS_DENIED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::ACCESS_DENIED_FAULT), false);
  }
  else if (hashCode == INVALID_SUBNET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::INVALID_SUBNET), false);
  }
  else if (hashCode == K_M_S_KEY_NOT_ACCESSIBLE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::K_M_S_KEY_NOT_ACCESSIBLE_FAULT), false);
  }
  else if (hashCode == S_N_S_NO_AUTHORIZATION_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::S_N_S_NO_AUTHORIZATION_FAULT), false);
  }
  else if (hashCode == UPGRADE_DEPENDENCY_FAILURE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::UPGRADE_DEPENDENCY_FAILURE_FAULT), false);
  }
  else if (hashCode == RESOURCE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::RESOURCE_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == K_M_S_INVALID_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::K_M_S_INVALID_STATE_FAULT), false);
  }
  else if (hashCode == INVALID_RESOURCE_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::INVALID_RESOURCE_STATE_FAULT), false);
  }
  else if (hashCode == SUBNET_ALREADY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::SUBNET_ALREADY_IN_USE), false);
  }
  else if (hashCode == S_N_S_INVALID_TOPIC_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::S_N_S_INVALID_TOPIC_FAULT), false);
  }
  else if (hashCode == INVALID_OPERATION_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::INVALID_OPERATION_FAULT), false);
  }
  else if (hashCode == K_M_S_THROTTLING_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::K_M_S_THROTTLING_FAULT), false);
  }
  else if (hashCode == REPLICATION_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::REPLICATION_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DatabaseMigrationServiceErrorMapper
} // namespace DatabaseMigrationService
} // namespace Aws
