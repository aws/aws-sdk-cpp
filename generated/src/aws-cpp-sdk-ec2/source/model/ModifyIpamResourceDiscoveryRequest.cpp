/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyIpamResourceDiscoveryRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyIpamResourceDiscoveryRequest::ModifyIpamResourceDiscoveryRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_ipamResourceDiscoveryIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_addOperatingRegionsHasBeenSet(false),
    m_removeOperatingRegionsHasBeenSet(false)
{
}

Aws::String ModifyIpamResourceDiscoveryRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyIpamResourceDiscovery&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_ipamResourceDiscoveryIdHasBeenSet)
  {
    ss << "IpamResourceDiscoveryId=" << StringUtils::URLEncode(m_ipamResourceDiscoveryId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_addOperatingRegionsHasBeenSet)
  {
    unsigned addOperatingRegionsCount = 1;
    for(auto& item : m_addOperatingRegions)
    {
      item.OutputToStream(ss, "AddOperatingRegion.", addOperatingRegionsCount, "");
      addOperatingRegionsCount++;
    }
  }

  if(m_removeOperatingRegionsHasBeenSet)
  {
    unsigned removeOperatingRegionsCount = 1;
    for(auto& item : m_removeOperatingRegions)
    {
      item.OutputToStream(ss, "RemoveOperatingRegion.", removeOperatingRegionsCount, "");
      removeOperatingRegionsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyIpamResourceDiscoveryRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
