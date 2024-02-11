/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/auditmanager/AuditManagerErrors.h>
#include <aws/auditmanager/model/ResourceNotFoundException.h>
#include <aws/auditmanager/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AuditManager;
using namespace Aws::AuditManager::Model;

namespace Aws
{
namespace AuditManager
{
template<> AWS_AUDITMANAGER_API ResourceNotFoundException AuditManagerError::GetModeledError()
{
  assert(this->GetErrorType() == AuditManagerErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_AUDITMANAGER_API ValidationException AuditManagerError::GetModeledError()
{
  assert(this->GetErrorType() == AuditManagerErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace AuditManagerErrorMapper
{

static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AuditManagerErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AuditManagerErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AuditManagerErrorMapper
} // namespace AuditManager
} // namespace Aws
