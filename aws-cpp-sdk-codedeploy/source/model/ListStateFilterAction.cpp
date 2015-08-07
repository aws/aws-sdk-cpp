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
#include <aws/codedeploy/model/ListStateFilterAction.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int include_HASH = HashingUtils::HashString("include");
static const int exclude_HASH = HashingUtils::HashString("exclude");
static const int ignore_HASH = HashingUtils::HashString("ignore");

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
namespace ListStateFilterActionMapper
{
ListStateFilterAction GetListStateFilterActionForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == include_HASH)
  {
    return ListStateFilterAction::include;
  }
  else if (hashCode == exclude_HASH)
  {
    return ListStateFilterAction::exclude;
  }
  else if (hashCode == ignore_HASH)
  {
    return ListStateFilterAction::ignore;
  }

  return ListStateFilterAction::NOT_SET;
}

Aws::String GetNameForListStateFilterAction(ListStateFilterAction value)
{
  switch(value)
  {
  case ListStateFilterAction::include:
    return "include";
  case ListStateFilterAction::exclude:
    return "exclude";
  case ListStateFilterAction::ignore:
    return "ignore";
  default:
    return "";
  }
}

} // namespace ListStateFilterActionMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
