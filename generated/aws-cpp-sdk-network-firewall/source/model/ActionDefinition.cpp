/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/ActionDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

ActionDefinition::ActionDefinition() : 
    m_publishMetricActionHasBeenSet(false)
{
}

ActionDefinition::ActionDefinition(JsonView jsonValue) : 
    m_publishMetricActionHasBeenSet(false)
{
  *this = jsonValue;
}

ActionDefinition& ActionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PublishMetricAction"))
  {
    m_publishMetricAction = jsonValue.GetObject("PublishMetricAction");

    m_publishMetricActionHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_publishMetricActionHasBeenSet)
  {
   payload.WithObject("PublishMetricAction", m_publishMetricAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
