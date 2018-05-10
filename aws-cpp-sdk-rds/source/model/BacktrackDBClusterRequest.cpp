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

#include <aws/rds/model/BacktrackDBClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

BacktrackDBClusterRequest::BacktrackDBClusterRequest() : 
    m_dBClusterIdentifierHasBeenSet(false),
    m_backtrackToHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false),
    m_useEarliestTimeOnPointInTimeUnavailable(false),
    m_useEarliestTimeOnPointInTimeUnavailableHasBeenSet(false)
{
}

Aws::String BacktrackDBClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=BacktrackDBCluster&";
  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_backtrackToHasBeenSet)
  {
    ss << "BacktrackTo=" << StringUtils::URLEncode(m_backtrackTo.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_forceHasBeenSet)
  {
    ss << "Force=" << std::boolalpha << m_force << "&";
  }

  if(m_useEarliestTimeOnPointInTimeUnavailableHasBeenSet)
  {
    ss << "UseEarliestTimeOnPointInTimeUnavailable=" << std::boolalpha << m_useEarliestTimeOnPointInTimeUnavailable << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  BacktrackDBClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
