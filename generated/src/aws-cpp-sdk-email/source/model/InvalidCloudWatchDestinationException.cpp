/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/InvalidCloudWatchDestinationException.h>
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

InvalidCloudWatchDestinationException::InvalidCloudWatchDestinationException() : 
    m_configurationSetNameHasBeenSet(false),
    m_eventDestinationNameHasBeenSet(false)
{
}

InvalidCloudWatchDestinationException::InvalidCloudWatchDestinationException(const XmlNode& xmlNode) : 
    m_configurationSetNameHasBeenSet(false),
    m_eventDestinationNameHasBeenSet(false)
{
  *this = xmlNode;
}

InvalidCloudWatchDestinationException& InvalidCloudWatchDestinationException::operator =(const XmlNode& xmlNode)
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
    XmlNode eventDestinationNameNode = resultNode.FirstChild("EventDestinationName");
    if(!eventDestinationNameNode.IsNull())
    {
      m_eventDestinationName = Aws::Utils::Xml::DecodeEscapedXmlText(eventDestinationNameNode.GetText());
      m_eventDestinationNameHasBeenSet = true;
    }
  }

  return *this;
}

void InvalidCloudWatchDestinationException::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_configurationSetNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConfigurationSetName=" << StringUtils::URLEncode(m_configurationSetName.c_str()) << "&";
  }

  if(m_eventDestinationNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".EventDestinationName=" << StringUtils::URLEncode(m_eventDestinationName.c_str()) << "&";
  }

}

void InvalidCloudWatchDestinationException::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_configurationSetNameHasBeenSet)
  {
      oStream << location << ".ConfigurationSetName=" << StringUtils::URLEncode(m_configurationSetName.c_str()) << "&";
  }
  if(m_eventDestinationNameHasBeenSet)
  {
      oStream << location << ".EventDestinationName=" << StringUtils::URLEncode(m_eventDestinationName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
