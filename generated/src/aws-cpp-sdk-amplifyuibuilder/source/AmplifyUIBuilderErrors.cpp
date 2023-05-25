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

static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int RESOURCE_CONFLICT_HASH = HashingUtils::HashString("ResourceConflictException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
