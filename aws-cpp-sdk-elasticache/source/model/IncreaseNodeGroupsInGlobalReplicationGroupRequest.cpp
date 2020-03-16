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

#include <aws/elasticache/model/IncreaseNodeGroupsInGlobalReplicationGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

IncreaseNodeGroupsInGlobalReplicationGroupRequest::IncreaseNodeGroupsInGlobalReplicationGroupRequest() : 
    m_globalReplicationGroupIdHasBeenSet(false),
    m_nodeGroupCount(0),
    m_nodeGroupCountHasBeenSet(false),
    m_regionalConfigurationsHasBeenSet(false),
    m_applyImmediately(false),
    m_applyImmediatelyHasBeenSet(false)
{
}

Aws::String IncreaseNodeGroupsInGlobalReplicationGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=IncreaseNodeGroupsInGlobalReplicationGroup&";
  if(m_globalReplicationGroupIdHasBeenSet)
  {
    ss << "GlobalReplicationGroupId=" << StringUtils::URLEncode(m_globalReplicationGroupId.c_str()) << "&";
  }

  if(m_nodeGroupCountHasBeenSet)
  {
    ss << "NodeGroupCount=" << m_nodeGroupCount << "&";
  }

  if(m_regionalConfigurationsHasBeenSet)
  {
    unsigned regionalConfigurationsCount = 1;
    for(auto& item : m_regionalConfigurations)
    {
      item.OutputToStream(ss, "RegionalConfigurations.member.", regionalConfigurationsCount, "");
      regionalConfigurationsCount++;
    }
  }

  if(m_applyImmediatelyHasBeenSet)
  {
    ss << "ApplyImmediately=" << std::boolalpha << m_applyImmediately << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  IncreaseNodeGroupsInGlobalReplicationGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
