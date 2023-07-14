/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RuleGroupSourceStatelessRuleMatchAttributesSourcePorts.h>
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

RuleGroupSourceStatelessRuleMatchAttributesSourcePorts::RuleGroupSourceStatelessRuleMatchAttributesSourcePorts() : 
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false)
{
}

RuleGroupSourceStatelessRuleMatchAttributesSourcePorts::RuleGroupSourceStatelessRuleMatchAttributesSourcePorts(JsonView jsonValue) : 
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroupSourceStatelessRuleMatchAttributesSourcePorts& RuleGroupSourceStatelessRuleMatchAttributesSourcePorts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FromPort"))
  {
    m_fromPort = jsonValue.GetInteger("FromPort");

    m_fromPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ToPort"))
  {
    m_toPort = jsonValue.GetInteger("ToPort");

    m_toPortHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroupSourceStatelessRuleMatchAttributesSourcePorts::Jsonize() const
{
  JsonValue payload;

  if(m_fromPortHasBeenSet)
  {
   payload.WithInteger("FromPort", m_fromPort);

  }

  if(m_toPortHasBeenSet)
  {
   payload.WithInteger("ToPort", m_toPort);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
