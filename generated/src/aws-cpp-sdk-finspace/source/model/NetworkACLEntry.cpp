/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/NetworkACLEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

NetworkACLEntry::NetworkACLEntry() : 
    m_ruleNumber(0),
    m_ruleNumberHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleAction(RuleAction::NOT_SET),
    m_ruleActionHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_icmpTypeCodeHasBeenSet(false),
    m_cidrBlockHasBeenSet(false)
{
}

NetworkACLEntry::NetworkACLEntry(JsonView jsonValue) : 
    m_ruleNumber(0),
    m_ruleNumberHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleAction(RuleAction::NOT_SET),
    m_ruleActionHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_icmpTypeCodeHasBeenSet(false),
    m_cidrBlockHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkACLEntry& NetworkACLEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ruleNumber"))
  {
    m_ruleNumber = jsonValue.GetInteger("ruleNumber");

    m_ruleNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = jsonValue.GetString("protocol");

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleAction"))
  {
    m_ruleAction = RuleActionMapper::GetRuleActionForName(jsonValue.GetString("ruleAction"));

    m_ruleActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portRange"))
  {
    m_portRange = jsonValue.GetObject("portRange");

    m_portRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("icmpTypeCode"))
  {
    m_icmpTypeCode = jsonValue.GetObject("icmpTypeCode");

    m_icmpTypeCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cidrBlock"))
  {
    m_cidrBlock = jsonValue.GetString("cidrBlock");

    m_cidrBlockHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkACLEntry::Jsonize() const
{
  JsonValue payload;

  if(m_ruleNumberHasBeenSet)
  {
   payload.WithInteger("ruleNumber", m_ruleNumber);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", m_protocol);

  }

  if(m_ruleActionHasBeenSet)
  {
   payload.WithString("ruleAction", RuleActionMapper::GetNameForRuleAction(m_ruleAction));
  }

  if(m_portRangeHasBeenSet)
  {
   payload.WithObject("portRange", m_portRange.Jsonize());

  }

  if(m_icmpTypeCodeHasBeenSet)
  {
   payload.WithObject("icmpTypeCode", m_icmpTypeCode.Jsonize());

  }

  if(m_cidrBlockHasBeenSet)
  {
   payload.WithString("cidrBlock", m_cidrBlock);

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
