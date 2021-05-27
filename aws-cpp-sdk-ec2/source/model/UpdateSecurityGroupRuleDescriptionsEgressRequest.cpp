/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/UpdateSecurityGroupRuleDescriptionsEgressRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

UpdateSecurityGroupRuleDescriptionsEgressRequest::UpdateSecurityGroupRuleDescriptionsEgressRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_ipPermissionsHasBeenSet(false)
{
}

Aws::String UpdateSecurityGroupRuleDescriptionsEgressRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateSecurityGroupRuleDescriptionsEgress&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_groupIdHasBeenSet)
  {
    ss << "GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }

  if(m_groupNameHasBeenSet)
  {
    ss << "GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if(m_ipPermissionsHasBeenSet)
  {
    unsigned ipPermissionsCount = 1;
    for(auto& item : m_ipPermissions)
    {
      item.OutputToStream(ss, "IpPermissions.", ipPermissionsCount, "");
      ipPermissionsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  UpdateSecurityGroupRuleDescriptionsEgressRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
