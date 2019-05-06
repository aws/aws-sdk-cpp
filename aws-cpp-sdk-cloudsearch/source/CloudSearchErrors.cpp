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
#include <aws/cloudsearch/CloudSearchErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudSearch;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearch
{
namespace CloudSearchErrorMapper
{

static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int DISABLED_OPERATION_HASH = HashingUtils::HashString("DisabledAction");
static const int BASE_HASH = HashingUtils::HashString("BaseException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceeded");
static const int INVALID_TYPE_HASH = HashingUtils::HashString("InvalidType");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudSearchErrors::INTERNAL), true);
  }
  else if (hashCode == DISABLED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudSearchErrors::DISABLED_OPERATION), false);
  }
  else if (hashCode == BASE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudSearchErrors::BASE), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudSearchErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudSearchErrors::INVALID_TYPE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudSearchErrorMapper
} // namespace CloudSearch
} // namespace Aws
