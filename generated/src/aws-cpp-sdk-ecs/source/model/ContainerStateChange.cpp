/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ContainerStateChange.h>
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

ContainerStateChange::ContainerStateChange() : 
    m_containerNameHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_runtimeIdHasBeenSet(false),
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_networkBindingsHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

ContainerStateChange::ContainerStateChange(JsonView jsonValue) : 
    m_containerNameHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_runtimeIdHasBeenSet(false),
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_networkBindingsHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerStateChange& ContainerStateChange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containerName"))
  {
    m_containerName = jsonValue.GetString("containerName");

    m_containerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageDigest"))
  {
    m_imageDigest = jsonValue.GetString("imageDigest");

    m_imageDigestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runtimeId"))
  {
    m_runtimeId = jsonValue.GetString("runtimeId");

    m_runtimeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exitCode"))
  {
    m_exitCode = jsonValue.GetInteger("exitCode");

    m_exitCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkBindings"))
  {
    Aws::Utils::Array<JsonView> networkBindingsJsonList = jsonValue.GetArray("networkBindings");
    for(unsigned networkBindingsIndex = 0; networkBindingsIndex < networkBindingsJsonList.GetLength(); ++networkBindingsIndex)
    {
      m_networkBindings.push_back(networkBindingsJsonList[networkBindingsIndex].AsObject());
    }
    m_networkBindingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerStateChange::Jsonize() const
{
  JsonValue payload;

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("containerName", m_containerName);

  }

  if(m_imageDigestHasBeenSet)
  {
   payload.WithString("imageDigest", m_imageDigest);

  }

  if(m_runtimeIdHasBeenSet)
  {
   payload.WithString("runtimeId", m_runtimeId);

  }

  if(m_exitCodeHasBeenSet)
  {
   payload.WithInteger("exitCode", m_exitCode);

  }

  if(m_networkBindingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkBindingsJsonList(m_networkBindings.size());
   for(unsigned networkBindingsIndex = 0; networkBindingsIndex < networkBindingsJsonList.GetLength(); ++networkBindingsIndex)
   {
     networkBindingsJsonList[networkBindingsIndex].AsObject(m_networkBindings[networkBindingsIndex].Jsonize());
   }
   payload.WithArray("networkBindings", std::move(networkBindingsJsonList));

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
