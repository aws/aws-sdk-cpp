/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceConnectServiceResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

ServiceConnectServiceResource::ServiceConnectServiceResource() : 
    m_discoveryNameHasBeenSet(false),
    m_discoveryArnHasBeenSet(false)
{
}

ServiceConnectServiceResource::ServiceConnectServiceResource(JsonView jsonValue) : 
    m_discoveryNameHasBeenSet(false),
    m_discoveryArnHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceConnectServiceResource& ServiceConnectServiceResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("discoveryName"))
  {
    m_discoveryName = jsonValue.GetString("discoveryName");

    m_discoveryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("discoveryArn"))
  {
    m_discoveryArn = jsonValue.GetString("discoveryArn");

    m_discoveryArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceConnectServiceResource::Jsonize() const
{
  JsonValue payload;

  if(m_discoveryNameHasBeenSet)
  {
   payload.WithString("discoveryName", m_discoveryName);

  }

  if(m_discoveryArnHasBeenSet)
  {
   payload.WithString("discoveryArn", m_discoveryArn);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
