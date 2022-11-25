/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DisableFastSnapshotRestoresRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DisableFastSnapshotRestoresRequest::DisableFastSnapshotRestoresRequest() : 
    m_availabilityZonesHasBeenSet(false),
    m_sourceSnapshotIdsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DisableFastSnapshotRestoresRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DisableFastSnapshotRestores&";
  if(m_availabilityZonesHasBeenSet)
  {
    unsigned availabilityZonesCount = 1;
    for(auto& item : m_availabilityZones)
    {
      ss << "AvailabilityZone." << availabilityZonesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      availabilityZonesCount++;
    }
  }

  if(m_sourceSnapshotIdsHasBeenSet)
  {
    unsigned sourceSnapshotIdsCount = 1;
    for(auto& item : m_sourceSnapshotIds)
    {
      ss << "SourceSnapshotId." << sourceSnapshotIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      sourceSnapshotIdsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DisableFastSnapshotRestoresRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
