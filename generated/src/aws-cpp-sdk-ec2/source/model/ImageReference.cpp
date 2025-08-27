/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImageReference.h>
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

ImageReference::ImageReference(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ImageReference& ImageReference::operator =(const XmlNode& xmlNode)
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
    XmlNode resourceTypeNode = resultNode.FirstChild("resourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = ImageReferenceResourceTypeMapper::GetImageReferenceResourceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText()).c_str()));
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode arnNode = resultNode.FirstChild("arn");
    if(!arnNode.IsNull())
    {
      m_arn = Aws::Utils::Xml::DecodeEscapedXmlText(arnNode.GetText());
      m_arnHasBeenSet = true;
    }
  }

  return *this;
}

void ImageReference::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_imageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << StringUtils::URLEncode(ImageReferenceResourceTypeMapper::GetNameForImageReferenceResourceType(m_resourceType)) << "&";
  }

  if(m_arnHasBeenSet)
  {
      oStream << location << index << locationValue << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }

}

void ImageReference::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_imageIdHasBeenSet)
  {
      oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << StringUtils::URLEncode(ImageReferenceResourceTypeMapper::GetNameForImageReferenceResourceType(m_resourceType)) << "&";
  }
  if(m_arnHasBeenSet)
  {
      oStream << location << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
