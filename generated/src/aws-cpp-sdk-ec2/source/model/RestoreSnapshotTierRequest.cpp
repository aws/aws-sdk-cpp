/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RestoreSnapshotTierRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

RestoreSnapshotTierRequest::RestoreSnapshotTierRequest() : 
    m_snapshotIdHasBeenSet(false),
    m_temporaryRestoreDays(0),
    m_temporaryRestoreDaysHasBeenSet(false),
    m_permanentRestore(false),
    m_permanentRestoreHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String RestoreSnapshotTierRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RestoreSnapshotTier&";
  if(m_snapshotIdHasBeenSet)
  {
    ss << "SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }

  if(m_temporaryRestoreDaysHasBeenSet)
  {
    ss << "TemporaryRestoreDays=" << m_temporaryRestoreDays << "&";
  }

  if(m_permanentRestoreHasBeenSet)
  {
    ss << "PermanentRestore=" << std::boolalpha << m_permanentRestore << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  RestoreSnapshotTierRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
