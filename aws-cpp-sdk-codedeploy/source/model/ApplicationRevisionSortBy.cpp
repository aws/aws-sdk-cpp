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
#include <aws/codedeploy/model/ApplicationRevisionSortBy.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int registerTime_HASH = HashingUtils::HashString("registerTime");
static const int firstUsedTime_HASH = HashingUtils::HashString("firstUsedTime");
static const int lastUsedTime_HASH = HashingUtils::HashString("lastUsedTime");

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
namespace ApplicationRevisionSortByMapper
{


ApplicationRevisionSortBy GetApplicationRevisionSortByForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == registerTime_HASH)
  {
     return ApplicationRevisionSortBy::registerTime;
  }
  else if (hashCode == firstUsedTime_HASH)
  {
     return ApplicationRevisionSortBy::firstUsedTime;
  }
  else if (hashCode == lastUsedTime_HASH)
  {
     return ApplicationRevisionSortBy::lastUsedTime;
  }
  return ApplicationRevisionSortBy::NOT_SET;
}

Aws::String GetNameForApplicationRevisionSortBy(ApplicationRevisionSortBy enumValue)
{
  switch(value)
  {
  case ApplicationRevisionSortBy::registerTime:
    return "registerTime";
  case ApplicationRevisionSortBy::firstUsedTime:
    return "firstUsedTime";
  case ApplicationRevisionSortBy::lastUsedTime:
    return "lastUsedTime";
  default:
    return "";
  }
}

} // namespace ApplicationRevisionSortByMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
