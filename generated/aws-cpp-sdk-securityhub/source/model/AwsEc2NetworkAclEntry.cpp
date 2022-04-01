/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2NetworkAclEntry.h>
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

AwsEc2NetworkAclEntry::AwsEc2NetworkAclEntry() : 
    m_cidrBlockHasBeenSet(false),
    m_egress(false),
    m_egressHasBeenSet(false),
    m_icmpTypeCodeHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_ruleNumber(0),
    m_ruleNumberHasBeenSet(false)
{
}

AwsEc2NetworkAclEntry::AwsEc2NetworkAclEntry(JsonView jsonValue) : 
    m_cidrBlockHasBeenSet(false),
    m_egress(false),
    m_egressHasBeenSet(false),
    m_icmpTypeCodeHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_ruleNumber(0),
    m_ruleNumberHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2NetworkAclEntry& AwsEc2NetworkAclEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CidrBlock"))
  {
    m_cidrBlock = jsonValue.GetString("CidrBlock");

    m_cidrBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Egress"))
  {
    m_egress = jsonValue.GetBool("Egress");

    m_egressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IcmpTypeCode"))
  {
    m_icmpTypeCode = jsonValue.GetObject("IcmpTypeCode");

    m_icmpTypeCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ipv6CidrBlock"))
  {
    m_ipv6CidrBlock = jsonValue.GetString("Ipv6CidrBlock");

    m_ipv6CidrBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PortRange"))
  {
    m_portRange = jsonValue.GetObject("PortRange");

    m_portRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = jsonValue.GetString("Protocol");

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleAction"))
  {
    m_ruleAction = jsonValue.GetString("RuleAction");

    m_ruleActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleNumber"))
  {
    m_ruleNumber = jsonValue.GetInteger("RuleNumber");

    m_ruleNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2NetworkAclEntry::Jsonize() const
{
  JsonValue payload;

  if(m_cidrBlockHasBeenSet)
  {
   payload.WithString("CidrBlock", m_cidrBlock);

  }

  if(m_egressHasBeenSet)
  {
   payload.WithBool("Egress", m_egress);

  }

  if(m_icmpTypeCodeHasBeenSet)
  {
   payload.WithObject("IcmpTypeCode", m_icmpTypeCode.Jsonize());

  }

  if(m_ipv6CidrBlockHasBeenSet)
  {
   payload.WithString("Ipv6CidrBlock", m_ipv6CidrBlock);

  }

  if(m_portRangeHasBeenSet)
  {
   payload.WithObject("PortRange", m_portRange.Jsonize());

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", m_protocol);

  }

  if(m_ruleActionHasBeenSet)
  {
   payload.WithString("RuleAction", m_ruleAction);

  }

  if(m_ruleNumberHasBeenSet)
  {
   payload.WithInteger("RuleNumber", m_ruleNumber);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
