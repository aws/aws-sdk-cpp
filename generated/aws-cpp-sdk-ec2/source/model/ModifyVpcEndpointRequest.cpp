/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVpcEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyVpcEndpointRequest::ModifyVpcEndpointRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false),
    m_resetPolicy(false),
    m_resetPolicyHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_addRouteTableIdsHasBeenSet(false),
    m_removeRouteTableIdsHasBeenSet(false),
    m_addSubnetIdsHasBeenSet(false),
    m_removeSubnetIdsHasBeenSet(false),
    m_addSecurityGroupIdsHasBeenSet(false),
    m_removeSecurityGroupIdsHasBeenSet(false),
    m_privateDnsEnabled(false),
    m_privateDnsEnabledHasBeenSet(false)
{
}

Aws::String ModifyVpcEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyVpcEndpoint&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_vpcEndpointIdHasBeenSet)
  {
    ss << "VpcEndpointId=" << StringUtils::URLEncode(m_vpcEndpointId.c_str()) << "&";
  }

  if(m_resetPolicyHasBeenSet)
  {
    ss << "ResetPolicy=" << std::boolalpha << m_resetPolicy << "&";
  }

  if(m_policyDocumentHasBeenSet)
  {
    ss << "PolicyDocument=" << StringUtils::URLEncode(m_policyDocument.c_str()) << "&";
  }

  if(m_addRouteTableIdsHasBeenSet)
  {
    unsigned addRouteTableIdsCount = 1;
    for(auto& item : m_addRouteTableIds)
    {
      ss << "AddRouteTableId." << addRouteTableIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      addRouteTableIdsCount++;
    }
  }

  if(m_removeRouteTableIdsHasBeenSet)
  {
    unsigned removeRouteTableIdsCount = 1;
    for(auto& item : m_removeRouteTableIds)
    {
      ss << "RemoveRouteTableId." << removeRouteTableIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      removeRouteTableIdsCount++;
    }
  }

  if(m_addSubnetIdsHasBeenSet)
  {
    unsigned addSubnetIdsCount = 1;
    for(auto& item : m_addSubnetIds)
    {
      ss << "AddSubnetId." << addSubnetIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      addSubnetIdsCount++;
    }
  }

  if(m_removeSubnetIdsHasBeenSet)
  {
    unsigned removeSubnetIdsCount = 1;
    for(auto& item : m_removeSubnetIds)
    {
      ss << "RemoveSubnetId." << removeSubnetIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      removeSubnetIdsCount++;
    }
  }

  if(m_addSecurityGroupIdsHasBeenSet)
  {
    unsigned addSecurityGroupIdsCount = 1;
    for(auto& item : m_addSecurityGroupIds)
    {
      ss << "AddSecurityGroupId." << addSecurityGroupIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      addSecurityGroupIdsCount++;
    }
  }

  if(m_removeSecurityGroupIdsHasBeenSet)
  {
    unsigned removeSecurityGroupIdsCount = 1;
    for(auto& item : m_removeSecurityGroupIds)
    {
      ss << "RemoveSecurityGroupId." << removeSecurityGroupIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      removeSecurityGroupIdsCount++;
    }
  }

  if(m_privateDnsEnabledHasBeenSet)
  {
    ss << "PrivateDnsEnabled=" << std::boolalpha << m_privateDnsEnabled << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVpcEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
