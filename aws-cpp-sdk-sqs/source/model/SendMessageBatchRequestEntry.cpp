﻿/*
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
#include <aws/sqs/model/SendMessageBatchRequestEntry.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SQS
{
namespace Model
{

SendMessageBatchRequestEntry::SendMessageBatchRequestEntry() : 
    m_idHasBeenSet(false),
    m_messageBodyHasBeenSet(false),
    m_delaySeconds(0),
    m_delaySecondsHasBeenSet(false),
    m_messageAttributesHasBeenSet(false)
{
}

SendMessageBatchRequestEntry::SendMessageBatchRequestEntry(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_messageBodyHasBeenSet(false),
    m_delaySeconds(0),
    m_delaySecondsHasBeenSet(false),
    m_messageAttributesHasBeenSet(false)
{
  *this = xmlNode;
}

SendMessageBatchRequestEntry& SendMessageBatchRequestEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = StringUtils::Trim(idNode.GetText().c_str());
      m_idHasBeenSet = true;
    }
    XmlNode messageBodyNode = resultNode.FirstChild("MessageBody");
    if(!messageBodyNode.IsNull())
    {
      m_messageBody = StringUtils::Trim(messageBodyNode.GetText().c_str());
      m_messageBodyHasBeenSet = true;
    }
    XmlNode delaySecondsNode = resultNode.FirstChild("DelaySeconds");
    if(!delaySecondsNode.IsNull())
    {
      m_delaySeconds = StringUtils::ConvertToInt32(StringUtils::Trim(delaySecondsNode.GetText().c_str()).c_str());
      m_delaySecondsHasBeenSet = true;
    }
    XmlNode messageAttributesNode = resultNode.FirstChild("MessageAttribute");
    if(!messageAttributesNode.IsNull())
    {
      XmlNode messageAttributeEntry = messageAttributesNode;
      while(!messageAttributeEntry.IsNull())
      {
        XmlNode keyNode = messageAttributeEntry.FirstChild("Name");
        XmlNode valueNode = messageAttributeEntry.FirstChild("Value");
        m_messageAttributes[StringUtils::Trim(keyNode.GetText().c_str())] =
            valueNode;
        messageAttributeEntry = messageAttributeEntry.NextNode("MessageAttribute");
      }

      m_messageAttributesHasBeenSet = true;
    }
  }

  return *this;
}

void SendMessageBatchRequestEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << index << locationValue << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }

  if(m_messageBodyHasBeenSet)
  {
      oStream << location << index << locationValue << ".MessageBody=" << StringUtils::URLEncode(m_messageBody.c_str()) << "&";
  }

  if(m_delaySecondsHasBeenSet)
  {
      oStream << location << index << locationValue << ".DelaySeconds=" << m_delaySeconds << "&";
  }

  if(m_messageAttributesHasBeenSet)
  {
      unsigned messageAttributesIdx = 1;
      for(auto& item : m_messageAttributes)
      {
        oStream << location << index << locationValue << ".MessageAttribute." << messageAttributesIdx << ".Name="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        Aws::StringStream messageAttributesSs;
        messageAttributesSs << location << index << locationValue << ".MessageAttribute." << messageAttributesIdx << ".Value";
        item.second.OutputToStream(oStream, messageAttributesSs.str().c_str());
        messageAttributesIdx++;
      }
  }

}

void SendMessageBatchRequestEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }
  if(m_messageBodyHasBeenSet)
  {
      oStream << location << ".MessageBody=" << StringUtils::URLEncode(m_messageBody.c_str()) << "&";
  }
  if(m_delaySecondsHasBeenSet)
  {
      oStream << location << ".DelaySeconds=" << m_delaySeconds << "&";
  }
  if(m_messageAttributesHasBeenSet)
  {
      unsigned messageAttributesIdx = 1;
      for(auto& item : m_messageAttributes)
      {
        oStream << location << ".MessageAttribute."  << messageAttributesIdx << ".Name="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        Aws::StringStream messageAttributesSs;
        messageAttributesSs << location << ".MessageAttribute." << messageAttributesIdx << ".Value";
        item.second.OutputToStream(oStream, messageAttributesSs.str().c_str());
        messageAttributesIdx++;
      }

  }
}

} // namespace Model
} // namespace SQS
} // namespace Aws
