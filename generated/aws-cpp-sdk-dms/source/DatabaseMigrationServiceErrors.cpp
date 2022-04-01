﻿/**
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

static const int UPGRADE_DEPENDENCY_FAILURE_FAULT_HASH = HashingUtils::HashString("UpgradeDependencyFailureFault");
static const int K_M_S_DISABLED_FAULT_HASH = HashingUtils::HashString("KMSDisabledFault");
static const int RESOURCE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("ResourceQuotaExceededFault");
static const int STORAGE_QUOTA_EXCEEDED_FAULT_HASH = HashingUtils::HashString("StorageQuotaExceededFault");
static const int RESOURCE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("ResourceAlreadyExistsFault");
static const int K_M_S_INVALID_STATE_FAULT_HASH = HashingUtils::HashString("KMSInvalidStateFault");
static const int INVALID_RESOURCE_STATE_FAULT_HASH = HashingUtils::HashString("InvalidResourceStateFault");
static const int S3_ACCESS_DENIED_FAULT_HASH = HashingUtils::HashString("S3AccessDeniedFault");
static const int INVALID_CERTIFICATE_FAULT_HASH = HashingUtils::HashString("InvalidCertificateFault");
static const int K_M_S_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("KMSNotFoundFault");
static const int INSUFFICIENT_RESOURCE_CAPACITY_FAULT_HASH = HashingUtils::HashString("InsufficientResourceCapacityFault");
static const int S3_RESOURCE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("S3ResourceNotFoundFault");
static const int SUBNET_ALREADY_IN_USE_HASH = HashingUtils::HashString("SubnetAlreadyInUse");
static const int S_N_S_INVALID_TOPIC_FAULT_HASH = HashingUtils::HashString("SNSInvalidTopicFault");
static const int RESOURCE_NOT_FOUND_FAULT_HASH = HashingUtils::HashString("ResourceNotFoundFault");
static const int K_M_S_FAULT_HASH = HashingUtils::HashString("KMSFault");
static const int K_M_S_ACCESS_DENIED_FAULT_HASH = HashingUtils::HashString("KMSAccessDeniedFault");
static const int ACCESS_DENIED_FAULT_HASH = HashingUtils::HashString("AccessDeniedFault");
static const int INVALID_SUBNET_HASH = HashingUtils::HashString("InvalidSubnet");
static const int K_M_S_THROTTLING_FAULT_HASH = HashingUtils::HashString("KMSThrottlingFault");
static const int REPLICATION_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS_HASH = HashingUtils::HashString("ReplicationSubnetGroupDoesNotCoverEnoughAZs");
static const int K_M_S_KEY_NOT_ACCESSIBLE_FAULT_HASH = HashingUtils::HashString("KMSKeyNotAccessibleFault");
static const int S_N_S_NO_AUTHORIZATION_FAULT_HASH = HashingUtils::HashString("SNSNoAuthorizationFault");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == UPGRADE_DEPENDENCY_FAILURE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::UPGRADE_DEPENDENCY_FAILURE_FAULT), false);
  }
  else if (hashCode == K_M_S_DISABLED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::K_M_S_DISABLED_FAULT), false);
  }
  else if (hashCode == RESOURCE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::RESOURCE_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == STORAGE_QUOTA_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::STORAGE_QUOTA_EXCEEDED_FAULT), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::RESOURCE_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == K_M_S_INVALID_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::K_M_S_INVALID_STATE_FAULT), false);
  }
  else if (hashCode == INVALID_RESOURCE_STATE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::INVALID_RESOURCE_STATE_FAULT), false);
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
  else if (hashCode == INSUFFICIENT_RESOURCE_CAPACITY_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::INSUFFICIENT_RESOURCE_CAPACITY_FAULT), false);
  }
  else if (hashCode == S3_RESOURCE_NOT_FOUND_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::S3_RESOURCE_NOT_FOUND_FAULT), false);
  }
  else if (hashCode == SUBNET_ALREADY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::SUBNET_ALREADY_IN_USE), false);
  }
  else if (hashCode == S_N_S_INVALID_TOPIC_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::S_N_S_INVALID_TOPIC_FAULT), false);
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
  else if (hashCode == ACCESS_DENIED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::ACCESS_DENIED_FAULT), false);
  }
  else if (hashCode == INVALID_SUBNET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::INVALID_SUBNET), false);
  }
  else if (hashCode == K_M_S_THROTTLING_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::K_M_S_THROTTLING_FAULT), false);
  }
  else if (hashCode == REPLICATION_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::REPLICATION_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS), false);
  }
  else if (hashCode == K_M_S_KEY_NOT_ACCESSIBLE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::K_M_S_KEY_NOT_ACCESSIBLE_FAULT), false);
  }
  else if (hashCode == S_N_S_NO_AUTHORIZATION_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DatabaseMigrationServiceErrors::S_N_S_NO_AUTHORIZATION_FAULT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DatabaseMigrationServiceErrorMapper
} // namespace DatabaseMigrationService
} // namespace Aws
