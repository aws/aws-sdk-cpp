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

static constexpr uint32_t CLIENT_HASH = ConstExprHashingUtils::HashString("ClientException");
static constexpr uint32_t RESOURCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExistsException");
static constexpr uint32_t RESOURCE_DEPENDENCY_HASH = ConstExprHashingUtils::HashString("ResourceDependencyException");
static constexpr uint32_t FORBIDDEN_HASH = ConstExprHashingUtils::HashString("ForbiddenException");
static constexpr uint32_t IDEMPOTENT_PARAMETER_MISMATCH_HASH = ConstExprHashingUtils::HashString("IdempotentParameterMismatchException");
static constexpr uint32_t INVALID_PAGINATION_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidPaginationTokenException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INVALID_VERSION_NUMBER_HASH = ConstExprHashingUtils::HashString("InvalidVersionNumberException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t CALL_RATE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("CallRateLimitExceededException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t SERVICE_HASH = ConstExprHashingUtils::HashString("ServiceException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
