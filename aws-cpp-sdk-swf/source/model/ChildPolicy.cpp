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
#include <aws/swf/model/ChildPolicy.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int TERMINATE_HASH = HashingUtils::HashString("TERMINATE");
static const int REQUEST_CANCEL_HASH = HashingUtils::HashString("REQUEST_CANCEL");
static const int ABANDON_HASH = HashingUtils::HashString("ABANDON");

namespace Aws
{
namespace SWF
{
namespace Model
{
namespace ChildPolicyMapper
{
ChildPolicy GetChildPolicyForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == TERMINATE_HASH)
  {
    return ChildPolicy::TERMINATE;
  }
  else if (hashCode == REQUEST_CANCEL_HASH)
  {
    return ChildPolicy::REQUEST_CANCEL;
  }
  else if (hashCode == ABANDON_HASH)
  {
    return ChildPolicy::ABANDON;
  }

  return ChildPolicy::NOT_SET;
}

Aws::String GetNameForChildPolicy(ChildPolicy value)
{
  switch(value)
  {
  case ChildPolicy::TERMINATE:
    return "TERMINATE";
  case ChildPolicy::REQUEST_CANCEL:
    return "REQUEST_CANCEL";
  case ChildPolicy::ABANDON:
    return "ABANDON";
  default:
    return "";
  }
}

} // namespace ChildPolicyMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
