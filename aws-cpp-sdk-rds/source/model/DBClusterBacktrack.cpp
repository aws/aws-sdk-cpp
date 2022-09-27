/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBClusterBacktrack.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

DBClusterBacktrack::DBClusterBacktrack() : 
    m_dBClusterIdentifierHasBeenSet(false),
    m_backtrackIdentifierHasBeenSet(false),
    m_backtrackToHasBeenSet(false),
    m_backtrackedFromHasBeenSet(false),
    m_backtrackRequestCreationTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
}

DBClusterBacktrack::DBClusterBacktrack(const XmlNode& xmlNode) : 
    m_dBClusterIdentifierHasBeenSet(false),
    m_backtrackIdentifierHasBeenSet(false),
    m_backtrackToHasBeenSet(false),
    m_backtrackedFromHasBeenSet(false),
    m_backtrackRequestCreationTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
  *this = xmlNode;
}

DBClusterBacktrack& DBClusterBacktrack::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterIdentifierNode.GetText());
      m_dBClusterIdentifierHasBeenSet = true;
    }
    XmlNode backtrackIdentifierNode = resultNode.FirstChild("BacktrackIdentifier");
    if(!backtrackIdentifierNode.IsNull())
    {
      m_backtrackIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(backtrackIdentifierNode.GetText());
      m_backtrackIdentifierHasBeenSet = true;
    }
    XmlNode backtrackToNode = resultNode.FirstChild("BacktrackTo");
    if(!backtrackToNode.IsNull())
    {
      m_backtrackTo = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(backtrackToNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_backtrackToHasBeenSet = true;
    }
    XmlNode backtrackedFromNode = resultNode.FirstChild("BacktrackedFrom");
    if(!backtrackedFromNode.IsNull())
    {
      m_backtrackedFrom = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(backtrackedFromNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_backtrackedFromHasBeenSet = true;
    }
    XmlNode backtrackRequestCreationTimeNode = resultNode.FirstChild("BacktrackRequestCreationTime");
    if(!backtrackRequestCreationTimeNode.IsNull())
    {
      m_backtrackRequestCreationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(backtrackRequestCreationTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_backtrackRequestCreationTimeHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void DBClusterBacktrack::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_backtrackIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".BacktrackIdentifier=" << StringUtils::URLEncode(m_backtrackIdentifier.c_str()) << "&";
  }

  if(m_backtrackToHasBeenSet)
  {
      oStream << location << index << locationValue << ".BacktrackTo=" << StringUtils::URLEncode(m_backtrackTo.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_backtrackedFromHasBeenSet)
  {
      oStream << location << index << locationValue << ".BacktrackedFrom=" << StringUtils::URLEncode(m_backtrackedFrom.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_backtrackRequestCreationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".BacktrackRequestCreationTime=" << StringUtils::URLEncode(m_backtrackRequestCreationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_responseMetadataHasBeenSet)
  {
      Aws::StringStream responseMetadataLocationAndMemberSs;
      responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
  }

}

void DBClusterBacktrack::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }
  if(m_backtrackIdentifierHasBeenSet)
  {
      oStream << location << ".BacktrackIdentifier=" << StringUtils::URLEncode(m_backtrackIdentifier.c_str()) << "&";
  }
  if(m_backtrackToHasBeenSet)
  {
      oStream << location << ".BacktrackTo=" << StringUtils::URLEncode(m_backtrackTo.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_backtrackedFromHasBeenSet)
  {
      oStream << location << ".BacktrackedFrom=" << StringUtils::URLEncode(m_backtrackedFrom.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_backtrackRequestCreationTimeHasBeenSet)
  {
      oStream << location << ".BacktrackRequestCreationTime=" << StringUtils::URLEncode(m_backtrackRequestCreationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_responseMetadataHasBeenSet)
  {
      Aws::String responseMetadataLocationAndMember(location);
      responseMetadataLocationAndMember += ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
