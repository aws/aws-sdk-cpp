/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NetworkInsightsAccessScopeAnalysis.h>
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

NetworkInsightsAccessScopeAnalysis::NetworkInsightsAccessScopeAnalysis() : 
    m_networkInsightsAccessScopeAnalysisIdHasBeenSet(false),
    m_networkInsightsAccessScopeAnalysisArnHasBeenSet(false),
    m_networkInsightsAccessScopeIdHasBeenSet(false),
    m_status(AnalysisStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_warningMessageHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_findingsFound(FindingsFound::NOT_SET),
    m_findingsFoundHasBeenSet(false),
    m_analyzedEniCount(0),
    m_analyzedEniCountHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

NetworkInsightsAccessScopeAnalysis::NetworkInsightsAccessScopeAnalysis(const XmlNode& xmlNode) : 
    m_networkInsightsAccessScopeAnalysisIdHasBeenSet(false),
    m_networkInsightsAccessScopeAnalysisArnHasBeenSet(false),
    m_networkInsightsAccessScopeIdHasBeenSet(false),
    m_status(AnalysisStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_warningMessageHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_findingsFound(FindingsFound::NOT_SET),
    m_findingsFoundHasBeenSet(false),
    m_analyzedEniCount(0),
    m_analyzedEniCountHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkInsightsAccessScopeAnalysis& NetworkInsightsAccessScopeAnalysis::operator =(const XmlNode& xmlNode)
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
    XmlNode networkInsightsAccessScopeAnalysisArnNode = resultNode.FirstChild("networkInsightsAccessScopeAnalysisArn");
    if(!networkInsightsAccessScopeAnalysisArnNode.IsNull())
    {
      m_networkInsightsAccessScopeAnalysisArn = Aws::Utils::Xml::DecodeEscapedXmlText(networkInsightsAccessScopeAnalysisArnNode.GetText());
      m_networkInsightsAccessScopeAnalysisArnHasBeenSet = true;
    }
    XmlNode networkInsightsAccessScopeIdNode = resultNode.FirstChild("networkInsightsAccessScopeId");
    if(!networkInsightsAccessScopeIdNode.IsNull())
    {
      m_networkInsightsAccessScopeId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInsightsAccessScopeIdNode.GetText());
      m_networkInsightsAccessScopeIdHasBeenSet = true;
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
    XmlNode startDateNode = resultNode.FirstChild("startDate");
    if(!startDateNode.IsNull())
    {
      m_startDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_startDateHasBeenSet = true;
    }
    XmlNode endDateNode = resultNode.FirstChild("endDate");
    if(!endDateNode.IsNull())
    {
      m_endDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_endDateHasBeenSet = true;
    }
    XmlNode findingsFoundNode = resultNode.FirstChild("findingsFound");
    if(!findingsFoundNode.IsNull())
    {
      m_findingsFound = FindingsFoundMapper::GetFindingsFoundForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(findingsFoundNode.GetText()).c_str()).c_str());
      m_findingsFoundHasBeenSet = true;
    }
    XmlNode analyzedEniCountNode = resultNode.FirstChild("analyzedEniCount");
    if(!analyzedEniCountNode.IsNull())
    {
      m_analyzedEniCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(analyzedEniCountNode.GetText()).c_str()).c_str());
      m_analyzedEniCountHasBeenSet = true;
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

void NetworkInsightsAccessScopeAnalysis::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_networkInsightsAccessScopeAnalysisIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInsightsAccessScopeAnalysisId=" << StringUtils::URLEncode(m_networkInsightsAccessScopeAnalysisId.c_str()) << "&";
  }

  if(m_networkInsightsAccessScopeAnalysisArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInsightsAccessScopeAnalysisArn=" << StringUtils::URLEncode(m_networkInsightsAccessScopeAnalysisArn.c_str()) << "&";
  }

  if(m_networkInsightsAccessScopeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInsightsAccessScopeId=" << StringUtils::URLEncode(m_networkInsightsAccessScopeId.c_str()) << "&";
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

  if(m_startDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_findingsFoundHasBeenSet)
  {
      oStream << location << index << locationValue << ".FindingsFound=" << FindingsFoundMapper::GetNameForFindingsFound(m_findingsFound) << "&";
  }

  if(m_analyzedEniCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".AnalyzedEniCount=" << m_analyzedEniCount << "&";
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

void NetworkInsightsAccessScopeAnalysis::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_networkInsightsAccessScopeAnalysisIdHasBeenSet)
  {
      oStream << location << ".NetworkInsightsAccessScopeAnalysisId=" << StringUtils::URLEncode(m_networkInsightsAccessScopeAnalysisId.c_str()) << "&";
  }
  if(m_networkInsightsAccessScopeAnalysisArnHasBeenSet)
  {
      oStream << location << ".NetworkInsightsAccessScopeAnalysisArn=" << StringUtils::URLEncode(m_networkInsightsAccessScopeAnalysisArn.c_str()) << "&";
  }
  if(m_networkInsightsAccessScopeIdHasBeenSet)
  {
      oStream << location << ".NetworkInsightsAccessScopeId=" << StringUtils::URLEncode(m_networkInsightsAccessScopeId.c_str()) << "&";
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
  if(m_startDateHasBeenSet)
  {
      oStream << location << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endDateHasBeenSet)
  {
      oStream << location << ".EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_findingsFoundHasBeenSet)
  {
      oStream << location << ".FindingsFound=" << FindingsFoundMapper::GetNameForFindingsFound(m_findingsFound) << "&";
  }
  if(m_analyzedEniCountHasBeenSet)
  {
      oStream << location << ".AnalyzedEniCount=" << m_analyzedEniCount << "&";
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
