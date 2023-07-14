/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/NodeDetails.h>
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

NodeDetails::NodeDetails() : 
    m_nodeIndex(0),
    m_nodeIndexHasBeenSet(false),
    m_isMainNode(false),
    m_isMainNodeHasBeenSet(false)
{
}

NodeDetails::NodeDetails(JsonView jsonValue) : 
    m_nodeIndex(0),
    m_nodeIndexHasBeenSet(false),
    m_isMainNode(false),
    m_isMainNodeHasBeenSet(false)
{
  *this = jsonValue;
}

NodeDetails& NodeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nodeIndex"))
  {
    m_nodeIndex = jsonValue.GetInteger("nodeIndex");

    m_nodeIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isMainNode"))
  {
    m_isMainNode = jsonValue.GetBool("isMainNode");

    m_isMainNodeHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nodeIndexHasBeenSet)
  {
   payload.WithInteger("nodeIndex", m_nodeIndex);

  }

  if(m_isMainNodeHasBeenSet)
  {
   payload.WithBool("isMainNode", m_isMainNode);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
