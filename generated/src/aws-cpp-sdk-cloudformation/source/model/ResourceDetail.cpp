/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ResourceDetail.h>
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

ResourceDetail::ResourceDetail() : 
    m_resourceTypeHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_resourceStatus(GeneratedTemplateResourceStatus::NOT_SET),
    m_resourceStatusHasBeenSet(false),
    m_resourceStatusReasonHasBeenSet(false),
    m_warningsHasBeenSet(false)
{
}

ResourceDetail::ResourceDetail(const XmlNode& xmlNode) : 
    m_resourceTypeHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_resourceStatus(GeneratedTemplateResourceStatus::NOT_SET),
    m_resourceStatusHasBeenSet(false),
    m_resourceStatusReasonHasBeenSet(false),
    m_warningsHasBeenSet(false)
{
  *this = xmlNode;
}

ResourceDetail& ResourceDetail::operator =(const XmlNode& xmlNode)
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
    XmlNode logicalResourceIdNode = resultNode.FirstChild("LogicalResourceId");
    if(!logicalResourceIdNode.IsNull())
    {
      m_logicalResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(logicalResourceIdNode.GetText());
      m_logicalResourceIdHasBeenSet = true;
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
    XmlNode resourceStatusNode = resultNode.FirstChild("ResourceStatus");
    if(!resourceStatusNode.IsNull())
    {
      m_resourceStatus = GeneratedTemplateResourceStatusMapper::GetGeneratedTemplateResourceStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceStatusNode.GetText()).c_str()).c_str());
      m_resourceStatusHasBeenSet = true;
    }
    XmlNode resourceStatusReasonNode = resultNode.FirstChild("ResourceStatusReason");
    if(!resourceStatusReasonNode.IsNull())
    {
      m_resourceStatusReason = Aws::Utils::Xml::DecodeEscapedXmlText(resourceStatusReasonNode.GetText());
      m_resourceStatusReasonHasBeenSet = true;
    }
    XmlNode warningsNode = resultNode.FirstChild("Warnings");
    if(!warningsNode.IsNull())
    {
      XmlNode warningsMember = warningsNode.FirstChild("member");
      while(!warningsMember.IsNull())
      {
        m_warnings.push_back(warningsMember);
        warningsMember = warningsMember.NextNode("member");
      }

      m_warningsHasBeenSet = true;
    }
  }

  return *this;
}

void ResourceDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }

  if(m_logicalResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogicalResourceId=" << StringUtils::URLEncode(m_logicalResourceId.c_str()) << "&";
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

  if(m_resourceStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceStatus=" << GeneratedTemplateResourceStatusMapper::GetNameForGeneratedTemplateResourceStatus(m_resourceStatus) << "&";
  }

  if(m_resourceStatusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceStatusReason=" << StringUtils::URLEncode(m_resourceStatusReason.c_str()) << "&";
  }

  if(m_warningsHasBeenSet)
  {
      unsigned warningsIdx = 1;
      for(auto& item : m_warnings)
      {
        Aws::StringStream warningsSs;
        warningsSs << location << index << locationValue << ".Warnings.member." << warningsIdx++;
        item.OutputToStream(oStream, warningsSs.str().c_str());
      }
  }

}

void ResourceDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }
  if(m_logicalResourceIdHasBeenSet)
  {
      oStream << location << ".LogicalResourceId=" << StringUtils::URLEncode(m_logicalResourceId.c_str()) << "&";
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
  if(m_resourceStatusHasBeenSet)
  {
      oStream << location << ".ResourceStatus=" << GeneratedTemplateResourceStatusMapper::GetNameForGeneratedTemplateResourceStatus(m_resourceStatus) << "&";
  }
  if(m_resourceStatusReasonHasBeenSet)
  {
      oStream << location << ".ResourceStatusReason=" << StringUtils::URLEncode(m_resourceStatusReason.c_str()) << "&";
  }
  if(m_warningsHasBeenSet)
  {
      unsigned warningsIdx = 1;
      for(auto& item : m_warnings)
      {
        Aws::StringStream warningsSs;
        warningsSs << location <<  ".Warnings.member." << warningsIdx++;
        item.OutputToStream(oStream, warningsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
