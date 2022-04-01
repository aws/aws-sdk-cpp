/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/appflow/AppflowErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Appflow;

namespace Aws
{
namespace Appflow
{
namespace AppflowErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int CONNECTOR_AUTHENTICATION_HASH = HashingUtils::HashString("ConnectorAuthenticationException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int CONNECTOR_SERVER_HASH = HashingUtils::HashString("ConnectorServerException");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperationException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppflowErrors::CONFLICT), false);
  }
  else if (hashCode == CONNECTOR_AUTHENTICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppflowErrors::CONNECTOR_AUTHENTICATION), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppflowErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppflowErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == CONNECTOR_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppflowErrors::CONNECTOR_SERVER), false);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppflowErrors::UNSUPPORTED_OPERATION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AppflowErrorMapper
} // namespace Appflow
} // namespace Aws
