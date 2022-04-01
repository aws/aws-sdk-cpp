/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifySecurityGroupRulesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifySecurityGroupRulesRequest::ModifySecurityGroupRulesRequest() : 
    m_groupIdHasBeenSet(false),
    m_securityGroupRulesHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ModifySecurityGroupRulesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifySecurityGroupRules&";
  if(m_groupIdHasBeenSet)
  {
    ss << "GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }

  if(m_securityGroupRulesHasBeenSet)
  {
    unsigned securityGroupRulesCount = 1;
    for(auto& item : m_securityGroupRules)
    {
      item.OutputToStream(ss, "SecurityGroupRule.", securityGroupRulesCount, "");
      securityGroupRulesCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifySecurityGroupRulesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
