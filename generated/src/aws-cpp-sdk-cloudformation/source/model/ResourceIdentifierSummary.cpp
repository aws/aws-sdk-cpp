/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ResourceIdentifierSummary.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

ResourceIdentifierSummary::ResourceIdentifierSummary() : 
    m_resourceTypeHasBeenSet(false),
    m_logicalResourceIdsHasBeenSet(false),
    m_resourceIdentifiersHasBeenSet(false)
{
}

ResourceIdentifierSummary::ResourceIdentifierSummary(const XmlNode& xmlNode) : 
    m_resourceTypeHasBeenSet(false),
    m_logicalResourceIdsHasBeenSet(false),
    m_resourceIdentifiersHasBeenSet(false)
{
  *this = xmlNode;
}

ResourceIdentifierSummary& ResourceIdentifierSummary::operator =(const XmlNode& xmlNode)
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
    XmlNode logicalResourceIdsNode = resultNode.FirstChild("LogicalResourceIds");
    if(!logicalResourceIdsNode.IsNull())
    {
      XmlNode logicalResourceIdsMember = logicalResourceIdsNode.FirstChild("member");
      while(!logicalResourceIdsMember.IsNull())
      {
        m_logicalResourceIds.push_back(logicalResourceIdsMember.GetText());
        logicalResourceIdsMember = logicalResourceIdsMember.NextNode("member");
      }

      m_logicalResourceIdsHasBeenSet = true;
    }
    XmlNode resourceIdentifiersNode = resultNode.FirstChild("ResourceIdentifiers");
    if(!resourceIdentifiersNode.IsNull())
    {
      XmlNode resourceIdentifiersMember = resourceIdentifiersNode.FirstChild("member");
      while(!resourceIdentifiersMember.IsNull())
      {
        m_resourceIdentifiers.push_back(resourceIdentifiersMember.GetText());
        resourceIdentifiersMember = resourceIdentifiersMember.NextNode("member");
      }

      m_resourceIdentifiersHasBeenSet = true;
    }
  }

  return *this;
}

void ResourceIdentifierSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }

  if(m_logicalResourceIdsHasBeenSet)
  {
      unsigned logicalResourceIdsIdx = 1;
      for(auto& item : m_logicalResourceIds)
      {
        oStream << location << index << locationValue << ".LogicalResourceIds.member." << logicalResourceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_resourceIdentifiersHasBeenSet)
  {
      unsigned resourceIdentifiersIdx = 1;
      for(auto& item : m_resourceIdentifiers)
      {
        oStream << location << index << locationValue << ".ResourceIdentifiers.member." << resourceIdentifiersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void ResourceIdentifierSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }
  if(m_logicalResourceIdsHasBeenSet)
  {
      unsigned logicalResourceIdsIdx = 1;
      for(auto& item : m_logicalResourceIds)
      {
        oStream << location << ".LogicalResourceIds.member." << logicalResourceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_resourceIdentifiersHasBeenSet)
  {
      unsigned resourceIdentifiersIdx = 1;
      for(auto& item : m_resourceIdentifiers)
      {
        oStream << location << ".ResourceIdentifiers.member." << resourceIdentifiersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
