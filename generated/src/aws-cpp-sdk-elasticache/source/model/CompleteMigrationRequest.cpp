/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CompleteMigrationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

CompleteMigrationRequest::CompleteMigrationRequest() : 
    m_replicationGroupIdHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false)
{
}

Aws::String CompleteMigrationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CompleteMigration&";
  if(m_replicationGroupIdHasBeenSet)
  {
    ss << "ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }

  if(m_forceHasBeenSet)
  {
    ss << "Force=" << std::boolalpha << m_force << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  CompleteMigrationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
