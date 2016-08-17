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
#include <aws/inspector/InspectorErrors.h>

using namespace Aws::Client;
using namespace Aws::Inspector;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace InspectorErrorMapper
{

static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int OPERATION_IN_PROGRESS_HASH = HashingUtils::HashString("OperationInProgressException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int INVALID_CROSS_ACCOUNT_ROLE_HASH = HashingUtils::HashString("InvalidCrossAccountRoleException");
static const int NO_SUCH_ENTITY_HASH = HashingUtils::HashString("NoSuchEntityException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InspectorErrors::INTERNAL), false);
  }
  else if (hashCode == OPERATION_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InspectorErrors::OPERATION_IN_PROGRESS), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InspectorErrors::INVALID_INPUT), false);
  }
  else if (hashCode == INVALID_CROSS_ACCOUNT_ROLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InspectorErrors::INVALID_CROSS_ACCOUNT_ROLE), false);
  }
  else if (hashCode == NO_SUCH_ENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InspectorErrors::NO_SUCH_ENTITY), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace InspectorErrorMapper
} // namespace Inspector
} // namespace Aws
