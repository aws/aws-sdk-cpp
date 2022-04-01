/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteInternetGatewayRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteInternetGatewayRequest::DeleteInternetGatewayRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_internetGatewayIdHasBeenSet(false)
{
}

Aws::String DeleteInternetGatewayRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteInternetGateway&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_internetGatewayIdHasBeenSet)
  {
    ss << "InternetGatewayId=" << StringUtils::URLEncode(m_internetGatewayId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteInternetGatewayRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
