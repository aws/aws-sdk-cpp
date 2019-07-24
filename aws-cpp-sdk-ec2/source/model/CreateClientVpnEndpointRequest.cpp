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

#include <aws/ec2/model/CreateClientVpnEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateClientVpnEndpointRequest::CreateClientVpnEndpointRequest() : 
    m_clientCidrBlockHasBeenSet(false),
    m_serverCertificateArnHasBeenSet(false),
    m_authenticationOptionsHasBeenSet(false),
    m_connectionLogOptionsHasBeenSet(false),
    m_dnsServersHasBeenSet(false),
    m_transportProtocol(TransportProtocol::NOT_SET),
    m_transportProtocolHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_splitTunnel(false),
    m_splitTunnelHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagSpecificationsHasBeenSet(false)
{
}

Aws::String CreateClientVpnEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateClientVpnEndpoint&";
  if(m_clientCidrBlockHasBeenSet)
  {
    ss << "ClientCidrBlock=" << StringUtils::URLEncode(m_clientCidrBlock.c_str()) << "&";
  }

  if(m_serverCertificateArnHasBeenSet)
  {
    ss << "ServerCertificateArn=" << StringUtils::URLEncode(m_serverCertificateArn.c_str()) << "&";
  }

  if(m_authenticationOptionsHasBeenSet)
  {
    unsigned authenticationOptionsCount = 1;
    for(auto& item : m_authenticationOptions)
    {
      item.OutputToStream(ss, "Authentication.", authenticationOptionsCount, "");
      authenticationOptionsCount++;
    }
  }

  if(m_connectionLogOptionsHasBeenSet)
  {
    m_connectionLogOptions.OutputToStream(ss, "ConnectionLogOptions");
  }

  if(m_dnsServersHasBeenSet)
  {
    unsigned dnsServersCount = 1;
    for(auto& item : m_dnsServers)
    {
      ss << "DnsServers." << dnsServersCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      dnsServersCount++;
    }
  }

  if(m_transportProtocolHasBeenSet)
  {
    ss << "TransportProtocol=" << TransportProtocolMapper::GetNameForTransportProtocol(m_transportProtocol) << "&";
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

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateClientVpnEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
