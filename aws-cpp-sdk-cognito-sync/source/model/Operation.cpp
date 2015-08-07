/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-sync/model/Operation.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int replace_HASH = HashingUtils::HashString("replace");
static const int remove_HASH = HashingUtils::HashString("remove");

namespace Aws
{
namespace CognitoSync
{
namespace Model
{
namespace OperationMapper
{
Operation GetOperationForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == replace_HASH)
  {
    return Operation::replace;
  }
  else if (hashCode == remove_HASH)
  {
    return Operation::remove;
  }

  return Operation::NOT_SET;
}

Aws::String GetNameForOperation(Operation value)
{
  switch(value)
  {
  case Operation::replace:
    return "replace";
  case Operation::remove:
    return "remove";
  default:
    return "";
  }
}

} // namespace OperationMapper
} // namespace Model
} // namespace CognitoSync
} // namespace Aws
