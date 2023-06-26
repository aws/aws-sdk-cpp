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
    AWS_EC2_API FailedCapacityReservationFleetCancellationResponse();
    AWS_EC2_API FailedCapacityReservationFleetCancellationResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FailedCapacityReservationFleetCancellationResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the Capacity Reservation Fleet that could not be cancelled.</p>
     */
    inline const Aws::String& GetCapacityReservationFleetId() const{ return m_capacityReservationFleetId; }

    /**
     * <p>The ID of the Capacity Reservation Fleet that could not be cancelled.</p>
     */
    inline bool CapacityReservationFleetIdHasBeenSet() const { return m_capacityReservationFleetIdHasBeenSet; }

    /**
     * <p>The ID of the Capacity Reservation Fleet that could not be cancelled.</p>
     */
    inline void SetCapacityReservationFleetId(const Aws::String& value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId = value; }

    /**
     * <p>The ID of the Capacity Reservation Fleet that could not be cancelled.</p>
     */
    inline void SetCapacityReservationFleetId(Aws::String&& value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId = std::move(value); }

    /**
     * <p>The ID of the Capacity Reservation Fleet that could not be cancelled.</p>
     */
    inline void SetCapacityReservationFleetId(const char* value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId.assign(value); }

    /**
     * <p>The ID of the Capacity Reservation Fleet that could not be cancelled.</p>
     */
    inline FailedCapacityReservationFleetCancellationResponse& WithCapacityReservationFleetId(const Aws::String& value) { SetCapacityReservationFleetId(value); return *this;}

    /**
     * <p>The ID of the Capacity Reservation Fleet that could not be cancelled.</p>
     */
    inline FailedCapacityReservationFleetCancellationResponse& WithCapacityReservationFleetId(Aws::String&& value) { SetCapacityReservationFleetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Capacity Reservation Fleet that could not be cancelled.</p>
     */
    inline FailedCapacityReservationFleetCancellationResponse& WithCapacityReservationFleetId(const char* value) { SetCapacityReservationFleetId(value); return *this;}


    /**
     * <p>Information about the Capacity Reservation Fleet cancellation error.</p>
     */
    inline const CancelCapacityReservationFleetError& GetCancelCapacityReservationFleetError() const{ return m_cancelCapacityReservationFleetError; }

    /**
     * <p>Information about the Capacity Reservation Fleet cancellation error.</p>
     */
    inline bool CancelCapacityReservationFleetErrorHasBeenSet() const { return m_cancelCapacityReservationFleetErrorHasBeenSet; }

    /**
     * <p>Information about the Capacity Reservation Fleet cancellation error.</p>
     */
    inline void SetCancelCapacityReservationFleetError(const CancelCapacityReservationFleetError& value) { m_cancelCapacityReservationFleetErrorHasBeenSet = true; m_cancelCapacityReservationFleetError = value; }

    /**
     * <p>Information about the Capacity Reservation Fleet cancellation error.</p>
     */
    inline void SetCancelCapacityReservationFleetError(CancelCapacityReservationFleetError&& value) { m_cancelCapacityReservationFleetErrorHasBeenSet = true; m_cancelCapacityReservationFleetError = std::move(value); }

    /**
     * <p>Information about the Capacity Reservation Fleet cancellation error.</p>
     */
    inline FailedCapacityReservationFleetCancellationResponse& WithCancelCapacityReservationFleetError(const CancelCapacityReservationFleetError& value) { SetCancelCapacityReservationFleetError(value); return *this;}

    /**
     * <p>Information about the Capacity Reservation Fleet cancellation error.</p>
     */
    inline FailedCapacityReservationFleetCancellationResponse& WithCancelCapacityReservationFleetError(CancelCapacityReservationFleetError&& value) { SetCancelCapacityReservationFleetError(std::move(value)); return *this;}

  private:

    Aws::String m_capacityReservationFleetId;
    bool m_capacityReservationFleetIdHasBeenSet = false;

    CancelCapacityReservationFleetError m_cancelCapacityReservationFleetError;
    bool m_cancelCapacityReservationFleetErrorHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
