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
#include <aws/cloudformation/model/ResourceSignalStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
static const int FAILURE_HASH = HashingUtils::HashString("FAILURE");

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
namespace ResourceSignalStatusMapper
{
ResourceSignalStatus GetResourceSignalStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == SUCCESS_HASH)
  {
    return ResourceSignalStatus::SUCCESS;
  }
  else if (hashCode == FAILURE_HASH)
  {
    return ResourceSignalStatus::FAILURE;
  }

  return ResourceSignalStatus::NOT_SET;
}

Aws::String GetNameForResourceSignalStatus(ResourceSignalStatus value)
{
  switch(value)
  {
  case ResourceSignalStatus::SUCCESS:
    return "SUCCESS";
  case ResourceSignalStatus::FAILURE:
    return "FAILURE";
  default:
    return "";
  }
}

} // namespace ResourceSignalStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
