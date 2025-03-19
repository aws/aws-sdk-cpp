/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVerifiedAccessEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyVerifiedAccessEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyVerifiedAccessEndpoint&";
  if(m_verifiedAccessEndpointIdHasBeenSet)
  {
    ss << "VerifiedAccessEndpointId=" << StringUtils::URLEncode(m_verifiedAccessEndpointId.c_str()) << "&";
  }

  if(m_verifiedAccessGroupIdHasBeenSet)
  {
    ss << "VerifiedAccessGroupId=" << StringUtils::URLEncode(m_verifiedAccessGroupId.c_str()) << "&";
  }

  if(m_loadBalancerOptionsHasBeenSet)
  {
    m_loadBalancerOptions.OutputToStream(ss, "LoadBalancerOptions");
  }

  if(m_networkInterfaceOptionsHasBeenSet)
  {
    m_networkInterfaceOptions.OutputToStream(ss, "NetworkInterfaceOptions");
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_rdsOptionsHasBeenSet)
  {
    m_rdsOptions.OutputToStream(ss, "RdsOptions");
  }

  if(m_cidrOptionsHasBeenSet)
  {
    m_cidrOptions.OutputToStream(ss, "CidrOptions");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVerifiedAccessEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
