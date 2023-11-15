/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LockSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

LockSnapshotRequest::LockSnapshotRequest() : 
    m_snapshotIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_lockMode(LockMode::NOT_SET),
    m_lockModeHasBeenSet(false),
    m_coolOffPeriod(0),
    m_coolOffPeriodHasBeenSet(false),
    m_lockDuration(0),
    m_lockDurationHasBeenSet(false),
    m_expirationDateHasBeenSet(false)
{
}

Aws::String LockSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=LockSnapshot&";
  if(m_snapshotIdHasBeenSet)
  {
    ss << "SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_lockModeHasBeenSet)
  {
    ss << "LockMode=" << LockModeMapper::GetNameForLockMode(m_lockMode) << "&";
  }

  if(m_coolOffPeriodHasBeenSet)
  {
    ss << "CoolOffPeriod=" << m_coolOffPeriod << "&";
  }

  if(m_lockDurationHasBeenSet)
  {
    ss << "LockDuration=" << m_lockDuration << "&";
  }

  if(m_expirationDateHasBeenSet)
  {
    ss << "ExpirationDate=" << StringUtils::URLEncode(m_expirationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  LockSnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
