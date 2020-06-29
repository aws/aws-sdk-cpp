/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/IncreaseReplicaCountRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

IncreaseReplicaCountRequest::IncreaseReplicaCountRequest() : 
    m_replicationGroupIdHasBeenSet(false),
    m_newReplicaCount(0),
    m_newReplicaCountHasBeenSet(false),
    m_replicaConfigurationHasBeenSet(false),
    m_applyImmediately(false),
    m_applyImmediatelyHasBeenSet(false)
{
}

Aws::String IncreaseReplicaCountRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=IncreaseReplicaCount&";
  if(m_replicationGroupIdHasBeenSet)
  {
    ss << "ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }

  if(m_newReplicaCountHasBeenSet)
  {
    ss << "NewReplicaCount=" << m_newReplicaCount << "&";
  }

  if(m_replicaConfigurationHasBeenSet)
  {
    unsigned replicaConfigurationCount = 1;
    for(auto& item : m_replicaConfiguration)
    {
      item.OutputToStream(ss, "ReplicaConfiguration.member.", replicaConfigurationCount, "");
      replicaConfigurationCount++;
    }
  }

  if(m_applyImmediatelyHasBeenSet)
  {
    ss << "ApplyImmediately=" << std::boolalpha << m_applyImmediately << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  IncreaseReplicaCountRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
