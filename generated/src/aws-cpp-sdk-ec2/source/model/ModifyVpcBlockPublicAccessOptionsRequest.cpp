/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVpcBlockPublicAccessOptionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyVpcBlockPublicAccessOptionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyVpcBlockPublicAccessOptions&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_internetGatewayBlockModeHasBeenSet)
  {
    ss << "InternetGatewayBlockMode=" << StringUtils::URLEncode(InternetGatewayBlockModeMapper::GetNameForInternetGatewayBlockMode(m_internetGatewayBlockMode)) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVpcBlockPublicAccessOptionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
