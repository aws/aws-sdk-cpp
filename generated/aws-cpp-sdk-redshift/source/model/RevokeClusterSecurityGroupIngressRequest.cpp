/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/RevokeClusterSecurityGroupIngressRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

RevokeClusterSecurityGroupIngressRequest::RevokeClusterSecurityGroupIngressRequest() : 
    m_clusterSecurityGroupNameHasBeenSet(false),
    m_cIDRIPHasBeenSet(false),
    m_eC2SecurityGroupNameHasBeenSet(false),
    m_eC2SecurityGroupOwnerIdHasBeenSet(false)
{
}

Aws::String RevokeClusterSecurityGroupIngressRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RevokeClusterSecurityGroupIngress&";
  if(m_clusterSecurityGroupNameHasBeenSet)
  {
    ss << "ClusterSecurityGroupName=" << StringUtils::URLEncode(m_clusterSecurityGroupName.c_str()) << "&";
  }

  if(m_cIDRIPHasBeenSet)
  {
    ss << "CIDRIP=" << StringUtils::URLEncode(m_cIDRIP.c_str()) << "&";
  }

  if(m_eC2SecurityGroupNameHasBeenSet)
  {
    ss << "EC2SecurityGroupName=" << StringUtils::URLEncode(m_eC2SecurityGroupName.c_str()) << "&";
  }

  if(m_eC2SecurityGroupOwnerIdHasBeenSet)
  {
    ss << "EC2SecurityGroupOwnerId=" << StringUtils::URLEncode(m_eC2SecurityGroupOwnerId.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  RevokeClusterSecurityGroupIngressRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
