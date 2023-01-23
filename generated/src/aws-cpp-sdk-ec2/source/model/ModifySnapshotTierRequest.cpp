/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifySnapshotTierRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifySnapshotTierRequest::ModifySnapshotTierRequest() : 
    m_snapshotIdHasBeenSet(false),
    m_storageTier(TargetStorageTier::NOT_SET),
    m_storageTierHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ModifySnapshotTierRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifySnapshotTier&";
  if(m_snapshotIdHasBeenSet)
  {
    ss << "SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }

  if(m_storageTierHasBeenSet)
  {
    ss << "StorageTier=" << TargetStorageTierMapper::GetNameForTargetStorageTier(m_storageTier) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifySnapshotTierRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
