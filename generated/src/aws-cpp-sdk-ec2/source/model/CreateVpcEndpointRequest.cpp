/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateVpcEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateVpcEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateVpcEndpoint&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_vpcEndpointTypeHasBeenSet)
  {
    ss << "VpcEndpointType=" << StringUtils::URLEncode(VpcEndpointTypeMapper::GetNameForVpcEndpointType(m_vpcEndpointType)) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
    ss << "VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_serviceNameHasBeenSet)
  {
    ss << "ServiceName=" << StringUtils::URLEncode(m_serviceName.c_str()) << "&";
  }

  if(m_policyDocumentHasBeenSet)
  {
    ss << "PolicyDocument=" << StringUtils::URLEncode(m_policyDocument.c_str()) << "&";
  }

  if(m_routeTableIdsHasBeenSet)
  {
    unsigned routeTableIdsCount = 1;
    for(auto& item : m_routeTableIds)
    {
      ss << "RouteTableId." << routeTableIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      routeTableIdsCount++;
    }
  }

  if(m_subnetIdsHasBeenSet)
  {
    unsigned subnetIdsCount = 1;
    for(auto& item : m_subnetIds)
    {
      ss << "SubnetId." << subnetIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      subnetIdsCount++;
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

  if(m_ipAddressTypeHasBeenSet)
  {
    ss << "IpAddressType=" << StringUtils::URLEncode(IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType)) << "&";
  }

  if(m_dnsOptionsHasBeenSet)
  {
    m_dnsOptions.OutputToStream(ss, "DnsOptions");
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_privateDnsEnabledHasBeenSet)
  {
    ss << "PrivateDnsEnabled=" << std::boolalpha << m_privateDnsEnabled << "&";
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

  if(m_subnetConfigurationsHasBeenSet)
  {
    unsigned subnetConfigurationsCount = 1;
    for(auto& item : m_subnetConfigurations)
    {
      item.OutputToStream(ss, "SubnetConfiguration.", subnetConfigurationsCount, "");
      subnetConfigurationsCount++;
    }
  }

  if(m_serviceNetworkArnHasBeenSet)
  {
    ss << "ServiceNetworkArn=" << StringUtils::URLEncode(m_serviceNetworkArn.c_str()) << "&";
  }

  if(m_resourceConfigurationArnHasBeenSet)
  {
    ss << "ResourceConfigurationArn=" << StringUtils::URLEncode(m_resourceConfigurationArn.c_str()) << "&";
  }

  if(m_serviceRegionHasBeenSet)
  {
    ss << "ServiceRegion=" << StringUtils::URLEncode(m_serviceRegion.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateVpcEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
