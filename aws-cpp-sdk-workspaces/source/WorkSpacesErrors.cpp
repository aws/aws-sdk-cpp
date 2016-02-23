/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/workspaces/WorkSpacesErrors.h>

using namespace Aws::Client;
using namespace Aws::WorkSpaces;
using namespace Aws::Utils;

static const int INVALID_PARAMETER_VALUES_HASH = HashingUtils::HashString("InvalidParameterValuesException");
static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceLimitExceededException");
static const int RESOURCE_UNAVAILABLE_HASH = HashingUtils::HashString("ResourceUnavailableException");

namespace Aws
{
namespace WorkSpaces
{
namespace WorkSpacesErrorMapper
{

AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_PARAMETER_VALUES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::INVALID_PARAMETER_VALUES), false);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::RESOURCE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == RESOURCE_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::RESOURCE_UNAVAILABLE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WorkSpacesErrorMapper
} // namespace WorkSpaces
} // namespace Aws
