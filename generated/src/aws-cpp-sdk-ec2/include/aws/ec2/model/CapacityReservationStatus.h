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
   * <p>Describes the availability of capacity for a Capacity
   * Reservation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationStatus">AWS
   * API Reference</a></p>
   */
  class CapacityReservationStatus
  {
  public:
    AWS_EC2_API CapacityReservationStatus() = default;
    AWS_EC2_API CapacityReservationStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityReservationStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const { return m_capacityReservationId; }
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
    template<typename CapacityReservationIdT = Aws::String>
    void SetCapacityReservationId(CapacityReservationIdT&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::forward<CapacityReservationIdT>(value); }
    template<typename CapacityReservationIdT = Aws::String>
    CapacityReservationStatus& WithCapacityReservationId(CapacityReservationIdT&& value) { SetCapacityReservationId(std::forward<CapacityReservationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The combined amount of <code>Available</code> and <code>Unavailable</code>
     * capacity in the Capacity Reservation.</p>
     */
    inline int GetTotalCapacity() const { return m_totalCapacity; }
    inline bool TotalCapacityHasBeenSet() const { return m_totalCapacityHasBeenSet; }
    inline void SetTotalCapacity(int value) { m_totalCapacityHasBeenSet = true; m_totalCapacity = value; }
    inline CapacityReservationStatus& WithTotalCapacity(int value) { SetTotalCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remaining capacity. Indicates the amount of resources that can be
     * launched into the Capacity Reservation.</p>
     */
    inline int GetTotalAvailableCapacity() const { return m_totalAvailableCapacity; }
    inline bool TotalAvailableCapacityHasBeenSet() const { return m_totalAvailableCapacityHasBeenSet; }
    inline void SetTotalAvailableCapacity(int value) { m_totalAvailableCapacityHasBeenSet = true; m_totalAvailableCapacity = value; }
    inline CapacityReservationStatus& WithTotalAvailableCapacity(int value) { SetTotalAvailableCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The used capacity. Indicates that the capacity is in use by resources that
     * are running in the Capacity Reservation.</p>
     */
    inline int GetTotalUnavailableCapacity() const { return m_totalUnavailableCapacity; }
    inline bool TotalUnavailableCapacityHasBeenSet() const { return m_totalUnavailableCapacityHasBeenSet; }
    inline void SetTotalUnavailableCapacity(int value) { m_totalUnavailableCapacityHasBeenSet = true; m_totalUnavailableCapacity = value; }
    inline CapacityReservationStatus& WithTotalUnavailableCapacity(int value) { SetTotalUnavailableCapacity(value); return *this;}
    ///@}
  private:

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    int m_totalCapacity{0};
    bool m_totalCapacityHasBeenSet = false;

    int m_totalAvailableCapacity{0};
    bool m_totalAvailableCapacityHasBeenSet = false;

    int m_totalUnavailableCapacity{0};
    bool m_totalUnavailableCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
