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
#include <aws/swf/model/RequestCancelActivityTaskFailedCause.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int ACTIVITY_ID_UNKNOWN_HASH = HashingUtils::HashString("ACTIVITY_ID_UNKNOWN");
static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OPERATION_NOT_PERMITTED");

namespace Aws
{
namespace SWF
{
namespace Model
{
namespace RequestCancelActivityTaskFailedCauseMapper
{


RequestCancelActivityTaskFailedCause GetRequestCancelActivityTaskFailedCauseForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVITY_ID_UNKNOWN_HASH)
  {
     return RequestCancelActivityTaskFailedCause::ACTIVITY_ID_UNKNOWN;
  }
  else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
     return RequestCancelActivityTaskFailedCause::OPERATION_NOT_PERMITTED;
  }
  return RequestCancelActivityTaskFailedCause::NOT_SET;
}

Aws::String GetNameForRequestCancelActivityTaskFailedCause(RequestCancelActivityTaskFailedCause enumValue)
{
  switch(enumValue)
  {
  case RequestCancelActivityTaskFailedCause::ACTIVITY_ID_UNKNOWN:
    return "ACTIVITY_ID_UNKNOWN";
  case RequestCancelActivityTaskFailedCause::OPERATION_NOT_PERMITTED:
    return "OPERATION_NOT_PERMITTED";
  default:
    return "";
  }
}

} // namespace RequestCancelActivityTaskFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
