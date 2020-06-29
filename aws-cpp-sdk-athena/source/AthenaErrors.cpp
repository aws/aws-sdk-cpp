/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/athena/AthenaErrors.h>

using namespace Aws::Client;
using namespace Aws::Athena;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace AthenaErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int METADATA_HASH = HashingUtils::HashString("MetadataException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AthenaErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == METADATA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AthenaErrors::METADATA), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AthenaErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AthenaErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AthenaErrorMapper
} // namespace Athena
} // namespace Aws
