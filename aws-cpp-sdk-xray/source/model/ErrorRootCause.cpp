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

#include <aws/xray/model/ErrorRootCause.h>
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

ErrorRootCause::ErrorRootCause() : 
    m_servicesHasBeenSet(false)
{
}

ErrorRootCause::ErrorRootCause(JsonView jsonValue) : 
    m_servicesHasBeenSet(false)
{
  *this = jsonValue;
}

ErrorRootCause& ErrorRootCause::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Services"))
  {
    Array<JsonView> servicesJsonList = jsonValue.GetArray("Services");
    for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
    {
      m_services.push_back(servicesJsonList[servicesIndex].AsObject());
    }
    m_servicesHasBeenSet = true;
  }

  return *this;
}

JsonValue ErrorRootCause::Jsonize() const
{
  JsonValue payload;

  if(m_servicesHasBeenSet)
  {
   Array<JsonValue> servicesJsonList(m_services.size());
   for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
   {
     servicesJsonList[servicesIndex].AsObject(m_services[servicesIndex].Jsonize());
   }
   payload.WithArray("Services", std::move(servicesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
