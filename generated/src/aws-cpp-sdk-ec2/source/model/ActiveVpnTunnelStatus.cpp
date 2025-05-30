/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ActiveVpnTunnelStatus.h>
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

ActiveVpnTunnelStatus::ActiveVpnTunnelStatus(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ActiveVpnTunnelStatus& ActiveVpnTunnelStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode phase1EncryptionAlgorithmNode = resultNode.FirstChild("phase1EncryptionAlgorithm");
    if(!phase1EncryptionAlgorithmNode.IsNull())
    {
      m_phase1EncryptionAlgorithm = Aws::Utils::Xml::DecodeEscapedXmlText(phase1EncryptionAlgorithmNode.GetText());
      m_phase1EncryptionAlgorithmHasBeenSet = true;
    }
    XmlNode phase2EncryptionAlgorithmNode = resultNode.FirstChild("phase2EncryptionAlgorithm");
    if(!phase2EncryptionAlgorithmNode.IsNull())
    {
      m_phase2EncryptionAlgorithm = Aws::Utils::Xml::DecodeEscapedXmlText(phase2EncryptionAlgorithmNode.GetText());
      m_phase2EncryptionAlgorithmHasBeenSet = true;
    }
    XmlNode phase1IntegrityAlgorithmNode = resultNode.FirstChild("phase1IntegrityAlgorithm");
    if(!phase1IntegrityAlgorithmNode.IsNull())
    {
      m_phase1IntegrityAlgorithm = Aws::Utils::Xml::DecodeEscapedXmlText(phase1IntegrityAlgorithmNode.GetText());
      m_phase1IntegrityAlgorithmHasBeenSet = true;
    }
    XmlNode phase2IntegrityAlgorithmNode = resultNode.FirstChild("phase2IntegrityAlgorithm");
    if(!phase2IntegrityAlgorithmNode.IsNull())
    {
      m_phase2IntegrityAlgorithm = Aws::Utils::Xml::DecodeEscapedXmlText(phase2IntegrityAlgorithmNode.GetText());
      m_phase2IntegrityAlgorithmHasBeenSet = true;
    }
    XmlNode phase1DHGroupNode = resultNode.FirstChild("phase1DHGroup");
    if(!phase1DHGroupNode.IsNull())
    {
      m_phase1DHGroup = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(phase1DHGroupNode.GetText()).c_str()).c_str());
      m_phase1DHGroupHasBeenSet = true;
    }
    XmlNode phase2DHGroupNode = resultNode.FirstChild("phase2DHGroup");
    if(!phase2DHGroupNode.IsNull())
    {
      m_phase2DHGroup = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(phase2DHGroupNode.GetText()).c_str()).c_str());
      m_phase2DHGroupHasBeenSet = true;
    }
    XmlNode ikeVersionNode = resultNode.FirstChild("ikeVersion");
    if(!ikeVersionNode.IsNull())
    {
      m_ikeVersion = Aws::Utils::Xml::DecodeEscapedXmlText(ikeVersionNode.GetText());
      m_ikeVersionHasBeenSet = true;
    }
    XmlNode provisioningStatusNode = resultNode.FirstChild("provisioningStatus");
    if(!provisioningStatusNode.IsNull())
    {
      m_provisioningStatus = VpnTunnelProvisioningStatusMapper::GetVpnTunnelProvisioningStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(provisioningStatusNode.GetText()).c_str()));
      m_provisioningStatusHasBeenSet = true;
    }
    XmlNode provisioningStatusReasonNode = resultNode.FirstChild("provisioningStatusReason");
    if(!provisioningStatusReasonNode.IsNull())
    {
      m_provisioningStatusReason = Aws::Utils::Xml::DecodeEscapedXmlText(provisioningStatusReasonNode.GetText());
      m_provisioningStatusReasonHasBeenSet = true;
    }
  }

  return *this;
}

void ActiveVpnTunnelStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_phase1EncryptionAlgorithmHasBeenSet)
  {
      oStream << location << index << locationValue << ".Phase1EncryptionAlgorithm=" << StringUtils::URLEncode(m_phase1EncryptionAlgorithm.c_str()) << "&";
  }

  if(m_phase2EncryptionAlgorithmHasBeenSet)
  {
      oStream << location << index << locationValue << ".Phase2EncryptionAlgorithm=" << StringUtils::URLEncode(m_phase2EncryptionAlgorithm.c_str()) << "&";
  }

  if(m_phase1IntegrityAlgorithmHasBeenSet)
  {
      oStream << location << index << locationValue << ".Phase1IntegrityAlgorithm=" << StringUtils::URLEncode(m_phase1IntegrityAlgorithm.c_str()) << "&";
  }

  if(m_phase2IntegrityAlgorithmHasBeenSet)
  {
      oStream << location << index << locationValue << ".Phase2IntegrityAlgorithm=" << StringUtils::URLEncode(m_phase2IntegrityAlgorithm.c_str()) << "&";
  }

  if(m_phase1DHGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".Phase1DHGroup=" << m_phase1DHGroup << "&";
  }

  if(m_phase2DHGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".Phase2DHGroup=" << m_phase2DHGroup << "&";
  }

  if(m_ikeVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".IkeVersion=" << StringUtils::URLEncode(m_ikeVersion.c_str()) << "&";
  }

  if(m_provisioningStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProvisioningStatus=" << StringUtils::URLEncode(VpnTunnelProvisioningStatusMapper::GetNameForVpnTunnelProvisioningStatus(m_provisioningStatus)) << "&";
  }

  if(m_provisioningStatusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProvisioningStatusReason=" << StringUtils::URLEncode(m_provisioningStatusReason.c_str()) << "&";
  }

}

void ActiveVpnTunnelStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_phase1EncryptionAlgorithmHasBeenSet)
  {
      oStream << location << ".Phase1EncryptionAlgorithm=" << StringUtils::URLEncode(m_phase1EncryptionAlgorithm.c_str()) << "&";
  }
  if(m_phase2EncryptionAlgorithmHasBeenSet)
  {
      oStream << location << ".Phase2EncryptionAlgorithm=" << StringUtils::URLEncode(m_phase2EncryptionAlgorithm.c_str()) << "&";
  }
  if(m_phase1IntegrityAlgorithmHasBeenSet)
  {
      oStream << location << ".Phase1IntegrityAlgorithm=" << StringUtils::URLEncode(m_phase1IntegrityAlgorithm.c_str()) << "&";
  }
  if(m_phase2IntegrityAlgorithmHasBeenSet)
  {
      oStream << location << ".Phase2IntegrityAlgorithm=" << StringUtils::URLEncode(m_phase2IntegrityAlgorithm.c_str()) << "&";
  }
  if(m_phase1DHGroupHasBeenSet)
  {
      oStream << location << ".Phase1DHGroup=" << m_phase1DHGroup << "&";
  }
  if(m_phase2DHGroupHasBeenSet)
  {
      oStream << location << ".Phase2DHGroup=" << m_phase2DHGroup << "&";
  }
  if(m_ikeVersionHasBeenSet)
  {
      oStream << location << ".IkeVersion=" << StringUtils::URLEncode(m_ikeVersion.c_str()) << "&";
  }
  if(m_provisioningStatusHasBeenSet)
  {
      oStream << location << ".ProvisioningStatus=" << StringUtils::URLEncode(VpnTunnelProvisioningStatusMapper::GetNameForVpnTunnelProvisioningStatus(m_provisioningStatus)) << "&";
  }
  if(m_provisioningStatusReasonHasBeenSet)
  {
      oStream << location << ".ProvisioningStatusReason=" << StringUtils::URLEncode(m_provisioningStatusReason.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
