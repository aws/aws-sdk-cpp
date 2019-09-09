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
#include <aws/qldb-session/QLDBSessionErrors.h>

using namespace Aws::Client;
using namespace Aws::QLDBSession;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDBSession
{
namespace QLDBSessionErrorMapper
{

static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INVALID_SESSION_HASH = HashingUtils::HashString("InvalidSessionException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int OCC_CONFLICT_HASH = HashingUtils::HashString("OccConflictException");
static const int RATE_EXCEEDED_HASH = HashingUtils::HashString("RateExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBSessionErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_SESSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBSessionErrors::INVALID_SESSION), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBSessionErrors::BAD_REQUEST), false);
  }
  else if (hashCode == OCC_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBSessionErrors::OCC_CONFLICT), false);
  }
  else if (hashCode == RATE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBSessionErrors::RATE_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace QLDBSessionErrorMapper
} // namespace QLDBSession
} // namespace Aws
