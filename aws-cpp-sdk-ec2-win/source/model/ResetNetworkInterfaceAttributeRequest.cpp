/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ResetNetworkInterfaceAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ResetNetworkInterfaceAttributeRequest::ResetNetworkInterfaceAttributeRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_sourceDestCheckHasBeenSet(false)
{
}

Aws::String ResetNetworkInterfaceAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ResetNetworkInterfaceAttribute&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
    ss << "NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_sourceDestCheckHasBeenSet)
  {
    ss << "SourceDestCheck=" << StringUtils::URLEncode(m_sourceDestCheck.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ResetNetworkInterfaceAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
