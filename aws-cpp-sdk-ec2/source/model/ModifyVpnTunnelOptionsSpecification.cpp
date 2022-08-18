/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVpnTunnelOptionsSpecification.h>
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

ModifyVpnTunnelOptionsSpecification::ModifyVpnTunnelOptionsSpecification() : 
    m_tunnelInsideCidrHasBeenSet(false),
    m_tunnelInsideIpv6CidrHasBeenSet(false),
    m_preSharedKeyHasBeenSet(false),
    m_phase1LifetimeSeconds(0),
    m_phase1LifetimeSecondsHasBeenSet(false),
    m_phase2LifetimeSeconds(0),
    m_phase2LifetimeSecondsHasBeenSet(false),
    m_rekeyMarginTimeSeconds(0),
    m_rekeyMarginTimeSecondsHasBeenSet(false),
    m_rekeyFuzzPercentage(0),
    m_rekeyFuzzPercentageHasBeenSet(false),
    m_replayWindowSize(0),
    m_replayWindowSizeHasBeenSet(false),
    m_dPDTimeoutSeconds(0),
    m_dPDTimeoutSecondsHasBeenSet(false),
    m_dPDTimeoutActionHasBeenSet(false),
    m_phase1EncryptionAlgorithmsHasBeenSet(false),
    m_phase2EncryptionAlgorithmsHasBeenSet(false),
    m_phase1IntegrityAlgorithmsHasBeenSet(false),
    m_phase2IntegrityAlgorithmsHasBeenSet(false),
    m_phase1DHGroupNumbersHasBeenSet(false),
    m_phase2DHGroupNumbersHasBeenSet(false),
    m_iKEVersionsHasBeenSet(false),
    m_startupActionHasBeenSet(false),
    m_logOptionsHasBeenSet(false)
{
}

ModifyVpnTunnelOptionsSpecification::ModifyVpnTunnelOptionsSpecification(const XmlNode& xmlNode) : 
    m_tunnelInsideCidrHasBeenSet(false),
    m_tunnelInsideIpv6CidrHasBeenSet(false),
    m_preSharedKeyHasBeenSet(false),
    m_phase1LifetimeSeconds(0),
    m_phase1LifetimeSecondsHasBeenSet(false),
    m_phase2LifetimeSeconds(0),
    m_phase2LifetimeSecondsHasBeenSet(false),
    m_rekeyMarginTimeSeconds(0),
    m_rekeyMarginTimeSecondsHasBeenSet(false),
    m_rekeyFuzzPercentage(0),
    m_rekeyFuzzPercentageHasBeenSet(false),
    m_replayWindowSize(0),
    m_replayWindowSizeHasBeenSet(false),
    m_dPDTimeoutSeconds(0),
    m_dPDTimeoutSecondsHasBeenSet(false),
    m_dPDTimeoutActionHasBeenSet(false),
    m_phase1EncryptionAlgorithmsHasBeenSet(false),
    m_phase2EncryptionAlgorithmsHasBeenSet(false),
    m_phase1IntegrityAlgorithmsHasBeenSet(false),
    m_phase2IntegrityAlgorithmsHasBeenSet(false),
    m_phase1DHGroupNumbersHasBeenSet(false),
    m_phase2DHGroupNumbersHasBeenSet(false),
    m_iKEVersionsHasBeenSet(false),
    m_startupActionHasBeenSet(false),
    m_logOptionsHasBeenSet(false)
{
  *this = xmlNode;
}

