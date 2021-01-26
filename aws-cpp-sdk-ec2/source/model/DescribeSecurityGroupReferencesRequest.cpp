/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeSecurityGroupReferencesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeSecurityGroupReferencesRequest::DescribeSecurityGroupReferencesRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

Aws::String DescribeSecurityGroupReferencesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeSecurityGroupReferences&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_groupIdHasBeenSet)
  {
    unsigned groupIdCount = 1;
    for(auto& item : m_groupId)
    {
      ss << "GroupId." << groupIdCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      groupIdCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeSecurityGroupReferencesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
