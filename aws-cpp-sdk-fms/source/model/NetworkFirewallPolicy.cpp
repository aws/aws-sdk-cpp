/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkFirewallPolicy.h>
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

NetworkFirewallPolicy::NetworkFirewallPolicy() : 
    m_firewallDeploymentModel(FirewallDeploymentModel::NOT_SET),
    m_firewallDeploymentModelHasBeenSet(false)
{
}

NetworkFirewallPolicy::NetworkFirewallPolicy(JsonView jsonValue) : 
    m_firewallDeploymentModel(FirewallDeploymentModel::NOT_SET),
    m_firewallDeploymentModelHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkFirewallPolicy& NetworkFirewallPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FirewallDeploymentModel"))
  {
    m_firewallDeploymentModel = FirewallDeploymentModelMapper::GetFirewallDeploymentModelForName(jsonValue.GetString("FirewallDeploymentModel"));

    m_firewallDeploymentModelHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkFirewallPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_firewallDeploymentModelHasBeenSet)
  {
   payload.WithString("FirewallDeploymentModel", FirewallDeploymentModelMapper::GetNameForFirewallDeploymentModel(m_firewallDeploymentModel));
  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
