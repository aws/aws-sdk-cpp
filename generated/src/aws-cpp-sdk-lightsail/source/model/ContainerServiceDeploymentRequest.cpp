/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContainerServiceDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

ContainerServiceDeploymentRequest::ContainerServiceDeploymentRequest() : 
    m_containersHasBeenSet(false),
    m_publicEndpointHasBeenSet(false)
{
}

ContainerServiceDeploymentRequest::ContainerServiceDeploymentRequest(JsonView jsonValue) : 
    m_containersHasBeenSet(false),
    m_publicEndpointHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerServiceDeploymentRequest& ContainerServiceDeploymentRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containers"))
  {
    Aws::Map<Aws::String, JsonView> containersJsonMap = jsonValue.GetObject("containers").GetAllObjects();
    for(auto& containersItem : containersJsonMap)
    {
      m_containers[containersItem.first] = containersItem.second.AsObject();
    }
    m_containersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publicEndpoint"))
  {
    m_publicEndpoint = jsonValue.GetObject("publicEndpoint");

    m_publicEndpointHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerServiceDeploymentRequest::Jsonize() const
{
  JsonValue payload;

  if(m_containersHasBeenSet)
  {
   JsonValue containersJsonMap;
   for(auto& containersItem : m_containers)
   {
     containersJsonMap.WithObject(containersItem.first, containersItem.second.Jsonize());
   }
   payload.WithObject("containers", std::move(containersJsonMap));

  }

  if(m_publicEndpointHasBeenSet)
  {
   payload.WithObject("publicEndpoint", m_publicEndpoint.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
