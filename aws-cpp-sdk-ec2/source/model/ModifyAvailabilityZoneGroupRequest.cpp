/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyAvailabilityZoneGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyAvailabilityZoneGroupRequest::ModifyAvailabilityZoneGroupRequest() : 
    m_groupNameHasBeenSet(false),
    m_optInStatus(ModifyAvailabilityZoneOptInStatus::NOT_SET),
    m_optInStatusHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ModifyAvailabilityZoneGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyAvailabilityZoneGroup&";
  if(m_groupNameHasBeenSet)
  {
    ss << "GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if(m_optInStatusHasBeenSet)
  {
    ss << "OptInStatus=" << ModifyAvailabilityZoneOptInStatusMapper::GetNameForModifyAvailabilityZoneOptInStatus(m_optInStatus) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyAvailabilityZoneGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
