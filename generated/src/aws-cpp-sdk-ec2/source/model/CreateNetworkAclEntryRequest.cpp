/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateNetworkAclEntryRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateNetworkAclEntryRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateNetworkAclEntry&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_networkAclIdHasBeenSet)
  {
    ss << "NetworkAclId=" << StringUtils::URLEncode(m_networkAclId.c_str()) << "&";
  }

  if(m_ruleNumberHasBeenSet)
  {
    ss << "RuleNumber=" << m_ruleNumber << "&";
  }

  if(m_protocolHasBeenSet)
  {
    ss << "Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }

  if(m_ruleActionHasBeenSet)
  {
    ss << "RuleAction=" << StringUtils::URLEncode(RuleActionMapper::GetNameForRuleAction(m_ruleAction)) << "&";
  }

  if(m_egressHasBeenSet)
  {
    ss << "Egress=" << std::boolalpha << m_egress << "&";
  }

  if(m_cidrBlockHasBeenSet)
  {
    ss << "CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }

  if(m_ipv6CidrBlockHasBeenSet)
  {
    ss << "Ipv6CidrBlock=" << StringUtils::URLEncode(m_ipv6CidrBlock.c_str()) << "&";
  }

  if(m_icmpTypeCodeHasBeenSet)
  {
    m_icmpTypeCode.OutputToStream(ss, "Icmp");
  }

  if(m_portRangeHasBeenSet)
  {
    m_portRange.OutputToStream(ss, "PortRange");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateNetworkAclEntryRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
