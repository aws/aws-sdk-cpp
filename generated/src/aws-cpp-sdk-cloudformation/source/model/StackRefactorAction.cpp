/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackRefactorAction.h>
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

StackRefactorAction::StackRefactorAction(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

StackRefactorAction& StackRefactorAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode actionNode = resultNode.FirstChild("Action");
    if(!actionNode.IsNull())
    {
      m_action = StackRefactorActionTypeMapper::GetStackRefactorActionTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(actionNode.GetText()).c_str()));
      m_actionHasBeenSet = true;
    }
    XmlNode entityNode = resultNode.FirstChild("Entity");
    if(!entityNode.IsNull())
    {
      m_entity = StackRefactorActionEntityMapper::GetStackRefactorActionEntityForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(entityNode.GetText()).c_str()));
      m_entityHasBeenSet = true;
    }
    XmlNode physicalResourceIdNode = resultNode.FirstChild("PhysicalResourceId");
    if(!physicalResourceIdNode.IsNull())
    {
      m_physicalResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(physicalResourceIdNode.GetText());
      m_physicalResourceIdHasBeenSet = true;
    }
    XmlNode resourceIdentifierNode = resultNode.FirstChild("ResourceIdentifier");
    if(!resourceIdentifierNode.IsNull())
    {
      m_resourceIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(resourceIdentifierNode.GetText());
      m_resourceIdentifierHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode detectionNode = resultNode.FirstChild("Detection");
    if(!detectionNode.IsNull())
    {
      m_detection = StackRefactorDetectionMapper::GetStackRefactorDetectionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(detectionNode.GetText()).c_str()));
      m_detectionHasBeenSet = true;
    }
    XmlNode detectionReasonNode = resultNode.FirstChild("DetectionReason");
    if(!detectionReasonNode.IsNull())
    {
      m_detectionReason = Aws::Utils::Xml::DecodeEscapedXmlText(detectionReasonNode.GetText());
      m_detectionReasonHasBeenSet = true;
    }
    XmlNode tagResourcesNode = resultNode.FirstChild("TagResources");
    if(!tagResourcesNode.IsNull())
    {
      XmlNode tagResourcesMember = tagResourcesNode.FirstChild("member");
      m_tagResourcesHasBeenSet = !tagResourcesMember.IsNull();
      while(!tagResourcesMember.IsNull())
      {
        m_tagResources.push_back(tagResourcesMember);
        tagResourcesMember = tagResourcesMember.NextNode("member");
      }

      m_tagResourcesHasBeenSet = true;
    }
    XmlNode untagResourcesNode = resultNode.FirstChild("UntagResources");
    if(!untagResourcesNode.IsNull())
    {
      XmlNode untagResourcesMember = untagResourcesNode.FirstChild("member");
      m_untagResourcesHasBeenSet = !untagResourcesMember.IsNull();
      while(!untagResourcesMember.IsNull())
      {
        m_untagResources.push_back(untagResourcesMember.GetText());
        untagResourcesMember = untagResourcesMember.NextNode("member");
      }

      m_untagResourcesHasBeenSet = true;
    }
    XmlNode resourceMappingNode = resultNode.FirstChild("ResourceMapping");
    if(!resourceMappingNode.IsNull())
    {
      m_resourceMapping = resourceMappingNode;
      m_resourceMappingHasBeenSet = true;
    }
  }

  return *this;
}

void StackRefactorAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_actionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Action=" << StringUtils::URLEncode(StackRefactorActionTypeMapper::GetNameForStackRefactorActionType(m_action)) << "&";
  }

  if(m_entityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Entity=" << StringUtils::URLEncode(StackRefactorActionEntityMapper::GetNameForStackRefactorActionEntity(m_entity)) << "&";
  }

  if(m_physicalResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PhysicalResourceId=" << StringUtils::URLEncode(m_physicalResourceId.c_str()) << "&";
  }

  if(m_resourceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceIdentifier=" << StringUtils::URLEncode(m_resourceIdentifier.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_detectionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Detection=" << StringUtils::URLEncode(StackRefactorDetectionMapper::GetNameForStackRefactorDetection(m_detection)) << "&";
  }

  if(m_detectionReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".DetectionReason=" << StringUtils::URLEncode(m_detectionReason.c_str()) << "&";
  }

  if(m_tagResourcesHasBeenSet)
  {
      unsigned tagResourcesIdx = 1;
      for(auto& item : m_tagResources)
      {
        Aws::StringStream tagResourcesSs;
        tagResourcesSs << location << index << locationValue << ".TagResources.member." << tagResourcesIdx++;
        item.OutputToStream(oStream, tagResourcesSs.str().c_str());
      }
  }

  if(m_untagResourcesHasBeenSet)
  {
      unsigned untagResourcesIdx = 1;
      for(auto& item : m_untagResources)
      {
        oStream << location << index << locationValue << ".UntagResources.member." << untagResourcesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_resourceMappingHasBeenSet)
  {
      Aws::StringStream resourceMappingLocationAndMemberSs;
      resourceMappingLocationAndMemberSs << location << index << locationValue << ".ResourceMapping";
      m_resourceMapping.OutputToStream(oStream, resourceMappingLocationAndMemberSs.str().c_str());
  }

}

void StackRefactorAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_actionHasBeenSet)
  {
      oStream << location << ".Action=" << StringUtils::URLEncode(StackRefactorActionTypeMapper::GetNameForStackRefactorActionType(m_action)) << "&";
  }
  if(m_entityHasBeenSet)
  {
      oStream << location << ".Entity=" << StringUtils::URLEncode(StackRefactorActionEntityMapper::GetNameForStackRefactorActionEntity(m_entity)) << "&";
  }
  if(m_physicalResourceIdHasBeenSet)
  {
      oStream << location << ".PhysicalResourceId=" << StringUtils::URLEncode(m_physicalResourceId.c_str()) << "&";
  }
  if(m_resourceIdentifierHasBeenSet)
  {
      oStream << location << ".ResourceIdentifier=" << StringUtils::URLEncode(m_resourceIdentifier.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_detectionHasBeenSet)
  {
      oStream << location << ".Detection=" << StringUtils::URLEncode(StackRefactorDetectionMapper::GetNameForStackRefactorDetection(m_detection)) << "&";
  }
  if(m_detectionReasonHasBeenSet)
  {
      oStream << location << ".DetectionReason=" << StringUtils::URLEncode(m_detectionReason.c_str()) << "&";
  }
  if(m_tagResourcesHasBeenSet)
  {
      unsigned tagResourcesIdx = 1;
      for(auto& item : m_tagResources)
      {
        Aws::StringStream tagResourcesSs;
        tagResourcesSs << location << ".TagResources.member." << tagResourcesIdx++;
        item.OutputToStream(oStream, tagResourcesSs.str().c_str());
      }
  }
  if(m_untagResourcesHasBeenSet)
  {
      unsigned untagResourcesIdx = 1;
      for(auto& item : m_untagResources)
      {
        oStream << location << ".UntagResources.member." << untagResourcesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_resourceMappingHasBeenSet)
  {
      Aws::String resourceMappingLocationAndMember(location);
      resourceMappingLocationAndMember += ".ResourceMapping";
      m_resourceMapping.OutputToStream(oStream, resourceMappingLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