ModifyVpnTunnelOptionsSpecification& ModifyVpnTunnelOptionsSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode tunnelInsideCidrNode = resultNode.FirstChild("TunnelInsideCidr");
    if(!tunnelInsideCidrNode.IsNull())
    {
      m_tunnelInsideCidr = Aws::Utils::Xml::DecodeEscapedXmlText(tunnelInsideCidrNode.GetText());
      m_tunnelInsideCidrHasBeenSet = true;
    }
    XmlNode tunnelInsideIpv6CidrNode = resultNode.FirstChild("TunnelInsideIpv6Cidr");
    if(!tunnelInsideIpv6CidrNode.IsNull())
    {
      m_tunnelInsideIpv6Cidr = Aws::Utils::Xml::DecodeEscapedXmlText(tunnelInsideIpv6CidrNode.GetText());
      m_tunnelInsideIpv6CidrHasBeenSet = true;
    }
    XmlNode preSharedKeyNode = resultNode.FirstChild("PreSharedKey");
    if(!preSharedKeyNode.IsNull())
    {
      m_preSharedKey = Aws::Utils::Xml::DecodeEscapedXmlText(preSharedKeyNode.GetText());
      m_preSharedKeyHasBeenSet = true;
    }
    XmlNode phase1LifetimeSecondsNode = resultNode.FirstChild("Phase1LifetimeSeconds");
    if(!phase1LifetimeSecondsNode.IsNull())
    {
      m_phase1LifetimeSeconds = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(phase1LifetimeSecondsNode.GetText()).c_str()).c_str());
      m_phase1LifetimeSecondsHasBeenSet = true;
    }
    XmlNode phase2LifetimeSecondsNode = resultNode.FirstChild("Phase2LifetimeSeconds");
    if(!phase2LifetimeSecondsNode.IsNull())
    {
      m_phase2LifetimeSeconds = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(phase2LifetimeSecondsNode.GetText()).c_str()).c_str());
      m_phase2LifetimeSecondsHasBeenSet = true;
    }
    XmlNode rekeyMarginTimeSecondsNode = resultNode.FirstChild("RekeyMarginTimeSeconds");
    if(!rekeyMarginTimeSecondsNode.IsNull())
    {
      m_rekeyMarginTimeSeconds = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(rekeyMarginTimeSecondsNode.GetText()).c_str()).c_str());
      m_rekeyMarginTimeSecondsHasBeenSet = true;
    }
    XmlNode rekeyFuzzPercentageNode = resultNode.FirstChild("RekeyFuzzPercentage");
    if(!rekeyFuzzPercentageNode.IsNull())
    {
      m_rekeyFuzzPercentage = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(rekeyFuzzPercentageNode.GetText()).c_str()).c_str());
      m_rekeyFuzzPercentageHasBeenSet = true;
    }
    XmlNode replayWindowSizeNode = resultNode.FirstChild("ReplayWindowSize");
    if(!replayWindowSizeNode.IsNull())
    {
      m_replayWindowSize = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(replayWindowSizeNode.GetText()).c_str()).c_str());
      m_replayWindowSizeHasBeenSet = true;
    }
    XmlNode dPDTimeoutSecondsNode = resultNode.FirstChild("DPDTimeoutSeconds");
    if(!dPDTimeoutSecondsNode.IsNull())
    {
      m_dPDTimeoutSeconds = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dPDTimeoutSecondsNode.GetText()).c_str()).c_str());
      m_dPDTimeoutSecondsHasBeenSet = true;
    }
    XmlNode dPDTimeoutActionNode = resultNode.FirstChild("DPDTimeoutAction");
    if(!dPDTimeoutActionNode.IsNull())
    {
      m_dPDTimeoutAction = Aws::Utils::Xml::DecodeEscapedXmlText(dPDTimeoutActionNode.GetText());
      m_dPDTimeoutActionHasBeenSet = true;
    }
    XmlNode phase1EncryptionAlgorithmsNode = resultNode.FirstChild("Phase1EncryptionAlgorithm");
    if(!phase1EncryptionAlgorithmsNode.IsNull())
    {
      XmlNode phase1EncryptionAlgorithmsMember = phase1EncryptionAlgorithmsNode.FirstChild("item");
      while(!phase1EncryptionAlgorithmsMember.IsNull())
      {
        m_phase1EncryptionAlgorithms.push_back(phase1EncryptionAlgorithmsMember);
        phase1EncryptionAlgorithmsMember = phase1EncryptionAlgorithmsMember.NextNode("item");
      }

      m_phase1EncryptionAlgorithmsHasBeenSet = true;
    }
    XmlNode phase2EncryptionAlgorithmsNode = resultNode.FirstChild("Phase2EncryptionAlgorithm");
    if(!phase2EncryptionAlgorithmsNode.IsNull())
    {
      XmlNode phase2EncryptionAlgorithmsMember = phase2EncryptionAlgorithmsNode.FirstChild("item");
      while(!phase2EncryptionAlgorithmsMember.IsNull())
      {
        m_phase2EncryptionAlgorithms.push_back(phase2EncryptionAlgorithmsMember);
        phase2EncryptionAlgorithmsMember = phase2EncryptionAlgorithmsMember.NextNode("item");
      }

      m_phase2EncryptionAlgorithmsHasBeenSet = true;
    }
    XmlNode phase1IntegrityAlgorithmsNode = resultNode.FirstChild("Phase1IntegrityAlgorithm");
    if(!phase1IntegrityAlgorithmsNode.IsNull())
    {
      XmlNode phase1IntegrityAlgorithmsMember = phase1IntegrityAlgorithmsNode.FirstChild("item");
      while(!phase1IntegrityAlgorithmsMember.IsNull())
      {
        m_phase1IntegrityAlgorithms.push_back(phase1IntegrityAlgorithmsMember);
        phase1IntegrityAlgorithmsMember = phase1IntegrityAlgorithmsMember.NextNode("item");
      }

      m_phase1IntegrityAlgorithmsHasBeenSet = true;
    }
    XmlNode phase2IntegrityAlgorithmsNode = resultNode.FirstChild("Phase2IntegrityAlgorithm");
    if(!phase2IntegrityAlgorithmsNode.IsNull())
    {
      XmlNode phase2IntegrityAlgorithmsMember = phase2IntegrityAlgorithmsNode.FirstChild("item");
      while(!phase2IntegrityAlgorithmsMember.IsNull())
      {
        m_phase2IntegrityAlgorithms.push_back(phase2IntegrityAlgorithmsMember);
        phase2IntegrityAlgorithmsMember = phase2IntegrityAlgorithmsMember.NextNode("item");
      }

      m_phase2IntegrityAlgorithmsHasBeenSet = true;
    }
    XmlNode phase1DHGroupNumbersNode = resultNode.FirstChild("Phase1DHGroupNumber");
    if(!phase1DHGroupNumbersNode.IsNull())
    {
      XmlNode phase1DHGroupNumbersMember = phase1DHGroupNumbersNode.FirstChild("item");
      while(!phase1DHGroupNumbersMember.IsNull())
      {
        m_phase1DHGroupNumbers.push_back(phase1DHGroupNumbersMember);
        phase1DHGroupNumbersMember = phase1DHGroupNumbersMember.NextNode("item");
      }

      m_phase1DHGroupNumbersHasBeenSet = true;
    }
    XmlNode phase2DHGroupNumbersNode = resultNode.FirstChild("Phase2DHGroupNumber");
    if(!phase2DHGroupNumbersNode.IsNull())
    {
      XmlNode phase2DHGroupNumbersMember = phase2DHGroupNumbersNode.FirstChild("item");
      while(!phase2DHGroupNumbersMember.IsNull())
      {
        m_phase2DHGroupNumbers.push_back(phase2DHGroupNumbersMember);
        phase2DHGroupNumbersMember = phase2DHGroupNumbersMember.NextNode("item");
      }

      m_phase2DHGroupNumbersHasBeenSet = true;
    }
    XmlNode iKEVersionsNode = resultNode.FirstChild("IKEVersion");
    if(!iKEVersionsNode.IsNull())
    {
      XmlNode iKEVersionsMember = iKEVersionsNode.FirstChild("item");
      while(!iKEVersionsMember.IsNull())
      {
        m_iKEVersions.push_back(iKEVersionsMember);
        iKEVersionsMember = iKEVersionsMember.NextNode("item");
      }

      m_iKEVersionsHasBeenSet = true;
    }
    XmlNode startupActionNode = resultNode.FirstChild("StartupAction");
    if(!startupActionNode.IsNull())
    {
      m_startupAction = Aws::Utils::Xml::DecodeEscapedXmlText(startupActionNode.GetText());
      m_startupActionHasBeenSet = true;
    }
    XmlNode logOptionsNode = resultNode.FirstChild("LogOptions");
    if(!logOptionsNode.IsNull())
    {
      m_logOptions = logOptionsNode;
      m_logOptionsHasBeenSet = true;
    }
  }

  return *this;
}

void ModifyVpnTunnelOptionsSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_tunnelInsideCidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".TunnelInsideCidr=" << StringUtils::URLEncode(m_tunnelInsideCidr.c_str()) << "&";
  }

  if(m_tunnelInsideIpv6CidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".TunnelInsideIpv6Cidr=" << StringUtils::URLEncode(m_tunnelInsideIpv6Cidr.c_str()) << "&";
  }

  if(m_preSharedKeyHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreSharedKey=" << StringUtils::URLEncode(m_preSharedKey.c_str()) << "&";
  }

  if(m_phase1LifetimeSecondsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Phase1LifetimeSeconds=" << m_phase1LifetimeSeconds << "&";
  }

  if(m_phase2LifetimeSecondsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Phase2LifetimeSeconds=" << m_phase2LifetimeSeconds << "&";
  }

  if(m_rekeyMarginTimeSecondsHasBeenSet)
  {
      oStream << location << index << locationValue << ".RekeyMarginTimeSeconds=" << m_rekeyMarginTimeSeconds << "&";
  }

  if(m_rekeyFuzzPercentageHasBeenSet)
  {
      oStream << location << index << locationValue << ".RekeyFuzzPercentage=" << m_rekeyFuzzPercentage << "&";
  }

  if(m_replayWindowSizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplayWindowSize=" << m_replayWindowSize << "&";
  }

  if(m_dPDTimeoutSecondsHasBeenSet)
  {
      oStream << location << index << locationValue << ".DPDTimeoutSeconds=" << m_dPDTimeoutSeconds << "&";
  }

  if(m_dPDTimeoutActionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DPDTimeoutAction=" << StringUtils::URLEncode(m_dPDTimeoutAction.c_str()) << "&";
  }

  if(m_phase1EncryptionAlgorithmsHasBeenSet)
  {
      unsigned phase1EncryptionAlgorithmsIdx = 1;
      for(auto& item : m_phase1EncryptionAlgorithms)
      {
        Aws::StringStream phase1EncryptionAlgorithmsSs;
        phase1EncryptionAlgorithmsSs << location << index << locationValue << ".Phase1EncryptionAlgorithm." << phase1EncryptionAlgorithmsIdx++;
        item.OutputToStream(oStream, phase1EncryptionAlgorithmsSs.str().c_str());
      }
  }

  if(m_phase2EncryptionAlgorithmsHasBeenSet)
  {
      unsigned phase2EncryptionAlgorithmsIdx = 1;
      for(auto& item : m_phase2EncryptionAlgorithms)
      {
        Aws::StringStream phase2EncryptionAlgorithmsSs;
        phase2EncryptionAlgorithmsSs << location << index << locationValue << ".Phase2EncryptionAlgorithm." << phase2EncryptionAlgorithmsIdx++;
        item.OutputToStream(oStream, phase2EncryptionAlgorithmsSs.str().c_str());
      }
  }

  if(m_phase1IntegrityAlgorithmsHasBeenSet)
  {
      unsigned phase1IntegrityAlgorithmsIdx = 1;
      for(auto& item : m_phase1IntegrityAlgorithms)
      {
        Aws::StringStream phase1IntegrityAlgorithmsSs;
        phase1IntegrityAlgorithmsSs << location << index << locationValue << ".Phase1IntegrityAlgorithm." << phase1IntegrityAlgorithmsIdx++;
        item.OutputToStream(oStream, phase1IntegrityAlgorithmsSs.str().c_str());
      }
  }

  if(m_phase2IntegrityAlgorithmsHasBeenSet)
  {
      unsigned phase2IntegrityAlgorithmsIdx = 1;
      for(auto& item : m_phase2IntegrityAlgorithms)
      {
        Aws::StringStream phase2IntegrityAlgorithmsSs;
        phase2IntegrityAlgorithmsSs << location << index << locationValue << ".Phase2IntegrityAlgorithm." << phase2IntegrityAlgorithmsIdx++;
        item.OutputToStream(oStream, phase2IntegrityAlgorithmsSs.str().c_str());
      }
  }

  if(m_phase1DHGroupNumbersHasBeenSet)
  {
      unsigned phase1DHGroupNumbersIdx = 1;
      for(auto& item : m_phase1DHGroupNumbers)
      {
        Aws::StringStream phase1DHGroupNumbersSs;
        phase1DHGroupNumbersSs << location << index << locationValue << ".Phase1DHGroupNumber." << phase1DHGroupNumbersIdx++;
        item.OutputToStream(oStream, phase1DHGroupNumbersSs.str().c_str());
      }
  }

  if(m_phase2DHGroupNumbersHasBeenSet)
  {
      unsigned phase2DHGroupNumbersIdx = 1;
      for(auto& item : m_phase2DHGroupNumbers)
      {
        Aws::StringStream phase2DHGroupNumbersSs;
        phase2DHGroupNumbersSs << location << index << locationValue << ".Phase2DHGroupNumber." << phase2DHGroupNumbersIdx++;
        item.OutputToStream(oStream, phase2DHGroupNumbersSs.str().c_str());
      }
  }

  if(m_iKEVersionsHasBeenSet)
  {
      unsigned iKEVersionsIdx = 1;
      for(auto& item : m_iKEVersions)
      {
        Aws::StringStream iKEVersionsSs;
        iKEVersionsSs << location << index << locationValue << ".IKEVersion." << iKEVersionsIdx++;
        item.OutputToStream(oStream, iKEVersionsSs.str().c_str());
      }
  }

  if(m_startupActionHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartupAction=" << StringUtils::URLEncode(m_startupAction.c_str()) << "&";
  }

  if(m_logOptionsHasBeenSet)
  {
      Aws::StringStream logOptionsLocationAndMemberSs;
      logOptionsLocationAndMemberSs << location << index << locationValue << ".LogOptions";
      m_logOptions.OutputToStream(oStream, logOptionsLocationAndMemberSs.str().c_str());
  }

}

void ModifyVpnTunnelOptionsSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_tunnelInsideCidrHasBeenSet)
  {
      oStream << location << ".TunnelInsideCidr=" << StringUtils::URLEncode(m_tunnelInsideCidr.c_str()) << "&";
  }
  if(m_tunnelInsideIpv6CidrHasBeenSet)
  {
      oStream << location << ".TunnelInsideIpv6Cidr=" << StringUtils::URLEncode(m_tunnelInsideIpv6Cidr.c_str()) << "&";
  }
  if(m_preSharedKeyHasBeenSet)
  {
      oStream << location << ".PreSharedKey=" << StringUtils::URLEncode(m_preSharedKey.c_str()) << "&";
  }
  if(m_phase1LifetimeSecondsHasBeenSet)
  {
      oStream << location << ".Phase1LifetimeSeconds=" << m_phase1LifetimeSeconds << "&";
  }
  if(m_phase2LifetimeSecondsHasBeenSet)
  {
      oStream << location << ".Phase2LifetimeSeconds=" << m_phase2LifetimeSeconds << "&";
  }
  if(m_rekeyMarginTimeSecondsHasBeenSet)
  {
      oStream << location << ".RekeyMarginTimeSeconds=" << m_rekeyMarginTimeSeconds << "&";
  }
  if(m_rekeyFuzzPercentageHasBeenSet)
  {
      oStream << location << ".RekeyFuzzPercentage=" << m_rekeyFuzzPercentage << "&";
  }
  if(m_replayWindowSizeHasBeenSet)
  {
      oStream << location << ".ReplayWindowSize=" << m_replayWindowSize << "&";
  }
  if(m_dPDTimeoutSecondsHasBeenSet)
  {
      oStream << location << ".DPDTimeoutSeconds=" << m_dPDTimeoutSeconds << "&";
  }
  if(m_dPDTimeoutActionHasBeenSet)
  {
      oStream << location << ".DPDTimeoutAction=" << StringUtils::URLEncode(m_dPDTimeoutAction.c_str()) << "&";
  }
  if(m_phase1EncryptionAlgorithmsHasBeenSet)
  {
      unsigned phase1EncryptionAlgorithmsIdx = 1;
      for(auto& item : m_phase1EncryptionAlgorithms)
      {
        Aws::StringStream phase1EncryptionAlgorithmsSs;
        phase1EncryptionAlgorithmsSs << location <<  ".Phase1EncryptionAlgorithm." << phase1EncryptionAlgorithmsIdx++;
        item.OutputToStream(oStream, phase1EncryptionAlgorithmsSs.str().c_str());
      }
  }
  if(m_phase2EncryptionAlgorithmsHasBeenSet)
  {
      unsigned phase2EncryptionAlgorithmsIdx = 1;
      for(auto& item : m_phase2EncryptionAlgorithms)
      {
        Aws::StringStream phase2EncryptionAlgorithmsSs;
        phase2EncryptionAlgorithmsSs << location <<  ".Phase2EncryptionAlgorithm." << phase2EncryptionAlgorithmsIdx++;
        item.OutputToStream(oStream, phase2EncryptionAlgorithmsSs.str().c_str());
      }
  }
  if(m_phase1IntegrityAlgorithmsHasBeenSet)
  {
      unsigned phase1IntegrityAlgorithmsIdx = 1;
      for(auto& item : m_phase1IntegrityAlgorithms)
      {
        Aws::StringStream phase1IntegrityAlgorithmsSs;
        phase1IntegrityAlgorithmsSs << location <<  ".Phase1IntegrityAlgorithm." << phase1IntegrityAlgorithmsIdx++;
        item.OutputToStream(oStream, phase1IntegrityAlgorithmsSs.str().c_str());
      }
  }
  if(m_phase2IntegrityAlgorithmsHasBeenSet)
  {
      unsigned phase2IntegrityAlgorithmsIdx = 1;
      for(auto& item : m_phase2IntegrityAlgorithms)
      {
        Aws::StringStream phase2IntegrityAlgorithmsSs;
        phase2IntegrityAlgorithmsSs << location <<  ".Phase2IntegrityAlgorithm." << phase2IntegrityAlgorithmsIdx++;
        item.OutputToStream(oStream, phase2IntegrityAlgorithmsSs.str().c_str());
      }
  }
  if(m_phase1DHGroupNumbersHasBeenSet)
  {
      unsigned phase1DHGroupNumbersIdx = 1;
      for(auto& item : m_phase1DHGroupNumbers)
      {
        Aws::StringStream phase1DHGroupNumbersSs;
        phase1DHGroupNumbersSs << location <<  ".Phase1DHGroupNumber." << phase1DHGroupNumbersIdx++;
        item.OutputToStream(oStream, phase1DHGroupNumbersSs.str().c_str());
      }
  }
  if(m_phase2DHGroupNumbersHasBeenSet)
  {
      unsigned phase2DHGroupNumbersIdx = 1;
      for(auto& item : m_phase2DHGroupNumbers)
      {
        Aws::StringStream phase2DHGroupNumbersSs;
        phase2DHGroupNumbersSs << location <<  ".Phase2DHGroupNumber." << phase2DHGroupNumbersIdx++;
        item.OutputToStream(oStream, phase2DHGroupNumbersSs.str().c_str());
      }
  }
  if(m_iKEVersionsHasBeenSet)
  {
      unsigned iKEVersionsIdx = 1;
      for(auto& item : m_iKEVersions)
      {
        Aws::StringStream iKEVersionsSs;
        iKEVersionsSs << location <<  ".IKEVersion." << iKEVersionsIdx++;
        item.OutputToStream(oStream, iKEVersionsSs.str().c_str());
      }
  }
  if(m_startupActionHasBeenSet)
  {
      oStream << location << ".StartupAction=" << StringUtils::URLEncode(m_startupAction.c_str()) << "&";
  }
  if(m_logOptionsHasBeenSet)
  {
      Aws::String logOptionsLocationAndMember(location);
      logOptionsLocationAndMember += ".LogOptions";
      m_logOptions.OutputToStream(oStream, logOptionsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
