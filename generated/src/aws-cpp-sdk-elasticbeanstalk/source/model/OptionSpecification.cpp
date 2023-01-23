/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/OptionSpecification.h>
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

OptionSpecification::OptionSpecification() : 
    m_resourceNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_optionNameHasBeenSet(false)
{
}

OptionSpecification::OptionSpecification(const XmlNode& xmlNode) : 
    m_resourceNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_optionNameHasBeenSet(false)
{
  *this = xmlNode;
}

OptionSpecification& OptionSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourceNameNode = resultNode.FirstChild("ResourceName");
    if(!resourceNameNode.IsNull())
    {
      m_resourceName = Aws::Utils::Xml::DecodeEscapedXmlText(resourceNameNode.GetText());
      m_resourceNameHasBeenSet = true;
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

void OptionSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceName=" << StringUtils::URLEncode(m_resourceName.c_str()) << "&";
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

void OptionSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourceNameHasBeenSet)
  {
      oStream << location << ".ResourceName=" << StringUtils::URLEncode(m_resourceName.c_str()) << "&";
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
