﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/PolicyTypeDescription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

PolicyTypeDescription::PolicyTypeDescription() : 
    m_policyTypeNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_policyAttributeTypeDescriptionsHasBeenSet(false)
{
}

PolicyTypeDescription::PolicyTypeDescription(const XmlNode& xmlNode) : 
    m_policyTypeNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_policyAttributeTypeDescriptionsHasBeenSet(false)
{
  *this = xmlNode;
}

PolicyTypeDescription& PolicyTypeDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode policyTypeNameNode = resultNode.FirstChild("PolicyTypeName");
    if(!policyTypeNameNode.IsNull())
    {
      m_policyTypeName = Aws::Utils::Xml::DecodeEscapedXmlText(policyTypeNameNode.GetText());
      m_policyTypeNameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode policyAttributeTypeDescriptionsNode = resultNode.FirstChild("PolicyAttributeTypeDescriptions");
    if(!policyAttributeTypeDescriptionsNode.IsNull())
    {
      XmlNode policyAttributeTypeDescriptionsMember = policyAttributeTypeDescriptionsNode.FirstChild("member");
      while(!policyAttributeTypeDescriptionsMember.IsNull())
      {
        m_policyAttributeTypeDescriptions.push_back(policyAttributeTypeDescriptionsMember);
        policyAttributeTypeDescriptionsMember = policyAttributeTypeDescriptionsMember.NextNode("member");
      }

      m_policyAttributeTypeDescriptionsHasBeenSet = true;
    }
  }

  return *this;
}

void PolicyTypeDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_policyTypeNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyTypeName=" << StringUtils::URLEncode(m_policyTypeName.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_policyAttributeTypeDescriptionsHasBeenSet)
  {
      unsigned policyAttributeTypeDescriptionsIdx = 1;
      for(auto& item : m_policyAttributeTypeDescriptions)
      {
        Aws::StringStream policyAttributeTypeDescriptionsSs;
        policyAttributeTypeDescriptionsSs << location << index << locationValue << ".PolicyAttributeTypeDescriptions.member." << policyAttributeTypeDescriptionsIdx++;
        item.OutputToStream(oStream, policyAttributeTypeDescriptionsSs.str().c_str());
      }
  }

}

void PolicyTypeDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_policyTypeNameHasBeenSet)
  {
      oStream << location << ".PolicyTypeName=" << StringUtils::URLEncode(m_policyTypeName.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_policyAttributeTypeDescriptionsHasBeenSet)
  {
      unsigned policyAttributeTypeDescriptionsIdx = 1;
      for(auto& item : m_policyAttributeTypeDescriptions)
      {
        Aws::StringStream policyAttributeTypeDescriptionsSs;
        policyAttributeTypeDescriptionsSs << location <<  ".PolicyAttributeTypeDescriptions.member." << policyAttributeTypeDescriptionsIdx++;
        item.OutputToStream(oStream, policyAttributeTypeDescriptionsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
