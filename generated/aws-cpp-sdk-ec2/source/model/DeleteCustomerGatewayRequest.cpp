/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteCustomerGatewayRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteCustomerGatewayRequest::DeleteCustomerGatewayRequest() : 
    m_customerGatewayIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DeleteCustomerGatewayRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteCustomerGateway&";
  if(m_customerGatewayIdHasBeenSet)
  {
    ss << "CustomerGatewayId=" << StringUtils::URLEncode(m_customerGatewayId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteCustomerGatewayRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
