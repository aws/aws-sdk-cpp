/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/EnaSupport.h>
#include <aws/ec2/model/EfaInfo.h>
#include <aws/ec2/model/NetworkCardInfo.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the networking features of the instance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkInfo">AWS API
   * Reference</a></p>
   */
  class NetworkInfo
  {
  public:
    AWS_EC2_API NetworkInfo();
    AWS_EC2_API NetworkInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The network performance.</p>
     */
    inline const Aws::String& GetNetworkPerformance() const{ return m_networkPerformance; }

    /**
     * <p>The network performance.</p>
     */
    inline bool NetworkPerformanceHasBeenSet() const { return m_networkPerformanceHasBeenSet; }

    /**
     * <p>The network performance.</p>
     */
    inline void SetNetworkPerformance(const Aws::String& value) { m_networkPerformanceHasBeenSet = true; m_networkPerformance = value; }

    /**
     * <p>The network performance.</p>
     */
    inline void SetNetworkPerformance(Aws::String&& value) { m_networkPerformanceHasBeenSet = true; m_networkPerformance = std::move(value); }

    /**
     * <p>The network performance.</p>
     */
    inline void SetNetworkPerformance(const char* value) { m_networkPerformanceHasBeenSet = true; m_networkPerformance.assign(value); }

    /**
     * <p>The network performance.</p>
     */
    inline NetworkInfo& WithNetworkPerformance(const Aws::String& value) { SetNetworkPerformance(value); return *this;}

    /**
     * <p>The network performance.</p>
     */
    inline NetworkInfo& WithNetworkPerformance(Aws::String&& value) { SetNetworkPerformance(std::move(value)); return *this;}

    /**
     * <p>The network performance.</p>
     */
    inline NetworkInfo& WithNetworkPerformance(const char* value) { SetNetworkPerformance(value); return *this;}


    /**
     * <p>The maximum number of network interfaces for the instance type.</p>
     */
    inline int GetMaximumNetworkInterfaces() const{ return m_maximumNetworkInterfaces; }

    /**
     * <p>The maximum number of network interfaces for the instance type.</p>
     */
    inline bool MaximumNetworkInterfacesHasBeenSet() const { return m_maximumNetworkInterfacesHasBeenSet; }

    /**
     * <p>The maximum number of network interfaces for the instance type.</p>
     */
    inline void SetMaximumNetworkInterfaces(int value) { m_maximumNetworkInterfacesHasBeenSet = true; m_maximumNetworkInterfaces = value; }

    /**
     * <p>The maximum number of network interfaces for the instance type.</p>
     */
    inline NetworkInfo& WithMaximumNetworkInterfaces(int value) { SetMaximumNetworkInterfaces(value); return *this;}


    /**
     * <p>The maximum number of physical network cards that can be allocated to the
     * instance.</p>
     */
    inline int GetMaximumNetworkCards() const{ return m_maximumNetworkCards; }

    /**
     * <p>The maximum number of physical network cards that can be allocated to the
     * instance.</p>
     */
    inline bool MaximumNetworkCardsHasBeenSet() const { return m_maximumNetworkCardsHasBeenSet; }

    /**
     * <p>The maximum number of physical network cards that can be allocated to the
     * instance.</p>
     */
    inline void SetMaximumNetworkCards(int value) { m_maximumNetworkCardsHasBeenSet = true; m_maximumNetworkCards = value; }

    /**
     * <p>The maximum number of physical network cards that can be allocated to the
     * instance.</p>
     */
    inline NetworkInfo& WithMaximumNetworkCards(int value) { SetMaximumNetworkCards(value); return *this;}


    /**
     * <p>The index of the default network card, starting at 0.</p>
     */
    inline int GetDefaultNetworkCardIndex() const{ return m_defaultNetworkCardIndex; }

    /**
     * <p>The index of the default network card, starting at 0.</p>
     */
    inline bool DefaultNetworkCardIndexHasBeenSet() const { return m_defaultNetworkCardIndexHasBeenSet; }

    /**
     * <p>The index of the default network card, starting at 0.</p>
     */
    inline void SetDefaultNetworkCardIndex(int value) { m_defaultNetworkCardIndexHasBeenSet = true; m_defaultNetworkCardIndex = value; }

    /**
     * <p>The index of the default network card, starting at 0.</p>
     */
    inline NetworkInfo& WithDefaultNetworkCardIndex(int value) { SetDefaultNetworkCardIndex(value); return *this;}


    /**
     * <p>Describes the network cards for the instance type.</p>
     */
    inline const Aws::Vector<NetworkCardInfo>& GetNetworkCards() const{ return m_networkCards; }

    /**
     * <p>Describes the network cards for the instance type.</p>
     */
    inline bool NetworkCardsHasBeenSet() const { return m_networkCardsHasBeenSet; }

    /**
     * <p>Describes the network cards for the instance type.</p>
     */
    inline void SetNetworkCards(const Aws::Vector<NetworkCardInfo>& value) { m_networkCardsHasBeenSet = true; m_networkCards = value; }

    /**
     * <p>Describes the network cards for the instance type.</p>
     */
    inline void SetNetworkCards(Aws::Vector<NetworkCardInfo>&& value) { m_networkCardsHasBeenSet = true; m_networkCards = std::move(value); }

    /**
     * <p>Describes the network cards for the instance type.</p>
     */
    inline NetworkInfo& WithNetworkCards(const Aws::Vector<NetworkCardInfo>& value) { SetNetworkCards(value); return *this;}

    /**
     * <p>Describes the network cards for the instance type.</p>
     */
    inline NetworkInfo& WithNetworkCards(Aws::Vector<NetworkCardInfo>&& value) { SetNetworkCards(std::move(value)); return *this;}

    /**
     * <p>Describes the network cards for the instance type.</p>
     */
    inline NetworkInfo& AddNetworkCards(const NetworkCardInfo& value) { m_networkCardsHasBeenSet = true; m_networkCards.push_back(value); return *this; }

    /**
     * <p>Describes the network cards for the instance type.</p>
     */
    inline NetworkInfo& AddNetworkCards(NetworkCardInfo&& value) { m_networkCardsHasBeenSet = true; m_networkCards.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of IPv4 addresses per network interface.</p>
     */
    inline int GetIpv4AddressesPerInterface() const{ return m_ipv4AddressesPerInterface; }

    /**
     * <p>The maximum number of IPv4 addresses per network interface.</p>
     */
    inline bool Ipv4AddressesPerInterfaceHasBeenSet() const { return m_ipv4AddressesPerInterfaceHasBeenSet; }

    /**
     * <p>The maximum number of IPv4 addresses per network interface.</p>
     */
    inline void SetIpv4AddressesPerInterface(int value) { m_ipv4AddressesPerInterfaceHasBeenSet = true; m_ipv4AddressesPerInterface = value; }

    /**
     * <p>The maximum number of IPv4 addresses per network interface.</p>
     */
    inline NetworkInfo& WithIpv4AddressesPerInterface(int value) { SetIpv4AddressesPerInterface(value); return *this;}


    /**
     * <p>The maximum number of IPv6 addresses per network interface.</p>
     */
    inline int GetIpv6AddressesPerInterface() const{ return m_ipv6AddressesPerInterface; }

    /**
     * <p>The maximum number of IPv6 addresses per network interface.</p>
     */
    inline bool Ipv6AddressesPerInterfaceHasBeenSet() const { return m_ipv6AddressesPerInterfaceHasBeenSet; }

    /**
     * <p>The maximum number of IPv6 addresses per network interface.</p>
     */
    inline void SetIpv6AddressesPerInterface(int value) { m_ipv6AddressesPerInterfaceHasBeenSet = true; m_ipv6AddressesPerInterface = value; }

    /**
     * <p>The maximum number of IPv6 addresses per network interface.</p>
     */
    inline NetworkInfo& WithIpv6AddressesPerInterface(int value) { SetIpv6AddressesPerInterface(value); return *this;}


    /**
     * <p>Indicates whether IPv6 is supported.</p>
     */
    inline bool GetIpv6Supported() const{ return m_ipv6Supported; }

    /**
     * <p>Indicates whether IPv6 is supported.</p>
     */
    inline bool Ipv6SupportedHasBeenSet() const { return m_ipv6SupportedHasBeenSet; }

    /**
     * <p>Indicates whether IPv6 is supported.</p>
     */
    inline void SetIpv6Supported(bool value) { m_ipv6SupportedHasBeenSet = true; m_ipv6Supported = value; }

    /**
     * <p>Indicates whether IPv6 is supported.</p>
     */
    inline NetworkInfo& WithIpv6Supported(bool value) { SetIpv6Supported(value); return *this;}


    /**
     * <p>Indicates whether Elastic Network Adapter (ENA) is supported.</p>
     */
    inline const EnaSupport& GetEnaSupport() const{ return m_enaSupport; }

    /**
     * <p>Indicates whether Elastic Network Adapter (ENA) is supported.</p>
     */
    inline bool EnaSupportHasBeenSet() const { return m_enaSupportHasBeenSet; }

    /**
     * <p>Indicates whether Elastic Network Adapter (ENA) is supported.</p>
     */
    inline void SetEnaSupport(const EnaSupport& value) { m_enaSupportHasBeenSet = true; m_enaSupport = value; }

    /**
     * <p>Indicates whether Elastic Network Adapter (ENA) is supported.</p>
     */
    inline void SetEnaSupport(EnaSupport&& value) { m_enaSupportHasBeenSet = true; m_enaSupport = std::move(value); }

    /**
     * <p>Indicates whether Elastic Network Adapter (ENA) is supported.</p>
     */
    inline NetworkInfo& WithEnaSupport(const EnaSupport& value) { SetEnaSupport(value); return *this;}

    /**
     * <p>Indicates whether Elastic Network Adapter (ENA) is supported.</p>
     */
    inline NetworkInfo& WithEnaSupport(EnaSupport&& value) { SetEnaSupport(std::move(value)); return *this;}


    /**
     * <p>Indicates whether Elastic Fabric Adapter (EFA) is supported.</p>
     */
    inline bool GetEfaSupported() const{ return m_efaSupported; }

    /**
     * <p>Indicates whether Elastic Fabric Adapter (EFA) is supported.</p>
     */
    inline bool EfaSupportedHasBeenSet() const { return m_efaSupportedHasBeenSet; }

    /**
     * <p>Indicates whether Elastic Fabric Adapter (EFA) is supported.</p>
     */
    inline void SetEfaSupported(bool value) { m_efaSupportedHasBeenSet = true; m_efaSupported = value; }

    /**
     * <p>Indicates whether Elastic Fabric Adapter (EFA) is supported.</p>
     */
    inline NetworkInfo& WithEfaSupported(bool value) { SetEfaSupported(value); return *this;}


    /**
     * <p>Describes the Elastic Fabric Adapters for the instance type.</p>
     */
    inline const EfaInfo& GetEfaInfo() const{ return m_efaInfo; }

    /**
     * <p>Describes the Elastic Fabric Adapters for the instance type.</p>
     */
    inline bool EfaInfoHasBeenSet() const { return m_efaInfoHasBeenSet; }

    /**
     * <p>Describes the Elastic Fabric Adapters for the instance type.</p>
     */
    inline void SetEfaInfo(const EfaInfo& value) { m_efaInfoHasBeenSet = true; m_efaInfo = value; }

    /**
     * <p>Describes the Elastic Fabric Adapters for the instance type.</p>
     */
    inline void SetEfaInfo(EfaInfo&& value) { m_efaInfoHasBeenSet = true; m_efaInfo = std::move(value); }

    /**
     * <p>Describes the Elastic Fabric Adapters for the instance type.</p>
     */
    inline NetworkInfo& WithEfaInfo(const EfaInfo& value) { SetEfaInfo(value); return *this;}

    /**
     * <p>Describes the Elastic Fabric Adapters for the instance type.</p>
     */
    inline NetworkInfo& WithEfaInfo(EfaInfo&& value) { SetEfaInfo(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the instance type automatically encrypts in-transit traffic
     * between instances.</p>
     */
    inline bool GetEncryptionInTransitSupported() const{ return m_encryptionInTransitSupported; }

    /**
     * <p>Indicates whether the instance type automatically encrypts in-transit traffic
     * between instances.</p>
     */
    inline bool EncryptionInTransitSupportedHasBeenSet() const { return m_encryptionInTransitSupportedHasBeenSet; }

    /**
     * <p>Indicates whether the instance type automatically encrypts in-transit traffic
     * between instances.</p>
     */
    inline void SetEncryptionInTransitSupported(bool value) { m_encryptionInTransitSupportedHasBeenSet = true; m_encryptionInTransitSupported = value; }

    /**
     * <p>Indicates whether the instance type automatically encrypts in-transit traffic
     * between instances.</p>
     */
    inline NetworkInfo& WithEncryptionInTransitSupported(bool value) { SetEncryptionInTransitSupported(value); return *this;}


    /**
     * <p>Indicates whether the instance type supports ENA Express. ENA Express uses
     * Amazon Web Services Scalable Reliable Datagram (SRD) technology to increase the
     * maximum bandwidth used per stream and minimize tail latency of network traffic
     * between EC2 instances.</p>
     */
    inline bool GetEnaSrdSupported() const{ return m_enaSrdSupported; }

    /**
     * <p>Indicates whether the instance type supports ENA Express. ENA Express uses
     * Amazon Web Services Scalable Reliable Datagram (SRD) technology to increase the
     * maximum bandwidth used per stream and minimize tail latency of network traffic
     * between EC2 instances.</p>
     */
    inline bool EnaSrdSupportedHasBeenSet() const { return m_enaSrdSupportedHasBeenSet; }

    /**
     * <p>Indicates whether the instance type supports ENA Express. ENA Express uses
     * Amazon Web Services Scalable Reliable Datagram (SRD) technology to increase the
     * maximum bandwidth used per stream and minimize tail latency of network traffic
     * between EC2 instances.</p>
     */
    inline void SetEnaSrdSupported(bool value) { m_enaSrdSupportedHasBeenSet = true; m_enaSrdSupported = value; }

    /**
     * <p>Indicates whether the instance type supports ENA Express. ENA Express uses
     * Amazon Web Services Scalable Reliable Datagram (SRD) technology to increase the
     * maximum bandwidth used per stream and minimize tail latency of network traffic
     * between EC2 instances.</p>
     */
    inline NetworkInfo& WithEnaSrdSupported(bool value) { SetEnaSrdSupported(value); return *this;}

  private:

    Aws::String m_networkPerformance;
    bool m_networkPerformanceHasBeenSet = false;

    int m_maximumNetworkInterfaces;
    bool m_maximumNetworkInterfacesHasBeenSet = false;

    int m_maximumNetworkCards;
    bool m_maximumNetworkCardsHasBeenSet = false;

    int m_defaultNetworkCardIndex;
    bool m_defaultNetworkCardIndexHasBeenSet = false;

    Aws::Vector<NetworkCardInfo> m_networkCards;
    bool m_networkCardsHasBeenSet = false;

    int m_ipv4AddressesPerInterface;
    bool m_ipv4AddressesPerInterfaceHasBeenSet = false;

    int m_ipv6AddressesPerInterface;
    bool m_ipv6AddressesPerInterfaceHasBeenSet = false;

    bool m_ipv6Supported;
    bool m_ipv6SupportedHasBeenSet = false;

    EnaSupport m_enaSupport;
    bool m_enaSupportHasBeenSet = false;

    bool m_efaSupported;
    bool m_efaSupportedHasBeenSet = false;

    EfaInfo m_efaInfo;
    bool m_efaInfoHasBeenSet = false;

    bool m_encryptionInTransitSupported;
    bool m_encryptionInTransitSupportedHasBeenSet = false;

    bool m_enaSrdSupported;
    bool m_enaSrdSupportedHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
