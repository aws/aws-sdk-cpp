/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVpcAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyVpcAttributeRequest::ModifyVpcAttributeRequest() : 
    m_enableDnsHostnamesHasBeenSet(false),
    m_enableDnsSupportHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_enableNetworkAddressUsageMetricsHasBeenSet(false)
{
}

Aws::String ModifyVpcAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyVpcAttribute&";
  if(m_enableDnsHostnamesHasBeenSet)
  {
    m_enableDnsHostnames.OutputToStream(ss, "EnableDnsHostnames");
  }

  if(m_enableDnsSupportHasBeenSet)
  {
    m_enableDnsSupport.OutputToStream(ss, "EnableDnsSupport");
  }

  if(m_vpcIdHasBeenSet)
  {
    ss << "VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_enableNetworkAddressUsageMetricsHasBeenSet)
  {
    m_enableNetworkAddressUsageMetrics.OutputToStream(ss, "EnableNetworkAddressUsageMetrics");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVpcAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
