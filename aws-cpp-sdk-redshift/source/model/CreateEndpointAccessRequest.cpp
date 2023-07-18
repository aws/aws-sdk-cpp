/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/CreateEndpointAccessRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

CreateEndpointAccessRequest::CreateEndpointAccessRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_resourceOwnerHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_subnetGroupNameHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false)
{
}

Aws::String CreateEndpointAccessRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateEndpointAccess&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_resourceOwnerHasBeenSet)
  {
    ss << "ResourceOwner=" << StringUtils::URLEncode(m_resourceOwner.c_str()) << "&";
  }

  if(m_endpointNameHasBeenSet)
  {
    ss << "EndpointName=" << StringUtils::URLEncode(m_endpointName.c_str()) << "&";
  }

  if(m_subnetGroupNameHasBeenSet)
  {
    ss << "SubnetGroupName=" << StringUtils::URLEncode(m_subnetGroupName.c_str()) << "&";
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


void  CreateEndpointAccessRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
