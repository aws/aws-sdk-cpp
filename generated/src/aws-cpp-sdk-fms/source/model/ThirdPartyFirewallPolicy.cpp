﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ThirdPartyFirewallPolicy.h>
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

ThirdPartyFirewallPolicy::ThirdPartyFirewallPolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

ThirdPartyFirewallPolicy& ThirdPartyFirewallPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FirewallDeploymentModel"))
  {
    m_firewallDeploymentModel = FirewallDeploymentModelMapper::GetFirewallDeploymentModelForName(jsonValue.GetString("FirewallDeploymentModel"));
    m_firewallDeploymentModelHasBeenSet = true;
  }
  return *this;
}

JsonValue ThirdPartyFirewallPolicy::Jsonize() const
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
