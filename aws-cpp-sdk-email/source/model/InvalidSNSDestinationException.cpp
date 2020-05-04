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

#include <aws/email/model/InvalidSNSDestinationException.h>
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

InvalidSNSDestinationException::InvalidSNSDestinationException() : 
    m_configurationSetNameHasBeenSet(false),
    m_eventDestinationNameHasBeenSet(false)
{
}

InvalidSNSDestinationException::InvalidSNSDestinationException(const XmlNode& xmlNode) : 
    m_configurationSetNameHasBeenSet(false),
    m_eventDestinationNameHasBeenSet(false)
{
  *this = xmlNode;
}

InvalidSNSDestinationException& InvalidSNSDestinationException::operator =(const XmlNode& xmlNode)
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

void InvalidSNSDestinationException::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
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

void InvalidSNSDestinationException::OutputToStream(Aws::OStream& oStream, const char* location) const
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
