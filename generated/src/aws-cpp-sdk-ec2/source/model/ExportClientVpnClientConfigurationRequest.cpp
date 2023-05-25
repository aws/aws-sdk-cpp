/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ExportClientVpnClientConfigurationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ExportClientVpnClientConfigurationRequest::ExportClientVpnClientConfigurationRequest() : 
    m_clientVpnEndpointIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ExportClientVpnClientConfigurationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ExportClientVpnClientConfiguration&";
  if(m_clientVpnEndpointIdHasBeenSet)
  {
    ss << "ClientVpnEndpointId=" << StringUtils::URLEncode(m_clientVpnEndpointId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ExportClientVpnClientConfigurationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
