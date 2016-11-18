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
#include <aws/sqs/model/SendMessageRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SQS::Model;
using namespace Aws::Utils;

SendMessageRequest::SendMessageRequest() : 
    m_queueUrlHasBeenSet(false),
    m_messageBodyHasBeenSet(false),
    m_delaySeconds(0),
    m_delaySecondsHasBeenSet(false),
    m_messageAttributesHasBeenSet(false)
{
}

Aws::String SendMessageRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SendMessage&";
  if(m_queueUrlHasBeenSet)
  {
    ss << "QueueUrl=" << StringUtils::URLEncode(m_queueUrl.c_str()) << "&";
  }

  if(m_messageBodyHasBeenSet)
  {
    ss << "MessageBody=" << StringUtils::URLEncode(m_messageBody.c_str()) << "&";
  }

  if(m_delaySecondsHasBeenSet)
  {
    ss << "DelaySeconds=" << m_delaySeconds << "&";
  }

  if(m_messageAttributesHasBeenSet)
  {
    unsigned messageAttributesCount = 1;
    for(auto& item : m_messageAttributes)
    {
      ss << "MessageAttribute." << messageAttributesCount << ".Name="
          << StringUtils::URLEncode(item.first.c_str()) << "&";
      item.second.OutputToStream(ss, "MessageAttribute.", messageAttributesCount, ".Value");
      messageAttributesCount++;
    }
  }

  ss << "Version=2012-11-05";
  return ss.str();
}

