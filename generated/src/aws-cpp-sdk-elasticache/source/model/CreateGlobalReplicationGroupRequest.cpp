/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CreateGlobalReplicationGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

CreateGlobalReplicationGroupRequest::CreateGlobalReplicationGroupRequest() : 
    m_globalReplicationGroupIdSuffixHasBeenSet(false),
    m_globalReplicationGroupDescriptionHasBeenSet(false),
    m_primaryReplicationGroupIdHasBeenSet(false)
{
}

Aws::String CreateGlobalReplicationGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateGlobalReplicationGroup&";
  if(m_globalReplicationGroupIdSuffixHasBeenSet)
  {
    ss << "GlobalReplicationGroupIdSuffix=" << StringUtils::URLEncode(m_globalReplicationGroupIdSuffix.c_str()) << "&";
  }

  if(m_globalReplicationGroupDescriptionHasBeenSet)
  {
    ss << "GlobalReplicationGroupDescription=" << StringUtils::URLEncode(m_globalReplicationGroupDescription.c_str()) << "&";
  }

  if(m_primaryReplicationGroupIdHasBeenSet)
  {
    ss << "PrimaryReplicationGroupId=" << StringUtils::URLEncode(m_primaryReplicationGroupId.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  CreateGlobalReplicationGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
