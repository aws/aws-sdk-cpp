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
#include <aws/es/ElasticsearchServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::ElasticsearchService;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace ElasticsearchServiceErrorMapper
{

static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int DISABLED_OPERATION_HASH = HashingUtils::HashString("DisabledOperationException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int BASE_HASH = HashingUtils::HashString("BaseException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INVALID_TYPE_HASH = HashingUtils::HashString("InvalidTypeException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticsearchServiceErrors::INTERNAL), false);
  }
  else if (hashCode == DISABLED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticsearchServiceErrors::DISABLED_OPERATION), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticsearchServiceErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == BASE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticsearchServiceErrors::BASE), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticsearchServiceErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticsearchServiceErrors::INVALID_TYPE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ElasticsearchServiceErrorMapper
} // namespace ElasticsearchService
} // namespace Aws
