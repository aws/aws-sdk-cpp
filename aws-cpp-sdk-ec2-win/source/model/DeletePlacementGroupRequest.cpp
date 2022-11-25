/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeletePlacementGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeletePlacementGroupRequest::DeletePlacementGroupRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
}

Aws::String DeletePlacementGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeletePlacementGroup&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_groupNameHasBeenSet)
  {
    ss << "GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeletePlacementGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
