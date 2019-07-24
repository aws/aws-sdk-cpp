/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/ModifyClientVpnEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyClientVpnEndpointRequest::ModifyClientVpnEndpointRequest() : 
    m_clientVpnEndpointIdHasBeenSet(false),
    m_serverCertificateArnHasBeenSet(false),
    m_connectionLogOptionsHasBeenSet(false),
    m_dnsServersHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_splitTunnel(false),
    m_splitTunnelHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ModifyClientVpnEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyClientVpnEndpoint&";
  if(m_clientVpnEndpointIdHasBeenSet)
  {
    ss << "ClientVpnEndpointId=" << StringUtils::URLEncode(m_clientVpnEndpointId.c_str()) << "&";
  }

  if(m_serverCertificateArnHasBeenSet)
  {
    ss << "ServerCertificateArn=" << StringUtils::URLEncode(m_serverCertificateArn.c_str()) << "&";
  }

  if(m_connectionLogOptionsHasBeenSet)
  {
    m_connectionLogOptions.OutputToStream(ss, "ConnectionLogOptions");
  }

  if(m_dnsServersHasBeenSet)
  {
    m_dnsServers.OutputToStream(ss, "DnsServers");
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_splitTunnelHasBeenSet)
  {
    ss << "SplitTunnel=" << std::boolalpha << m_splitTunnel << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyClientVpnEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
