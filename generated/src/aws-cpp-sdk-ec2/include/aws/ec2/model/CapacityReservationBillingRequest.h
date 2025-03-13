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
    AWS_EC2_API CapacityReservationBillingRequest() = default;
    AWS_EC2_API CapacityReservationBillingRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityReservationBillingRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    CapacityReservationBillingRequest& WithCapacityReservationId(CapacityReservationIdT&& value) { SetCapacityReservationId(std::forward<CapacityReservationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that initiated the request.</p>
     */
    inline const Aws::String& GetRequestedBy() const { return m_requestedBy; }
    inline bool RequestedByHasBeenSet() const { return m_requestedByHasBeenSet; }
    template<typename RequestedByT = Aws::String>
    void SetRequestedBy(RequestedByT&& value) { m_requestedByHasBeenSet = true; m_requestedBy = std::forward<RequestedByT>(value); }
    template<typename RequestedByT = Aws::String>
    CapacityReservationBillingRequest& WithRequestedBy(RequestedByT&& value) { SetRequestedBy(std::forward<RequestedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account to which the request was sent.</p>
     */
    inline const Aws::String& GetUnusedReservationBillingOwnerId() const { return m_unusedReservationBillingOwnerId; }
    inline bool UnusedReservationBillingOwnerIdHasBeenSet() const { return m_unusedReservationBillingOwnerIdHasBeenSet; }
    template<typename UnusedReservationBillingOwnerIdT = Aws::String>
    void SetUnusedReservationBillingOwnerId(UnusedReservationBillingOwnerIdT&& value) { m_unusedReservationBillingOwnerIdHasBeenSet = true; m_unusedReservationBillingOwnerId = std::forward<UnusedReservationBillingOwnerIdT>(value); }
    template<typename UnusedReservationBillingOwnerIdT = Aws::String>
    CapacityReservationBillingRequest& WithUnusedReservationBillingOwnerId(UnusedReservationBillingOwnerIdT&& value) { SetUnusedReservationBillingOwnerId(std::forward<UnusedReservationBillingOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC time format, at which the request was
     * initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    CapacityReservationBillingRequest& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/view-billing-transfers.html">
     * View billing assignment requests for a shared Amazon EC2 Capacity
     * Reservation</a>.</p>
     */
    inline CapacityReservationBillingRequestStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CapacityReservationBillingRequestStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CapacityReservationBillingRequest& WithStatus(CapacityReservationBillingRequestStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the status.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    CapacityReservationBillingRequest& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Capacity Reservation.</p>
     */
    inline const CapacityReservationInfo& GetCapacityReservationInfo() const { return m_capacityReservationInfo; }
    inline bool CapacityReservationInfoHasBeenSet() const { return m_capacityReservationInfoHasBeenSet; }
    template<typename CapacityReservationInfoT = CapacityReservationInfo>
    void SetCapacityReservationInfo(CapacityReservationInfoT&& value) { m_capacityReservationInfoHasBeenSet = true; m_capacityReservationInfo = std::forward<CapacityReservationInfoT>(value); }
    template<typename CapacityReservationInfoT = CapacityReservationInfo>
    CapacityReservationBillingRequest& WithCapacityReservationInfo(CapacityReservationInfoT&& value) { SetCapacityReservationInfo(std::forward<CapacityReservationInfoT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    Aws::String m_requestedBy;
    bool m_requestedByHasBeenSet = false;

    Aws::String m_unusedReservationBillingOwnerId;
    bool m_unusedReservationBillingOwnerIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    CapacityReservationBillingRequestStatus m_status{CapacityReservationBillingRequestStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    CapacityReservationInfo m_capacityReservationInfo;
    bool m_capacityReservationInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
