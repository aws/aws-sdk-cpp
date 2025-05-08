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
#include <aws/ec2/model/FlexibleEnaQueuesSupport.h>
#include <aws/ec2/model/NetworkCardInfo.h>
#include <aws/ec2/model/BandwidthWeightingType.h>
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
    AWS_EC2_API NetworkInfo() = default;
    AWS_EC2_API NetworkInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The network performance.</p>
     */
    inline const Aws::String& GetNetworkPerformance() const { return m_networkPerformance; }
    inline bool NetworkPerformanceHasBeenSet() const { return m_networkPerformanceHasBeenSet; }
    template<typename NetworkPerformanceT = Aws::String>
    void SetNetworkPerformance(NetworkPerformanceT&& value) { m_networkPerformanceHasBeenSet = true; m_networkPerformance = std::forward<NetworkPerformanceT>(value); }
    template<typename NetworkPerformanceT = Aws::String>
    NetworkInfo& WithNetworkPerformance(NetworkPerformanceT&& value) { SetNetworkPerformance(std::forward<NetworkPerformanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of network interfaces for the instance type.</p>
     */
    inline int GetMaximumNetworkInterfaces() const { return m_maximumNetworkInterfaces; }
    inline bool MaximumNetworkInterfacesHasBeenSet() const { return m_maximumNetworkInterfacesHasBeenSet; }
    inline void SetMaximumNetworkInterfaces(int value) { m_maximumNetworkInterfacesHasBeenSet = true; m_maximumNetworkInterfaces = value; }
    inline NetworkInfo& WithMaximumNetworkInterfaces(int value) { SetMaximumNetworkInterfaces(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of physical network cards that can be allocated to the
     * instance.</p>
     */
    inline int GetMaximumNetworkCards() const { return m_maximumNetworkCards; }
    inline bool MaximumNetworkCardsHasBeenSet() const { return m_maximumNetworkCardsHasBeenSet; }
    inline void SetMaximumNetworkCards(int value) { m_maximumNetworkCardsHasBeenSet = true; m_maximumNetworkCards = value; }
    inline NetworkInfo& WithMaximumNetworkCards(int value) { SetMaximumNetworkCards(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index of the default network card, starting at 0.</p>
     */
    inline int GetDefaultNetworkCardIndex() const { return m_defaultNetworkCardIndex; }
    inline bool DefaultNetworkCardIndexHasBeenSet() const { return m_defaultNetworkCardIndexHasBeenSet; }
    inline void SetDefaultNetworkCardIndex(int value) { m_defaultNetworkCardIndexHasBeenSet = true; m_defaultNetworkCardIndex = value; }
    inline NetworkInfo& WithDefaultNetworkCardIndex(int value) { SetDefaultNetworkCardIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the network cards for the instance type.</p>
     */
    inline const Aws::Vector<NetworkCardInfo>& GetNetworkCards() const { return m_networkCards; }
    inline bool NetworkCardsHasBeenSet() const { return m_networkCardsHasBeenSet; }
    template<typename NetworkCardsT = Aws::Vector<NetworkCardInfo>>
    void SetNetworkCards(NetworkCardsT&& value) { m_networkCardsHasBeenSet = true; m_networkCards = std::forward<NetworkCardsT>(value); }
    template<typename NetworkCardsT = Aws::Vector<NetworkCardInfo>>
    NetworkInfo& WithNetworkCards(NetworkCardsT&& value) { SetNetworkCards(std::forward<NetworkCardsT>(value)); return *this;}
    template<typename NetworkCardsT = NetworkCardInfo>
    NetworkInfo& AddNetworkCards(NetworkCardsT&& value) { m_networkCardsHasBeenSet = true; m_networkCards.emplace_back(std::forward<NetworkCardsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of IPv4 addresses per network interface.</p>
     */
    inline int GetIpv4AddressesPerInterface() const { return m_ipv4AddressesPerInterface; }
    inline bool Ipv4AddressesPerInterfaceHasBeenSet() const { return m_ipv4AddressesPerInterfaceHasBeenSet; }
    inline void SetIpv4AddressesPerInterface(int value) { m_ipv4AddressesPerInterfaceHasBeenSet = true; m_ipv4AddressesPerInterface = value; }
    inline NetworkInfo& WithIpv4AddressesPerInterface(int value) { SetIpv4AddressesPerInterface(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of IPv6 addresses per network interface.</p>
     */
    inline int GetIpv6AddressesPerInterface() const { return m_ipv6AddressesPerInterface; }
    inline bool Ipv6AddressesPerInterfaceHasBeenSet() const { return m_ipv6AddressesPerInterfaceHasBeenSet; }
    inline void SetIpv6AddressesPerInterface(int value) { m_ipv6AddressesPerInterfaceHasBeenSet = true; m_ipv6AddressesPerInterface = value; }
    inline NetworkInfo& WithIpv6AddressesPerInterface(int value) { SetIpv6AddressesPerInterface(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether IPv6 is supported.</p>
     */
    inline bool GetIpv6Supported() const { return m_ipv6Supported; }
    inline bool Ipv6SupportedHasBeenSet() const { return m_ipv6SupportedHasBeenSet; }
    inline void SetIpv6Supported(bool value) { m_ipv6SupportedHasBeenSet = true; m_ipv6Supported = value; }
    inline NetworkInfo& WithIpv6Supported(bool value) { SetIpv6Supported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Elastic Network Adapter (ENA) is supported.</p>
     */
    inline EnaSupport GetEnaSupport() const { return m_enaSupport; }
    inline bool EnaSupportHasBeenSet() const { return m_enaSupportHasBeenSet; }
    inline void SetEnaSupport(EnaSupport value) { m_enaSupportHasBeenSet = true; m_enaSupport = value; }
    inline NetworkInfo& WithEnaSupport(EnaSupport value) { SetEnaSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Elastic Fabric Adapter (EFA) is supported.</p>
     */
    inline bool GetEfaSupported() const { return m_efaSupported; }
    inline bool EfaSupportedHasBeenSet() const { return m_efaSupportedHasBeenSet; }
    inline void SetEfaSupported(bool value) { m_efaSupportedHasBeenSet = true; m_efaSupported = value; }
    inline NetworkInfo& WithEfaSupported(bool value) { SetEfaSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Elastic Fabric Adapters for the instance type.</p>
     */
    inline const EfaInfo& GetEfaInfo() const { return m_efaInfo; }
    inline bool EfaInfoHasBeenSet() const { return m_efaInfoHasBeenSet; }
    template<typename EfaInfoT = EfaInfo>
    void SetEfaInfo(EfaInfoT&& value) { m_efaInfoHasBeenSet = true; m_efaInfo = std::forward<EfaInfoT>(value); }
    template<typename EfaInfoT = EfaInfo>
    NetworkInfo& WithEfaInfo(EfaInfoT&& value) { SetEfaInfo(std::forward<EfaInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance type automatically encrypts in-transit traffic
     * between instances.</p>
     */
    inline bool GetEncryptionInTransitSupported() const { return m_encryptionInTransitSupported; }
    inline bool EncryptionInTransitSupportedHasBeenSet() const { return m_encryptionInTransitSupportedHasBeenSet; }
    inline void SetEncryptionInTransitSupported(bool value) { m_encryptionInTransitSupportedHasBeenSet = true; m_encryptionInTransitSupported = value; }
    inline NetworkInfo& WithEncryptionInTransitSupported(bool value) { SetEncryptionInTransitSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance type supports ENA Express. ENA Express uses
     * Amazon Web Services Scalable Reliable Datagram (SRD) technology to increase the
     * maximum bandwidth used per stream and minimize tail latency of network traffic
     * between EC2 instances.</p>
     */
    inline bool GetEnaSrdSupported() const { return m_enaSrdSupported; }
    inline bool EnaSrdSupportedHasBeenSet() const { return m_enaSrdSupportedHasBeenSet; }
    inline void SetEnaSrdSupported(bool value) { m_enaSrdSupportedHasBeenSet = true; m_enaSrdSupported = value; }
    inline NetworkInfo& WithEnaSrdSupported(bool value) { SetEnaSrdSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of valid settings for configurable bandwidth weighting for the
     * instance type, if supported.</p>
     */
    inline const Aws::Vector<BandwidthWeightingType>& GetBandwidthWeightings() const { return m_bandwidthWeightings; }
    inline bool BandwidthWeightingsHasBeenSet() const { return m_bandwidthWeightingsHasBeenSet; }
    template<typename BandwidthWeightingsT = Aws::Vector<BandwidthWeightingType>>
    void SetBandwidthWeightings(BandwidthWeightingsT&& value) { m_bandwidthWeightingsHasBeenSet = true; m_bandwidthWeightings = std::forward<BandwidthWeightingsT>(value); }
    template<typename BandwidthWeightingsT = Aws::Vector<BandwidthWeightingType>>
    NetworkInfo& WithBandwidthWeightings(BandwidthWeightingsT&& value) { SetBandwidthWeightings(std::forward<BandwidthWeightingsT>(value)); return *this;}
    inline NetworkInfo& AddBandwidthWeightings(BandwidthWeightingType value) { m_bandwidthWeightingsHasBeenSet = true; m_bandwidthWeightings.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether changing the number of ENA queues is supported.</p>
     */
    inline FlexibleEnaQueuesSupport GetFlexibleEnaQueuesSupport() const { return m_flexibleEnaQueuesSupport; }
    inline bool FlexibleEnaQueuesSupportHasBeenSet() const { return m_flexibleEnaQueuesSupportHasBeenSet; }
    inline void SetFlexibleEnaQueuesSupport(FlexibleEnaQueuesSupport value) { m_flexibleEnaQueuesSupportHasBeenSet = true; m_flexibleEnaQueuesSupport = value; }
    inline NetworkInfo& WithFlexibleEnaQueuesSupport(FlexibleEnaQueuesSupport value) { SetFlexibleEnaQueuesSupport(value); return *this;}
    ///@}
  private:

    Aws::String m_networkPerformance;
    bool m_networkPerformanceHasBeenSet = false;

    int m_maximumNetworkInterfaces{0};
    bool m_maximumNetworkInterfacesHasBeenSet = false;

    int m_maximumNetworkCards{0};
    bool m_maximumNetworkCardsHasBeenSet = false;

    int m_defaultNetworkCardIndex{0};
    bool m_defaultNetworkCardIndexHasBeenSet = false;

    Aws::Vector<NetworkCardInfo> m_networkCards;
    bool m_networkCardsHasBeenSet = false;

    int m_ipv4AddressesPerInterface{0};
    bool m_ipv4AddressesPerInterfaceHasBeenSet = false;

    int m_ipv6AddressesPerInterface{0};
    bool m_ipv6AddressesPerInterfaceHasBeenSet = false;

    bool m_ipv6Supported{false};
    bool m_ipv6SupportedHasBeenSet = false;

    EnaSupport m_enaSupport{EnaSupport::NOT_SET};
    bool m_enaSupportHasBeenSet = false;

    bool m_efaSupported{false};
    bool m_efaSupportedHasBeenSet = false;

    EfaInfo m_efaInfo;
    bool m_efaInfoHasBeenSet = false;

    bool m_encryptionInTransitSupported{false};
    bool m_encryptionInTransitSupportedHasBeenSet = false;

    bool m_enaSrdSupported{false};
    bool m_enaSrdSupportedHasBeenSet = false;

    Aws::Vector<BandwidthWeightingType> m_bandwidthWeightings;
    bool m_bandwidthWeightingsHasBeenSet = false;

    FlexibleEnaQueuesSupport m_flexibleEnaQueuesSupport{FlexibleEnaQueuesSupport::NOT_SET};
    bool m_flexibleEnaQueuesSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
