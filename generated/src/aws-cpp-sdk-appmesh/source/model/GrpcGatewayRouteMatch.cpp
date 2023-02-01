/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/GrpcGatewayRouteMatch.h>
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

GrpcGatewayRouteMatch::GrpcGatewayRouteMatch() : 
    m_hostnameHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

GrpcGatewayRouteMatch::GrpcGatewayRouteMatch(JsonView jsonValue) : 
    m_hostnameHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
  *this = jsonValue;
}

GrpcGatewayRouteMatch& GrpcGatewayRouteMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hostname"))
  {
    m_hostname = jsonValue.GetObject("hostname");

    m_hostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata"))
  {
    Aws::Utils::Array<JsonView> metadataJsonList = jsonValue.GetArray("metadata");
    for(unsigned metadataIndex = 0; metadataIndex < metadataJsonList.GetLength(); ++metadataIndex)
    {
      m_metadata.push_back(metadataJsonList[metadataIndex].AsObject());
    }
    m_metadataHasBeenSet = true;
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

JsonValue GrpcGatewayRouteMatch::Jsonize() const
{
  JsonValue payload;

  if(m_hostnameHasBeenSet)
  {
   payload.WithObject("hostname", m_hostname.Jsonize());

  }

  if(m_metadataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metadataJsonList(m_metadata.size());
   for(unsigned metadataIndex = 0; metadataIndex < metadataJsonList.GetLength(); ++metadataIndex)
   {
     metadataJsonList[metadataIndex].AsObject(m_metadata[metadataIndex].Jsonize());
   }
   payload.WithArray("metadata", std::move(metadataJsonList));

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
