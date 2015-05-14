/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/sqs/model/SendMessageBatchResultEntry.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

SendMessageBatchResultEntry::SendMessageBatchResultEntry() : 
    m_mD5OfMessageAttributesHasBeenSet(false)
{
}

SendMessageBatchResultEntry::SendMessageBatchResultEntry(const XmlNode& xmlNode) : 
    m_mD5OfMessageAttributesHasBeenSet(false)
{
  *this = xmlNode;
}

SendMessageBatchResultEntry& SendMessageBatchResultEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    m_id = StringUtils::Trim(idNode.GetText().c_str());
    XmlNode messageIdNode = resultNode.FirstChild("MessageId");
    m_messageId = StringUtils::Trim(messageIdNode.GetText().c_str());
    XmlNode mD5OfMessageBodyNode = resultNode.FirstChild("MD5OfMessageBody");
    m_mD5OfMessageBody = StringUtils::Trim(mD5OfMessageBodyNode.GetText().c_str());
    XmlNode mD5OfMessageAttributesNode = resultNode.FirstChild("MD5OfMessageAttributes");
    if(!mD5OfMessageAttributesNode.IsNull())
    {
      m_mD5OfMessageAttributes = StringUtils::Trim(mD5OfMessageAttributesNode.GetText().c_str());
      m_mD5OfMessageAttributesHasBeenSet = true;
    }
  }

  return *this;
}

void SendMessageBatchResultEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  oStream << location << index << locationValue << ".MessageId=" << StringUtils::URLEncode(m_messageId.c_str()) << "&";
  oStream << location << index << locationValue << ".MD5OfMessageBody=" << StringUtils::URLEncode(m_mD5OfMessageBody.c_str()) << "&";
  if(m_mD5OfMessageAttributesHasBeenSet)
  {
    oStream << location << index << locationValue << ".MD5OfMessageAttributes=" << StringUtils::URLEncode(m_mD5OfMessageAttributes.c_str()) << "&";
  }
}

void SendMessageBatchResultEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  oStream << location << ".MessageId=" << StringUtils::URLEncode(m_messageId.c_str()) << "&";
  oStream << location << ".MD5OfMessageBody=" << StringUtils::URLEncode(m_mD5OfMessageBody.c_str()) << "&";
  if(m_mD5OfMessageAttributesHasBeenSet)
  {
    oStream << location << ".MD5OfMessageAttributes=" << StringUtils::URLEncode(m_mD5OfMessageAttributes.c_str()) << "&";
  }
}
