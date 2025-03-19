/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/CapacityReservationFleetState.h>
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
   * <p>Describes a Capacity Reservation Fleet that was successfully
   * cancelled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationFleetCancellationState">AWS
   * API Reference</a></p>
   */
  class CapacityReservationFleetCancellationState
  {
  public:
    AWS_EC2_API CapacityReservationFleetCancellationState() = default;
    AWS_EC2_API CapacityReservationFleetCancellationState(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityReservationFleetCancellationState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The current state of the Capacity Reservation Fleet.</p>
     */
    inline CapacityReservationFleetState GetCurrentFleetState() const { return m_currentFleetState; }
    inline bool CurrentFleetStateHasBeenSet() const { return m_currentFleetStateHasBeenSet; }
    inline void SetCurrentFleetState(CapacityReservationFleetState value) { m_currentFleetStateHasBeenSet = true; m_currentFleetState = value; }
    inline CapacityReservationFleetCancellationState& WithCurrentFleetState(CapacityReservationFleetState value) { SetCurrentFleetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous state of the Capacity Reservation Fleet.</p>
     */
    inline CapacityReservationFleetState GetPreviousFleetState() const { return m_previousFleetState; }
    inline bool PreviousFleetStateHasBeenSet() const { return m_previousFleetStateHasBeenSet; }
    inline void SetPreviousFleetState(CapacityReservationFleetState value) { m_previousFleetStateHasBeenSet = true; m_previousFleetState = value; }
    inline CapacityReservationFleetCancellationState& WithPreviousFleetState(CapacityReservationFleetState value) { SetPreviousFleetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Capacity Reservation Fleet that was successfully cancelled.</p>
     */
    inline const Aws::String& GetCapacityReservationFleetId() const { return m_capacityReservationFleetId; }
    inline bool CapacityReservationFleetIdHasBeenSet() const { return m_capacityReservationFleetIdHasBeenSet; }
    template<typename CapacityReservationFleetIdT = Aws::String>
    void SetCapacityReservationFleetId(CapacityReservationFleetIdT&& value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId = std::forward<CapacityReservationFleetIdT>(value); }
    template<typename CapacityReservationFleetIdT = Aws::String>
    CapacityReservationFleetCancellationState& WithCapacityReservationFleetId(CapacityReservationFleetIdT&& value) { SetCapacityReservationFleetId(std::forward<CapacityReservationFleetIdT>(value)); return *this;}
    ///@}
  private:

    CapacityReservationFleetState m_currentFleetState{CapacityReservationFleetState::NOT_SET};
    bool m_currentFleetStateHasBeenSet = false;

    CapacityReservationFleetState m_previousFleetState{CapacityReservationFleetState::NOT_SET};
    bool m_previousFleetStateHasBeenSet = false;

    Aws::String m_capacityReservationFleetId;
    bool m_capacityReservationFleetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
