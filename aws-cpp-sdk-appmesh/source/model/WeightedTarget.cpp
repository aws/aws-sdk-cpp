/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/WeightedTarget.h>
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

WeightedTarget::WeightedTarget() : 
    m_virtualNodeHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false)
{
}

WeightedTarget::WeightedTarget(JsonView jsonValue) : 
    m_virtualNodeHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false)
{
  *this = jsonValue;
}

WeightedTarget& WeightedTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("virtualNode"))
  {
    m_virtualNode = jsonValue.GetString("virtualNode");

    m_virtualNodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("weight"))
  {
    m_weight = jsonValue.GetInteger("weight");

    m_weightHasBeenSet = true;
  }

  return *this;
}

JsonValue WeightedTarget::Jsonize() const
{
  JsonValue payload;

  if(m_virtualNodeHasBeenSet)
  {
   payload.WithString("virtualNode", m_virtualNode);

  }

  if(m_weightHasBeenSet)
  {
   payload.WithInteger("weight", m_weight);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
