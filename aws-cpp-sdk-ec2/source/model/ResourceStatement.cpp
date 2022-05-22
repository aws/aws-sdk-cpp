/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ResourceStatement.h>
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

ResourceStatement::ResourceStatement() : 
    m_resourcesHasBeenSet(false),
    m_resourceTypesHasBeenSet(false)
{
}

ResourceStatement::ResourceStatement(const XmlNode& xmlNode) : 
    m_resourcesHasBeenSet(false),
    m_resourceTypesHasBeenSet(false)
{
  *this = xmlNode;
}

ResourceStatement& ResourceStatement::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourcesNode = resultNode.FirstChild("resourceSet");
    if(!resourcesNode.IsNull())
    {
      XmlNode resourcesMember = resourcesNode.FirstChild("item");
      while(!resourcesMember.IsNull())
      {
        m_resources.push_back(resourcesMember.GetText());
        resourcesMember = resourcesMember.NextNode("item");
      }

      m_resourcesHasBeenSet = true;
    }
    XmlNode resourceTypesNode = resultNode.FirstChild("resourceTypeSet");
    if(!resourceTypesNode.IsNull())
    {
      XmlNode resourceTypesMember = resourceTypesNode.FirstChild("item");
      while(!resourceTypesMember.IsNull())
      {
        m_resourceTypes.push_back(resourceTypesMember.GetText());
        resourceTypesMember = resourceTypesMember.NextNode("item");
      }

      m_resourceTypesHasBeenSet = true;
    }
  }

  return *this;
}

void ResourceStatement::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourcesHasBeenSet)
  {
      unsigned resourcesIdx = 1;
      for(auto& item : m_resources)
      {
        oStream << location << index << locationValue << ".ResourceSet." << resourcesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_resourceTypesHasBeenSet)
  {
      unsigned resourceTypesIdx = 1;
      for(auto& item : m_resourceTypes)
      {
        oStream << location << index << locationValue << ".ResourceTypeSet." << resourceTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void ResourceStatement::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourcesHasBeenSet)
  {
      unsigned resourcesIdx = 1;
      for(auto& item : m_resources)
      {
        oStream << location << ".ResourceSet." << resourcesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_resourceTypesHasBeenSet)
  {
      unsigned resourceTypesIdx = 1;
      for(auto& item : m_resourceTypes)
      {
        oStream << location << ".ResourceTypeSet." << resourceTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
