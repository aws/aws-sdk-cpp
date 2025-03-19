/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImageMetadata.h>
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

ImageMetadata::ImageMetadata(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ImageMetadata& ImageMetadata::operator =(const XmlNode& xmlNode)
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
    XmlNode ownerIdNode = resultNode.FirstChild("imageOwnerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("imageState");
    if(!stateNode.IsNull())
    {
      m_state = ImageStateMapper::GetImageStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode imageOwnerAliasNode = resultNode.FirstChild("imageOwnerAlias");
    if(!imageOwnerAliasNode.IsNull())
    {
      m_imageOwnerAlias = Aws::Utils::Xml::DecodeEscapedXmlText(imageOwnerAliasNode.GetText());
      m_imageOwnerAliasHasBeenSet = true;
    }
    XmlNode creationDateNode = resultNode.FirstChild("creationDate");
    if(!creationDateNode.IsNull())
    {
      m_creationDate = Aws::Utils::Xml::DecodeEscapedXmlText(creationDateNode.GetText());
      m_creationDateHasBeenSet = true;
    }
    XmlNode deprecationTimeNode = resultNode.FirstChild("deprecationTime");
    if(!deprecationTimeNode.IsNull())
    {
      m_deprecationTime = Aws::Utils::Xml::DecodeEscapedXmlText(deprecationTimeNode.GetText());
      m_deprecationTimeHasBeenSet = true;
    }
    XmlNode imageAllowedNode = resultNode.FirstChild("imageAllowed");
    if(!imageAllowedNode.IsNull())
    {
      m_imageAllowed = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(imageAllowedNode.GetText()).c_str()).c_str());
      m_imageAllowedHasBeenSet = true;
    }
    XmlNode isPublicNode = resultNode.FirstChild("isPublic");
    if(!isPublicNode.IsNull())
    {
      m_isPublic = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isPublicNode.GetText()).c_str()).c_str());
      m_isPublicHasBeenSet = true;
    }
  }

  return *this;
}

void ImageMetadata::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_imageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(ImageStateMapper::GetNameForImageState(m_state)) << "&";
  }

  if(m_imageOwnerAliasHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageOwnerAlias=" << StringUtils::URLEncode(m_imageOwnerAlias.c_str()) << "&";
  }

  if(m_creationDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationDate=" << StringUtils::URLEncode(m_creationDate.c_str()) << "&";
  }

  if(m_deprecationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeprecationTime=" << StringUtils::URLEncode(m_deprecationTime.c_str()) << "&";
  }

  if(m_imageAllowedHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageAllowed=" << std::boolalpha << m_imageAllowed << "&";
  }

  if(m_isPublicHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsPublic=" << std::boolalpha << m_isPublic << "&";
  }

}

void ImageMetadata::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_imageIdHasBeenSet)
  {
      oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(ImageStateMapper::GetNameForImageState(m_state)) << "&";
  }
  if(m_imageOwnerAliasHasBeenSet)
  {
      oStream << location << ".ImageOwnerAlias=" << StringUtils::URLEncode(m_imageOwnerAlias.c_str()) << "&";
  }
  if(m_creationDateHasBeenSet)
  {
      oStream << location << ".CreationDate=" << StringUtils::URLEncode(m_creationDate.c_str()) << "&";
  }
  if(m_deprecationTimeHasBeenSet)
  {
      oStream << location << ".DeprecationTime=" << StringUtils::URLEncode(m_deprecationTime.c_str()) << "&";
  }
  if(m_imageAllowedHasBeenSet)
  {
      oStream << location << ".ImageAllowed=" << std::boolalpha << m_imageAllowed << "&";
  }
  if(m_isPublicHasBeenSet)
  {
      oStream << location << ".IsPublic=" << std::boolalpha << m_isPublic << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
