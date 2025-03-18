/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyIpamResourceDiscoveryRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

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

  if(m_addOrganizationalUnitExclusionsHasBeenSet)
  {
    unsigned addOrganizationalUnitExclusionsCount = 1;
    for(auto& item : m_addOrganizationalUnitExclusions)
    {
      item.OutputToStream(ss, "AddOrganizationalUnitExclusion.", addOrganizationalUnitExclusionsCount, "");
      addOrganizationalUnitExclusionsCount++;
    }
  }

  if(m_removeOrganizationalUnitExclusionsHasBeenSet)
  {
    unsigned removeOrganizationalUnitExclusionsCount = 1;
    for(auto& item : m_removeOrganizationalUnitExclusions)
    {
      item.OutputToStream(ss, "RemoveOrganizationalUnitExclusion.", removeOrganizationalUnitExclusionsCount, "");
      removeOrganizationalUnitExclusionsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyIpamResourceDiscoveryRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
