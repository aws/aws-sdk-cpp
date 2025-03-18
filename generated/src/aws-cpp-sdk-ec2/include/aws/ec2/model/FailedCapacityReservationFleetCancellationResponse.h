/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CancelCapacityReservationFleetError.h>
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
   * <p>Describes a Capacity Reservation Fleet that could not be
   * cancelled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FailedCapacityReservationFleetCancellationResult">AWS
   * API Reference</a></p>
   */
  class FailedCapacityReservationFleetCancellationResponse
  {
  public:
    AWS_EC2_API FailedCapacityReservationFleetCancellationResponse() = default;
    AWS_EC2_API FailedCapacityReservationFleetCancellationResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FailedCapacityReservationFleetCancellationResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Capacity Reservation Fleet that could not be cancelled.</p>
     */
    inline const Aws::String& GetCapacityReservationFleetId() const { return m_capacityReservationFleetId; }
    inline bool CapacityReservationFleetIdHasBeenSet() const { return m_capacityReservationFleetIdHasBeenSet; }
    template<typename CapacityReservationFleetIdT = Aws::String>
    void SetCapacityReservationFleetId(CapacityReservationFleetIdT&& value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId = std::forward<CapacityReservationFleetIdT>(value); }
    template<typename CapacityReservationFleetIdT = Aws::String>
    FailedCapacityReservationFleetCancellationResponse& WithCapacityReservationFleetId(CapacityReservationFleetIdT&& value) { SetCapacityReservationFleetId(std::forward<CapacityReservationFleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Capacity Reservation Fleet cancellation error.</p>
     */
    inline const CancelCapacityReservationFleetError& GetCancelCapacityReservationFleetError() const { return m_cancelCapacityReservationFleetError; }
    inline bool CancelCapacityReservationFleetErrorHasBeenSet() const { return m_cancelCapacityReservationFleetErrorHasBeenSet; }
    template<typename CancelCapacityReservationFleetErrorT = CancelCapacityReservationFleetError>
    void SetCancelCapacityReservationFleetError(CancelCapacityReservationFleetErrorT&& value) { m_cancelCapacityReservationFleetErrorHasBeenSet = true; m_cancelCapacityReservationFleetError = std::forward<CancelCapacityReservationFleetErrorT>(value); }
    template<typename CancelCapacityReservationFleetErrorT = CancelCapacityReservationFleetError>
    FailedCapacityReservationFleetCancellationResponse& WithCancelCapacityReservationFleetError(CancelCapacityReservationFleetErrorT&& value) { SetCancelCapacityReservationFleetError(std::forward<CancelCapacityReservationFleetErrorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_capacityReservationFleetId;
    bool m_capacityReservationFleetIdHasBeenSet = false;

    CancelCapacityReservationFleetError m_cancelCapacityReservationFleetError;
    bool m_cancelCapacityReservationFleetErrorHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
