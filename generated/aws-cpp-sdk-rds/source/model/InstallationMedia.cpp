/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/InstallationMedia.h>
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

InstallationMedia::InstallationMedia() : 
    m_installationMediaIdHasBeenSet(false),
    m_customAvailabilityZoneIdHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_engineInstallationMediaPathHasBeenSet(false),
    m_oSInstallationMediaPathHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failureCauseHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
}

InstallationMedia::InstallationMedia(const XmlNode& xmlNode) : 
    m_installationMediaIdHasBeenSet(false),
    m_customAvailabilityZoneIdHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_engineInstallationMediaPathHasBeenSet(false),
    m_oSInstallationMediaPathHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failureCauseHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
  *this = xmlNode;
}

InstallationMedia& InstallationMedia::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode installationMediaIdNode = resultNode.FirstChild("InstallationMediaId");
    if(!installationMediaIdNode.IsNull())
    {
      m_installationMediaId = Aws::Utils::Xml::DecodeEscapedXmlText(installationMediaIdNode.GetText());
      m_installationMediaIdHasBeenSet = true;
    }
    XmlNode customAvailabilityZoneIdNode = resultNode.FirstChild("CustomAvailabilityZoneId");
    if(!customAvailabilityZoneIdNode.IsNull())
    {
      m_customAvailabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(customAvailabilityZoneIdNode.GetText());
      m_customAvailabilityZoneIdHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode engineInstallationMediaPathNode = resultNode.FirstChild("EngineInstallationMediaPath");
    if(!engineInstallationMediaPathNode.IsNull())
    {
      m_engineInstallationMediaPath = Aws::Utils::Xml::DecodeEscapedXmlText(engineInstallationMediaPathNode.GetText());
      m_engineInstallationMediaPathHasBeenSet = true;
    }
    XmlNode oSInstallationMediaPathNode = resultNode.FirstChild("OSInstallationMediaPath");
    if(!oSInstallationMediaPathNode.IsNull())
    {
      m_oSInstallationMediaPath = Aws::Utils::Xml::DecodeEscapedXmlText(oSInstallationMediaPathNode.GetText());
      m_oSInstallationMediaPathHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode failureCauseNode = resultNode.FirstChild("FailureCause");
    if(!failureCauseNode.IsNull())
    {
      m_failureCause = failureCauseNode;
      m_failureCauseHasBeenSet = true;
    }
  }

  return *this;
}

void InstallationMedia::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_installationMediaIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstallationMediaId=" << StringUtils::URLEncode(m_installationMediaId.c_str()) << "&";
  }

  if(m_customAvailabilityZoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomAvailabilityZoneId=" << StringUtils::URLEncode(m_customAvailabilityZoneId.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_engineInstallationMediaPathHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineInstallationMediaPath=" << StringUtils::URLEncode(m_engineInstallationMediaPath.c_str()) << "&";
  }

  if(m_oSInstallationMediaPathHasBeenSet)
  {
      oStream << location << index << locationValue << ".OSInstallationMediaPath=" << StringUtils::URLEncode(m_oSInstallationMediaPath.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_failureCauseHasBeenSet)
  {
      Aws::StringStream failureCauseLocationAndMemberSs;
      failureCauseLocationAndMemberSs << location << index << locationValue << ".FailureCause";
      m_failureCause.OutputToStream(oStream, failureCauseLocationAndMemberSs.str().c_str());
  }

  if(m_responseMetadataHasBeenSet)
  {
      Aws::StringStream responseMetadataLocationAndMemberSs;
      responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
  }

}

void InstallationMedia::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_installationMediaIdHasBeenSet)
  {
      oStream << location << ".InstallationMediaId=" << StringUtils::URLEncode(m_installationMediaId.c_str()) << "&";
  }
  if(m_customAvailabilityZoneIdHasBeenSet)
  {
      oStream << location << ".CustomAvailabilityZoneId=" << StringUtils::URLEncode(m_customAvailabilityZoneId.c_str()) << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_engineInstallationMediaPathHasBeenSet)
  {
      oStream << location << ".EngineInstallationMediaPath=" << StringUtils::URLEncode(m_engineInstallationMediaPath.c_str()) << "&";
  }
  if(m_oSInstallationMediaPathHasBeenSet)
  {
      oStream << location << ".OSInstallationMediaPath=" << StringUtils::URLEncode(m_oSInstallationMediaPath.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_failureCauseHasBeenSet)
  {
      Aws::String failureCauseLocationAndMember(location);
      failureCauseLocationAndMember += ".FailureCause";
      m_failureCause.OutputToStream(oStream, failureCauseLocationAndMember.c_str());
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
