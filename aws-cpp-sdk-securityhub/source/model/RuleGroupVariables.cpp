/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RuleGroupVariables.h>
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

RuleGroupVariables::RuleGroupVariables() : 
    m_ipSetsHasBeenSet(false),
    m_portSetsHasBeenSet(false)
{
}

RuleGroupVariables::RuleGroupVariables(JsonView jsonValue) : 
    m_ipSetsHasBeenSet(false),
    m_portSetsHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroupVariables& RuleGroupVariables::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IpSets"))
  {
    m_ipSets = jsonValue.GetObject("IpSets");

    m_ipSetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PortSets"))
  {
    m_portSets = jsonValue.GetObject("PortSets");

    m_portSetsHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroupVariables::Jsonize() const
{
  JsonValue payload;

  if(m_ipSetsHasBeenSet)
  {
   payload.WithObject("IpSets", m_ipSets.Jsonize());

  }

  if(m_portSetsHasBeenSet)
  {
   payload.WithObject("PortSets", m_portSets.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
