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
#include <aws/awstransfer/TransferErrors.h>

using namespace Aws::Client;
using namespace Aws::Transfer;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace TransferErrorMapper
{

static const int RESOURCE_EXISTS_HASH = HashingUtils::HashString("ResourceExistsException");
static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceError");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TransferErrors::RESOURCE_EXISTS), false);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TransferErrors::CONFLICT), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TransferErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TransferErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TransferErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace TransferErrorMapper
} // namespace Transfer
} // namespace Aws
