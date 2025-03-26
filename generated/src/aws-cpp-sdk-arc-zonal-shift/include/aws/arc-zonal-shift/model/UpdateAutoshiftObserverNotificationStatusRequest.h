/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/arc-zonal-shift/ARCZonalShiftRequest.h>
#include <aws/arc-zonal-shift/model/AutoshiftObserverNotificationStatus.h>
#include <utility>

namespace Aws
{
namespace ARCZonalShift
{
namespace Model
{

  /**
   */
  class UpdateAutoshiftObserverNotificationStatusRequest : public ARCZonalShiftRequest
  {
  public:
    AWS_ARCZONALSHIFT_API UpdateAutoshiftObserverNotificationStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAutoshiftObserverNotificationStatus"; }

    AWS_ARCZONALSHIFT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The status to set for autoshift observer notification. If the status is
     * <code>ENABLED</code>, ARC includes all autoshift events when you use the Amazon
     * EventBridge pattern <code>Autoshift In Progress</code>. When the status is
     * <code>DISABLED</code>, ARC includes only autoshift events for autoshifts when
     * one or more of your resources is included in the autoshift. </p>
     */
    inline AutoshiftObserverNotificationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AutoshiftObserverNotificationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateAutoshiftObserverNotificationStatusRequest& WithStatus(AutoshiftObserverNotificationStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    AutoshiftObserverNotificationStatus m_status{AutoshiftObserverNotificationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
