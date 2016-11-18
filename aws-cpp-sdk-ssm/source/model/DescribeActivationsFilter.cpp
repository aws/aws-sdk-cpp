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
#include <aws/ssm/model/DescribeActivationsFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

DescribeActivationsFilter::DescribeActivationsFilter() : 
    m_filterKey(DescribeActivationsFilterKeys::NOT_SET),
    m_filterKeyHasBeenSet(false),
    m_filterValuesHasBeenSet(false)
{
}

DescribeActivationsFilter::DescribeActivationsFilter(const JsonValue& jsonValue) : 
    m_filterKey(DescribeActivationsFilterKeys::NOT_SET),
    m_filterKeyHasBeenSet(false),
    m_filterValuesHasBeenSet(false)
{
  *this = jsonValue;
}

DescribeActivationsFilter& DescribeActivationsFilter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("FilterKey"))
  {
    m_filterKey = DescribeActivationsFilterKeysMapper::GetDescribeActivationsFilterKeysForName(jsonValue.GetString("FilterKey"));

    m_filterKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilterValues"))
  {
    Array<JsonValue> filterValuesJsonList = jsonValue.GetArray("FilterValues");
    for(unsigned filterValuesIndex = 0; filterValuesIndex < filterValuesJsonList.GetLength(); ++filterValuesIndex)
    {
      m_filterValues.push_back(filterValuesJsonList[filterValuesIndex].AsString());
    }
    m_filterValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribeActivationsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filterKeyHasBeenSet)
  {
   payload.WithString("FilterKey", DescribeActivationsFilterKeysMapper::GetNameForDescribeActivationsFilterKeys(m_filterKey));
  }

  if(m_filterValuesHasBeenSet)
  {
   Array<JsonValue> filterValuesJsonList(m_filterValues.size());
   for(unsigned filterValuesIndex = 0; filterValuesIndex < filterValuesJsonList.GetLength(); ++filterValuesIndex)
   {
     filterValuesJsonList[filterValuesIndex].AsString(m_filterValues[filterValuesIndex]);
   }
   payload.WithArray("FilterValues", std::move(filterValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws