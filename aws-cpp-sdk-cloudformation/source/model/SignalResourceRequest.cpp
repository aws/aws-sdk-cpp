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
#include <aws/cloudformation/model/SignalResourceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

SignalResourceRequest::SignalResourceRequest() : 
    m_stackNameHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_uniqueIdHasBeenSet(false),
    m_status(ResourceSignalStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String SignalResourceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SignalResource&";
  if(m_stackNameHasBeenSet)
  {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_logicalResourceIdHasBeenSet)
  {
    ss << "LogicalResourceId=" << StringUtils::URLEncode(m_logicalResourceId.c_str()) << "&";
  }

  if(m_uniqueIdHasBeenSet)
  {
    ss << "UniqueId=" << StringUtils::URLEncode(m_uniqueId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
    ss << "Status=" << ResourceSignalStatusMapper::GetNameForResourceSignalStatus(m_status) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}

