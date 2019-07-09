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

#include <aws/elasticloadbalancing/model/PolicyDescription.h>
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

PolicyDescription::PolicyDescription() : 
    m_policyNameHasBeenSet(false),
    m_policyTypeNameHasBeenSet(false),
    m_policyAttributeDescriptionsHasBeenSet(false)
{
}

PolicyDescription::PolicyDescription(const XmlNode& xmlNode) : 
    m_policyNameHasBeenSet(false),
    m_policyTypeNameHasBeenSet(false),
    m_policyAttributeDescriptionsHasBeenSet(false)
{
  *this = xmlNode;
}

PolicyDescription& PolicyDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode policyNameNode = resultNode.FirstChild("PolicyName");
    if(!policyNameNode.IsNull())
    {
      m_policyName = policyNameNode.GetText();
      m_policyNameHasBeenSet = true;
    }
    XmlNode policyTypeNameNode = resultNode.FirstChild("PolicyTypeName");
    if(!policyTypeNameNode.IsNull())
    {
      m_policyTypeName = policyTypeNameNode.GetText();
      m_policyTypeNameHasBeenSet = true;
    }
    XmlNode policyAttributeDescriptionsNode = resultNode.FirstChild("PolicyAttributeDescriptions");
    if(!policyAttributeDescriptionsNode.IsNull())
    {
      XmlNode policyAttributeDescriptionsMember = policyAttributeDescriptionsNode.FirstChild("member");
      while(!policyAttributeDescriptionsMember.IsNull())
      {
        m_policyAttributeDescriptions.push_back(policyAttributeDescriptionsMember);
        policyAttributeDescriptionsMember = policyAttributeDescriptionsMember.NextNode("member");
      }

      m_policyAttributeDescriptionsHasBeenSet = true;
    }
  }

  return *this;
}

void PolicyDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_policyNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }

  if(m_policyTypeNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyTypeName=" << StringUtils::URLEncode(m_policyTypeName.c_str()) << "&";
  }

  if(m_policyAttributeDescriptionsHasBeenSet)
  {
      unsigned policyAttributeDescriptionsIdx = 1;
      for(auto& item : m_policyAttributeDescriptions)
      {
        Aws::StringStream policyAttributeDescriptionsSs;
        policyAttributeDescriptionsSs << location << index << locationValue << ".PolicyAttributeDescriptions.member." << policyAttributeDescriptionsIdx++;
        item.OutputToStream(oStream, policyAttributeDescriptionsSs.str().c_str());
      }
  }

}

void PolicyDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_policyNameHasBeenSet)
  {
      oStream << location << ".PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }
  if(m_policyTypeNameHasBeenSet)
  {
      oStream << location << ".PolicyTypeName=" << StringUtils::URLEncode(m_policyTypeName.c_str()) << "&";
  }
  if(m_policyAttributeDescriptionsHasBeenSet)
  {
      unsigned policyAttributeDescriptionsIdx = 1;
      for(auto& item : m_policyAttributeDescriptions)
      {
        Aws::StringStream policyAttributeDescriptionsSs;
        policyAttributeDescriptionsSs << location <<  ".PolicyAttributeDescriptions.member." << policyAttributeDescriptionsIdx++;
        item.OutputToStream(oStream, policyAttributeDescriptionsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
