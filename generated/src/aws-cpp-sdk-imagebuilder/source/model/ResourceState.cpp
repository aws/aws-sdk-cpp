/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ResourceState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

ResourceState::ResourceState() : 
    m_status(ResourceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ResourceState::ResourceState(JsonView jsonValue) : 
    m_status(ResourceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceState& ResourceState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceState::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ResourceStatusMapper::GetNameForResourceStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
