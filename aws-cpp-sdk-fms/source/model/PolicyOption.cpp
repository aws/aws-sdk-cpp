/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/PolicyOption.h>
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

PolicyOption::PolicyOption() : 
    m_networkFirewallPolicyHasBeenSet(false),
    m_thirdPartyFirewallPolicyHasBeenSet(false)
{
}

PolicyOption::PolicyOption(JsonView jsonValue) : 
    m_networkFirewallPolicyHasBeenSet(false),
    m_thirdPartyFirewallPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyOption& PolicyOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NetworkFirewallPolicy"))
  {
    m_networkFirewallPolicy = jsonValue.GetObject("NetworkFirewallPolicy");

    m_networkFirewallPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThirdPartyFirewallPolicy"))
  {
    m_thirdPartyFirewallPolicy = jsonValue.GetObject("ThirdPartyFirewallPolicy");

    m_thirdPartyFirewallPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyOption::Jsonize() const
{
  JsonValue payload;

  if(m_networkFirewallPolicyHasBeenSet)
  {
   payload.WithObject("NetworkFirewallPolicy", m_networkFirewallPolicy.Jsonize());

  }

  if(m_thirdPartyFirewallPolicyHasBeenSet)
  {
   payload.WithObject("ThirdPartyFirewallPolicy", m_thirdPartyFirewallPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
