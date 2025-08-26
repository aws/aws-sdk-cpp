/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImageUsageResourceType.h>
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

ImageUsageResourceType::ImageUsageResourceType(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ImageUsageResourceType& ImageUsageResourceType::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourceTypeNode = resultNode.FirstChild("resourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText());
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode resourceTypeOptionsNode = resultNode.FirstChild("resourceTypeOptionSet");
    if(!resourceTypeOptionsNode.IsNull())
    {
      XmlNode resourceTypeOptionsMember = resourceTypeOptionsNode.FirstChild("item");
      m_resourceTypeOptionsHasBeenSet = !resourceTypeOptionsMember.IsNull();
      while(!resourceTypeOptionsMember.IsNull())
      {
        m_resourceTypeOptions.push_back(resourceTypeOptionsMember);
        resourceTypeOptionsMember = resourceTypeOptionsMember.NextNode("item");
      }

      m_resourceTypeOptionsHasBeenSet = true;
    }
  }

  return *this;
}

void ImageUsageResourceType::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }

  if(m_resourceTypeOptionsHasBeenSet)
  {
      unsigned resourceTypeOptionsIdx = 1;
      for(auto& item : m_resourceTypeOptions)
      {
        Aws::StringStream resourceTypeOptionsSs;
        resourceTypeOptionsSs << location << index << locationValue << ".ResourceTypeOptionSet." << resourceTypeOptionsIdx++;
        item.OutputToStream(oStream, resourceTypeOptionsSs.str().c_str());
      }
  }

}

void ImageUsageResourceType::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }
  if(m_resourceTypeOptionsHasBeenSet)
  {
      unsigned resourceTypeOptionsIdx = 1;
      for(auto& item : m_resourceTypeOptions)
      {
        Aws::StringStream resourceTypeOptionsSs;
        resourceTypeOptionsSs << location << ".ResourceTypeOptionSet." << resourceTypeOptionsIdx++;
        item.OutputToStream(oStream, resourceTypeOptionsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
