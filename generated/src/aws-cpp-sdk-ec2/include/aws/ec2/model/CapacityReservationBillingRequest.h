/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/CapacityReservationBillingRequestStatus.h>
#include <aws/ec2/model/CapacityReservationInfo.h>
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
   * <p>Information about a request to assign billing of the unused capacity of a
   * Capacity Reservation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationBillingRequest">AWS
   * API Reference</a></p>
   */
  class CapacityReservationBillingRequest
  {
  public:
    AWS_EC2_API CapacityReservationBillingRequest();
    AWS_EC2_API CapacityReservationBillingRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityReservationBillingRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const{ return m_capacityReservationId; }
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
    inline void SetCapacityReservationId(const Aws::String& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = value; }
    inline void SetCapacityReservationId(Aws::String&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::move(value); }
    inline void SetCapacityReservationId(const char* value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId.assign(value); }
    inline CapacityReservationBillingRequest& WithCapacityReservationId(const Aws::String& value) { SetCapacityReservationId(value); return *this;}
    inline CapacityReservationBillingRequest& WithCapacityReservationId(Aws::String&& value) { SetCapacityReservationId(std::move(value)); return *this;}
    inline CapacityReservationBillingRequest& WithCapacityReservationId(const char* value) { SetCapacityReservationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that initiated the request.</p>
     */
    inline const Aws::String& GetRequestedBy() const{ return m_requestedBy; }
    inline bool RequestedByHasBeenSet() const { return m_requestedByHasBeenSet; }
    inline void SetRequestedBy(const Aws::String& value) { m_requestedByHasBeenSet = true; m_requestedBy = value; }
    inline void SetRequestedBy(Aws::String&& value) { m_requestedByHasBeenSet = true; m_requestedBy = std::move(value); }
    inline void SetRequestedBy(const char* value) { m_requestedByHasBeenSet = true; m_requestedBy.assign(value); }
    inline CapacityReservationBillingRequest& WithRequestedBy(const Aws::String& value) { SetRequestedBy(value); return *this;}
    inline CapacityReservationBillingRequest& WithRequestedBy(Aws::String&& value) { SetRequestedBy(std::move(value)); return *this;}
    inline CapacityReservationBillingRequest& WithRequestedBy(const char* value) { SetRequestedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account to which the request was sent.</p>
     */
    inline const Aws::String& GetUnusedReservationBillingOwnerId() const{ return m_unusedReservationBillingOwnerId; }
    inline bool UnusedReservationBillingOwnerIdHasBeenSet() const { return m_unusedReservationBillingOwnerIdHasBeenSet; }
    inline void SetUnusedReservationBillingOwnerId(const Aws::String& value) { m_unusedReservationBillingOwnerIdHasBeenSet = true; m_unusedReservationBillingOwnerId = value; }
    inline void SetUnusedReservationBillingOwnerId(Aws::String&& value) { m_unusedReservationBillingOwnerIdHasBeenSet = true; m_unusedReservationBillingOwnerId = std::move(value); }
    inline void SetUnusedReservationBillingOwnerId(const char* value) { m_unusedReservationBillingOwnerIdHasBeenSet = true; m_unusedReservationBillingOwnerId.assign(value); }
    inline CapacityReservationBillingRequest& WithUnusedReservationBillingOwnerId(const Aws::String& value) { SetUnusedReservationBillingOwnerId(value); return *this;}
    inline CapacityReservationBillingRequest& WithUnusedReservationBillingOwnerId(Aws::String&& value) { SetUnusedReservationBillingOwnerId(std::move(value)); return *this;}
    inline CapacityReservationBillingRequest& WithUnusedReservationBillingOwnerId(const char* value) { SetUnusedReservationBillingOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC time format, at which the request was
     * initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline CapacityReservationBillingRequest& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline CapacityReservationBillingRequest& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/view-billing-transfers.html">
     * View billing assignment requests for a shared Amazon EC2 Capacity
     * Reservation</a>.</p>
     */
    inline const CapacityReservationBillingRequestStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CapacityReservationBillingRequestStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CapacityReservationBillingRequestStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CapacityReservationBillingRequest& WithStatus(const CapacityReservationBillingRequestStatus& value) { SetStatus(value); return *this;}
    inline CapacityReservationBillingRequest& WithStatus(CapacityReservationBillingRequestStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the status.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline CapacityReservationBillingRequest& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline CapacityReservationBillingRequest& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline CapacityReservationBillingRequest& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Capacity Reservation.</p>
     */
    inline const CapacityReservationInfo& GetCapacityReservationInfo() const{ return m_capacityReservationInfo; }
    inline bool CapacityReservationInfoHasBeenSet() const { return m_capacityReservationInfoHasBeenSet; }
    inline void SetCapacityReservationInfo(const CapacityReservationInfo& value) { m_capacityReservationInfoHasBeenSet = true; m_capacityReservationInfo = value; }
    inline void SetCapacityReservationInfo(CapacityReservationInfo&& value) { m_capacityReservationInfoHasBeenSet = true; m_capacityReservationInfo = std::move(value); }
    inline CapacityReservationBillingRequest& WithCapacityReservationInfo(const CapacityReservationInfo& value) { SetCapacityReservationInfo(value); return *this;}
    inline CapacityReservationBillingRequest& WithCapacityReservationInfo(CapacityReservationInfo&& value) { SetCapacityReservationInfo(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    Aws::String m_requestedBy;
    bool m_requestedByHasBeenSet = false;

    Aws::String m_unusedReservationBillingOwnerId;
    bool m_unusedReservationBillingOwnerIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    CapacityReservationBillingRequestStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    CapacityReservationInfo m_capacityReservationInfo;
    bool m_capacityReservationInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
