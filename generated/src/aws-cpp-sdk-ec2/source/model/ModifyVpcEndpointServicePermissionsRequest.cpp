/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVpcEndpointServicePermissionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyVpcEndpointServicePermissionsRequest::ModifyVpcEndpointServicePermissionsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_addAllowedPrincipalsHasBeenSet(false),
    m_removeAllowedPrincipalsHasBeenSet(false)
{
}

Aws::String ModifyVpcEndpointServicePermissionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyVpcEndpointServicePermissions&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_serviceIdHasBeenSet)
  {
    ss << "ServiceId=" << StringUtils::URLEncode(m_serviceId.c_str()) << "&";
  }

  if(m_addAllowedPrincipalsHasBeenSet)
  {
    unsigned addAllowedPrincipalsCount = 1;
    for(auto& item : m_addAllowedPrincipals)
    {
      ss << "AddAllowedPrincipals." << addAllowedPrincipalsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      addAllowedPrincipalsCount++;
    }
  }

  if(m_removeAllowedPrincipalsHasBeenSet)
  {
    unsigned removeAllowedPrincipalsCount = 1;
    for(auto& item : m_removeAllowedPrincipals)
    {
      ss << "RemoveAllowedPrincipals." << removeAllowedPrincipalsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      removeAllowedPrincipalsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVpcEndpointServicePermissionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
