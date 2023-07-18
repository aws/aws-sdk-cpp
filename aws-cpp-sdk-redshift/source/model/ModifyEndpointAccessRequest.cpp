/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyEndpointAccessRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

ModifyEndpointAccessRequest::ModifyEndpointAccessRequest() : 
    m_endpointNameHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false)
{
}

Aws::String ModifyEndpointAccessRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyEndpointAccess&";
  if(m_endpointNameHasBeenSet)
  {
    ss << "EndpointName=" << StringUtils::URLEncode(m_endpointName.c_str()) << "&";
  }

  if(m_vpcSecurityGroupIdsHasBeenSet)
  {
    unsigned vpcSecurityGroupIdsCount = 1;
    for(auto& item : m_vpcSecurityGroupIds)
    {
      ss << "VpcSecurityGroupIds.member." << vpcSecurityGroupIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      vpcSecurityGroupIdsCount++;
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifyEndpointAccessRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
