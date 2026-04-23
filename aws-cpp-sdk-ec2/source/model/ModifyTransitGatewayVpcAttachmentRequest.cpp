/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
