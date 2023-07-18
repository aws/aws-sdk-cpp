/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/PublishBatchRequestEntry.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SNS
{
namespace Model
{

PublishBatchRequestEntry::PublishBatchRequestEntry() : 
    m_idHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_messageStructureHasBeenSet(false),
    m_messageAttributesHasBeenSet(false),
    m_messageDeduplicationIdHasBeenSet(false),
    m_messageGroupIdHasBeenSet(false)
{
}

PublishBatchRequestEntry::PublishBatchRequestEntry(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_messageStructureHasBeenSet(false),
    m_messageAttributesHasBeenSet(false),
    m_messageDeduplicationIdHasBeenSet(false),
    m_messageGroupIdHasBeenSet(false)
{
  *this = xmlNode;
}

PublishBatchRequestEntry& PublishBatchRequestEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
      m_idHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("Message");
    if(!messageNode.IsNull())
    {
      m_message = Aws::Utils::Xml::DecodeEscapedXmlText(messageNode.GetText());
      m_messageHasBeenSet = true;
    }
    XmlNode subjectNode = resultNode.FirstChild("Subject");
    if(!subjectNode.IsNull())
    {
      m_subject = Aws::Utils::Xml::DecodeEscapedXmlText(subjectNode.GetText());
      m_subjectHasBeenSet = true;
    }
    XmlNode messageStructureNode = resultNode.FirstChild("MessageStructure");
    if(!messageStructureNode.IsNull())
    {
      m_messageStructure = Aws::Utils::Xml::DecodeEscapedXmlText(messageStructureNode.GetText());
      m_messageStructureHasBeenSet = true;
    }
    XmlNode messageAttributesNode = resultNode.FirstChild("MessageAttributes");

    if(!messageAttributesNode.IsNull())
    {
      XmlNode messageAttributesEntry = messageAttributesNode.FirstChild("entry");
      while(!messageAttributesEntry.IsNull())
      {
        XmlNode keyNode = messageAttributesEntry.FirstChild("key");
        XmlNode valueNode = messageAttributesEntry.FirstChild("value");
        m_messageAttributes[keyNode.GetText()] =
            valueNode;
        messageAttributesEntry = messageAttributesEntry.NextNode("entry");
      }

      m_messageAttributesHasBeenSet = true;
    }
    XmlNode messageDeduplicationIdNode = resultNode.FirstChild("MessageDeduplicationId");
    if(!messageDeduplicationIdNode.IsNull())
    {
      m_messageDeduplicationId = Aws::Utils::Xml::DecodeEscapedXmlText(messageDeduplicationIdNode.GetText());
      m_messageDeduplicationIdHasBeenSet = true;
    }
    XmlNode messageGroupIdNode = resultNode.FirstChild("MessageGroupId");
    if(!messageGroupIdNode.IsNull())
    {
      m_messageGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(messageGroupIdNode.GetText());
      m_messageGroupIdHasBeenSet = true;
    }
  }

  return *this;
}

void PublishBatchRequestEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << index << locationValue << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }

  if(m_messageHasBeenSet)
  {
      oStream << location << index << locationValue << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }

  if(m_subjectHasBeenSet)
  {
      oStream << location << index << locationValue << ".Subject=" << StringUtils::URLEncode(m_subject.c_str()) << "&";
  }

  if(m_messageStructureHasBeenSet)
  {
      oStream << location << index << locationValue << ".MessageStructure=" << StringUtils::URLEncode(m_messageStructure.c_str()) << "&";
  }

  if(m_messageAttributesHasBeenSet)
  {
      unsigned messageAttributesIdx = 1;
      for(auto& item : m_messageAttributes)
      {
        oStream << location << index << locationValue << ".MessageAttributes.entry." << messageAttributesIdx << ".Name="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        Aws::StringStream messageAttributesSs;
        messageAttributesSs << location << index << locationValue << ".MessageAttributes.entry." << messageAttributesIdx << ".Value";
        item.second.OutputToStream(oStream, messageAttributesSs.str().c_str());
        messageAttributesIdx++;
      }
  }

  if(m_messageDeduplicationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".MessageDeduplicationId=" << StringUtils::URLEncode(m_messageDeduplicationId.c_str()) << "&";
  }

  if(m_messageGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".MessageGroupId=" << StringUtils::URLEncode(m_messageGroupId.c_str()) << "&";
  }

}

void PublishBatchRequestEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }
  if(m_messageHasBeenSet)
  {
      oStream << location << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
  if(m_subjectHasBeenSet)
  {
      oStream << location << ".Subject=" << StringUtils::URLEncode(m_subject.c_str()) << "&";
  }
  if(m_messageStructureHasBeenSet)
  {
      oStream << location << ".MessageStructure=" << StringUtils::URLEncode(m_messageStructure.c_str()) << "&";
  }
  if(m_messageAttributesHasBeenSet)
  {
      unsigned messageAttributesIdx = 1;
      for(auto& item : m_messageAttributes)
      {
        oStream << location << ".MessageAttributes.entry."  << messageAttributesIdx << ".Name="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        Aws::StringStream messageAttributesSs;
        messageAttributesSs << location << ".MessageAttributes.entry." << messageAttributesIdx << ".Value";
        item.second.OutputToStream(oStream, messageAttributesSs.str().c_str());
        messageAttributesIdx++;
      }

  }
  if(m_messageDeduplicationIdHasBeenSet)
  {
      oStream << location << ".MessageDeduplicationId=" << StringUtils::URLEncode(m_messageDeduplicationId.c_str()) << "&";
  }
  if(m_messageGroupIdHasBeenSet)
  {
      oStream << location << ".MessageGroupId=" << StringUtils::URLEncode(m_messageGroupId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SNS
} // namespace Aws
