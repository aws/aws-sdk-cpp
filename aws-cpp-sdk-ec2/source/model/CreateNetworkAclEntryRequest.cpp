/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ec2/model/CreateNetworkAclEntryRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateNetworkAclEntryRequest::CreateNetworkAclEntryRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_networkAclIdHasBeenSet(false),
    m_ruleNumber(0),
    m_ruleNumberHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleAction(RuleAction::NOT_SET),
    m_ruleActionHasBeenSet(false),
    m_egress(false),
    m_egressHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_icmpTypeCodeHasBeenSet(false),
    m_portRangeHasBeenSet(false)
{
}

Aws::String CreateNetworkAclEntryRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateNetworkAclEntry&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
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
    ss << "RuleAction=" << RuleActionMapper::GetNameForRuleAction(m_ruleAction) << "&";
  }

  if(m_egressHasBeenSet)
  {
    ss << "Egress=" << m_egress << "&";
  }

  if(m_cidrBlockHasBeenSet)
  {
    ss << "CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }

  if(m_icmpTypeCodeHasBeenSet)
  {
    m_icmpTypeCode.OutputToStream(ss, "IcmpTypeCode");
  }

  if(m_portRangeHasBeenSet)
  {
    m_portRange.OutputToStream(ss, "PortRange");
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

