/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeVpcClassicLinkRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeVpcClassicLinkRequest::DescribeVpcClassicLinkRequest() : 
    m_filtersHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_vpcIdsHasBeenSet(false)
{
}

Aws::String DescribeVpcClassicLinkRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeVpcClassicLink&";
  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_vpcIdsHasBeenSet)
  {
    unsigned vpcIdsCount = 1;
    for(auto& item : m_vpcIds)
    {
      ss << "VpcId." << vpcIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      vpcIdsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeVpcClassicLinkRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
