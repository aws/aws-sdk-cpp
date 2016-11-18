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
#include <aws/sqs/model/Message.h>
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

Message::Message() : 
    m_messageIdHasBeenSet(false),
    m_receiptHandleHasBeenSet(false),
    m_mD5OfBodyHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_mD5OfMessageAttributesHasBeenSet(false),
    m_messageAttributesHasBeenSet(false)
{
}

Message::Message(const XmlNode& xmlNode) : 
    m_messageIdHasBeenSet(false),
    m_receiptHandleHasBeenSet(false),
    m_mD5OfBodyHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_mD5OfMessageAttributesHasBeenSet(false),
    m_messageAttributesHasBeenSet(false)
{
  *this = xmlNode;
}

Message& Message::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode messageIdNode = resultNode.FirstChild("MessageId");
    if(!messageIdNode.IsNull())
    {
      m_messageId = StringUtils::Trim(messageIdNode.GetText().c_str());
      m_messageIdHasBeenSet = true;
    }
    XmlNode receiptHandleNode = resultNode.FirstChild("ReceiptHandle");
    if(!receiptHandleNode.IsNull())
    {
      m_receiptHandle = StringUtils::Trim(receiptHandleNode.GetText().c_str());
      m_receiptHandleHasBeenSet = true;
    }
    XmlNode mD5OfBodyNode = resultNode.FirstChild("MD5OfBody");
    if(!mD5OfBodyNode.IsNull())
    {
      m_mD5OfBody = StringUtils::Trim(mD5OfBodyNode.GetText().c_str());
      m_mD5OfBodyHasBeenSet = true;
    }
    XmlNode bodyNode = resultNode.FirstChild("Body");
    if(!bodyNode.IsNull())
    {
      m_body = StringUtils::Trim(bodyNode.GetText().c_str());
      m_bodyHasBeenSet = true;
    }
    XmlNode attributesNode = resultNode.FirstChild("Attribute");
    if(!attributesNode.IsNull())
    {
      XmlNode attributeEntry = attributesNode;
      while(!attributeEntry.IsNull())
      {
        XmlNode keyNode = attributeEntry.FirstChild("Name");
        XmlNode valueNode = attributeEntry.FirstChild("Value");
        m_attributes[QueueAttributeNameMapper::GetQueueAttributeNameForName(StringUtils::Trim(keyNode.GetText().c_str()))] =
            StringUtils::Trim(valueNode.GetText().c_str());
        attributeEntry = attributeEntry.NextNode("Attribute");
      }

      m_attributesHasBeenSet = true;
    }
    XmlNode mD5OfMessageAttributesNode = resultNode.FirstChild("MD5OfMessageAttributes");
    if(!mD5OfMessageAttributesNode.IsNull())
    {
      m_mD5OfMessageAttributes = StringUtils::Trim(mD5OfMessageAttributesNode.GetText().c_str());
      m_mD5OfMessageAttributesHasBeenSet = true;
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

void Message::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_messageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".MessageId=" << StringUtils::URLEncode(m_messageId.c_str()) << "&";
  }

  if(m_receiptHandleHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReceiptHandle=" << StringUtils::URLEncode(m_receiptHandle.c_str()) << "&";
  }

  if(m_mD5OfBodyHasBeenSet)
  {
      oStream << location << index << locationValue << ".MD5OfBody=" << StringUtils::URLEncode(m_mD5OfBody.c_str()) << "&";
  }

  if(m_bodyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Body=" << StringUtils::URLEncode(m_body.c_str()) << "&";
  }

  if(m_attributesHasBeenSet)
  {
      unsigned attributesIdx = 1;
      for(auto& item : m_attributes)
      {
        oStream << location << index << locationValue << ".Attribute." << attributesIdx << ".Name="
            << StringUtils::URLEncode(QueueAttributeNameMapper::GetNameForQueueAttributeName(item.first).c_str()) << "&";
        oStream << location << index << locationValue << ".Attribute." << attributesIdx << ".Value="
            << StringUtils::URLEncode(item.second.c_str()) << "&";
        attributesIdx++;
      }
  }

  if(m_mD5OfMessageAttributesHasBeenSet)
  {
      oStream << location << index << locationValue << ".MD5OfMessageAttributes=" << StringUtils::URLEncode(m_mD5OfMessageAttributes.c_str()) << "&";
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

void Message::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_messageIdHasBeenSet)
  {
      oStream << location << ".MessageId=" << StringUtils::URLEncode(m_messageId.c_str()) << "&";
  }
  if(m_receiptHandleHasBeenSet)
  {
      oStream << location << ".ReceiptHandle=" << StringUtils::URLEncode(m_receiptHandle.c_str()) << "&";
  }
  if(m_mD5OfBodyHasBeenSet)
  {
      oStream << location << ".MD5OfBody=" << StringUtils::URLEncode(m_mD5OfBody.c_str()) << "&";
  }
  if(m_bodyHasBeenSet)
  {
      oStream << location << ".Body=" << StringUtils::URLEncode(m_body.c_str()) << "&";
  }
  if(m_attributesHasBeenSet)
  {
      unsigned attributesIdx = 1;
      for(auto& item : m_attributes)
      {
        oStream << location << ".Attribute."  << attributesIdx << ".Name="
            << StringUtils::URLEncode(QueueAttributeNameMapper::GetNameForQueueAttributeName(item.first).c_str()) << "&";
        oStream << location <<  ".Attribute." << attributesIdx << ".Value="
            << StringUtils::URLEncode(item.second.c_str()) << "&";
        attributesIdx++;
      }

  }
  if(m_mD5OfMessageAttributesHasBeenSet)
  {
      oStream << location << ".MD5OfMessageAttributes=" << StringUtils::URLEncode(m_mD5OfMessageAttributes.c_str()) << "&";
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
