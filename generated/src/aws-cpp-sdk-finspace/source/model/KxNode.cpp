/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxNode.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

KxNode::KxNode() : 
    m_nodeIdHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_launchTimeHasBeenSet(false)
{
}

KxNode::KxNode(JsonView jsonValue) : 
    m_nodeIdHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_launchTimeHasBeenSet(false)
{
  *this = jsonValue;
}

KxNode& KxNode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nodeId"))
  {
    m_nodeId = jsonValue.GetString("nodeId");

    m_nodeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availabilityZoneId"))
  {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");

    m_availabilityZoneIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchTime"))
  {
    m_launchTime = jsonValue.GetDouble("launchTime");

    m_launchTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue KxNode::Jsonize() const
{
  JsonValue payload;

  if(m_nodeIdHasBeenSet)
  {
   payload.WithString("nodeId", m_nodeId);

  }

  if(m_availabilityZoneIdHasBeenSet)
  {
   payload.WithString("availabilityZoneId", m_availabilityZoneId);

  }

  if(m_launchTimeHasBeenSet)
  {
   payload.WithDouble("launchTime", m_launchTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
