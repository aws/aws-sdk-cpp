/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/FMSPolicyUpdateFirewallCreationConfigAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

FMSPolicyUpdateFirewallCreationConfigAction::FMSPolicyUpdateFirewallCreationConfigAction() : 
    m_descriptionHasBeenSet(false),
    m_firewallCreationConfigHasBeenSet(false)
{
}

FMSPolicyUpdateFirewallCreationConfigAction::FMSPolicyUpdateFirewallCreationConfigAction(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_firewallCreationConfigHasBeenSet(false)
{
  *this = jsonValue;
}

FMSPolicyUpdateFirewallCreationConfigAction& FMSPolicyUpdateFirewallCreationConfigAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallCreationConfig"))
  {
    m_firewallCreationConfig = jsonValue.GetString("FirewallCreationConfig");

    m_firewallCreationConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue FMSPolicyUpdateFirewallCreationConfigAction::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_firewallCreationConfigHasBeenSet)
  {
   payload.WithString("FirewallCreationConfig", m_firewallCreationConfig);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
