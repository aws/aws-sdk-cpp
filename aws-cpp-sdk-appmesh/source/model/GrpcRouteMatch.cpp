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

#include <aws/appmesh/model/GrpcRouteMatch.h>
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

GrpcRouteMatch::GrpcRouteMatch() : 
    m_metadataHasBeenSet(false),
    m_methodNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

GrpcRouteMatch::GrpcRouteMatch(JsonView jsonValue) : 
    m_metadataHasBeenSet(false),
    m_methodNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
  *this = jsonValue;
}

GrpcRouteMatch& GrpcRouteMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metadata"))
  {
    Array<JsonView> metadataJsonList = jsonValue.GetArray("metadata");
    for(unsigned metadataIndex = 0; metadataIndex < metadataJsonList.GetLength(); ++metadataIndex)
    {
      m_metadata.push_back(metadataJsonList[metadataIndex].AsObject());
    }
    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("methodName"))
  {
    m_methodName = jsonValue.GetString("methodName");

    m_methodNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue GrpcRouteMatch::Jsonize() const
{
  JsonValue payload;

  if(m_metadataHasBeenSet)
  {
   Array<JsonValue> metadataJsonList(m_metadata.size());
   for(unsigned metadataIndex = 0; metadataIndex < metadataJsonList.GetLength(); ++metadataIndex)
   {
     metadataJsonList[metadataIndex].AsObject(m_metadata[metadataIndex].Jsonize());
   }
   payload.WithArray("metadata", std::move(metadataJsonList));

  }

  if(m_methodNameHasBeenSet)
  {
   payload.WithString("methodName", m_methodName);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
