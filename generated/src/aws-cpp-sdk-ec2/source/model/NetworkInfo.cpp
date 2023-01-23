/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NetworkInfo.h>
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

NetworkInfo::NetworkInfo() : 
    m_networkPerformanceHasBeenSet(false),
    m_maximumNetworkInterfaces(0),
    m_maximumNetworkInterfacesHasBeenSet(false),
    m_maximumNetworkCards(0),
    m_maximumNetworkCardsHasBeenSet(false),
    m_defaultNetworkCardIndex(0),
    m_defaultNetworkCardIndexHasBeenSet(false),
    m_networkCardsHasBeenSet(false),
    m_ipv4AddressesPerInterface(0),
    m_ipv4AddressesPerInterfaceHasBeenSet(false),
    m_ipv6AddressesPerInterface(0),
    m_ipv6AddressesPerInterfaceHasBeenSet(false),
    m_ipv6Supported(false),
    m_ipv6SupportedHasBeenSet(false),
    m_enaSupport(EnaSupport::NOT_SET),
    m_enaSupportHasBeenSet(false),
    m_efaSupported(false),
    m_efaSupportedHasBeenSet(false),
    m_efaInfoHasBeenSet(false),
    m_encryptionInTransitSupported(false),
    m_encryptionInTransitSupportedHasBeenSet(false),
    m_enaSrdSupported(false),
    m_enaSrdSupportedHasBeenSet(false)
{
}

