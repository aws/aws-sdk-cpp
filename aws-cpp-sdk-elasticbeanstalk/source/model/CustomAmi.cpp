/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/CustomAmi.h>
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

CustomAmi::CustomAmi() : 
    m_virtualizationTypeHasBeenSet(false),
    m_imageIdHasBeenSet(false)
{
}

CustomAmi::CustomAmi(const XmlNode& xmlNode) : 
    m_virtualizationTypeHasBeenSet(false),
    m_imageIdHasBeenSet(false)
{
  *this = xmlNode;
}

CustomAmi& CustomAmi::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode virtualizationTypeNode = resultNode.FirstChild("VirtualizationType");
    if(!virtualizationTypeNode.IsNull())
    {
      m_virtualizationType = Aws::Utils::Xml::DecodeEscapedXmlText(virtualizationTypeNode.GetText());
      m_virtualizationTypeHasBeenSet = true;
    }
    XmlNode imageIdNode = resultNode.FirstChild("ImageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = Aws::Utils::Xml::DecodeEscapedXmlText(imageIdNode.GetText());
      m_imageIdHasBeenSet = true;
    }
  }

  return *this;
}

void CustomAmi::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_virtualizationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".VirtualizationType=" << StringUtils::URLEncode(m_virtualizationType.c_str()) << "&";
  }

  if(m_imageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

}

void CustomAmi::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_virtualizationTypeHasBeenSet)
  {
      oStream << location << ".VirtualizationType=" << StringUtils::URLEncode(m_virtualizationType.c_str()) << "&";
  }
  if(m_imageIdHasBeenSet)
  {
      oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
