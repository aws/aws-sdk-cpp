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
#include <aws/ecs/model/Resource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

Resource::Resource() : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_longValue(0),
    m_longValueHasBeenSet(false),
    m_integerValue(0),
    m_integerValueHasBeenSet(false),
    m_stringSetValueHasBeenSet(false)
{
}

Resource::Resource(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_longValue(0),
    m_longValueHasBeenSet(false),
    m_integerValue(0),
    m_integerValueHasBeenSet(false),
    m_stringSetValueHasBeenSet(false)
{
  *this = jsonValue;
}

Resource& Resource::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("doubleValue"))
  {
    m_doubleValue = jsonValue.GetDouble("doubleValue");

    m_doubleValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("longValue"))
  {
    m_longValue = jsonValue.GetInt64("longValue");

    m_longValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("integerValue"))
  {
    m_integerValue = jsonValue.GetInteger("integerValue");

    m_integerValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringSetValue"))
  {
    Array<JsonValue> stringSetValueJsonList = jsonValue.GetArray("stringSetValue");
    for(unsigned stringSetValueIndex = 0; stringSetValueIndex < stringSetValueJsonList.GetLength(); ++stringSetValueIndex)
    {
      m_stringSetValue.push_back(stringSetValueJsonList[stringSetValueIndex].AsString());
    }
    m_stringSetValueHasBeenSet = true;
  }

  return *this;
}

JsonValue Resource::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_doubleValueHasBeenSet)
  {
   payload.WithDouble("doubleValue", m_doubleValue);

  }

  if(m_longValueHasBeenSet)
  {
   payload.WithInt64("longValue", m_longValue);

  }

  if(m_integerValueHasBeenSet)
  {
   payload.WithInteger("integerValue", m_integerValue);

  }

  if(m_stringSetValueHasBeenSet)
  {
   Array<JsonValue> stringSetValueJsonList(m_stringSetValue.size());
   for(unsigned stringSetValueIndex = 0; stringSetValueIndex < stringSetValueJsonList.GetLength(); ++stringSetValueIndex)
   {
     stringSetValueJsonList[stringSetValueIndex].AsString(m_stringSetValue[stringSetValueIndex]);
   }
   payload.WithArray("stringSetValue", std::move(stringSetValueJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws