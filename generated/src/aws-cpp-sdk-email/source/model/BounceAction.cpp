/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/BounceAction.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

BounceAction::BounceAction() : 
    m_topicArnHasBeenSet(false),
    m_smtpReplyCodeHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_senderHasBeenSet(false)
{
}

BounceAction::BounceAction(const XmlNode& xmlNode) : 
    m_topicArnHasBeenSet(false),
    m_smtpReplyCodeHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_senderHasBeenSet(false)
{
  *this = xmlNode;
}

BounceAction& BounceAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode topicArnNode = resultNode.FirstChild("TopicArn");
    if(!topicArnNode.IsNull())
    {
      m_topicArn = Aws::Utils::Xml::DecodeEscapedXmlText(topicArnNode.GetText());
      m_topicArnHasBeenSet = true;
    }
    XmlNode smtpReplyCodeNode = resultNode.FirstChild("SmtpReplyCode");
    if(!smtpReplyCodeNode.IsNull())
    {
      m_smtpReplyCode = Aws::Utils::Xml::DecodeEscapedXmlText(smtpReplyCodeNode.GetText());
      m_smtpReplyCodeHasBeenSet = true;
    }
    XmlNode statusCodeNode = resultNode.FirstChild("StatusCode");
    if(!statusCodeNode.IsNull())
    {
      m_statusCode = Aws::Utils::Xml::DecodeEscapedXmlText(statusCodeNode.GetText());
      m_statusCodeHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("Message");
    if(!messageNode.IsNull())
    {
      m_message = Aws::Utils::Xml::DecodeEscapedXmlText(messageNode.GetText());
      m_messageHasBeenSet = true;
    }
    XmlNode senderNode = resultNode.FirstChild("Sender");
    if(!senderNode.IsNull())
    {
      m_sender = Aws::Utils::Xml::DecodeEscapedXmlText(senderNode.GetText());
      m_senderHasBeenSet = true;
    }
  }

  return *this;
}

void BounceAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_topicArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

  if(m_smtpReplyCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SmtpReplyCode=" << StringUtils::URLEncode(m_smtpReplyCode.c_str()) << "&";
  }

  if(m_statusCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusCode=" << StringUtils::URLEncode(m_statusCode.c_str()) << "&";
  }

  if(m_messageHasBeenSet)
  {
      oStream << location << index << locationValue << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }

  if(m_senderHasBeenSet)
  {
      oStream << location << index << locationValue << ".Sender=" << StringUtils::URLEncode(m_sender.c_str()) << "&";
  }

}

void BounceAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_topicArnHasBeenSet)
  {
      oStream << location << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }
  if(m_smtpReplyCodeHasBeenSet)
  {
      oStream << location << ".SmtpReplyCode=" << StringUtils::URLEncode(m_smtpReplyCode.c_str()) << "&";
  }
  if(m_statusCodeHasBeenSet)
  {
      oStream << location << ".StatusCode=" << StringUtils::URLEncode(m_statusCode.c_str()) << "&";
  }
  if(m_messageHasBeenSet)
  {
      oStream << location << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
  if(m_senderHasBeenSet)
  {
      oStream << location << ".Sender=" << StringUtils::URLEncode(m_sender.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
