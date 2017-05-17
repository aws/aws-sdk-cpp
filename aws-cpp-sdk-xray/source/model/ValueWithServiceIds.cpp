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

#include <aws/xray/model/ValueWithServiceIds.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

ValueWithServiceIds::ValueWithServiceIds() : 
    m_annotationValueHasBeenSet(false),
    m_serviceIdsHasBeenSet(false)
{
}

ValueWithServiceIds::ValueWithServiceIds(const JsonValue& jsonValue) : 
    m_annotationValueHasBeenSet(false),
    m_serviceIdsHasBeenSet(false)
{
  *this = jsonValue;
}

ValueWithServiceIds& ValueWithServiceIds::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AnnotationValue"))
  {
    m_annotationValue = jsonValue.GetObject("AnnotationValue");

    m_annotationValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceIds"))
  {
    Array<JsonValue> serviceIdsJsonList = jsonValue.GetArray("ServiceIds");
    for(unsigned serviceIdsIndex = 0; serviceIdsIndex < serviceIdsJsonList.GetLength(); ++serviceIdsIndex)
    {
      m_serviceIds.push_back(serviceIdsJsonList[serviceIdsIndex].AsObject());
    }
    m_serviceIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue ValueWithServiceIds::Jsonize() const
{
  JsonValue payload;

  if(m_annotationValueHasBeenSet)
  {
   payload.WithObject("AnnotationValue", m_annotationValue.Jsonize());

  }

  if(m_serviceIdsHasBeenSet)
  {
   Array<JsonValue> serviceIdsJsonList(m_serviceIds.size());
   for(unsigned serviceIdsIndex = 0; serviceIdsIndex < serviceIdsJsonList.GetLength(); ++serviceIdsIndex)
   {
     serviceIdsJsonList[serviceIdsIndex].AsObject(m_serviceIds[serviceIdsIndex].Jsonize());
   }
   payload.WithArray("ServiceIds", std::move(serviceIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws