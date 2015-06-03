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
#include <aws/datapipeline/model/ParameterObject.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ParameterObject::ParameterObject()
{
}

ParameterObject::ParameterObject(const JsonValue& jsonValue)
{
  *this = jsonValue;
}

ParameterObject& ParameterObject::operator =(const JsonValue& jsonValue)
{
  m_id = jsonValue.GetString("id");

  Array<JsonValue> attributesJsonList = jsonValue.GetArray("attributes");
  for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
  {
    m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
  }
  return *this;
}

JsonValue ParameterObject::Jsonize() const
{
  JsonValue payload;

  payload.WithString("id", m_id);

  Array<JsonValue> attributesJsonList(m_attributes.size());
  for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
  {
    attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
  }
  payload.WithArray("attributes", std::move(attributesJsonList));

  return std::move(payload);
}