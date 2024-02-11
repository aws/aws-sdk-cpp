/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/appintegrations/AppIntegrationsServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AppIntegrationsService;

namespace Aws
{
namespace AppIntegrationsService
{
namespace AppIntegrationsServiceErrorMapper
{

static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceError");
static const int DUPLICATE_RESOURCE_HASH = HashingUtils::HashString("DuplicateResourceException");
static const int RESOURCE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ResourceQuotaExceededException");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperationException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppIntegrationsServiceErrors::INTERNAL_SERVICE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DUPLICATE_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppIntegrationsServiceErrors::DUPLICATE_RESOURCE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppIntegrationsServiceErrors::RESOURCE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppIntegrationsServiceErrors::UNSUPPORTED_OPERATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppIntegrationsServiceErrors::INVALID_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AppIntegrationsServiceErrorMapper
} // namespace AppIntegrationsService
} // namespace Aws
