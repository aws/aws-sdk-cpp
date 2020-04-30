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
#include <aws/iotsitewise/IoTSiteWiseErrors.h>

using namespace Aws::Client;
using namespace Aws::IoTSiteWise;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace IoTSiteWiseErrorMapper
{

static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int CONFLICTING_OPERATION_HASH = HashingUtils::HashString("ConflictingOperationException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTSiteWiseErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTSiteWiseErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTSiteWiseErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == CONFLICTING_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTSiteWiseErrors::CONFLICTING_OPERATION), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTSiteWiseErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IoTSiteWiseErrorMapper
} // namespace IoTSiteWise
} // namespace Aws
