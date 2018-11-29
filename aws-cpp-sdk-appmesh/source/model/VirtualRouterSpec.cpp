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

#include <aws/appmesh/model/VirtualRouterSpec.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

VirtualRouterSpec::VirtualRouterSpec() : 
    m_serviceNamesHasBeenSet(false)
{
}

VirtualRouterSpec::VirtualRouterSpec(JsonView jsonValue) : 
    m_serviceNamesHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualRouterSpec& VirtualRouterSpec::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceNames"))
  {
    Array<JsonView> serviceNamesJsonList = jsonValue.GetArray("serviceNames");
    for(unsigned serviceNamesIndex = 0; serviceNamesIndex < serviceNamesJsonList.GetLength(); ++serviceNamesIndex)
    {
      m_serviceNames.push_back(serviceNamesJsonList[serviceNamesIndex].AsString());
    }
    m_serviceNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualRouterSpec::Jsonize() const
{
  JsonValue payload;

  if(m_serviceNamesHasBeenSet)
  {
   Array<JsonValue> serviceNamesJsonList(m_serviceNames.size());
   for(unsigned serviceNamesIndex = 0; serviceNamesIndex < serviceNamesJsonList.GetLength(); ++serviceNamesIndex)
   {
     serviceNamesJsonList[serviceNamesIndex].AsString(m_serviceNames[serviceNamesIndex]);
   }
   payload.WithArray("serviceNames", std::move(serviceNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
