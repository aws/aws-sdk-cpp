/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/location/LocationServiceErrors.h>
#include <aws/location/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::LocationService;
using namespace Aws::LocationService::Model;

namespace Aws
{
namespace LocationService
{
template<> AWS_LOCATIONSERVICE_API ValidationException LocationServiceError::GetModeledError()
{
  assert(this->GetErrorType() == LocationServiceErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace LocationServiceErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LocationServiceErrors::CONFLICT), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LocationServiceErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LocationServiceErrorMapper
} // namespace LocationService
} // namespace Aws
