/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ArcRoutingControlState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

ArcRoutingControlState::ArcRoutingControlState(JsonView jsonValue)
{
  *this = jsonValue;
}

ArcRoutingControlState& ArcRoutingControlState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("routingControlArn"))
  {
    m_routingControlArn = jsonValue.GetString("routingControlArn");
    m_routingControlArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = RoutingControlStateChangeMapper::GetRoutingControlStateChangeForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue ArcRoutingControlState::Jsonize() const
{
  JsonValue payload;

  if(m_routingControlArnHasBeenSet)
  {
   payload.WithString("routingControlArn", m_routingControlArn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", RoutingControlStateChangeMapper::GetNameForRoutingControlStateChange(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
