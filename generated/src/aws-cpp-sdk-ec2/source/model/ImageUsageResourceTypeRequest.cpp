/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImageUsageResourceTypeRequest.h>
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

ImageUsageResourceTypeRequest::ImageUsageResourceTypeRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ImageUsageResourceTypeRequest& ImageUsageResourceTypeRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourceTypeNode = resultNode.FirstChild("ResourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText());
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode resourceTypeOptionsNode = resultNode.FirstChild("ResourceTypeOption");
    if(!resourceTypeOptionsNode.IsNull())
    {
      XmlNode resourceTypeOptionsMember = resourceTypeOptionsNode.FirstChild("member");
      m_resourceTypeOptionsHasBeenSet = !resourceTypeOptionsMember.IsNull();
      while(!resourceTypeOptionsMember.IsNull())
      {
        m_resourceTypeOptions.push_back(resourceTypeOptionsMember);
        resourceTypeOptionsMember = resourceTypeOptionsMember.NextNode("member");
      }

      m_resourceTypeOptionsHasBeenSet = true;
    }
  }

  return *this;
}

void ImageUsageResourceTypeRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
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
        resourceTypeOptionsSs << location << index << locationValue << ".ResourceTypeOption." << resourceTypeOptionsIdx++;
        item.OutputToStream(oStream, resourceTypeOptionsSs.str().c_str());
      }
  }

}

void ImageUsageResourceTypeRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
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
        resourceTypeOptionsSs << location << ".ResourceTypeOption." << resourceTypeOptionsIdx++;
        item.OutputToStream(oStream, resourceTypeOptionsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
