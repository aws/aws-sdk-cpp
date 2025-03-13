/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

ContainerIdentifier::ContainerIdentifier(JsonView jsonValue)
{
  *this = jsonValue;
}

ContainerIdentifier& ContainerIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerName"))
  {
    m_containerName = jsonValue.GetString("ContainerName");
    m_containerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContainerRuntimeId"))
  {
    m_containerRuntimeId = jsonValue.GetString("ContainerRuntimeId");
    m_containerRuntimeIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ContainerIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("ContainerName", m_containerName);

  }

  if(m_containerRuntimeIdHasBeenSet)
  {
   payload.WithString("ContainerRuntimeId", m_containerRuntimeId);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
