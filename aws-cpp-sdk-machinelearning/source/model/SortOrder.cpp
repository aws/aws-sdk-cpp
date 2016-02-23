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
#include <aws/machinelearning/model/SortOrder.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int asc_HASH = HashingUtils::HashString("asc");
static const int dsc_HASH = HashingUtils::HashString("dsc");

namespace Aws
{
namespace MachineLearning
{
namespace Model
{
namespace SortOrderMapper
{


SortOrder GetSortOrderForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == asc_HASH)
  {
     return SortOrder::asc;
  }
  else if (hashCode == dsc_HASH)
  {
     return SortOrder::dsc;
  }
  return SortOrder::NOT_SET;
}

Aws::String GetNameForSortOrder(SortOrder enumValue)
{
  switch(enumValue)
  {
  case SortOrder::asc:
    return "asc";
  case SortOrder::dsc:
    return "dsc";
  default:
    return "";
  }
}

} // namespace SortOrderMapper
} // namespace Model
} // namespace MachineLearning
} // namespace Aws
