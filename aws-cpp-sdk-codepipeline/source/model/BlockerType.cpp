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
#include <aws/codepipeline/model/BlockerType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Schedule_HASH = HashingUtils::HashString("Schedule");

namespace Aws
{
namespace CodePipeline
{
namespace Model
{
namespace BlockerTypeMapper
{


BlockerType GetBlockerTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Schedule_HASH)
  {
     return BlockerType::Schedule;
  }
  return BlockerType::NOT_SET;
}

Aws::String GetNameForBlockerType(BlockerType enumValue)
{
  switch(value)
  {
  case BlockerType::Schedule:
    return "Schedule";
  default:
    return "";
  }
}

} // namespace BlockerTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
