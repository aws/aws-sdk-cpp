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
#include <aws/sns/model/PublishRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

PublishRequest::PublishRequest() : 
    m_topicArnHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_messageStructureHasBeenSet(false),
    m_messageAttributesHasBeenSet(false)
{
}

Aws::String PublishRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=Publish&";
  if(m_topicArnHasBeenSet)
  {
    ss << "TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

  if(m_targetArnHasBeenSet)
  {
    ss << "TargetArn=" << StringUtils::URLEncode(m_targetArn.c_str()) << "&";
  }

  if(m_phoneNumberHasBeenSet)
  {
    ss << "PhoneNumber=" << StringUtils::URLEncode(m_phoneNumber.c_str()) << "&";
  }

  if(m_messageHasBeenSet)
  {
    ss << "Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }

  if(m_subjectHasBeenSet)
  {
    ss << "Subject=" << StringUtils::URLEncode(m_subject.c_str()) << "&";
  }

  if(m_messageStructureHasBeenSet)
  {
    ss << "MessageStructure=" << StringUtils::URLEncode(m_messageStructure.c_str()) << "&";
  }

  if(m_messageAttributesHasBeenSet)
  {
    unsigned messageAttributesCount = 1;
    for(auto& item : m_messageAttributes)
    {
      ss << "MessageAttributes.entry." << messageAttributesCount << ".Name="
          << StringUtils::URLEncode(item.first.c_str()) << "&";
      item.second.OutputToStream(ss, "MessageAttributes.entry.", messageAttributesCount, ".Value");
      messageAttributesCount++;
    }
  }

  ss << "Version=2010-03-31";
  return ss.str();
}

