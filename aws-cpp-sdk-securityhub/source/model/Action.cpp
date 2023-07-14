/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Action.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Action::Action() : 
    m_actionTypeHasBeenSet(false),
    m_networkConnectionActionHasBeenSet(false),
    m_awsApiCallActionHasBeenSet(false),
    m_dnsRequestActionHasBeenSet(false),
    m_portProbeActionHasBeenSet(false)
{
}

Action::Action(JsonView jsonValue) : 
    m_actionTypeHasBeenSet(false),
    m_networkConnectionActionHasBeenSet(false),
    m_awsApiCallActionHasBeenSet(false),
    m_dnsRequestActionHasBeenSet(false),
    m_portProbeActionHasBeenSet(false)
{
  *this = jsonValue;
}

Action& Action::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActionType"))
  {
    m_actionType = jsonValue.GetString("ActionType");

    m_actionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkConnectionAction"))
  {
    m_networkConnectionAction = jsonValue.GetObject("NetworkConnectionAction");

    m_networkConnectionActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsApiCallAction"))
  {
    m_awsApiCallAction = jsonValue.GetObject("AwsApiCallAction");

    m_awsApiCallActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsRequestAction"))
  {
    m_dnsRequestAction = jsonValue.GetObject("DnsRequestAction");

    m_dnsRequestActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PortProbeAction"))
  {
    m_portProbeAction = jsonValue.GetObject("PortProbeAction");

    m_portProbeActionHasBeenSet = true;
  }

  return *this;
}

JsonValue Action::Jsonize() const
{
  JsonValue payload;

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("ActionType", m_actionType);

  }

  if(m_networkConnectionActionHasBeenSet)
  {
   payload.WithObject("NetworkConnectionAction", m_networkConnectionAction.Jsonize());

  }

  if(m_awsApiCallActionHasBeenSet)
  {
   payload.WithObject("AwsApiCallAction", m_awsApiCallAction.Jsonize());

  }

  if(m_dnsRequestActionHasBeenSet)
  {
   payload.WithObject("DnsRequestAction", m_dnsRequestAction.Jsonize());

  }

  if(m_portProbeActionHasBeenSet)
  {
   payload.WithObject("PortProbeAction", m_portProbeAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
