/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/TestMigrationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

TestMigrationRequest::TestMigrationRequest() : 
    m_replicationGroupIdHasBeenSet(false),
    m_customerNodeEndpointListHasBeenSet(false)
{
}

Aws::String TestMigrationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=TestMigration&";
  if(m_replicationGroupIdHasBeenSet)
  {
    ss << "ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }

  if(m_customerNodeEndpointListHasBeenSet)
  {
    unsigned customerNodeEndpointListCount = 1;
    for(auto& item : m_customerNodeEndpointList)
    {
      item.OutputToStream(ss, "CustomerNodeEndpointList.member.", customerNodeEndpointListCount, "");
      customerNodeEndpointListCount++;
    }
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  TestMigrationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
