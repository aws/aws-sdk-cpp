/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/devicefarm/model/DeviceFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

DeviceFilter::DeviceFilter() : 
    m_attribute(DeviceFilterAttribute::NOT_SET),
    m_attributeHasBeenSet(false),
    m_operator(RuleOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

DeviceFilter::DeviceFilter(JsonView jsonValue) : 
    m_attribute(DeviceFilterAttribute::NOT_SET),
    m_attributeHasBeenSet(false),
    m_operator(RuleOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceFilter& DeviceFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attribute"))
  {
    m_attribute = DeviceFilterAttributeMapper::GetDeviceFilterAttributeForName(jsonValue.GetString("attribute"));

    m_attributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operator"))
  {
    m_operator = RuleOperatorMapper::GetRuleOperatorForName(jsonValue.GetString("operator"));

    m_operatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("values"))
  {
    Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceFilter::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("attribute", DeviceFilterAttributeMapper::GetNameForDeviceFilterAttribute(m_attribute));
  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", RuleOperatorMapper::GetNameForRuleOperator(m_operator));
  }

  if(m_valuesHasBeenSet)
  {
   Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
