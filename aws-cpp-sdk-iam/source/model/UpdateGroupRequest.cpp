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
#include <aws/iam/model/UpdateGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

UpdateGroupRequest::UpdateGroupRequest() : 
    m_groupNameHasBeenSet(false),
    m_newPathHasBeenSet(false),
    m_newGroupNameHasBeenSet(false)
{
}

Aws::String UpdateGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateGroup&";
  if(m_groupNameHasBeenSet)
  {
    ss << "GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if(m_newPathHasBeenSet)
  {
    ss << "NewPath=" << StringUtils::URLEncode(m_newPath.c_str()) << "&";
  }

  if(m_newGroupNameHasBeenSet)
  {
    ss << "NewGroupName=" << StringUtils::URLEncode(m_newGroupName.c_str()) << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}

