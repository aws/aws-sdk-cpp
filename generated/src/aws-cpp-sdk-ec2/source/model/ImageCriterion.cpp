/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImageCriterion.h>
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

ImageCriterion::ImageCriterion() : 
    m_imageProvidersHasBeenSet(false)
{
}

ImageCriterion::ImageCriterion(const XmlNode& xmlNode)
  : ImageCriterion()
{
  *this = xmlNode;
}

ImageCriterion& ImageCriterion::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode imageProvidersNode = resultNode.FirstChild("imageProviderSet");
    if(!imageProvidersNode.IsNull())
    {
      XmlNode imageProvidersMember = imageProvidersNode.FirstChild("item");
      while(!imageProvidersMember.IsNull())
      {
        m_imageProviders.push_back(imageProvidersMember.GetText());
        imageProvidersMember = imageProvidersMember.NextNode("item");
      }

      m_imageProvidersHasBeenSet = true;
    }
  }

  return *this;
}

void ImageCriterion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_imageProvidersHasBeenSet)
  {
      unsigned imageProvidersIdx = 1;
      for(auto& item : m_imageProviders)
      {
        oStream << location << index << locationValue << ".ImageProviderSet." << imageProvidersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void ImageCriterion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_imageProvidersHasBeenSet)
  {
      unsigned imageProvidersIdx = 1;
      for(auto& item : m_imageProviders)
      {
        oStream << location << ".ImageProviderSet." << imageProvidersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
