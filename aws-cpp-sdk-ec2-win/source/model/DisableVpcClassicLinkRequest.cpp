/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DisableVpcClassicLinkRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DisableVpcClassicLinkRequest::DisableVpcClassicLinkRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

Aws::String DisableVpcClassicLinkRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DisableVpcClassicLink&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
    ss << "VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DisableVpcClassicLinkRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
