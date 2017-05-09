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

#include <aws/redshift/model/GetClusterCredentialsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

GetClusterCredentialsRequest::GetClusterCredentialsRequest() : 
    m_dbUserHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false),
    m_autoCreate(false),
    m_autoCreateHasBeenSet(false),
    m_dbGroupsHasBeenSet(false)
{
}

Aws::String GetClusterCredentialsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetClusterCredentials&";
  if(m_dbUserHasBeenSet)
  {
    ss << "DbUser=" << StringUtils::URLEncode(m_dbUser.c_str()) << "&";
  }

  if(m_dbNameHasBeenSet)
  {
    ss << "DbName=" << StringUtils::URLEncode(m_dbName.c_str()) << "&";
  }

  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_durationSecondsHasBeenSet)
  {
    ss << "DurationSeconds=" << m_durationSeconds << "&";
  }

  if(m_autoCreateHasBeenSet)
  {
    ss << "AutoCreate=" << std::boolalpha << m_autoCreate << "&";
  }

  if(m_dbGroupsHasBeenSet)
  {
    unsigned dbGroupsCount = 1;
    for(auto& item : m_dbGroups)
    {
      ss << "DbGroups.member." << dbGroupsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      dbGroupsCount++;
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  GetClusterCredentialsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
