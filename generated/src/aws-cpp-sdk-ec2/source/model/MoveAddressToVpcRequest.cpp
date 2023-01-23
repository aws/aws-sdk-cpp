/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MoveAddressToVpcRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

MoveAddressToVpcRequest::MoveAddressToVpcRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_publicIpHasBeenSet(false)
{
}

Aws::String MoveAddressToVpcRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=MoveAddressToVpc&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_publicIpHasBeenSet)
  {
    ss << "PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  MoveAddressToVpcRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
