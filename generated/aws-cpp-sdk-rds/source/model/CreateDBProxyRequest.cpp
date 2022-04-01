/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateDBProxyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CreateDBProxyRequest::CreateDBProxyRequest() : 
    m_dBProxyNameHasBeenSet(false),
    m_engineFamily(EngineFamily::NOT_SET),
    m_engineFamilyHasBeenSet(false),
    m_authHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_vpcSubnetIdsHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false),
    m_requireTLS(false),
    m_requireTLSHasBeenSet(false),
    m_idleClientTimeout(0),
    m_idleClientTimeoutHasBeenSet(false),
    m_debugLogging(false),
    m_debugLoggingHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDBProxyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDBProxy&";
  if(m_dBProxyNameHasBeenSet)
  {
    ss << "DBProxyName=" << StringUtils::URLEncode(m_dBProxyName.c_str()) << "&";
  }

  if(m_engineFamilyHasBeenSet)
  {
    ss << "EngineFamily=" << EngineFamilyMapper::GetNameForEngineFamily(m_engineFamily) << "&";
  }

  if(m_authHasBeenSet)
  {
    unsigned authCount = 1;
    for(auto& item : m_auth)
    {
      item.OutputToStream(ss, "Auth.member.", authCount, "");
      authCount++;
    }
  }

  if(m_roleArnHasBeenSet)
  {
    ss << "RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
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

  if(m_requireTLSHasBeenSet)
  {
    ss << "RequireTLS=" << std::boolalpha << m_requireTLS << "&";
  }

  if(m_idleClientTimeoutHasBeenSet)
  {
    ss << "IdleClientTimeout=" << m_idleClientTimeout << "&";
  }

  if(m_debugLoggingHasBeenSet)
  {
    ss << "DebugLogging=" << std::boolalpha << m_debugLogging << "&";
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


void  CreateDBProxyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
