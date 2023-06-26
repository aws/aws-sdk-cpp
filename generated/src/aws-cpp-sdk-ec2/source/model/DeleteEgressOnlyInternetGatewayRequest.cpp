/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteEgressOnlyInternetGatewayRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteEgressOnlyInternetGatewayRequest::DeleteEgressOnlyInternetGatewayRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_egressOnlyInternetGatewayIdHasBeenSet(false)
{
}

Aws::String DeleteEgressOnlyInternetGatewayRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteEgressOnlyInternetGateway&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_egressOnlyInternetGatewayIdHasBeenSet)
  {
    ss << "EgressOnlyInternetGatewayId=" << StringUtils::URLEncode(m_egressOnlyInternetGatewayId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteEgressOnlyInternetGatewayRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
