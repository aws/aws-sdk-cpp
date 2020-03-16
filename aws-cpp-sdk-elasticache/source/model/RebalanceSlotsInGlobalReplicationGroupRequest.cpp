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

#include <aws/elasticache/model/RebalanceSlotsInGlobalReplicationGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

RebalanceSlotsInGlobalReplicationGroupRequest::RebalanceSlotsInGlobalReplicationGroupRequest() : 
    m_globalReplicationGroupIdHasBeenSet(false),
    m_applyImmediately(false),
    m_applyImmediatelyHasBeenSet(false)
{
}

Aws::String RebalanceSlotsInGlobalReplicationGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RebalanceSlotsInGlobalReplicationGroup&";
  if(m_globalReplicationGroupIdHasBeenSet)
  {
    ss << "GlobalReplicationGroupId=" << StringUtils::URLEncode(m_globalReplicationGroupId.c_str()) << "&";
  }

  if(m_applyImmediatelyHasBeenSet)
  {
    ss << "ApplyImmediately=" << std::boolalpha << m_applyImmediately << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  RebalanceSlotsInGlobalReplicationGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
