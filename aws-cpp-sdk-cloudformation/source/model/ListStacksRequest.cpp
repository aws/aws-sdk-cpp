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
#include <aws/cloudformation/model/ListStacksRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

ListStacksRequest::ListStacksRequest() : 
    m_nextTokenHasBeenSet(false),
    m_stackStatusFilterHasBeenSet(false)
{
}

Aws::String ListStacksRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListStacks&";
  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_stackStatusFilterHasBeenSet)
  {
    unsigned stackStatusFilterCount = 1;
    for(auto& item : m_stackStatusFilter)
    {
      ss << "StackStatusFilter.member." << stackStatusFilterCount << "="
          << StringUtils::URLEncode(StackStatusMapper::GetNameForStackStatus(item).c_str()) << "&";
      stackStatusFilterCount++;
    }
  }

  ss << "Version=2010-05-15";
  return ss.str();
}

