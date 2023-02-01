/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/NodeRangeProperty.h>
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

NodeRangeProperty::NodeRangeProperty() : 
    m_targetNodesHasBeenSet(false),
    m_containerHasBeenSet(false)
{
}

NodeRangeProperty::NodeRangeProperty(JsonView jsonValue) : 
    m_targetNodesHasBeenSet(false),
    m_containerHasBeenSet(false)
{
  *this = jsonValue;
}

NodeRangeProperty& NodeRangeProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetNodes"))
  {
    m_targetNodes = jsonValue.GetString("targetNodes");

    m_targetNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("container"))
  {
    m_container = jsonValue.GetObject("container");

    m_containerHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeRangeProperty::Jsonize() const
{
  JsonValue payload;

  if(m_targetNodesHasBeenSet)
  {
   payload.WithString("targetNodes", m_targetNodes);

  }

  if(m_containerHasBeenSet)
  {
   payload.WithObject("container", m_container.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
