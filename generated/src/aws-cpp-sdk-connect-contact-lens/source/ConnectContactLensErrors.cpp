/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/connect-contact-lens/ConnectContactLensErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ConnectContactLens;

namespace Aws
{
namespace ConnectContactLens
{
namespace ConnectContactLensErrorMapper
{

static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectContactLensErrors::INTERNAL_SERVICE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectContactLensErrors::INVALID_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ConnectContactLensErrorMapper
} // namespace ConnectContactLens
} // namespace Aws
