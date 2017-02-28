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
#include <aws/organizations/model/HandshakeResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

HandshakeResource::HandshakeResource() : 
    m_valueHasBeenSet(false),
    m_type(HandshakeResourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
}

HandshakeResource::HandshakeResource(const JsonValue& jsonValue) : 
    m_valueHasBeenSet(false),
    m_type(HandshakeResourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
  *this = jsonValue;
}

HandshakeResource& HandshakeResource::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = HandshakeResourceTypeMapper::GetHandshakeResourceTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resources"))
  {
    Array<JsonValue> resourcesJsonList = jsonValue.GetArray("Resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue HandshakeResource::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", HandshakeResourceTypeMapper::GetNameForHandshakeResourceType(m_type));
  }

  if(m_resourcesHasBeenSet)
  {
   Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
   }
   payload.WithArray("Resources", std::move(resourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws