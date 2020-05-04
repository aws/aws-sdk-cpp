/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AthenaErrors::INTERNAL_SERVER), false);
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
