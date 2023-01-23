/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NetworkInsightsAnalysis.h>
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

NetworkInsightsAnalysis::NetworkInsightsAnalysis() : 
    m_networkInsightsAnalysisIdHasBeenSet(false),
    m_networkInsightsAnalysisArnHasBeenSet(false),
    m_networkInsightsPathIdHasBeenSet(false),
    m_additionalAccountsHasBeenSet(false),
    m_filterInArnsHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_status(AnalysisStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_warningMessageHasBeenSet(false),
    m_networkPathFound(false),
    m_networkPathFoundHasBeenSet(false),
    m_forwardPathComponentsHasBeenSet(false),
    m_returnPathComponentsHasBeenSet(false),
    m_explanationsHasBeenSet(false),
    m_alternatePathHintsHasBeenSet(false),
    m_suggestedAccountsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

NetworkInsightsAnalysis::NetworkInsightsAnalysis(const XmlNode& xmlNode) : 
    m_networkInsightsAnalysisIdHasBeenSet(false),
    m_networkInsightsAnalysisArnHasBeenSet(false),
    m_networkInsightsPathIdHasBeenSet(false),
    m_additionalAccountsHasBeenSet(false),
    m_filterInArnsHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_status(AnalysisStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_warningMessageHasBeenSet(false),
    m_networkPathFound(false),
    m_networkPathFoundHasBeenSet(false),
    m_forwardPathComponentsHasBeenSet(false),
    m_returnPathComponentsHasBeenSet(false),
    m_explanationsHasBeenSet(false),
    m_alternatePathHintsHasBeenSet(false),
    m_suggestedAccountsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkInsightsAnalysis& NetworkInsightsAnalysis::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode networkInsightsAnalysisIdNode = resultNode.FirstChild("networkInsightsAnalysisId");
    if(!networkInsightsAnalysisIdNode.IsNull())
    {
      m_networkInsightsAnalysisId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInsightsAnalysisIdNode.GetText());
      m_networkInsightsAnalysisIdHasBeenSet = true;
    }
    XmlNode networkInsightsAnalysisArnNode = resultNode.FirstChild("networkInsightsAnalysisArn");
    if(!networkInsightsAnalysisArnNode.IsNull())
    {
      m_networkInsightsAnalysisArn = Aws::Utils::Xml::DecodeEscapedXmlText(networkInsightsAnalysisArnNode.GetText());
      m_networkInsightsAnalysisArnHasBeenSet = true;
    }
    XmlNode networkInsightsPathIdNode = resultNode.FirstChild("networkInsightsPathId");
    if(!networkInsightsPathIdNode.IsNull())
    {
      m_networkInsightsPathId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInsightsPathIdNode.GetText());
      m_networkInsightsPathIdHasBeenSet = true;
    }
    XmlNode additionalAccountsNode = resultNode.FirstChild("additionalAccountSet");
    if(!additionalAccountsNode.IsNull())
    {
      XmlNode additionalAccountsMember = additionalAccountsNode.FirstChild("item");
      while(!additionalAccountsMember.IsNull())
      {
        m_additionalAccounts.push_back(additionalAccountsMember.GetText());
        additionalAccountsMember = additionalAccountsMember.NextNode("item");
      }

      m_additionalAccountsHasBeenSet = true;
    }
    XmlNode filterInArnsNode = resultNode.FirstChild("filterInArnSet");
    if(!filterInArnsNode.IsNull())
    {
      XmlNode filterInArnsMember = filterInArnsNode.FirstChild("item");
      while(!filterInArnsMember.IsNull())
      {
        m_filterInArns.push_back(filterInArnsMember.GetText());
        filterInArnsMember = filterInArnsMember.NextNode("item");
      }

      m_filterInArnsHasBeenSet = true;
    }
    XmlNode startDateNode = resultNode.FirstChild("startDate");
    if(!startDateNode.IsNull())
    {
      m_startDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_startDateHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = AnalysisStatusMapper::GetAnalysisStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = Aws::Utils::Xml::DecodeEscapedXmlText(statusMessageNode.GetText());
      m_statusMessageHasBeenSet = true;
    }
    XmlNode warningMessageNode = resultNode.FirstChild("warningMessage");
    if(!warningMessageNode.IsNull())
    {
      m_warningMessage = Aws::Utils::Xml::DecodeEscapedXmlText(warningMessageNode.GetText());
      m_warningMessageHasBeenSet = true;
    }
    XmlNode networkPathFoundNode = resultNode.FirstChild("networkPathFound");
    if(!networkPathFoundNode.IsNull())
    {
      m_networkPathFound = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(networkPathFoundNode.GetText()).c_str()).c_str());
      m_networkPathFoundHasBeenSet = true;
    }
    XmlNode forwardPathComponentsNode = resultNode.FirstChild("forwardPathComponentSet");
    if(!forwardPathComponentsNode.IsNull())
    {
      XmlNode forwardPathComponentsMember = forwardPathComponentsNode.FirstChild("item");
      while(!forwardPathComponentsMember.IsNull())
      {
        m_forwardPathComponents.push_back(forwardPathComponentsMember);
        forwardPathComponentsMember = forwardPathComponentsMember.NextNode("item");
      }

      m_forwardPathComponentsHasBeenSet = true;
    }
    XmlNode returnPathComponentsNode = resultNode.FirstChild("returnPathComponentSet");
    if(!returnPathComponentsNode.IsNull())
    {
      XmlNode returnPathComponentsMember = returnPathComponentsNode.FirstChild("item");
      while(!returnPathComponentsMember.IsNull())
      {
        m_returnPathComponents.push_back(returnPathComponentsMember);
        returnPathComponentsMember = returnPathComponentsMember.NextNode("item");
      }

      m_returnPathComponentsHasBeenSet = true;
    }
    XmlNode explanationsNode = resultNode.FirstChild("explanationSet");
    if(!explanationsNode.IsNull())
    {
      XmlNode explanationsMember = explanationsNode.FirstChild("item");
      while(!explanationsMember.IsNull())
      {
        m_explanations.push_back(explanationsMember);
        explanationsMember = explanationsMember.NextNode("item");
      }

      m_explanationsHasBeenSet = true;
    }
    XmlNode alternatePathHintsNode = resultNode.FirstChild("alternatePathHintSet");
    if(!alternatePathHintsNode.IsNull())
    {
      XmlNode alternatePathHintsMember = alternatePathHintsNode.FirstChild("item");
      while(!alternatePathHintsMember.IsNull())
      {
        m_alternatePathHints.push_back(alternatePathHintsMember);
        alternatePathHintsMember = alternatePathHintsMember.NextNode("item");
      }

      m_alternatePathHintsHasBeenSet = true;
    }
    XmlNode suggestedAccountsNode = resultNode.FirstChild("suggestedAccountSet");
    if(!suggestedAccountsNode.IsNull())
    {
      XmlNode suggestedAccountsMember = suggestedAccountsNode.FirstChild("item");
      while(!suggestedAccountsMember.IsNull())
      {
        m_suggestedAccounts.push_back(suggestedAccountsMember.GetText());
        suggestedAccountsMember = suggestedAccountsMember.NextNode("item");
      }

      m_suggestedAccountsHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkInsightsAnalysis::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_networkInsightsAnalysisIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInsightsAnalysisId=" << StringUtils::URLEncode(m_networkInsightsAnalysisId.c_str()) << "&";
  }

  if(m_networkInsightsAnalysisArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInsightsAnalysisArn=" << StringUtils::URLEncode(m_networkInsightsAnalysisArn.c_str()) << "&";
  }

  if(m_networkInsightsPathIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInsightsPathId=" << StringUtils::URLEncode(m_networkInsightsPathId.c_str()) << "&";
  }

  if(m_additionalAccountsHasBeenSet)
  {
      unsigned additionalAccountsIdx = 1;
      for(auto& item : m_additionalAccounts)
      {
        oStream << location << index << locationValue << ".AdditionalAccountSet." << additionalAccountsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_filterInArnsHasBeenSet)
  {
      unsigned filterInArnsIdx = 1;
      for(auto& item : m_filterInArns)
      {
        oStream << location << index << locationValue << ".FilterInArnSet." << filterInArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_startDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << AnalysisStatusMapper::GetNameForAnalysisStatus(m_status) << "&";
  }

  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

  if(m_warningMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".WarningMessage=" << StringUtils::URLEncode(m_warningMessage.c_str()) << "&";
  }

  if(m_networkPathFoundHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkPathFound=" << std::boolalpha << m_networkPathFound << "&";
  }

  if(m_forwardPathComponentsHasBeenSet)
  {
      unsigned forwardPathComponentsIdx = 1;
      for(auto& item : m_forwardPathComponents)
      {
        Aws::StringStream forwardPathComponentsSs;
        forwardPathComponentsSs << location << index << locationValue << ".ForwardPathComponentSet." << forwardPathComponentsIdx++;
        item.OutputToStream(oStream, forwardPathComponentsSs.str().c_str());
      }
  }

  if(m_returnPathComponentsHasBeenSet)
  {
      unsigned returnPathComponentsIdx = 1;
      for(auto& item : m_returnPathComponents)
      {
        Aws::StringStream returnPathComponentsSs;
        returnPathComponentsSs << location << index << locationValue << ".ReturnPathComponentSet." << returnPathComponentsIdx++;
        item.OutputToStream(oStream, returnPathComponentsSs.str().c_str());
      }
  }

  if(m_explanationsHasBeenSet)
  {
      unsigned explanationsIdx = 1;
      for(auto& item : m_explanations)
      {
        Aws::StringStream explanationsSs;
        explanationsSs << location << index << locationValue << ".ExplanationSet." << explanationsIdx++;
        item.OutputToStream(oStream, explanationsSs.str().c_str());
      }
  }

  if(m_alternatePathHintsHasBeenSet)
  {
      unsigned alternatePathHintsIdx = 1;
      for(auto& item : m_alternatePathHints)
      {
        Aws::StringStream alternatePathHintsSs;
        alternatePathHintsSs << location << index << locationValue << ".AlternatePathHintSet." << alternatePathHintsIdx++;
        item.OutputToStream(oStream, alternatePathHintsSs.str().c_str());
      }
  }

  if(m_suggestedAccountsHasBeenSet)
  {
      unsigned suggestedAccountsIdx = 1;
      for(auto& item : m_suggestedAccounts)
      {
        oStream << location << index << locationValue << ".SuggestedAccountSet." << suggestedAccountsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void NetworkInsightsAnalysis::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_networkInsightsAnalysisIdHasBeenSet)
  {
      oStream << location << ".NetworkInsightsAnalysisId=" << StringUtils::URLEncode(m_networkInsightsAnalysisId.c_str()) << "&";
  }
  if(m_networkInsightsAnalysisArnHasBeenSet)
  {
      oStream << location << ".NetworkInsightsAnalysisArn=" << StringUtils::URLEncode(m_networkInsightsAnalysisArn.c_str()) << "&";
  }
  if(m_networkInsightsPathIdHasBeenSet)
  {
      oStream << location << ".NetworkInsightsPathId=" << StringUtils::URLEncode(m_networkInsightsPathId.c_str()) << "&";
  }
  if(m_additionalAccountsHasBeenSet)
  {
      unsigned additionalAccountsIdx = 1;
      for(auto& item : m_additionalAccounts)
      {
        oStream << location << ".AdditionalAccountSet." << additionalAccountsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_filterInArnsHasBeenSet)
  {
      unsigned filterInArnsIdx = 1;
      for(auto& item : m_filterInArns)
      {
        oStream << location << ".FilterInArnSet." << filterInArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_startDateHasBeenSet)
  {
      oStream << location << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << AnalysisStatusMapper::GetNameForAnalysisStatus(m_status) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_warningMessageHasBeenSet)
  {
      oStream << location << ".WarningMessage=" << StringUtils::URLEncode(m_warningMessage.c_str()) << "&";
  }
  if(m_networkPathFoundHasBeenSet)
  {
      oStream << location << ".NetworkPathFound=" << std::boolalpha << m_networkPathFound << "&";
  }
  if(m_forwardPathComponentsHasBeenSet)
  {
      unsigned forwardPathComponentsIdx = 1;
      for(auto& item : m_forwardPathComponents)
      {
        Aws::StringStream forwardPathComponentsSs;
        forwardPathComponentsSs << location <<  ".ForwardPathComponentSet." << forwardPathComponentsIdx++;
        item.OutputToStream(oStream, forwardPathComponentsSs.str().c_str());
      }
  }
  if(m_returnPathComponentsHasBeenSet)
  {
      unsigned returnPathComponentsIdx = 1;
      for(auto& item : m_returnPathComponents)
      {
        Aws::StringStream returnPathComponentsSs;
        returnPathComponentsSs << location <<  ".ReturnPathComponentSet." << returnPathComponentsIdx++;
        item.OutputToStream(oStream, returnPathComponentsSs.str().c_str());
      }
  }
  if(m_explanationsHasBeenSet)
  {
      unsigned explanationsIdx = 1;
      for(auto& item : m_explanations)
      {
        Aws::StringStream explanationsSs;
        explanationsSs << location <<  ".ExplanationSet." << explanationsIdx++;
        item.OutputToStream(oStream, explanationsSs.str().c_str());
      }
  }
  if(m_alternatePathHintsHasBeenSet)
  {
      unsigned alternatePathHintsIdx = 1;
      for(auto& item : m_alternatePathHints)
      {
        Aws::StringStream alternatePathHintsSs;
        alternatePathHintsSs << location <<  ".AlternatePathHintSet." << alternatePathHintsIdx++;
        item.OutputToStream(oStream, alternatePathHintsSs.str().c_str());
      }
  }
  if(m_suggestedAccountsHasBeenSet)
  {
      unsigned suggestedAccountsIdx = 1;
      for(auto& item : m_suggestedAccounts)
      {
        oStream << location << ".SuggestedAccountSet." << suggestedAccountsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
