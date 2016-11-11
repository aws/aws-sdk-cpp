/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ec2/model/ModifySnapshotAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifySnapshotAttributeRequest::ModifySnapshotAttributeRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_attribute(SnapshotAttributeName::NOT_SET),
    m_attributeHasBeenSet(false),
    m_operationType(OperationType::NOT_SET),
    m_operationTypeHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_groupNamesHasBeenSet(false),
    m_createVolumePermissionHasBeenSet(false)
{
}

Aws::String ModifySnapshotAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifySnapshotAttribute&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
  }

  if(m_snapshotIdHasBeenSet)
  {
    ss << "SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }

  if(m_attributeHasBeenSet)
  {
    ss << "Attribute=" << SnapshotAttributeNameMapper::GetNameForSnapshotAttributeName(m_attribute) << "&";
  }

  if(m_operationTypeHasBeenSet)
  {
    ss << "OperationType=" << OperationTypeMapper::GetNameForOperationType(m_operationType) << "&";
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

  if(m_createVolumePermissionHasBeenSet)
  {
    m_createVolumePermission.OutputToStream(ss, "CreateVolumePermission");
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

