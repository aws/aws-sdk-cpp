/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyIpamRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

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
    ss << "Tier=" << StringUtils::URLEncode(IpamTierMapper::GetNameForIpamTier(m_tier)) << "&";
  }

  if(m_enablePrivateGuaHasBeenSet)
  {
    ss << "EnablePrivateGua=" << std::boolalpha << m_enablePrivateGua << "&";
  }

  if(m_meteredAccountHasBeenSet)
  {
    ss << "MeteredAccount=" << StringUtils::URLEncode(IpamMeteredAccountMapper::GetNameForIpamMeteredAccount(m_meteredAccount)) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyIpamRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