NetworkInfo::NetworkInfo(const XmlNode& xmlNode) : 
    m_networkPerformanceHasBeenSet(false),
    m_maximumNetworkInterfaces(0),
    m_maximumNetworkInterfacesHasBeenSet(false),
    m_maximumNetworkCards(0),
    m_maximumNetworkCardsHasBeenSet(false),
    m_defaultNetworkCardIndex(0),
    m_defaultNetworkCardIndexHasBeenSet(false),
    m_networkCardsHasBeenSet(false),
    m_ipv4AddressesPerInterface(0),
    m_ipv4AddressesPerInterfaceHasBeenSet(false),
    m_ipv6AddressesPerInterface(0),
    m_ipv6AddressesPerInterfaceHasBeenSet(false),
    m_ipv6Supported(false),
    m_ipv6SupportedHasBeenSet(false),
    m_enaSupport(EnaSupport::NOT_SET),
    m_enaSupportHasBeenSet(false),
    m_efaSupported(false),
    m_efaSupportedHasBeenSet(false),
    m_efaInfoHasBeenSet(false),
    m_encryptionInTransitSupported(false),
    m_encryptionInTransitSupportedHasBeenSet(false),
    m_enaSrdSupported(false),
    m_enaSrdSupportedHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkInfo& NetworkInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode networkPerformanceNode = resultNode.FirstChild("networkPerformance");
    if(!networkPerformanceNode.IsNull())
    {
      m_networkPerformance = Aws::Utils::Xml::DecodeEscapedXmlText(networkPerformanceNode.GetText());
      m_networkPerformanceHasBeenSet = true;
    }
    XmlNode maximumNetworkInterfacesNode = resultNode.FirstChild("maximumNetworkInterfaces");
    if(!maximumNetworkInterfacesNode.IsNull())
    {
      m_maximumNetworkInterfaces = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumNetworkInterfacesNode.GetText()).c_str()).c_str());
      m_maximumNetworkInterfacesHasBeenSet = true;
    }
    XmlNode maximumNetworkCardsNode = resultNode.FirstChild("maximumNetworkCards");
    if(!maximumNetworkCardsNode.IsNull())
    {
      m_maximumNetworkCards = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumNetworkCardsNode.GetText()).c_str()).c_str());
      m_maximumNetworkCardsHasBeenSet = true;
    }
    XmlNode defaultNetworkCardIndexNode = resultNode.FirstChild("defaultNetworkCardIndex");
    if(!defaultNetworkCardIndexNode.IsNull())
    {
      m_defaultNetworkCardIndex = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultNetworkCardIndexNode.GetText()).c_str()).c_str());
      m_defaultNetworkCardIndexHasBeenSet = true;
    }
    XmlNode networkCardsNode = resultNode.FirstChild("networkCards");
    if(!networkCardsNode.IsNull())
    {
      XmlNode networkCardsMember = networkCardsNode.FirstChild("item");
      while(!networkCardsMember.IsNull())
      {
        m_networkCards.push_back(networkCardsMember);
        networkCardsMember = networkCardsMember.NextNode("item");
      }

      m_networkCardsHasBeenSet = true;
    }
    XmlNode ipv4AddressesPerInterfaceNode = resultNode.FirstChild("ipv4AddressesPerInterface");
    if(!ipv4AddressesPerInterfaceNode.IsNull())
    {
      m_ipv4AddressesPerInterface = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipv4AddressesPerInterfaceNode.GetText()).c_str()).c_str());
      m_ipv4AddressesPerInterfaceHasBeenSet = true;
    }
    XmlNode ipv6AddressesPerInterfaceNode = resultNode.FirstChild("ipv6AddressesPerInterface");
    if(!ipv6AddressesPerInterfaceNode.IsNull())
    {
      m_ipv6AddressesPerInterface = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipv6AddressesPerInterfaceNode.GetText()).c_str()).c_str());
      m_ipv6AddressesPerInterfaceHasBeenSet = true;
    }
    XmlNode ipv6SupportedNode = resultNode.FirstChild("ipv6Supported");
    if(!ipv6SupportedNode.IsNull())
    {
      m_ipv6Supported = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipv6SupportedNode.GetText()).c_str()).c_str());
      m_ipv6SupportedHasBeenSet = true;
    }
    XmlNode enaSupportNode = resultNode.FirstChild("enaSupport");
    if(!enaSupportNode.IsNull())
    {
      m_enaSupport = EnaSupportMapper::GetEnaSupportForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enaSupportNode.GetText()).c_str()).c_str());
      m_enaSupportHasBeenSet = true;
    }
    XmlNode efaSupportedNode = resultNode.FirstChild("efaSupported");
    if(!efaSupportedNode.IsNull())
    {
      m_efaSupported = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(efaSupportedNode.GetText()).c_str()).c_str());
      m_efaSupportedHasBeenSet = true;
    }
    XmlNode efaInfoNode = resultNode.FirstChild("efaInfo");
    if(!efaInfoNode.IsNull())
    {
      m_efaInfo = efaInfoNode;
      m_efaInfoHasBeenSet = true;
    }
    XmlNode encryptionInTransitSupportedNode = resultNode.FirstChild("encryptionInTransitSupported");
    if(!encryptionInTransitSupportedNode.IsNull())
    {
      m_encryptionInTransitSupported = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(encryptionInTransitSupportedNode.GetText()).c_str()).c_str());
      m_encryptionInTransitSupportedHasBeenSet = true;
    }
    XmlNode enaSrdSupportedNode = resultNode.FirstChild("enaSrdSupported");
    if(!enaSrdSupportedNode.IsNull())
    {
      m_enaSrdSupported = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enaSrdSupportedNode.GetText()).c_str()).c_str());
      m_enaSrdSupportedHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_networkPerformanceHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkPerformance=" << StringUtils::URLEncode(m_networkPerformance.c_str()) << "&";
  }

  if(m_maximumNetworkInterfacesHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaximumNetworkInterfaces=" << m_maximumNetworkInterfaces << "&";
  }

  if(m_maximumNetworkCardsHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaximumNetworkCards=" << m_maximumNetworkCards << "&";
  }

  if(m_defaultNetworkCardIndexHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultNetworkCardIndex=" << m_defaultNetworkCardIndex << "&";
  }

  if(m_networkCardsHasBeenSet)
  {
      unsigned networkCardsIdx = 1;
      for(auto& item : m_networkCards)
      {
        Aws::StringStream networkCardsSs;
        networkCardsSs << location << index << locationValue << ".NetworkCards." << networkCardsIdx++;
        item.OutputToStream(oStream, networkCardsSs.str().c_str());
      }
  }

  if(m_ipv4AddressesPerInterfaceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv4AddressesPerInterface=" << m_ipv4AddressesPerInterface << "&";
  }

  if(m_ipv6AddressesPerInterfaceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6AddressesPerInterface=" << m_ipv6AddressesPerInterface << "&";
  }

  if(m_ipv6SupportedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6Supported=" << std::boolalpha << m_ipv6Supported << "&";
  }

  if(m_enaSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnaSupport=" << EnaSupportMapper::GetNameForEnaSupport(m_enaSupport) << "&";
  }

  if(m_efaSupportedHasBeenSet)
  {
      oStream << location << index << locationValue << ".EfaSupported=" << std::boolalpha << m_efaSupported << "&";
  }

  if(m_efaInfoHasBeenSet)
  {
      Aws::StringStream efaInfoLocationAndMemberSs;
      efaInfoLocationAndMemberSs << location << index << locationValue << ".EfaInfo";
      m_efaInfo.OutputToStream(oStream, efaInfoLocationAndMemberSs.str().c_str());
  }

  if(m_encryptionInTransitSupportedHasBeenSet)
  {
      oStream << location << index << locationValue << ".EncryptionInTransitSupported=" << std::boolalpha << m_encryptionInTransitSupported << "&";
  }

  if(m_enaSrdSupportedHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnaSrdSupported=" << std::boolalpha << m_enaSrdSupported << "&";
  }

}

void NetworkInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_networkPerformanceHasBeenSet)
  {
      oStream << location << ".NetworkPerformance=" << StringUtils::URLEncode(m_networkPerformance.c_str()) << "&";
  }
  if(m_maximumNetworkInterfacesHasBeenSet)
  {
      oStream << location << ".MaximumNetworkInterfaces=" << m_maximumNetworkInterfaces << "&";
  }
  if(m_maximumNetworkCardsHasBeenSet)
  {
      oStream << location << ".MaximumNetworkCards=" << m_maximumNetworkCards << "&";
  }
  if(m_defaultNetworkCardIndexHasBeenSet)
  {
      oStream << location << ".DefaultNetworkCardIndex=" << m_defaultNetworkCardIndex << "&";
  }
  if(m_networkCardsHasBeenSet)
  {
      unsigned networkCardsIdx = 1;
      for(auto& item : m_networkCards)
      {
        Aws::StringStream networkCardsSs;
        networkCardsSs << location <<  ".NetworkCards." << networkCardsIdx++;
        item.OutputToStream(oStream, networkCardsSs.str().c_str());
      }
  }
  if(m_ipv4AddressesPerInterfaceHasBeenSet)
  {
      oStream << location << ".Ipv4AddressesPerInterface=" << m_ipv4AddressesPerInterface << "&";
  }
  if(m_ipv6AddressesPerInterfaceHasBeenSet)
  {
      oStream << location << ".Ipv6AddressesPerInterface=" << m_ipv6AddressesPerInterface << "&";
  }
  if(m_ipv6SupportedHasBeenSet)
  {
      oStream << location << ".Ipv6Supported=" << std::boolalpha << m_ipv6Supported << "&";
  }
  if(m_enaSupportHasBeenSet)
  {
      oStream << location << ".EnaSupport=" << EnaSupportMapper::GetNameForEnaSupport(m_enaSupport) << "&";
  }
  if(m_efaSupportedHasBeenSet)
  {
      oStream << location << ".EfaSupported=" << std::boolalpha << m_efaSupported << "&";
  }
  if(m_efaInfoHasBeenSet)
  {
      Aws::String efaInfoLocationAndMember(location);
      efaInfoLocationAndMember += ".EfaInfo";
      m_efaInfo.OutputToStream(oStream, efaInfoLocationAndMember.c_str());
  }
  if(m_encryptionInTransitSupportedHasBeenSet)
  {
      oStream << location << ".EncryptionInTransitSupported=" << std::boolalpha << m_encryptionInTransitSupported << "&";
  }
  if(m_enaSrdSupportedHasBeenSet)
  {
      oStream << location << ".EnaSrdSupported=" << std::boolalpha << m_enaSrdSupported << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
