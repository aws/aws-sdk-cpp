/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ScannedResourceIdentifier.h>
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

ScannedResourceIdentifier::ScannedResourceIdentifier() : 
    m_resourceTypeHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false)
{
}

ScannedResourceIdentifier::ScannedResourceIdentifier(const XmlNode& xmlNode) : 
    m_resourceTypeHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false)
{
  *this = xmlNode;
}

ScannedResourceIdentifier& ScannedResourceIdentifier::operator =(const XmlNode& xmlNode)
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
    XmlNode resourceIdentifierNode = resultNode.FirstChild("ResourceIdentifier");

    if(!resourceIdentifierNode.IsNull())
    {
      XmlNode resourceIdentifierEntry = resourceIdentifierNode.FirstChild("entry");
      while(!resourceIdentifierEntry.IsNull())
      {
        XmlNode keyNode = resourceIdentifierEntry.FirstChild("key");
        XmlNode valueNode = resourceIdentifierEntry.FirstChild("value");
        m_resourceIdentifier[keyNode.GetText()] =
            valueNode.GetText();
        resourceIdentifierEntry = resourceIdentifierEntry.NextNode("entry");
      }

      m_resourceIdentifierHasBeenSet = true;
    }
  }

  return *this;
}

void ScannedResourceIdentifier::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }

  if(m_resourceIdentifierHasBeenSet)
  {
      unsigned resourceIdentifierIdx = 1;
      for(auto& item : m_resourceIdentifier)
      {
        oStream << location << index << locationValue << ".ResourceIdentifier.entry." << resourceIdentifierIdx << ".key="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        oStream << location << index << locationValue << ".ResourceIdentifier.entry." << resourceIdentifierIdx << ".value="
            << StringUtils::URLEncode(item.second.c_str()) << "&";
        resourceIdentifierIdx++;
      }
  }

}

void ScannedResourceIdentifier::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }
  if(m_resourceIdentifierHasBeenSet)
  {
      unsigned resourceIdentifierIdx = 1;
      for(auto& item : m_resourceIdentifier)
      {
        oStream << location << ".ResourceIdentifier.entry."  << resourceIdentifierIdx << ".key="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        oStream << location <<  ".ResourceIdentifier.entry." << resourceIdentifierIdx << ".value="
            << StringUtils::URLEncode(item.second.c_str()) << "&";
        resourceIdentifierIdx++;
      }

  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
