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
#include <aws/sqs/model/SetQueueAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SQS::Model;
using namespace Aws::Utils;

SetQueueAttributesRequest::SetQueueAttributesRequest() : 
    m_queueUrlHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

Aws::String SetQueueAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetQueueAttributes&";
  if(m_queueUrlHasBeenSet)
  {
    ss << "QueueUrl=" << StringUtils::URLEncode(m_queueUrl.c_str()) << "&";
  }

  if(m_attributesHasBeenSet)
  {
    unsigned attributesCount = 1;
    for(auto& item : m_attributes)
    {
      ss << "Attribute." << attributesCount << ".Name="
          << StringUtils::URLEncode(QueueAttributeNameMapper::GetNameForQueueAttributeName(item.first).c_str()) << "&";
      ss << "Attribute." << attributesCount << ".Value="
          << StringUtils::URLEncode(item.second.c_str()) << "&";
      attributesCount++;
    }
  }

  ss << "Version=2012-11-05";
  return ss.str();
}

