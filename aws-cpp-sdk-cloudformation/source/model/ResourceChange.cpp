/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/cloudformation/model/ResourceChange.h>
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

ResourceChange::ResourceChange() : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_replacement(Replacement::NOT_SET),
    m_replacementHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

ResourceChange::ResourceChange(const XmlNode& xmlNode) : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_replacement(Replacement::NOT_SET),
    m_replacementHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = xmlNode;
}

ResourceChange& ResourceChange::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode actionNode = resultNode.FirstChild("Action");
    if(!actionNode.IsNull())
    {
      m_action = ChangeActionMapper::GetChangeActionForName(StringUtils::Trim(actionNode.GetText().c_str()).c_str());
      m_actionHasBeenSet = true;
    }
    XmlNode logicalResourceIdNode = resultNode.FirstChild("LogicalResourceId");
    if(!logicalResourceIdNode.IsNull())
    {
      m_logicalResourceId = logicalResourceIdNode.GetText();
      m_logicalResourceIdHasBeenSet = true;
    }
    XmlNode physicalResourceIdNode = resultNode.FirstChild("PhysicalResourceId");
    if(!physicalResourceIdNode.IsNull())
    {
      m_physicalResourceId = physicalResourceIdNode.GetText();
      m_physicalResourceIdHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("ResourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = resourceTypeNode.GetText();
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode replacementNode = resultNode.FirstChild("Replacement");
    if(!replacementNode.IsNull())
    {
      m_replacement = ReplacementMapper::GetReplacementForName(StringUtils::Trim(replacementNode.GetText().c_str()).c_str());
      m_replacementHasBeenSet = true;
    }
    XmlNode scopeNode = resultNode.FirstChild("Scope");
    if(!scopeNode.IsNull())
    {
      XmlNode scopeMember = scopeNode.FirstChild("member");
      while(!scopeMember.IsNull())
      {
        m_scope.push_back(ResourceAttributeMapper::GetResourceAttributeForName(StringUtils::Trim(scopeMember.GetText().c_str())));
        scopeMember = scopeMember.NextNode("member");
      }

      m_scopeHasBeenSet = true;
    }
    XmlNode detailsNode = resultNode.FirstChild("Details");
    if(!detailsNode.IsNull())
    {
      XmlNode detailsMember = detailsNode.FirstChild("member");
      while(!detailsMember.IsNull())
      {
        m_details.push_back(detailsMember);
        detailsMember = detailsMember.NextNode("member");
      }

      m_detailsHasBeenSet = true;
    }
  }

  return *this;
}

void ResourceChange::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_actionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Action=" << ChangeActionMapper::GetNameForChangeAction(m_action) << "&";
  }

  if(m_logicalResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogicalResourceId=" << StringUtils::URLEncode(m_logicalResourceId.c_str()) << "&";
  }

  if(m_physicalResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PhysicalResourceId=" << StringUtils::URLEncode(m_physicalResourceId.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }

  if(m_replacementHasBeenSet)
  {
      oStream << location << index << locationValue << ".Replacement=" << ReplacementMapper::GetNameForReplacement(m_replacement) << "&";
  }

  if(m_scopeHasBeenSet)
  {
      unsigned scopeIdx = 1;
      for(auto& item : m_scope)
      {
        oStream << location << index << locationValue << ".Scope.member." << scopeIdx++ << "=" << ResourceAttributeMapper::GetNameForResourceAttribute(item) << "&";
      }
  }

  if(m_detailsHasBeenSet)
  {
      unsigned detailsIdx = 1;
      for(auto& item : m_details)
      {
        Aws::StringStream detailsSs;
        detailsSs << location << index << locationValue << ".Details.member." << detailsIdx++;
        item.OutputToStream(oStream, detailsSs.str().c_str());
      }
  }

}

void ResourceChange::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_actionHasBeenSet)
  {
      oStream << location << ".Action=" << ChangeActionMapper::GetNameForChangeAction(m_action) << "&";
  }
  if(m_logicalResourceIdHasBeenSet)
  {
      oStream << location << ".LogicalResourceId=" << StringUtils::URLEncode(m_logicalResourceId.c_str()) << "&";
  }
  if(m_physicalResourceIdHasBeenSet)
  {
      oStream << location << ".PhysicalResourceId=" << StringUtils::URLEncode(m_physicalResourceId.c_str()) << "&";
  }
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }
  if(m_replacementHasBeenSet)
  {
      oStream << location << ".Replacement=" << ReplacementMapper::GetNameForReplacement(m_replacement) << "&";
  }
  if(m_scopeHasBeenSet)
  {
      unsigned scopeIdx = 1;
      for(auto& item : m_scope)
      {
        oStream << location << ".Scope.member." << scopeIdx++ << "=" << ResourceAttributeMapper::GetNameForResourceAttribute(item) << "&";
      }
  }
  if(m_detailsHasBeenSet)
  {
      unsigned detailsIdx = 1;
      for(auto& item : m_details)
      {
        Aws::StringStream detailsSs;
        detailsSs << location <<  ".Details.member." << detailsIdx++;
        item.OutputToStream(oStream, detailsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
