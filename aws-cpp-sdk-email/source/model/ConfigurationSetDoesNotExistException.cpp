/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/ConfigurationSetDoesNotExistException.h>
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

ConfigurationSetDoesNotExistException::ConfigurationSetDoesNotExistException() : 
    m_configurationSetNameHasBeenSet(false)
{
}

ConfigurationSetDoesNotExistException::ConfigurationSetDoesNotExistException(const XmlNode& xmlNode) : 
    m_configurationSetNameHasBeenSet(false)
{
  *this = xmlNode;
}

ConfigurationSetDoesNotExistException& ConfigurationSetDoesNotExistException::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode configurationSetNameNode = resultNode.FirstChild("ConfigurationSetName");
    if(!configurationSetNameNode.IsNull())
    {
      m_configurationSetName = Aws::Utils::Xml::DecodeEscapedXmlText(configurationSetNameNode.GetText());
      m_configurationSetNameHasBeenSet = true;
    }
  }

  return *this;
}

void ConfigurationSetDoesNotExistException::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_configurationSetNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConfigurationSetName=" << StringUtils::URLEncode(m_configurationSetName.c_str()) << "&";
  }

}

void ConfigurationSetDoesNotExistException::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_configurationSetNameHasBeenSet)
  {
      oStream << location << ".ConfigurationSetName=" << StringUtils::URLEncode(m_configurationSetName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
