/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

SendMessageBatchResultEntry::SendMessageBatchResultEntry() : 
    m_idHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_mD5OfMessageBodyHasBeenSet(false),
    m_mD5OfMessageAttributesHasBeenSet(false),
    m_sequenceNumberHasBeenSet(false)
{
}

SendMessageBatchResultEntry::SendMessageBatchResultEntry(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_mD5OfMessageBodyHasBeenSet(false),
    m_mD5OfMessageAttributesHasBeenSet(false),
    m_sequenceNumberHasBeenSet(false)
{
  *this = xmlNode;
}

SendMessageBatchResultEntry& SendMessageBatchResultEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = idNode.GetText();
      m_idHasBeenSet = true;
    }
    XmlNode messageIdNode = resultNode.FirstChild("MessageId");
    if(!messageIdNode.IsNull())
    {
      m_messageId = messageIdNode.GetText();
      m_messageIdHasBeenSet = true;
    }
    XmlNode mD5OfMessageBodyNode = resultNode.FirstChild("MD5OfMessageBody");
    if(!mD5OfMessageBodyNode.IsNull())
    {
      m_mD5OfMessageBody = mD5OfMessageBodyNode.GetText();
      m_mD5OfMessageBodyHasBeenSet = true;
    }
    XmlNode mD5OfMessageAttributesNode = resultNode.FirstChild("MD5OfMessageAttributes");
    if(!mD5OfMessageAttributesNode.IsNull())
    {
      m_mD5OfMessageAttributes = mD5OfMessageAttributesNode.GetText();
      m_mD5OfMessageAttributesHasBeenSet = true;
    }
    XmlNode sequenceNumberNode = resultNode.FirstChild("SequenceNumber");
    if(!sequenceNumberNode.IsNull())
    {
      m_sequenceNumber = sequenceNumberNode.GetText();
      m_sequenceNumberHasBeenSet = true;
    }
  }

  return *this;
}

void SendMessageBatchResultEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << index << locationValue << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }

  if(m_messageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".MessageId=" << StringUtils::URLEncode(m_messageId.c_str()) << "&";
  }

  if(m_mD5OfMessageBodyHasBeenSet)
  {
      oStream << location << index << locationValue << ".MD5OfMessageBody=" << StringUtils::URLEncode(m_mD5OfMessageBody.c_str()) << "&";
  }

  if(m_mD5OfMessageAttributesHasBeenSet)
  {
      oStream << location << index << locationValue << ".MD5OfMessageAttributes=" << StringUtils::URLEncode(m_mD5OfMessageAttributes.c_str()) << "&";
  }

  if(m_sequenceNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".SequenceNumber=" << StringUtils::URLEncode(m_sequenceNumber.c_str()) << "&";
  }

}

void SendMessageBatchResultEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }
  if(m_messageIdHasBeenSet)
  {
      oStream << location << ".MessageId=" << StringUtils::URLEncode(m_messageId.c_str()) << "&";
  }
  if(m_mD5OfMessageBodyHasBeenSet)
  {
      oStream << location << ".MD5OfMessageBody=" << StringUtils::URLEncode(m_mD5OfMessageBody.c_str()) << "&";
  }
  if(m_mD5OfMessageAttributesHasBeenSet)
  {
      oStream << location << ".MD5OfMessageAttributes=" << StringUtils::URLEncode(m_mD5OfMessageAttributes.c_str()) << "&";
  }
  if(m_sequenceNumberHasBeenSet)
  {
      oStream << location << ".SequenceNumber=" << StringUtils::URLEncode(m_sequenceNumber.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SQS
} // namespace Aws
