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
#include <aws/codecommit/model/SortByEnum.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int repositoryName_HASH = HashingUtils::HashString("repositoryName");
static const int lastModifiedDate_HASH = HashingUtils::HashString("lastModifiedDate");

namespace Aws
{
namespace CodeCommit
{
namespace Model
{
namespace SortByEnumMapper
{


SortByEnum GetSortByEnumForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == repositoryName_HASH)
  {
     return SortByEnum::repositoryName;
  }
  else if (hashCode == lastModifiedDate_HASH)
  {
     return SortByEnum::lastModifiedDate;
  }
  return SortByEnum::NOT_SET;
}

Aws::String GetNameForSortByEnum(SortByEnum value)
{
  switch(value)
  {
  case SortByEnum::repositoryName:
    return "repositoryName";
  case SortByEnum::lastModifiedDate:
    return "lastModifiedDate";
  default:
    return "";
  }
}

} // namespace SortByEnumMapper
} // namespace Model
} // namespace CodeCommit
} // namespace Aws
