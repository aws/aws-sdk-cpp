/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyClusterSnapshotScheduleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

ModifyClusterSnapshotScheduleRequest::ModifyClusterSnapshotScheduleRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_scheduleIdentifierHasBeenSet(false),
    m_disassociateSchedule(false),
    m_disassociateScheduleHasBeenSet(false)
{
}

Aws::String ModifyClusterSnapshotScheduleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyClusterSnapshotSchedule&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_scheduleIdentifierHasBeenSet)
  {
    ss << "ScheduleIdentifier=" << StringUtils::URLEncode(m_scheduleIdentifier.c_str()) << "&";
  }

  if(m_disassociateScheduleHasBeenSet)
  {
    ss << "DisassociateSchedule=" << std::boolalpha << m_disassociateSchedule << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifyClusterSnapshotScheduleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
