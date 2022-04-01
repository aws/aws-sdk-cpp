/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteCarrierGatewayRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteCarrierGatewayRequest::DeleteCarrierGatewayRequest() : 
    m_carrierGatewayIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DeleteCarrierGatewayRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteCarrierGateway&";
  if(m_carrierGatewayIdHasBeenSet)
  {
    ss << "CarrierGatewayId=" << StringUtils::URLEncode(m_carrierGatewayId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteCarrierGatewayRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
