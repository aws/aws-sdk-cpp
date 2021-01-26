/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/NodePropertyOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

NodePropertyOverride::NodePropertyOverride() : 
    m_targetNodesHasBeenSet(false),
    m_containerOverridesHasBeenSet(false)
{
}

NodePropertyOverride::NodePropertyOverride(JsonView jsonValue) : 
    m_targetNodesHasBeenSet(false),
    m_containerOverridesHasBeenSet(false)
{
  *this = jsonValue;
}

NodePropertyOverride& NodePropertyOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetNodes"))
  {
    m_targetNodes = jsonValue.GetString("targetNodes");

    m_targetNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerOverrides"))
  {
    m_containerOverrides = jsonValue.GetObject("containerOverrides");

    m_containerOverridesHasBeenSet = true;
  }

  return *this;
}

JsonValue NodePropertyOverride::Jsonize() const
{
  JsonValue payload;

  if(m_targetNodesHasBeenSet)
  {
   payload.WithString("targetNodes", m_targetNodes);

  }

  if(m_containerOverridesHasBeenSet)
  {
   payload.WithObject("containerOverrides", m_containerOverrides.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
