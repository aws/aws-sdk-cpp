/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeVpcClassicLinkDnsSupportRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeVpcClassicLinkDnsSupportRequest::DescribeVpcClassicLinkDnsSupportRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_vpcIdsHasBeenSet(false)
{
}

Aws::String DescribeVpcClassicLinkDnsSupportRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeVpcClassicLinkDnsSupport&";
  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_vpcIdsHasBeenSet)
  {
    unsigned vpcIdsCount = 1;
    for(auto& item : m_vpcIds)
    {
      ss << "VpcIds." << vpcIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      vpcIdsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeVpcClassicLinkDnsSupportRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
