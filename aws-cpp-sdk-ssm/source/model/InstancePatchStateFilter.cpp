﻿/*
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
#include <aws/ssm/model/InstancePatchStateFilter.h>
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

InstancePatchStateFilter::InstancePatchStateFilter() : 
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_type(InstancePatchStateOperatorType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

InstancePatchStateFilter::InstancePatchStateFilter(const JsonValue& jsonValue) : 
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_type(InstancePatchStateOperatorType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

InstancePatchStateFilter& InstancePatchStateFilter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Array<JsonValue> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = InstancePatchStateOperatorTypeMapper::GetInstancePatchStateOperatorTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue InstancePatchStateFilter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valuesHasBeenSet)
  {
   Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", InstancePatchStateOperatorTypeMapper::GetNameForInstancePatchStateOperatorType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws