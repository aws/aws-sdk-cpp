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
    AWS_EC2_API NetworkCardInfo();
    AWS_EC2_API NetworkCardInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkCardInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The index of the network card.</p>
     */
    inline int GetNetworkCardIndex() const{ return m_networkCardIndex; }
    inline bool NetworkCardIndexHasBeenSet() const { return m_networkCardIndexHasBeenSet; }
    inline void SetNetworkCardIndex(int value) { m_networkCardIndexHasBeenSet = true; m_networkCardIndex = value; }
    inline NetworkCardInfo& WithNetworkCardIndex(int value) { SetNetworkCardIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network performance of the network card.</p>
     */
    inline const Aws::String& GetNetworkPerformance() const{ return m_networkPerformance; }
    inline bool NetworkPerformanceHasBeenSet() const { return m_networkPerformanceHasBeenSet; }
    inline void SetNetworkPerformance(const Aws::String& value) { m_networkPerformanceHasBeenSet = true; m_networkPerformance = value; }
    inline void SetNetworkPerformance(Aws::String&& value) { m_networkPerformanceHasBeenSet = true; m_networkPerformance = std::move(value); }
    inline void SetNetworkPerformance(const char* value) { m_networkPerformanceHasBeenSet = true; m_networkPerformance.assign(value); }
    inline NetworkCardInfo& WithNetworkPerformance(const Aws::String& value) { SetNetworkPerformance(value); return *this;}
    inline NetworkCardInfo& WithNetworkPerformance(Aws::String&& value) { SetNetworkPerformance(std::move(value)); return *this;}
    inline NetworkCardInfo& WithNetworkPerformance(const char* value) { SetNetworkPerformance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of network interfaces for the network card.</p>
     */
    inline int GetMaximumNetworkInterfaces() const{ return m_maximumNetworkInterfaces; }
    inline bool MaximumNetworkInterfacesHasBeenSet() const { return m_maximumNetworkInterfacesHasBeenSet; }
    inline void SetMaximumNetworkInterfaces(int value) { m_maximumNetworkInterfacesHasBeenSet = true; m_maximumNetworkInterfaces = value; }
    inline NetworkCardInfo& WithMaximumNetworkInterfaces(int value) { SetMaximumNetworkInterfaces(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The baseline network performance of the network card, in Gbps.</p>
     */
    inline double GetBaselineBandwidthInGbps() const{ return m_baselineBandwidthInGbps; }
    inline bool BaselineBandwidthInGbpsHasBeenSet() const { return m_baselineBandwidthInGbpsHasBeenSet; }
    inline void SetBaselineBandwidthInGbps(double value) { m_baselineBandwidthInGbpsHasBeenSet = true; m_baselineBandwidthInGbps = value; }
    inline NetworkCardInfo& WithBaselineBandwidthInGbps(double value) { SetBaselineBandwidthInGbps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The peak (burst) network performance of the network card, in Gbps.</p>
     */
    inline double GetPeakBandwidthInGbps() const{ return m_peakBandwidthInGbps; }
    inline bool PeakBandwidthInGbpsHasBeenSet() const { return m_peakBandwidthInGbpsHasBeenSet; }
    inline void SetPeakBandwidthInGbps(double value) { m_peakBandwidthInGbpsHasBeenSet = true; m_peakBandwidthInGbps = value; }
    inline NetworkCardInfo& WithPeakBandwidthInGbps(double value) { SetPeakBandwidthInGbps(value); return *this;}
    ///@}
  private:

    int m_networkCardIndex;
    bool m_networkCardIndexHasBeenSet = false;

    Aws::String m_networkPerformance;
    bool m_networkPerformanceHasBeenSet = false;

    int m_maximumNetworkInterfaces;
    bool m_maximumNetworkInterfacesHasBeenSet = false;

    double m_baselineBandwidthInGbps;
    bool m_baselineBandwidthInGbpsHasBeenSet = false;

    double m_peakBandwidthInGbps;
    bool m_peakBandwidthInGbpsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
