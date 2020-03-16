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

#include <aws/elasticache/model/FailoverGlobalReplicationGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

FailoverGlobalReplicationGroupRequest::FailoverGlobalReplicationGroupRequest() : 
    m_globalReplicationGroupIdHasBeenSet(false),
    m_primaryRegionHasBeenSet(false),
    m_primaryReplicationGroupIdHasBeenSet(false)
{
}

Aws::String FailoverGlobalReplicationGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=FailoverGlobalReplicationGroup&";
  if(m_globalReplicationGroupIdHasBeenSet)
  {
    ss << "GlobalReplicationGroupId=" << StringUtils::URLEncode(m_globalReplicationGroupId.c_str()) << "&";
  }

  if(m_primaryRegionHasBeenSet)
  {
    ss << "PrimaryRegion=" << StringUtils::URLEncode(m_primaryRegion.c_str()) << "&";
  }

  if(m_primaryReplicationGroupIdHasBeenSet)
  {
    ss << "PrimaryReplicationGroupId=" << StringUtils::URLEncode(m_primaryReplicationGroupId.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  FailoverGlobalReplicationGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
