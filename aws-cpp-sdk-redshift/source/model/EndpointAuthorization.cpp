/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/EndpointAuthorization.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

EndpointAuthorization::EndpointAuthorization() : 
    m_grantorHasBeenSet(false),
    m_granteeHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_authorizeTimeHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_status(AuthorizationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_allowedAllVPCs(false),
    m_allowedAllVPCsHasBeenSet(false),
    m_allowedVPCsHasBeenSet(false),
    m_endpointCount(0),
    m_endpointCountHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
}

EndpointAuthorization::EndpointAuthorization(const XmlNode& xmlNode) : 
    m_grantorHasBeenSet(false),
    m_granteeHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_authorizeTimeHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_status(AuthorizationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_allowedAllVPCs(false),
    m_allowedAllVPCsHasBeenSet(false),
    m_allowedVPCsHasBeenSet(false),
    m_endpointCount(0),
    m_endpointCountHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
  *this = xmlNode;
}

EndpointAuthorization& EndpointAuthorization::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode grantorNode = resultNode.FirstChild("Grantor");
    if(!grantorNode.IsNull())
    {
      m_grantor = Aws::Utils::Xml::DecodeEscapedXmlText(grantorNode.GetText());
      m_grantorHasBeenSet = true;
    }
    XmlNode granteeNode = resultNode.FirstChild("Grantee");
    if(!granteeNode.IsNull())
    {
      m_grantee = Aws::Utils::Xml::DecodeEscapedXmlText(granteeNode.GetText());
      m_granteeHasBeenSet = true;
    }
    XmlNode clusterIdentifierNode = resultNode.FirstChild("ClusterIdentifier");
    if(!clusterIdentifierNode.IsNull())
    {
      m_clusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(clusterIdentifierNode.GetText());
      m_clusterIdentifierHasBeenSet = true;
    }
    XmlNode authorizeTimeNode = resultNode.FirstChild("AuthorizeTime");
    if(!authorizeTimeNode.IsNull())
    {
      m_authorizeTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(authorizeTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_authorizeTimeHasBeenSet = true;
    }
    XmlNode clusterStatusNode = resultNode.FirstChild("ClusterStatus");
    if(!clusterStatusNode.IsNull())
    {
      m_clusterStatus = Aws::Utils::Xml::DecodeEscapedXmlText(clusterStatusNode.GetText());
      m_clusterStatusHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = AuthorizationStatusMapper::GetAuthorizationStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode allowedAllVPCsNode = resultNode.FirstChild("AllowedAllVPCs");
    if(!allowedAllVPCsNode.IsNull())
    {
      m_allowedAllVPCs = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allowedAllVPCsNode.GetText()).c_str()).c_str());
      m_allowedAllVPCsHasBeenSet = true;
    }
    XmlNode allowedVPCsNode = resultNode.FirstChild("AllowedVPCs");
    if(!allowedVPCsNode.IsNull())
    {
      XmlNode allowedVPCsMember = allowedVPCsNode.FirstChild("VpcIdentifier");
      while(!allowedVPCsMember.IsNull())
      {
        m_allowedVPCs.push_back(allowedVPCsMember.GetText());
        allowedVPCsMember = allowedVPCsMember.NextNode("VpcIdentifier");
      }

      m_allowedVPCsHasBeenSet = true;
    }
    XmlNode endpointCountNode = resultNode.FirstChild("EndpointCount");
    if(!endpointCountNode.IsNull())
    {
      m_endpointCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endpointCountNode.GetText()).c_str()).c_str());
      m_endpointCountHasBeenSet = true;
    }
  }

  return *this;
}

void EndpointAuthorization::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_grantorHasBeenSet)
  {
      oStream << location << index << locationValue << ".Grantor=" << StringUtils::URLEncode(m_grantor.c_str()) << "&";
  }

  if(m_granteeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Grantee=" << StringUtils::URLEncode(m_grantee.c_str()) << "&";
  }

  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_authorizeTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AuthorizeTime=" << StringUtils::URLEncode(m_authorizeTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_clusterStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterStatus=" << StringUtils::URLEncode(m_clusterStatus.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << AuthorizationStatusMapper::GetNameForAuthorizationStatus(m_status) << "&";
  }

  if(m_allowedAllVPCsHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowedAllVPCs=" << std::boolalpha << m_allowedAllVPCs << "&";
  }

  if(m_allowedVPCsHasBeenSet)
  {
      unsigned allowedVPCsIdx = 1;
      for(auto& item : m_allowedVPCs)
      {
        oStream << location << index << locationValue << ".VpcIdentifier." << allowedVPCsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_endpointCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndpointCount=" << m_endpointCount << "&";
  }

  if(m_responseMetadataHasBeenSet)
  {
      Aws::StringStream responseMetadataLocationAndMemberSs;
      responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
  }

}

void EndpointAuthorization::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_grantorHasBeenSet)
  {
      oStream << location << ".Grantor=" << StringUtils::URLEncode(m_grantor.c_str()) << "&";
  }
  if(m_granteeHasBeenSet)
  {
      oStream << location << ".Grantee=" << StringUtils::URLEncode(m_grantee.c_str()) << "&";
  }
  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }
  if(m_authorizeTimeHasBeenSet)
  {
      oStream << location << ".AuthorizeTime=" << StringUtils::URLEncode(m_authorizeTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_clusterStatusHasBeenSet)
  {
      oStream << location << ".ClusterStatus=" << StringUtils::URLEncode(m_clusterStatus.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << AuthorizationStatusMapper::GetNameForAuthorizationStatus(m_status) << "&";
  }
  if(m_allowedAllVPCsHasBeenSet)
  {
      oStream << location << ".AllowedAllVPCs=" << std::boolalpha << m_allowedAllVPCs << "&";
  }
  if(m_allowedVPCsHasBeenSet)
  {
      unsigned allowedVPCsIdx = 1;
      for(auto& item : m_allowedVPCs)
      {
        oStream << location << ".VpcIdentifier." << allowedVPCsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_endpointCountHasBeenSet)
  {
      oStream << location << ".EndpointCount=" << m_endpointCount << "&";
  }
  if(m_responseMetadataHasBeenSet)
  {
      Aws::String responseMetadataLocationAndMember(location);
      responseMetadataLocationAndMember += ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
