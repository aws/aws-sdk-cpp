/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateTransitGatewayConnectRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateTransitGatewayConnectRequest::CreateTransitGatewayConnectRequest() : 
    m_transportTransitGatewayAttachmentIdHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String CreateTransitGatewayConnectRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateTransitGatewayConnect&";
  if(m_transportTransitGatewayAttachmentIdHasBeenSet)
  {
    ss << "TransportTransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transportTransitGatewayAttachmentId.c_str()) << "&";
  }

  if(m_optionsHasBeenSet)
  {
    m_options.OutputToStream(ss, "Options");
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

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateTransitGatewayConnectRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
