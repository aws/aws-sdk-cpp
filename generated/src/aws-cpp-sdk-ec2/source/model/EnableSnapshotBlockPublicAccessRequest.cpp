/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EnableSnapshotBlockPublicAccessRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

EnableSnapshotBlockPublicAccessRequest::EnableSnapshotBlockPublicAccessRequest() : 
    m_state(SnapshotBlockPublicAccessState::NOT_SET),
    m_stateHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String EnableSnapshotBlockPublicAccessRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=EnableSnapshotBlockPublicAccess&";
  if(m_stateHasBeenSet)
  {
    ss << "State=" << SnapshotBlockPublicAccessStateMapper::GetNameForSnapshotBlockPublicAccessState(m_state) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  EnableSnapshotBlockPublicAccessRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
