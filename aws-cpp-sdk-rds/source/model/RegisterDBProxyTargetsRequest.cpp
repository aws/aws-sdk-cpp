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

#include <aws/rds/model/RegisterDBProxyTargetsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

RegisterDBProxyTargetsRequest::RegisterDBProxyTargetsRequest() : 
    m_dBProxyNameHasBeenSet(false),
    m_targetGroupNameHasBeenSet(false),
    m_dBInstanceIdentifiersHasBeenSet(false),
    m_dBClusterIdentifiersHasBeenSet(false)
{
}

Aws::String RegisterDBProxyTargetsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RegisterDBProxyTargets&";
  if(m_dBProxyNameHasBeenSet)
  {
    ss << "DBProxyName=" << StringUtils::URLEncode(m_dBProxyName.c_str()) << "&";
  }

  if(m_targetGroupNameHasBeenSet)
  {
    ss << "TargetGroupName=" << StringUtils::URLEncode(m_targetGroupName.c_str()) << "&";
  }

  if(m_dBInstanceIdentifiersHasBeenSet)
  {
    unsigned dBInstanceIdentifiersCount = 1;
    for(auto& item : m_dBInstanceIdentifiers)
    {
      ss << "DBInstanceIdentifiers.member." << dBInstanceIdentifiersCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      dBInstanceIdentifiersCount++;
    }
  }

  if(m_dBClusterIdentifiersHasBeenSet)
  {
    unsigned dBClusterIdentifiersCount = 1;
    for(auto& item : m_dBClusterIdentifiers)
    {
      ss << "DBClusterIdentifiers.member." << dBClusterIdentifiersCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      dBClusterIdentifiersCount++;
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  RegisterDBProxyTargetsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
