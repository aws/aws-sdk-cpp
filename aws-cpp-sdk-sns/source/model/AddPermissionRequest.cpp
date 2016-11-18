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
#include <aws/sns/model/AddPermissionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

AddPermissionRequest::AddPermissionRequest() : 
    m_topicArnHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_aWSAccountIdHasBeenSet(false),
    m_actionNameHasBeenSet(false)
{
}

Aws::String AddPermissionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AddPermission&";
  if(m_topicArnHasBeenSet)
  {
    ss << "TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

  if(m_labelHasBeenSet)
  {
    ss << "Label=" << StringUtils::URLEncode(m_label.c_str()) << "&";
  }

  if(m_aWSAccountIdHasBeenSet)
  {
    unsigned aWSAccountIdCount = 1;
    for(auto& item : m_aWSAccountId)
    {
      ss << "AWSAccountId.member." << aWSAccountIdCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      aWSAccountIdCount++;
    }
  }

  if(m_actionNameHasBeenSet)
  {
    unsigned actionNameCount = 1;
    for(auto& item : m_actionName)
    {
      ss << "ActionName.member." << actionNameCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      actionNameCount++;
    }
  }

  ss << "Version=2010-03-31";
  return ss.str();
}

