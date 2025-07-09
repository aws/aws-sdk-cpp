/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CapacityBlockInterconnectStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/CapacityReservationStatus.h>
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
   * <p>Describes the availability of capacity for a Capacity Block.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityBlockStatus">AWS
   * API Reference</a></p>
   */
  class CapacityBlockStatus
  {
  public:
    AWS_EC2_API CapacityBlockStatus() = default;
    AWS_EC2_API CapacityBlockStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityBlockStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Capacity Block.</p>
     */
    inline const Aws::String& GetCapacityBlockId() const { return m_capacityBlockId; }
    inline bool CapacityBlockIdHasBeenSet() const { return m_capacityBlockIdHasBeenSet; }
    template<typename CapacityBlockIdT = Aws::String>
    void SetCapacityBlockId(CapacityBlockIdT&& value) { m_capacityBlockIdHasBeenSet = true; m_capacityBlockId = std::forward<CapacityBlockIdT>(value); }
    template<typename CapacityBlockIdT = Aws::String>
    CapacityBlockStatus& WithCapacityBlockId(CapacityBlockIdT&& value) { SetCapacityBlockId(std::forward<CapacityBlockIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the high-bandwidth accelerator interconnect. Possible states
     * include:</p> <ul> <li> <p> <code>ok</code> the accelerator interconnect is
     * healthy.</p> </li> <li> <p> <code>impaired</code> - accelerator interconnect
     * communication is impaired.</p> </li> <li> <p> <code>insufficient-data</code> -
     * insufficient data to determine accelerator interconnect status.</p> </li> </ul>
     */
    inline CapacityBlockInterconnectStatus GetInterconnectStatus() const { return m_interconnectStatus; }
    inline bool InterconnectStatusHasBeenSet() const { return m_interconnectStatusHasBeenSet; }
    inline void SetInterconnectStatus(CapacityBlockInterconnectStatus value) { m_interconnectStatusHasBeenSet = true; m_interconnectStatus = value; }
    inline CapacityBlockStatus& WithInterconnectStatus(CapacityBlockInterconnectStatus value) { SetInterconnectStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The combined amount of <code>Available</code> and <code>Unavailable</code>
     * capacity in the Capacity Block.</p>
     */
    inline int GetTotalCapacity() const { return m_totalCapacity; }
    inline bool TotalCapacityHasBeenSet() const { return m_totalCapacityHasBeenSet; }
    inline void SetTotalCapacity(int value) { m_totalCapacityHasBeenSet = true; m_totalCapacity = value; }
    inline CapacityBlockStatus& WithTotalCapacity(int value) { SetTotalCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remaining capacity. Indicates the number of resources that can be
     * launched into the Capacity Block.</p>
     */
    inline int GetTotalAvailableCapacity() const { return m_totalAvailableCapacity; }
    inline bool TotalAvailableCapacityHasBeenSet() const { return m_totalAvailableCapacityHasBeenSet; }
    inline void SetTotalAvailableCapacity(int value) { m_totalAvailableCapacityHasBeenSet = true; m_totalAvailableCapacity = value; }
    inline CapacityBlockStatus& WithTotalAvailableCapacity(int value) { SetTotalAvailableCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unavailable capacity. Indicates the instance capacity that is unavailable
     * for use due to a system status check failure.</p>
     */
    inline int GetTotalUnavailableCapacity() const { return m_totalUnavailableCapacity; }
    inline bool TotalUnavailableCapacityHasBeenSet() const { return m_totalUnavailableCapacityHasBeenSet; }
    inline void SetTotalUnavailableCapacity(int value) { m_totalUnavailableCapacityHasBeenSet = true; m_totalUnavailableCapacity = value; }
    inline CapacityBlockStatus& WithTotalUnavailableCapacity(int value) { SetTotalUnavailableCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability of capacity for the Capacity Block reservations.</p>
     */
    inline const Aws::Vector<CapacityReservationStatus>& GetCapacityReservationStatuses() const { return m_capacityReservationStatuses; }
    inline bool CapacityReservationStatusesHasBeenSet() const { return m_capacityReservationStatusesHasBeenSet; }
    template<typename CapacityReservationStatusesT = Aws::Vector<CapacityReservationStatus>>
    void SetCapacityReservationStatuses(CapacityReservationStatusesT&& value) { m_capacityReservationStatusesHasBeenSet = true; m_capacityReservationStatuses = std::forward<CapacityReservationStatusesT>(value); }
    template<typename CapacityReservationStatusesT = Aws::Vector<CapacityReservationStatus>>
    CapacityBlockStatus& WithCapacityReservationStatuses(CapacityReservationStatusesT&& value) { SetCapacityReservationStatuses(std::forward<CapacityReservationStatusesT>(value)); return *this;}
    template<typename CapacityReservationStatusesT = CapacityReservationStatus>
    CapacityBlockStatus& AddCapacityReservationStatuses(CapacityReservationStatusesT&& value) { m_capacityReservationStatusesHasBeenSet = true; m_capacityReservationStatuses.emplace_back(std::forward<CapacityReservationStatusesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_capacityBlockId;
    bool m_capacityBlockIdHasBeenSet = false;

    CapacityBlockInterconnectStatus m_interconnectStatus{CapacityBlockInterconnectStatus::NOT_SET};
    bool m_interconnectStatusHasBeenSet = false;

    int m_totalCapacity{0};
    bool m_totalCapacityHasBeenSet = false;

    int m_totalAvailableCapacity{0};
    bool m_totalAvailableCapacityHasBeenSet = false;

    int m_totalUnavailableCapacity{0};
    bool m_totalUnavailableCapacityHasBeenSet = false;

    Aws::Vector<CapacityReservationStatus> m_capacityReservationStatuses;
    bool m_capacityReservationStatusesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
