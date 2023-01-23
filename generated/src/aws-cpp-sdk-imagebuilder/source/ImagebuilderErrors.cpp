/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/imagebuilder/ImagebuilderErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::imagebuilder;

namespace Aws
{
namespace imagebuilder
{
namespace ImagebuilderErrorMapper
{

static const int CLIENT_HASH = HashingUtils::HashString("ClientException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int RESOURCE_DEPENDENCY_HASH = HashingUtils::HashString("ResourceDependencyException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int IDEMPOTENT_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IdempotentParameterMismatchException");
static const int INVALID_PAGINATION_TOKEN_HASH = HashingUtils::HashString("InvalidPaginationTokenException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INVALID_VERSION_NUMBER_HASH = HashingUtils::HashString("InvalidVersionNumberException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int CALL_RATE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("CallRateLimitExceededException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int SERVICE_HASH = HashingUtils::HashString("ServiceException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImagebuilderErrors::CLIENT), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImagebuilderErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == RESOURCE_DEPENDENCY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImagebuilderErrors::RESOURCE_DEPENDENCY), false);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImagebuilderErrors::FORBIDDEN), false);
  }
  else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImagebuilderErrors::IDEMPOTENT_PARAMETER_MISMATCH), false);
  }
  else if (hashCode == INVALID_PAGINATION_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImagebuilderErrors::INVALID_PAGINATION_TOKEN), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImagebuilderErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INVALID_VERSION_NUMBER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImagebuilderErrors::INVALID_VERSION_NUMBER), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImagebuilderErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == CALL_RATE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImagebuilderErrors::CALL_RATE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImagebuilderErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImagebuilderErrors::SERVICE), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImagebuilderErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ImagebuilderErrorMapper
} // namespace imagebuilder
} // namespace Aws
