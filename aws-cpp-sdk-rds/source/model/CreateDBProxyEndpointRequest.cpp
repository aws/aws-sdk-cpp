/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateDBProxyEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CreateDBProxyEndpointRequest::CreateDBProxyEndpointRequest() : 
    m_dBProxyNameHasBeenSet(false),
    m_dBProxyEndpointNameHasBeenSet(false),
    m_vpcSubnetIdsHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false),
    m_targetRole(DBProxyEndpointTargetRole::NOT_SET),
    m_targetRoleHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDBProxyEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDBProxyEndpoint&";
  if(m_dBProxyNameHasBeenSet)
  {
    ss << "DBProxyName=" << StringUtils::URLEncode(m_dBProxyName.c_str()) << "&";
  }

  if(m_dBProxyEndpointNameHasBeenSet)
  {
    ss << "DBProxyEndpointName=" << StringUtils::URLEncode(m_dBProxyEndpointName.c_str()) << "&";
  }

  if(m_vpcSubnetIdsHasBeenSet)
  {
    unsigned vpcSubnetIdsCount = 1;
    for(auto& item : m_vpcSubnetIds)
    {
      ss << "VpcSubnetIds.member." << vpcSubnetIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      vpcSubnetIdsCount++;
    }
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

  if(m_targetRoleHasBeenSet)
  {
    ss << "TargetRole=" << DBProxyEndpointTargetRoleMapper::GetNameForDBProxyEndpointTargetRole(m_targetRole) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateDBProxyEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
