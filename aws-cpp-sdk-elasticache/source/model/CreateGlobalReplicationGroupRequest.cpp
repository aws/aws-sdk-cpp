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
