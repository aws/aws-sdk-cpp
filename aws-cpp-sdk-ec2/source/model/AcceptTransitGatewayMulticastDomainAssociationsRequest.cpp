/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AcceptTransitGatewayMulticastDomainAssociationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AcceptTransitGatewayMulticastDomainAssociationsRequest::AcceptTransitGatewayMulticastDomainAssociationsRequest() : 
    m_transitGatewayMulticastDomainIdHasBeenSet(false),
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String AcceptTransitGatewayMulticastDomainAssociationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AcceptTransitGatewayMulticastDomainAssociations&";
  if(m_transitGatewayMulticastDomainIdHasBeenSet)
  {
    ss << "TransitGatewayMulticastDomainId=" << StringUtils::URLEncode(m_transitGatewayMulticastDomainId.c_str()) << "&";
  }

  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
    ss << "TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if(m_subnetIdsHasBeenSet)
  {
    unsigned subnetIdsCount = 1;
    for(auto& item : m_subnetIds)
    {
      ss << "SubnetIds." << subnetIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      subnetIdsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AcceptTransitGatewayMulticastDomainAssociationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
