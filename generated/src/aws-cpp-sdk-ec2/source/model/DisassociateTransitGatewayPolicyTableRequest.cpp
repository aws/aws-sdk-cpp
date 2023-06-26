/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DisassociateTransitGatewayPolicyTableRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DisassociateTransitGatewayPolicyTableRequest::DisassociateTransitGatewayPolicyTableRequest() : 
    m_transitGatewayPolicyTableIdHasBeenSet(false),
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DisassociateTransitGatewayPolicyTableRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DisassociateTransitGatewayPolicyTable&";
  if(m_transitGatewayPolicyTableIdHasBeenSet)
  {
    ss << "TransitGatewayPolicyTableId=" << StringUtils::URLEncode(m_transitGatewayPolicyTableId.c_str()) << "&";
  }

  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
    ss << "TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DisassociateTransitGatewayPolicyTableRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
