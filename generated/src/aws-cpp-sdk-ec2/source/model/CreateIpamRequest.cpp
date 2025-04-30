/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateIpamRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateIpamRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateIpam&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_operatingRegionsHasBeenSet)
  {
    unsigned operatingRegionsCount = 1;
    for(auto& item : m_operatingRegions)
    {
      item.OutputToStream(ss, "OperatingRegion.", operatingRegionsCount, "");
      operatingRegionsCount++;
    }
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
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


void  CreateIpamRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
