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
#include <aws/cloudformation/model/ContinueUpdateRollbackRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

ContinueUpdateRollbackRequest::ContinueUpdateRollbackRequest() : 
    m_stackNameHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_resourcesToSkipHasBeenSet(false)
{
}

Aws::String ContinueUpdateRollbackRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ContinueUpdateRollback&";
  if(m_stackNameHasBeenSet)
  {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_roleARNHasBeenSet)
  {
    ss << "RoleARN=" << StringUtils::URLEncode(m_roleARN.c_str()) << "&";
  }

  if(m_resourcesToSkipHasBeenSet)
  {
    unsigned resourcesToSkipCount = 1;
    for(auto& item : m_resourcesToSkip)
    {
      ss << "ResourcesToSkip.member." << resourcesToSkipCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      resourcesToSkipCount++;
    }
  }

  ss << "Version=2010-05-15";
  return ss.str();
}

