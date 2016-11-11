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
#include <aws/ssm/model/InstanceInformationFilter.h>
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

InstanceInformationFilter::InstanceInformationFilter() : 
    m_key(InstanceInformationFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valueSetHasBeenSet(false)
{
}

InstanceInformationFilter::InstanceInformationFilter(const JsonValue& jsonValue) : 
    m_key(InstanceInformationFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valueSetHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceInformationFilter& InstanceInformationFilter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = InstanceInformationFilterKeyMapper::GetInstanceInformationFilterKeyForName(jsonValue.GetString("key"));

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("valueSet"))
  {
    Array<JsonValue> valueSetJsonList = jsonValue.GetArray("valueSet");
    for(unsigned valueSetIndex = 0; valueSetIndex < valueSetJsonList.GetLength(); ++valueSetIndex)
    {
      m_valueSet.push_back(valueSetJsonList[valueSetIndex].AsString());
    }
    m_valueSetHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceInformationFilter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", InstanceInformationFilterKeyMapper::GetNameForInstanceInformationFilterKey(m_key));
  }

  if(m_valueSetHasBeenSet)
  {
   Array<JsonValue> valueSetJsonList(m_valueSet.size());
   for(unsigned valueSetIndex = 0; valueSetIndex < valueSetJsonList.GetLength(); ++valueSetIndex)
   {
     valueSetJsonList[valueSetIndex].AsString(m_valueSet[valueSetIndex]);
   }
   payload.WithArray("valueSet", std::move(valueSetJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws