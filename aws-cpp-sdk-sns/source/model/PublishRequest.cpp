/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_messageAttributesHasBeenSet(false),
    m_messageDeduplicationIdHasBeenSet(false),
    m_messageGroupIdHasBeenSet(false)
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

  if(m_messageDeduplicationIdHasBeenSet)
  {
    ss << "MessageDeduplicationId=" << StringUtils::URLEncode(m_messageDeduplicationId.c_str()) << "&";
  }

  if(m_messageGroupIdHasBeenSet)
  {
    ss << "MessageGroupId=" << StringUtils::URLEncode(m_messageGroupId.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  PublishRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
