/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ValueWithServiceIds::ValueWithServiceIds(JsonView jsonValue) : 
    m_annotationValueHasBeenSet(false),
    m_serviceIdsHasBeenSet(false)
{
  *this = jsonValue;
}

ValueWithServiceIds& ValueWithServiceIds::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AnnotationValue"))
  {
    m_annotationValue = jsonValue.GetObject("AnnotationValue");

    m_annotationValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceIds"))
  {
    Aws::Utils::Array<JsonView> serviceIdsJsonList = jsonValue.GetArray("ServiceIds");
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
   Aws::Utils::Array<JsonValue> serviceIdsJsonList(m_serviceIds.size());
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
