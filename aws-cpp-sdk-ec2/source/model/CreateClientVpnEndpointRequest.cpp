/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_vpnPort(0),
    m_vpnPortHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_splitTunnel(false),
    m_splitTunnelHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagSpecificationsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_selfServicePortal(SelfServicePortal::NOT_SET),
    m_selfServicePortalHasBeenSet(false),
    m_clientConnectOptionsHasBeenSet(false)
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

  if(m_vpnPortHasBeenSet)
  {
    ss << "VpnPort=" << m_vpnPort << "&";
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

  if(m_securityGroupIdsHasBeenSet)
  {
    unsigned securityGroupIdsCount = 1;
    for(auto& item : m_securityGroupIds)
    {
      ss << "SecurityGroupId." << securityGroupIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      securityGroupIdsCount++;
    }
  }

  if(m_vpcIdHasBeenSet)
  {
    ss << "VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_selfServicePortalHasBeenSet)
  {
    ss << "SelfServicePortal=" << SelfServicePortalMapper::GetNameForSelfServicePortal(m_selfServicePortal) << "&";
  }

  if(m_clientConnectOptionsHasBeenSet)
  {
    m_clientConnectOptions.OutputToStream(ss, "ClientConnectOptions");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateClientVpnEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
