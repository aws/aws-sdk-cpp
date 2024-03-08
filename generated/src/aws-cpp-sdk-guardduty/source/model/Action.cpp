/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_portProbeActionHasBeenSet(false),
    m_kubernetesApiCallActionHasBeenSet(false),
    m_rdsLoginAttemptActionHasBeenSet(false),
    m_kubernetesPermissionCheckedDetailsHasBeenSet(false),
    m_kubernetesRoleBindingDetailsHasBeenSet(false),
    m_kubernetesRoleDetailsHasBeenSet(false)
{
}

Action::Action(JsonView jsonValue) : 
    m_actionTypeHasBeenSet(false),
    m_awsApiCallActionHasBeenSet(false),
    m_dnsRequestActionHasBeenSet(false),
    m_networkConnectionActionHasBeenSet(false),
    m_portProbeActionHasBeenSet(false),
    m_kubernetesApiCallActionHasBeenSet(false),
    m_rdsLoginAttemptActionHasBeenSet(false),
    m_kubernetesPermissionCheckedDetailsHasBeenSet(false),
    m_kubernetesRoleBindingDetailsHasBeenSet(false),
    m_kubernetesRoleDetailsHasBeenSet(false)
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

  if(jsonValue.ValueExists("kubernetesApiCallAction"))
  {
    m_kubernetesApiCallAction = jsonValue.GetObject("kubernetesApiCallAction");

    m_kubernetesApiCallActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rdsLoginAttemptAction"))
  {
    m_rdsLoginAttemptAction = jsonValue.GetObject("rdsLoginAttemptAction");

    m_rdsLoginAttemptActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kubernetesPermissionCheckedDetails"))
  {
    m_kubernetesPermissionCheckedDetails = jsonValue.GetObject("kubernetesPermissionCheckedDetails");

    m_kubernetesPermissionCheckedDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kubernetesRoleBindingDetails"))
  {
    m_kubernetesRoleBindingDetails = jsonValue.GetObject("kubernetesRoleBindingDetails");

    m_kubernetesRoleBindingDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kubernetesRoleDetails"))
  {
    m_kubernetesRoleDetails = jsonValue.GetObject("kubernetesRoleDetails");

    m_kubernetesRoleDetailsHasBeenSet = true;
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

  if(m_kubernetesApiCallActionHasBeenSet)
  {
   payload.WithObject("kubernetesApiCallAction", m_kubernetesApiCallAction.Jsonize());

  }

  if(m_rdsLoginAttemptActionHasBeenSet)
  {
   payload.WithObject("rdsLoginAttemptAction", m_rdsLoginAttemptAction.Jsonize());

  }

  if(m_kubernetesPermissionCheckedDetailsHasBeenSet)
  {
   payload.WithObject("kubernetesPermissionCheckedDetails", m_kubernetesPermissionCheckedDetails.Jsonize());

  }

  if(m_kubernetesRoleBindingDetailsHasBeenSet)
  {
   payload.WithObject("kubernetesRoleBindingDetails", m_kubernetesRoleBindingDetails.Jsonize());

  }

  if(m_kubernetesRoleDetailsHasBeenSet)
  {
   payload.WithObject("kubernetesRoleDetails", m_kubernetesRoleDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
