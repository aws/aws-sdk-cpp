﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/RevokeDBSecurityGroupIngressRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

RevokeDBSecurityGroupIngressRequest::RevokeDBSecurityGroupIngressRequest() : 
    m_dBSecurityGroupNameHasBeenSet(false),
    m_cIDRIPHasBeenSet(false),
    m_eC2SecurityGroupNameHasBeenSet(false),
    m_eC2SecurityGroupIdHasBeenSet(false),
    m_eC2SecurityGroupOwnerIdHasBeenSet(false)
{
}

Aws::String RevokeDBSecurityGroupIngressRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RevokeDBSecurityGroupIngress&";
  if(m_dBSecurityGroupNameHasBeenSet)
  {
    ss << "DBSecurityGroupName=" << StringUtils::URLEncode(m_dBSecurityGroupName.c_str()) << "&";
  }

  if(m_cIDRIPHasBeenSet)
  {
    ss << "CIDRIP=" << StringUtils::URLEncode(m_cIDRIP.c_str()) << "&";
  }

  if(m_eC2SecurityGroupNameHasBeenSet)
  {
    ss << "EC2SecurityGroupName=" << StringUtils::URLEncode(m_eC2SecurityGroupName.c_str()) << "&";
  }

  if(m_eC2SecurityGroupIdHasBeenSet)
  {
    ss << "EC2SecurityGroupId=" << StringUtils::URLEncode(m_eC2SecurityGroupId.c_str()) << "&";
  }

  if(m_eC2SecurityGroupOwnerIdHasBeenSet)
  {
    ss << "EC2SecurityGroupOwnerId=" << StringUtils::URLEncode(m_eC2SecurityGroupOwnerId.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  RevokeDBSecurityGroupIngressRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
