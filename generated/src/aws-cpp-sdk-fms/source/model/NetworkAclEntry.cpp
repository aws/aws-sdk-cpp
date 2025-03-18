/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkAclEntry.h>
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

NetworkAclEntry::NetworkAclEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

NetworkAclEntry& NetworkAclEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IcmpTypeCode"))
  {
    m_icmpTypeCode = jsonValue.GetObject("IcmpTypeCode");
    m_icmpTypeCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = jsonValue.GetString("Protocol");
    m_protocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PortRange"))
  {
    m_portRange = jsonValue.GetObject("PortRange");
    m_portRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CidrBlock"))
  {
    m_cidrBlock = jsonValue.GetString("CidrBlock");
    m_cidrBlockHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ipv6CidrBlock"))
  {
    m_ipv6CidrBlock = jsonValue.GetString("Ipv6CidrBlock");
    m_ipv6CidrBlockHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleAction"))
  {
    m_ruleAction = NetworkAclRuleActionMapper::GetNetworkAclRuleActionForName(jsonValue.GetString("RuleAction"));
    m_ruleActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Egress"))
  {
    m_egress = jsonValue.GetBool("Egress");
    m_egressHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkAclEntry::Jsonize() const
{
  JsonValue payload;

  if(m_icmpTypeCodeHasBeenSet)
  {
   payload.WithObject("IcmpTypeCode", m_icmpTypeCode.Jsonize());

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", m_protocol);

  }

  if(m_portRangeHasBeenSet)
  {
   payload.WithObject("PortRange", m_portRange.Jsonize());

  }

  if(m_cidrBlockHasBeenSet)
  {
   payload.WithString("CidrBlock", m_cidrBlock);

  }

  if(m_ipv6CidrBlockHasBeenSet)
  {
   payload.WithString("Ipv6CidrBlock", m_ipv6CidrBlock);

  }

  if(m_ruleActionHasBeenSet)
  {
   payload.WithString("RuleAction", NetworkAclRuleActionMapper::GetNameForNetworkAclRuleAction(m_ruleAction));
  }

  if(m_egressHasBeenSet)
  {
   payload.WithBool("Egress", m_egress);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
