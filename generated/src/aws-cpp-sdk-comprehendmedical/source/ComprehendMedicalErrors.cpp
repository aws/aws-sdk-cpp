/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/comprehendmedical/ComprehendMedicalErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ComprehendMedical;

namespace Aws
{
namespace ComprehendMedical
{
namespace ComprehendMedicalErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int INVALID_ENCODING_HASH = HashingUtils::HashString("InvalidEncodingException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int TEXT_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TextSizeLimitExceededException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendMedicalErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == INVALID_ENCODING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendMedicalErrors::INVALID_ENCODING), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendMedicalErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == TEXT_SIZE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendMedicalErrors::TEXT_SIZE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendMedicalErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ComprehendMedicalErrorMapper
} // namespace ComprehendMedical
} // namespace Aws
