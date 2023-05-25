/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AccessScopeAnalysisFinding.h>
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

AccessScopeAnalysisFinding::AccessScopeAnalysisFinding() : 
    m_networkInsightsAccessScopeAnalysisIdHasBeenSet(false),
    m_networkInsightsAccessScopeIdHasBeenSet(false),
    m_findingIdHasBeenSet(false),
    m_findingComponentsHasBeenSet(false)
{
}

AccessScopeAnalysisFinding::AccessScopeAnalysisFinding(const XmlNode& xmlNode) : 
    m_networkInsightsAccessScopeAnalysisIdHasBeenSet(false),
    m_networkInsightsAccessScopeIdHasBeenSet(false),
    m_findingIdHasBeenSet(false),
    m_findingComponentsHasBeenSet(false)
{
  *this = xmlNode;
}

AccessScopeAnalysisFinding& AccessScopeAnalysisFinding::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode networkInsightsAccessScopeAnalysisIdNode = resultNode.FirstChild("networkInsightsAccessScopeAnalysisId");
    if(!networkInsightsAccessScopeAnalysisIdNode.IsNull())
    {
      m_networkInsightsAccessScopeAnalysisId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInsightsAccessScopeAnalysisIdNode.GetText());
      m_networkInsightsAccessScopeAnalysisIdHasBeenSet = true;
    }
    XmlNode networkInsightsAccessScopeIdNode = resultNode.FirstChild("networkInsightsAccessScopeId");
    if(!networkInsightsAccessScopeIdNode.IsNull())
    {
      m_networkInsightsAccessScopeId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInsightsAccessScopeIdNode.GetText());
      m_networkInsightsAccessScopeIdHasBeenSet = true;
    }
    XmlNode findingIdNode = resultNode.FirstChild("findingId");
    if(!findingIdNode.IsNull())
    {
      m_findingId = Aws::Utils::Xml::DecodeEscapedXmlText(findingIdNode.GetText());
      m_findingIdHasBeenSet = true;
    }
    XmlNode findingComponentsNode = resultNode.FirstChild("findingComponentSet");
    if(!findingComponentsNode.IsNull())
    {
      XmlNode findingComponentsMember = findingComponentsNode.FirstChild("item");
      while(!findingComponentsMember.IsNull())
      {
        m_findingComponents.push_back(findingComponentsMember);
        findingComponentsMember = findingComponentsMember.NextNode("item");
      }

      m_findingComponentsHasBeenSet = true;
    }
  }

  return *this;
}

void AccessScopeAnalysisFinding::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_networkInsightsAccessScopeAnalysisIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInsightsAccessScopeAnalysisId=" << StringUtils::URLEncode(m_networkInsightsAccessScopeAnalysisId.c_str()) << "&";
  }

  if(m_networkInsightsAccessScopeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInsightsAccessScopeId=" << StringUtils::URLEncode(m_networkInsightsAccessScopeId.c_str()) << "&";
  }

  if(m_findingIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".FindingId=" << StringUtils::URLEncode(m_findingId.c_str()) << "&";
  }

  if(m_findingComponentsHasBeenSet)
  {
      unsigned findingComponentsIdx = 1;
      for(auto& item : m_findingComponents)
      {
        Aws::StringStream findingComponentsSs;
        findingComponentsSs << location << index << locationValue << ".FindingComponentSet." << findingComponentsIdx++;
        item.OutputToStream(oStream, findingComponentsSs.str().c_str());
      }
  }

}

void AccessScopeAnalysisFinding::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_networkInsightsAccessScopeAnalysisIdHasBeenSet)
  {
      oStream << location << ".NetworkInsightsAccessScopeAnalysisId=" << StringUtils::URLEncode(m_networkInsightsAccessScopeAnalysisId.c_str()) << "&";
  }
  if(m_networkInsightsAccessScopeIdHasBeenSet)
  {
      oStream << location << ".NetworkInsightsAccessScopeId=" << StringUtils::URLEncode(m_networkInsightsAccessScopeId.c_str()) << "&";
  }
  if(m_findingIdHasBeenSet)
  {
      oStream << location << ".FindingId=" << StringUtils::URLEncode(m_findingId.c_str()) << "&";
  }
  if(m_findingComponentsHasBeenSet)
  {
      unsigned findingComponentsIdx = 1;
      for(auto& item : m_findingComponents)
      {
        Aws::StringStream findingComponentsSs;
        findingComponentsSs << location <<  ".FindingComponentSet." << findingComponentsIdx++;
        item.OutputToStream(oStream, findingComponentsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
