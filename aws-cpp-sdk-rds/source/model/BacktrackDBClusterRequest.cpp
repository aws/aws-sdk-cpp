/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    ss << "BacktrackTo=" << StringUtils::URLEncode(m_backtrackTo.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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
