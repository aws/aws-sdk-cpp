/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyTransitGatewayVpcAttachmentRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyTransitGatewayVpcAttachmentRequest::ModifyTransitGatewayVpcAttachmentRequest() : 
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_addSubnetIdsHasBeenSet(false),
    m_removeSubnetIdsHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ModifyTransitGatewayVpcAttachmentRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyTransitGatewayVpcAttachment&";
  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
    ss << "TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if(m_addSubnetIdsHasBeenSet)
  {
    unsigned addSubnetIdsCount = 1;
    for(auto& item : m_addSubnetIds)
    {
      ss << "AddSubnetIds." << addSubnetIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      addSubnetIdsCount++;
    }
  }

  if(m_removeSubnetIdsHasBeenSet)
  {
    unsigned removeSubnetIdsCount = 1;
    for(auto& item : m_removeSubnetIds)
    {
      ss << "RemoveSubnetIds." << removeSubnetIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      removeSubnetIdsCount++;
    }
  }

  if(m_optionsHasBeenSet)
  {
    m_options.OutputToStream(ss, "Options");
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyTransitGatewayVpcAttachmentRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
