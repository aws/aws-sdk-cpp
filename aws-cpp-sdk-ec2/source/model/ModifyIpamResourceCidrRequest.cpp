/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyIpamResourceCidrRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyIpamResourceCidrRequest::ModifyIpamResourceCidrRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceCidrHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_currentIpamScopeIdHasBeenSet(false),
    m_destinationIpamScopeIdHasBeenSet(false),
    m_monitored(false),
    m_monitoredHasBeenSet(false)
{
}

Aws::String ModifyIpamResourceCidrRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyIpamResourceCidr&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_resourceIdHasBeenSet)
  {
    ss << "ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

  if(m_resourceCidrHasBeenSet)
  {
    ss << "ResourceCidr=" << StringUtils::URLEncode(m_resourceCidr.c_str()) << "&";
  }

  if(m_resourceRegionHasBeenSet)
  {
    ss << "ResourceRegion=" << StringUtils::URLEncode(m_resourceRegion.c_str()) << "&";
  }

  if(m_currentIpamScopeIdHasBeenSet)
  {
    ss << "CurrentIpamScopeId=" << StringUtils::URLEncode(m_currentIpamScopeId.c_str()) << "&";
  }

  if(m_destinationIpamScopeIdHasBeenSet)
  {
    ss << "DestinationIpamScopeId=" << StringUtils::URLEncode(m_destinationIpamScopeId.c_str()) << "&";
  }

  if(m_monitoredHasBeenSet)
  {
    ss << "Monitored=" << std::boolalpha << m_monitored << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyIpamResourceCidrRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
