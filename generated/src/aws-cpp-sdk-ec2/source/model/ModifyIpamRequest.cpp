/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyIpamRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyIpamRequest::ModifyIpamRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_ipamIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_addOperatingRegionsHasBeenSet(false),
    m_removeOperatingRegionsHasBeenSet(false),
    m_tier(IpamTier::NOT_SET),
    m_tierHasBeenSet(false)
{
}

Aws::String ModifyIpamRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyIpam&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_ipamIdHasBeenSet)
  {
    ss << "IpamId=" << StringUtils::URLEncode(m_ipamId.c_str()) << "&";
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

  if(m_tierHasBeenSet)
  {
    ss << "Tier=" << IpamTierMapper::GetNameForIpamTier(m_tier) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyIpamRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
