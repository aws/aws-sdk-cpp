/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifySnapshotAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifySnapshotAttributeRequest::ModifySnapshotAttributeRequest() : 
    m_attribute(SnapshotAttributeName::NOT_SET),
    m_attributeHasBeenSet(false),
    m_createVolumePermissionHasBeenSet(false),
    m_groupNamesHasBeenSet(false),
    m_operationType(OperationType::NOT_SET),
    m_operationTypeHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ModifySnapshotAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifySnapshotAttribute&";
  if(m_attributeHasBeenSet)
  {
    ss << "Attribute=" << SnapshotAttributeNameMapper::GetNameForSnapshotAttributeName(m_attribute) << "&";
  }

  if(m_createVolumePermissionHasBeenSet)
  {
    m_createVolumePermission.OutputToStream(ss, "CreateVolumePermission");
  }

  if(m_groupNamesHasBeenSet)
  {
    unsigned groupNamesCount = 1;
    for(auto& item : m_groupNames)
    {
      ss << "UserGroup." << groupNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      groupNamesCount++;
    }
  }

  if(m_operationTypeHasBeenSet)
  {
    ss << "OperationType=" << OperationTypeMapper::GetNameForOperationType(m_operationType) << "&";
  }

  if(m_snapshotIdHasBeenSet)
  {
    ss << "SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }

  if(m_userIdsHasBeenSet)
  {
    unsigned userIdsCount = 1;
    for(auto& item : m_userIds)
    {
      ss << "UserId." << userIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      userIdsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifySnapshotAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
