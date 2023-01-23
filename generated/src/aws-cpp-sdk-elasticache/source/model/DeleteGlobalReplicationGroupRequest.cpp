/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DeleteGlobalReplicationGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

DeleteGlobalReplicationGroupRequest::DeleteGlobalReplicationGroupRequest() : 
    m_globalReplicationGroupIdHasBeenSet(false),
    m_retainPrimaryReplicationGroup(false),
    m_retainPrimaryReplicationGroupHasBeenSet(false)
{
}

Aws::String DeleteGlobalReplicationGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteGlobalReplicationGroup&";
  if(m_globalReplicationGroupIdHasBeenSet)
  {
    ss << "GlobalReplicationGroupId=" << StringUtils::URLEncode(m_globalReplicationGroupId.c_str()) << "&";
  }

  if(m_retainPrimaryReplicationGroupHasBeenSet)
  {
    ss << "RetainPrimaryReplicationGroup=" << std::boolalpha << m_retainPrimaryReplicationGroup << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  DeleteGlobalReplicationGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
