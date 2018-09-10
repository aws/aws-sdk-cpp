﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/guardduty/model/Action.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

Action::Action() : 
    m_actionTypeHasBeenSet(false),
    m_awsApiCallActionHasBeenSet(false),
    m_dnsRequestActionHasBeenSet(false),
    m_networkConnectionActionHasBeenSet(false),
    m_portProbeActionHasBeenSet(false)
{
}

Action::Action(JsonView jsonValue) : 
    m_actionTypeHasBeenSet(false),
    m_awsApiCallActionHasBeenSet(false),
    m_dnsRequestActionHasBeenSet(false),
    m_networkConnectionActionHasBeenSet(false),
    m_portProbeActionHasBeenSet(false)
{
  *this = jsonValue;
}

Action& Action::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionType"))
  {
    m_actionType = jsonValue.GetString("actionType");

    m_actionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsApiCallAction"))
  {
    m_awsApiCallAction = jsonValue.GetObject("awsApiCallAction");

    m_awsApiCallActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dnsRequestAction"))
  {
    m_dnsRequestAction = jsonValue.GetObject("dnsRequestAction");

    m_dnsRequestActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkConnectionAction"))
  {
    m_networkConnectionAction = jsonValue.GetObject("networkConnectionAction");

    m_networkConnectionActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portProbeAction"))
  {
    m_portProbeAction = jsonValue.GetObject("portProbeAction");

    m_portProbeActionHasBeenSet = true;
  }

  return *this;
}

JsonValue Action::Jsonize() const
{
  JsonValue payload;

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("actionType", m_actionType);

  }

  if(m_awsApiCallActionHasBeenSet)
  {
   payload.WithObject("awsApiCallAction", m_awsApiCallAction.Jsonize());

  }

  if(m_dnsRequestActionHasBeenSet)
  {
   payload.WithObject("dnsRequestAction", m_dnsRequestAction.Jsonize());

  }

  if(m_networkConnectionActionHasBeenSet)
  {
   payload.WithObject("networkConnectionAction", m_networkConnectionAction.Jsonize());

  }

  if(m_portProbeActionHasBeenSet)
  {
   payload.WithObject("portProbeAction", m_portProbeAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
