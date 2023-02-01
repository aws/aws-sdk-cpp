/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/athena/AthenaErrors.h>
#include <aws/athena/model/ResourceNotFoundException.h>
#include <aws/athena/model/TooManyRequestsException.h>
#include <aws/athena/model/InvalidRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Athena;
using namespace Aws::Athena::Model;

namespace Aws
{
namespace Athena
{
template<> AWS_ATHENA_API ResourceNotFoundException AthenaError::GetModeledError()
{
  assert(this->GetErrorType() == AthenaErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_ATHENA_API TooManyRequestsException AthenaError::GetModeledError()
{
  assert(this->GetErrorType() == AthenaErrors::TOO_MANY_REQUESTS);
  return TooManyRequestsException(this->GetJsonPayload().View());
}

template<> AWS_ATHENA_API InvalidRequestException AthenaError::GetModeledError()
{
  assert(this->GetErrorType() == AthenaErrors::INVALID_REQUEST);
  return InvalidRequestException(this->GetJsonPayload().View());
}

namespace AthenaErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int METADATA_HASH = HashingUtils::HashString("MetadataException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int SESSION_ALREADY_EXISTS_HASH = HashingUtils::HashString("SessionAlreadyExistsException");
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
  else if (hashCode == SESSION_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AthenaErrors::SESSION_ALREADY_EXISTS), false);
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
