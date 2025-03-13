/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVpcBlockPublicAccessExclusionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyVpcBlockPublicAccessExclusionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyVpcBlockPublicAccessExclusion&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_exclusionIdHasBeenSet)
  {
    ss << "ExclusionId=" << StringUtils::URLEncode(m_exclusionId.c_str()) << "&";
  }

  if(m_internetGatewayExclusionModeHasBeenSet)
  {
    ss << "InternetGatewayExclusionMode=" << StringUtils::URLEncode(InternetGatewayExclusionModeMapper::GetNameForInternetGatewayExclusionMode(m_internetGatewayExclusionMode)) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVpcBlockPublicAccessExclusionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
