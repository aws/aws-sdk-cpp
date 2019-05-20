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
#include <aws/mediapackage-vod/MediaPackageVodErrors.h>

using namespace Aws::Client;
using namespace Aws::MediaPackageVod;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackageVod
{
namespace MediaPackageVodErrorMapper
{

static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int UNPROCESSABLE_ENTITY_HASH = HashingUtils::HashString("UnprocessableEntityException");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("InternalServerErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaPackageVodErrors::NOT_FOUND), false);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaPackageVodErrors::FORBIDDEN), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaPackageVodErrors::TOO_MANY_REQUESTS), false);
  }
  else if (hashCode == UNPROCESSABLE_ENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaPackageVodErrors::UNPROCESSABLE_ENTITY), false);
  }
  else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaPackageVodErrors::INTERNAL_SERVER_ERROR), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MediaPackageVodErrorMapper
} // namespace MediaPackageVod
} // namespace Aws
