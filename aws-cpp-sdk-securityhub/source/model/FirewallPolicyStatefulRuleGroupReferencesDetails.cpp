/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/FirewallPolicyStatefulRuleGroupReferencesDetails.h>
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

FirewallPolicyStatefulRuleGroupReferencesDetails::FirewallPolicyStatefulRuleGroupReferencesDetails() : 
    m_resourceArnHasBeenSet(false)
{
}

FirewallPolicyStatefulRuleGroupReferencesDetails::FirewallPolicyStatefulRuleGroupReferencesDetails(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false)
{
  *this = jsonValue;
}

FirewallPolicyStatefulRuleGroupReferencesDetails& FirewallPolicyStatefulRuleGroupReferencesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue FirewallPolicyStatefulRuleGroupReferencesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
