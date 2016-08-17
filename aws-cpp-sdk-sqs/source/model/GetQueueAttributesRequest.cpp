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
#include <aws/sqs/model/GetQueueAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SQS::Model;
using namespace Aws::Utils;

GetQueueAttributesRequest::GetQueueAttributesRequest() : 
    m_queueUrlHasBeenSet(false),
    m_attributeNamesHasBeenSet(false)
{
}

Aws::String GetQueueAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetQueueAttributes&";
  if(m_queueUrlHasBeenSet)
  {
    ss << "QueueUrl=" << StringUtils::URLEncode(m_queueUrl.c_str()) << "&";
  }

  if(m_attributeNamesHasBeenSet)
  {
    unsigned attributeNamesCount = 1;
    for(auto& item : m_attributeNames)
    {
      ss << "AttributeName." << attributeNamesCount << "="
          << StringUtils::URLEncode(QueueAttributeNameMapper::GetNameForQueueAttributeName(item).c_str()) << "&";
      attributeNamesCount++;
    }
  }

  ss << "Version=2012-11-05";
  return ss.str();
}

