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
