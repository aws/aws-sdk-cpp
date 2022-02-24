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
    m_networkFirewallPolicyHasBeenSet(false)
{
}

PolicyOption::PolicyOption(JsonView jsonValue) : 
    m_networkFirewallPolicyHasBeenSet(false)
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

  return *this;
}

JsonValue PolicyOption::Jsonize() const
{
  JsonValue payload;

  if(m_networkFirewallPolicyHasBeenSet)
  {
   payload.WithObject("NetworkFirewallPolicy", m_networkFirewallPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
