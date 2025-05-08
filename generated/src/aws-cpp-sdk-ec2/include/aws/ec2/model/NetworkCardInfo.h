/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes the network card support of the instance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkCardInfo">AWS
   * API Reference</a></p>
   */
  class NetworkCardInfo
  {
  public:
    AWS_EC2_API NetworkCardInfo() = default;
    AWS_EC2_API NetworkCardInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkCardInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The index of the network card.</p>
     */
    inline int GetNetworkCardIndex() const { return m_networkCardIndex; }
    inline bool NetworkCardIndexHasBeenSet() const { return m_networkCardIndexHasBeenSet; }
    inline void SetNetworkCardIndex(int value) { m_networkCardIndexHasBeenSet = true; m_networkCardIndex = value; }
    inline NetworkCardInfo& WithNetworkCardIndex(int value) { SetNetworkCardIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network performance of the network card.</p>
     */
    inline const Aws::String& GetNetworkPerformance() const { return m_networkPerformance; }
    inline bool NetworkPerformanceHasBeenSet() const { return m_networkPerformanceHasBeenSet; }
    template<typename NetworkPerformanceT = Aws::String>
    void SetNetworkPerformance(NetworkPerformanceT&& value) { m_networkPerformanceHasBeenSet = true; m_networkPerformance = std::forward<NetworkPerformanceT>(value); }
    template<typename NetworkPerformanceT = Aws::String>
    NetworkCardInfo& WithNetworkPerformance(NetworkPerformanceT&& value) { SetNetworkPerformance(std::forward<NetworkPerformanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of network interfaces for the network card.</p>
     */
    inline int GetMaximumNetworkInterfaces() const { return m_maximumNetworkInterfaces; }
    inline bool MaximumNetworkInterfacesHasBeenSet() const { return m_maximumNetworkInterfacesHasBeenSet; }
    inline void SetMaximumNetworkInterfaces(int value) { m_maximumNetworkInterfacesHasBeenSet = true; m_maximumNetworkInterfaces = value; }
    inline NetworkCardInfo& WithMaximumNetworkInterfaces(int value) { SetMaximumNetworkInterfaces(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The baseline network performance of the network card, in Gbps.</p>
     */
    inline double GetBaselineBandwidthInGbps() const { return m_baselineBandwidthInGbps; }
    inline bool BaselineBandwidthInGbpsHasBeenSet() const { return m_baselineBandwidthInGbpsHasBeenSet; }
    inline void SetBaselineBandwidthInGbps(double value) { m_baselineBandwidthInGbpsHasBeenSet = true; m_baselineBandwidthInGbps = value; }
    inline NetworkCardInfo& WithBaselineBandwidthInGbps(double value) { SetBaselineBandwidthInGbps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The peak (burst) network performance of the network card, in Gbps.</p>
     */
    inline double GetPeakBandwidthInGbps() const { return m_peakBandwidthInGbps; }
    inline bool PeakBandwidthInGbpsHasBeenSet() const { return m_peakBandwidthInGbpsHasBeenSet; }
    inline void SetPeakBandwidthInGbps(double value) { m_peakBandwidthInGbpsHasBeenSet = true; m_peakBandwidthInGbps = value; }
    inline NetworkCardInfo& WithPeakBandwidthInGbps(double value) { SetPeakBandwidthInGbps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default number of the ENA queues for each interface.</p>
     */
    inline int GetDefaultEnaQueueCountPerInterface() const { return m_defaultEnaQueueCountPerInterface; }
    inline bool DefaultEnaQueueCountPerInterfaceHasBeenSet() const { return m_defaultEnaQueueCountPerInterfaceHasBeenSet; }
    inline void SetDefaultEnaQueueCountPerInterface(int value) { m_defaultEnaQueueCountPerInterfaceHasBeenSet = true; m_defaultEnaQueueCountPerInterface = value; }
    inline NetworkCardInfo& WithDefaultEnaQueueCountPerInterface(int value) { SetDefaultEnaQueueCountPerInterface(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of the ENA queues.</p>
     */
    inline int GetMaximumEnaQueueCount() const { return m_maximumEnaQueueCount; }
    inline bool MaximumEnaQueueCountHasBeenSet() const { return m_maximumEnaQueueCountHasBeenSet; }
    inline void SetMaximumEnaQueueCount(int value) { m_maximumEnaQueueCountHasBeenSet = true; m_maximumEnaQueueCount = value; }
    inline NetworkCardInfo& WithMaximumEnaQueueCount(int value) { SetMaximumEnaQueueCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of the ENA queues for each interface.</p>
     */
    inline int GetMaximumEnaQueueCountPerInterface() const { return m_maximumEnaQueueCountPerInterface; }
    inline bool MaximumEnaQueueCountPerInterfaceHasBeenSet() const { return m_maximumEnaQueueCountPerInterfaceHasBeenSet; }
    inline void SetMaximumEnaQueueCountPerInterface(int value) { m_maximumEnaQueueCountPerInterfaceHasBeenSet = true; m_maximumEnaQueueCountPerInterface = value; }
    inline NetworkCardInfo& WithMaximumEnaQueueCountPerInterface(int value) { SetMaximumEnaQueueCountPerInterface(value); return *this;}
    ///@}
  private:

    int m_networkCardIndex{0};
    bool m_networkCardIndexHasBeenSet = false;

    Aws::String m_networkPerformance;
    bool m_networkPerformanceHasBeenSet = false;

    int m_maximumNetworkInterfaces{0};
    bool m_maximumNetworkInterfacesHasBeenSet = false;

    double m_baselineBandwidthInGbps{0.0};
    bool m_baselineBandwidthInGbpsHasBeenSet = false;

    double m_peakBandwidthInGbps{0.0};
    bool m_peakBandwidthInGbpsHasBeenSet = false;

    int m_defaultEnaQueueCountPerInterface{0};
    bool m_defaultEnaQueueCountPerInterfaceHasBeenSet = false;

    int m_maximumEnaQueueCount{0};
    bool m_maximumEnaQueueCountHasBeenSet = false;

    int m_maximumEnaQueueCountPerInterface{0};
    bool m_maximumEnaQueueCountPerInterfaceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
