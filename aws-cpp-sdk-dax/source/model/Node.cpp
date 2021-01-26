/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/Node.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DAX
{
namespace Model
{

Node::Node() : 
    m_nodeIdHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_nodeCreateTimeHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_nodeStatusHasBeenSet(false),
    m_parameterGroupStatusHasBeenSet(false)
{
}

Node::Node(JsonView jsonValue) : 
    m_nodeIdHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_nodeCreateTimeHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_nodeStatusHasBeenSet(false),
    m_parameterGroupStatusHasBeenSet(false)
{
  *this = jsonValue;
}

Node& Node::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NodeId"))
  {
    m_nodeId = jsonValue.GetString("NodeId");

    m_nodeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetObject("Endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeCreateTime"))
  {
    m_nodeCreateTime = jsonValue.GetDouble("NodeCreateTime");

    m_nodeCreateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeStatus"))
  {
    m_nodeStatus = jsonValue.GetString("NodeStatus");

    m_nodeStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterGroupStatus"))
  {
    m_parameterGroupStatus = jsonValue.GetString("ParameterGroupStatus");

    m_parameterGroupStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue Node::Jsonize() const
{
  JsonValue payload;

  if(m_nodeIdHasBeenSet)
  {
   payload.WithString("NodeId", m_nodeId);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithObject("Endpoint", m_endpoint.Jsonize());

  }

  if(m_nodeCreateTimeHasBeenSet)
  {
   payload.WithDouble("NodeCreateTime", m_nodeCreateTime.SecondsWithMSPrecision());
  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_nodeStatusHasBeenSet)
  {
   payload.WithString("NodeStatus", m_nodeStatus);

  }

  if(m_parameterGroupStatusHasBeenSet)
  {
   payload.WithString("ParameterGroupStatus", m_parameterGroupStatus);

  }

  return payload;
}

} // namespace Model
} // namespace DAX
} // namespace Aws
