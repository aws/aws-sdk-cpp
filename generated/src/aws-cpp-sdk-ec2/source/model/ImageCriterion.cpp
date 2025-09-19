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

ImageCriterion::ImageCriterion(const XmlNode& xmlNode)
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
      m_imageProvidersHasBeenSet = !imageProvidersMember.IsNull();
      while(!imageProvidersMember.IsNull())
      {
        m_imageProviders.push_back(imageProvidersMember.GetText());
        imageProvidersMember = imageProvidersMember.NextNode("item");
      }

      m_imageProvidersHasBeenSet = true;
    }
    XmlNode marketplaceProductCodesNode = resultNode.FirstChild("marketplaceProductCodeSet");
    if(!marketplaceProductCodesNode.IsNull())
    {
      XmlNode marketplaceProductCodesMember = marketplaceProductCodesNode.FirstChild("item");
      m_marketplaceProductCodesHasBeenSet = !marketplaceProductCodesMember.IsNull();
      while(!marketplaceProductCodesMember.IsNull())
      {
        m_marketplaceProductCodes.push_back(marketplaceProductCodesMember.GetText());
        marketplaceProductCodesMember = marketplaceProductCodesMember.NextNode("item");
      }

      m_marketplaceProductCodesHasBeenSet = true;
    }
    XmlNode imageNamesNode = resultNode.FirstChild("imageNameSet");
    if(!imageNamesNode.IsNull())
    {
      XmlNode imageNamesMember = imageNamesNode.FirstChild("item");
      m_imageNamesHasBeenSet = !imageNamesMember.IsNull();
      while(!imageNamesMember.IsNull())
      {
        m_imageNames.push_back(imageNamesMember.GetText());
        imageNamesMember = imageNamesMember.NextNode("item");
      }

      m_imageNamesHasBeenSet = true;
    }
    XmlNode deprecationTimeConditionNode = resultNode.FirstChild("deprecationTimeCondition");
    if(!deprecationTimeConditionNode.IsNull())
    {
      m_deprecationTimeCondition = deprecationTimeConditionNode;
      m_deprecationTimeConditionHasBeenSet = true;
    }
    XmlNode creationDateConditionNode = resultNode.FirstChild("creationDateCondition");
    if(!creationDateConditionNode.IsNull())
    {
      m_creationDateCondition = creationDateConditionNode;
      m_creationDateConditionHasBeenSet = true;
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

  if(m_marketplaceProductCodesHasBeenSet)
  {
      unsigned marketplaceProductCodesIdx = 1;
      for(auto& item : m_marketplaceProductCodes)
      {
        oStream << location << index << locationValue << ".MarketplaceProductCodeSet." << marketplaceProductCodesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_imageNamesHasBeenSet)
  {
      unsigned imageNamesIdx = 1;
      for(auto& item : m_imageNames)
      {
        oStream << location << index << locationValue << ".ImageNameSet." << imageNamesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_deprecationTimeConditionHasBeenSet)
  {
      Aws::StringStream deprecationTimeConditionLocationAndMemberSs;
      deprecationTimeConditionLocationAndMemberSs << location << index << locationValue << ".DeprecationTimeCondition";
      m_deprecationTimeCondition.OutputToStream(oStream, deprecationTimeConditionLocationAndMemberSs.str().c_str());
  }

  if(m_creationDateConditionHasBeenSet)
  {
      Aws::StringStream creationDateConditionLocationAndMemberSs;
      creationDateConditionLocationAndMemberSs << location << index << locationValue << ".CreationDateCondition";
      m_creationDateCondition.OutputToStream(oStream, creationDateConditionLocationAndMemberSs.str().c_str());
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
  if(m_marketplaceProductCodesHasBeenSet)
  {
      unsigned marketplaceProductCodesIdx = 1;
      for(auto& item : m_marketplaceProductCodes)
      {
        oStream << location << ".MarketplaceProductCodeSet." << marketplaceProductCodesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_imageNamesHasBeenSet)
  {
      unsigned imageNamesIdx = 1;
      for(auto& item : m_imageNames)
      {
        oStream << location << ".ImageNameSet." << imageNamesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_deprecationTimeConditionHasBeenSet)
  {
      Aws::String deprecationTimeConditionLocationAndMember(location);
      deprecationTimeConditionLocationAndMember += ".DeprecationTimeCondition";
      m_deprecationTimeCondition.OutputToStream(oStream, deprecationTimeConditionLocationAndMember.c_str());
  }
  if(m_creationDateConditionHasBeenSet)
  {
      Aws::String creationDateConditionLocationAndMember(location);
      creationDateConditionLocationAndMember += ".CreationDateCondition";
      m_creationDateCondition.OutputToStream(oStream, creationDateConditionLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
