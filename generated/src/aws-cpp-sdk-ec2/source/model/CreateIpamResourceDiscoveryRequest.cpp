/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateIpamResourceDiscoveryRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateIpamResourceDiscoveryRequest::CreateIpamResourceDiscoveryRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_operatingRegionsHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateIpamResourceDiscoveryRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateIpamResourceDiscovery&";
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

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateIpamResourceDiscoveryRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
