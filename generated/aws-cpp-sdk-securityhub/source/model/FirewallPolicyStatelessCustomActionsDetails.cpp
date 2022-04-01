/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/FirewallPolicyStatelessCustomActionsDetails.h>
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

FirewallPolicyStatelessCustomActionsDetails::FirewallPolicyStatelessCustomActionsDetails() : 
    m_actionDefinitionHasBeenSet(false),
    m_actionNameHasBeenSet(false)
{
}

FirewallPolicyStatelessCustomActionsDetails::FirewallPolicyStatelessCustomActionsDetails(JsonView jsonValue) : 
    m_actionDefinitionHasBeenSet(false),
    m_actionNameHasBeenSet(false)
{
  *this = jsonValue;
}

FirewallPolicyStatelessCustomActionsDetails& FirewallPolicyStatelessCustomActionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActionDefinition"))
  {
    m_actionDefinition = jsonValue.GetObject("ActionDefinition");

    m_actionDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActionName"))
  {
    m_actionName = jsonValue.GetString("ActionName");

    m_actionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue FirewallPolicyStatelessCustomActionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_actionDefinitionHasBeenSet)
  {
   payload.WithObject("ActionDefinition", m_actionDefinition.Jsonize());

  }

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("ActionName", m_actionName);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
