/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImageRecycleBinInfo.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

ImageRecycleBinInfo::ImageRecycleBinInfo() : 
    m_imageIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_recycleBinEnterTimeHasBeenSet(false),
    m_recycleBinExitTimeHasBeenSet(false)
{
}

ImageRecycleBinInfo::ImageRecycleBinInfo(const XmlNode& xmlNode) : 
    m_imageIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_recycleBinEnterTimeHasBeenSet(false),
    m_recycleBinExitTimeHasBeenSet(false)
{
  *this = xmlNode;
}

ImageRecycleBinInfo& ImageRecycleBinInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode imageIdNode = resultNode.FirstChild("imageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = Aws::Utils::Xml::DecodeEscapedXmlText(imageIdNode.GetText());
      m_imageIdHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode recycleBinEnterTimeNode = resultNode.FirstChild("recycleBinEnterTime");
    if(!recycleBinEnterTimeNode.IsNull())
    {
      m_recycleBinEnterTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(recycleBinEnterTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_recycleBinEnterTimeHasBeenSet = true;
    }
    XmlNode recycleBinExitTimeNode = resultNode.FirstChild("recycleBinExitTime");
    if(!recycleBinExitTimeNode.IsNull())
    {
      m_recycleBinExitTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(recycleBinExitTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_recycleBinExitTimeHasBeenSet = true;
    }
  }

  return *this;
}

void ImageRecycleBinInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_imageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_recycleBinEnterTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RecycleBinEnterTime=" << StringUtils::URLEncode(m_recycleBinEnterTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_recycleBinExitTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RecycleBinExitTime=" << StringUtils::URLEncode(m_recycleBinExitTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void ImageRecycleBinInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_imageIdHasBeenSet)
  {
      oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_recycleBinEnterTimeHasBeenSet)
  {
      oStream << location << ".RecycleBinEnterTime=" << StringUtils::URLEncode(m_recycleBinEnterTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_recycleBinExitTimeHasBeenSet)
  {
      oStream << location << ".RecycleBinExitTime=" << StringUtils::URLEncode(m_recycleBinExitTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
