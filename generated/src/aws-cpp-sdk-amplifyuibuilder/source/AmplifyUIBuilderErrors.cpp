/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilderErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AmplifyUIBuilder;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace AmplifyUIBuilderErrorMapper
{

static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t UNAUTHORIZED_HASH = ConstExprHashingUtils::HashString("UnauthorizedException");
static constexpr uint32_t RESOURCE_CONFLICT_HASH = ConstExprHashingUtils::HashString("ResourceConflictException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AmplifyUIBuilderErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AmplifyUIBuilderErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AmplifyUIBuilderErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AmplifyUIBuilderErrors::UNAUTHORIZED), false);
  }
  else if (hashCode == RESOURCE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AmplifyUIBuilderErrors::RESOURCE_CONFLICT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AmplifyUIBuilderErrorMapper
} // namespace AmplifyUIBuilder
} // namespace Aws
