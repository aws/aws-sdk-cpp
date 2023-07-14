/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/DescribeInstanceHealthRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

DescribeInstanceHealthRequest::DescribeInstanceHealthRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_instancesHasBeenSet(false)
{
}

Aws::String DescribeInstanceHealthRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeInstanceHealth&";
  if(m_loadBalancerNameHasBeenSet)
  {
    ss << "LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }

  if(m_instancesHasBeenSet)
  {
    unsigned instancesCount = 1;
    for(auto& item : m_instances)
    {
      item.OutputToStream(ss, "Instances.member.", instancesCount, "");
      instancesCount++;
    }
  }

  ss << "Version=2012-06-01";
  return ss.str();
}


void  DescribeInstanceHealthRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
