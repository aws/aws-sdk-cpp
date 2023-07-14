/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyDBProxyTargetGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ModifyDBProxyTargetGroupRequest::ModifyDBProxyTargetGroupRequest() : 
    m_targetGroupNameHasBeenSet(false),
    m_dBProxyNameHasBeenSet(false),
    m_connectionPoolConfigHasBeenSet(false),
    m_newNameHasBeenSet(false)
{
}

Aws::String ModifyDBProxyTargetGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyDBProxyTargetGroup&";
  if(m_targetGroupNameHasBeenSet)
  {
    ss << "TargetGroupName=" << StringUtils::URLEncode(m_targetGroupName.c_str()) << "&";
  }

  if(m_dBProxyNameHasBeenSet)
  {
    ss << "DBProxyName=" << StringUtils::URLEncode(m_dBProxyName.c_str()) << "&";
  }

  if(m_connectionPoolConfigHasBeenSet)
  {
    m_connectionPoolConfig.OutputToStream(ss, "ConnectionPoolConfig");
  }

  if(m_newNameHasBeenSet)
  {
    ss << "NewName=" << StringUtils::URLEncode(m_newName.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyDBProxyTargetGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
