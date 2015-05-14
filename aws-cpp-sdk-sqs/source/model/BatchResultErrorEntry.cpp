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
#include <aws/sqs/model/BatchResultErrorEntry.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

BatchResultErrorEntry::BatchResultErrorEntry() : 
    m_senderFault(false),
    m_messageHasBeenSet(false)
{
}

BatchResultErrorEntry::BatchResultErrorEntry(const XmlNode& xmlNode) : 
    m_senderFault(false),
    m_messageHasBeenSet(false)
{
  *this = xmlNode;
}

BatchResultErrorEntry& BatchResultErrorEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    m_id = StringUtils::Trim(idNode.GetText().c_str());
    XmlNode senderFaultNode = resultNode.FirstChild("SenderFault");
    m_senderFault = StringUtils::ConvertToBool(StringUtils::Trim(senderFaultNode.GetText().c_str()).c_str());
    XmlNode codeNode = resultNode.FirstChild("Code");
    m_code = StringUtils::Trim(codeNode.GetText().c_str());
    XmlNode messageNode = resultNode.FirstChild("Message");
    if(!messageNode.IsNull())
    {
      m_message = StringUtils::Trim(messageNode.GetText().c_str());
      m_messageHasBeenSet = true;
    }
  }

  return *this;
}

void BatchResultErrorEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  oStream << location << index << locationValue << ".SenderFault=" << m_senderFault << "&";
  oStream << location << index << locationValue << ".Code=" << StringUtils::URLEncode(m_code.c_str()) << "&";
  if(m_messageHasBeenSet)
  {
    oStream << location << index << locationValue << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
}

void BatchResultErrorEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  oStream << location << ".SenderFault=" << m_senderFault << "&";
  oStream << location << ".Code=" << StringUtils::URLEncode(m_code.c_str()) << "&";
  if(m_messageHasBeenSet)
  {
    oStream << location << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
}
