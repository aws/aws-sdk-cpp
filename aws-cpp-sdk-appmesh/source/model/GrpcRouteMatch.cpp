/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_port(0),
    m_portHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

GrpcRouteMatch::GrpcRouteMatch(JsonView jsonValue) : 
    m_metadataHasBeenSet(false),
    m_methodNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
  *this = jsonValue;
}

GrpcRouteMatch& GrpcRouteMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metadata"))
  {
    Aws::Utils::Array<JsonView> metadataJsonList = jsonValue.GetArray("metadata");
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

  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

    m_portHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> metadataJsonList(m_metadata.size());
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

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

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
