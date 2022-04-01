/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStateEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryCluster
{
namespace Model
{

UpdateRoutingControlStateEntry::UpdateRoutingControlStateEntry() : 
    m_routingControlArnHasBeenSet(false),
    m_routingControlState(RoutingControlState::NOT_SET),
    m_routingControlStateHasBeenSet(false)
{
}

UpdateRoutingControlStateEntry::UpdateRoutingControlStateEntry(JsonView jsonValue) : 
    m_routingControlArnHasBeenSet(false),
    m_routingControlState(RoutingControlState::NOT_SET),
    m_routingControlStateHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateRoutingControlStateEntry& UpdateRoutingControlStateEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoutingControlArn"))
  {
    m_routingControlArn = jsonValue.GetString("RoutingControlArn");

    m_routingControlArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoutingControlState"))
  {
    m_routingControlState = RoutingControlStateMapper::GetRoutingControlStateForName(jsonValue.GetString("RoutingControlState"));

    m_routingControlStateHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateRoutingControlStateEntry::Jsonize() const
{
  JsonValue payload;

  if(m_routingControlArnHasBeenSet)
  {
   payload.WithString("RoutingControlArn", m_routingControlArn);

  }

  if(m_routingControlStateHasBeenSet)
  {
   payload.WithString("RoutingControlState", RoutingControlStateMapper::GetNameForRoutingControlState(m_routingControlState));
  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
