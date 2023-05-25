/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/ValidationMessage.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

ValidationMessage::ValidationMessage() : 
    m_messageHasBeenSet(false),
    m_severity(ValidationSeverity::NOT_SET),
    m_severityHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_optionNameHasBeenSet(false)
{
}

ValidationMessage::ValidationMessage(const XmlNode& xmlNode) : 
    m_messageHasBeenSet(false),
    m_severity(ValidationSeverity::NOT_SET),
    m_severityHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_optionNameHasBeenSet(false)
{
  *this = xmlNode;
}

ValidationMessage& ValidationMessage::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode messageNode = resultNode.FirstChild("Message");
    if(!messageNode.IsNull())
    {
      m_message = Aws::Utils::Xml::DecodeEscapedXmlText(messageNode.GetText());
      m_messageHasBeenSet = true;
    }
    XmlNode severityNode = resultNode.FirstChild("Severity");
    if(!severityNode.IsNull())
    {
      m_severity = ValidationSeverityMapper::GetValidationSeverityForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(severityNode.GetText()).c_str()).c_str());
      m_severityHasBeenSet = true;
    }
    XmlNode namespaceNode = resultNode.FirstChild("Namespace");
    if(!namespaceNode.IsNull())
    {
      m_namespace = Aws::Utils::Xml::DecodeEscapedXmlText(namespaceNode.GetText());
      m_namespaceHasBeenSet = true;
    }
    XmlNode optionNameNode = resultNode.FirstChild("OptionName");
    if(!optionNameNode.IsNull())
    {
      m_optionName = Aws::Utils::Xml::DecodeEscapedXmlText(optionNameNode.GetText());
      m_optionNameHasBeenSet = true;
    }
  }

  return *this;
}

void ValidationMessage::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_messageHasBeenSet)
  {
      oStream << location << index << locationValue << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }

  if(m_severityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Severity=" << ValidationSeverityMapper::GetNameForValidationSeverity(m_severity) << "&";
  }

  if(m_namespaceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }

  if(m_optionNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptionName=" << StringUtils::URLEncode(m_optionName.c_str()) << "&";
  }

}

void ValidationMessage::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_messageHasBeenSet)
  {
      oStream << location << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
  if(m_severityHasBeenSet)
  {
      oStream << location << ".Severity=" << ValidationSeverityMapper::GetNameForValidationSeverity(m_severity) << "&";
  }
  if(m_namespaceHasBeenSet)
  {
      oStream << location << ".Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }
  if(m_optionNameHasBeenSet)
  {
      oStream << location << ".OptionName=" << StringUtils::URLEncode(m_optionName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
