/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssociateNatGatewayAddressRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AssociateNatGatewayAddressRequest::AssociateNatGatewayAddressRequest() : 
    m_natGatewayIdHasBeenSet(false),
    m_allocationIdsHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String AssociateNatGatewayAddressRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssociateNatGatewayAddress&";
  if(m_natGatewayIdHasBeenSet)
  {
    ss << "NatGatewayId=" << StringUtils::URLEncode(m_natGatewayId.c_str()) << "&";
  }

  if(m_allocationIdsHasBeenSet)
  {
    unsigned allocationIdsCount = 1;
    for(auto& item : m_allocationIds)
    {
      ss << "AllocationId." << allocationIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      allocationIdsCount++;
    }
  }

  if(m_privateIpAddressesHasBeenSet)
  {
    unsigned privateIpAddressesCount = 1;
    for(auto& item : m_privateIpAddresses)
    {
      ss << "PrivateIpAddress." << privateIpAddressesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      privateIpAddressesCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AssociateNatGatewayAddressRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
