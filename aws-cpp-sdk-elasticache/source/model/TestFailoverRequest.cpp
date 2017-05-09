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

#include <aws/elasticache/model/TestFailoverRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

TestFailoverRequest::TestFailoverRequest() : 
    m_replicationGroupIdHasBeenSet(false),
    m_nodeGroupIdHasBeenSet(false)
{
}

Aws::String TestFailoverRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=TestFailover&";
  if(m_replicationGroupIdHasBeenSet)
  {
    ss << "ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }

  if(m_nodeGroupIdHasBeenSet)
  {
    ss << "NodeGroupId=" << StringUtils::URLEncode(m_nodeGroupId.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  TestFailoverRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
