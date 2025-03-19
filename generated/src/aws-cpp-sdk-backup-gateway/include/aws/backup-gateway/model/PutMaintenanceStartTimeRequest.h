/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/backup-gateway/BackupGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BackupGateway
{
namespace Model
{

  /**
   */
  class PutMaintenanceStartTimeRequest : public BackupGatewayRequest
  {
  public:
    AWS_BACKUPGATEWAY_API PutMaintenanceStartTimeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMaintenanceStartTime"; }

    AWS_BACKUPGATEWAY_API Aws::String SerializePayload() const override;

    AWS_BACKUPGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The day of the month start maintenance on a gateway.</p> <p>Valid values
     * range from <code>Sunday</code> to <code>Saturday</code>.</p>
     */
    inline int GetDayOfMonth() const { return m_dayOfMonth; }
    inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }
    inline void SetDayOfMonth(int value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = value; }
    inline PutMaintenanceStartTimeRequest& WithDayOfMonth(int value) { SetDayOfMonth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day of the week to start maintenance on a gateway.</p>
     */
    inline int GetDayOfWeek() const { return m_dayOfWeek; }
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }
    inline void SetDayOfWeek(int value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }
    inline PutMaintenanceStartTimeRequest& WithDayOfWeek(int value) { SetDayOfWeek(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the gateway, used to specify its
     * maintenance start time.</p>
     */
    inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }
    template<typename GatewayArnT = Aws::String>
    void SetGatewayArn(GatewayArnT&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::forward<GatewayArnT>(value); }
    template<typename GatewayArnT = Aws::String>
    PutMaintenanceStartTimeRequest& WithGatewayArn(GatewayArnT&& value) { SetGatewayArn(std::forward<GatewayArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hour of the day to start maintenance on a gateway.</p>
     */
    inline int GetHourOfDay() const { return m_hourOfDay; }
    inline bool HourOfDayHasBeenSet() const { return m_hourOfDayHasBeenSet; }
    inline void SetHourOfDay(int value) { m_hourOfDayHasBeenSet = true; m_hourOfDay = value; }
    inline PutMaintenanceStartTimeRequest& WithHourOfDay(int value) { SetHourOfDay(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minute of the hour to start maintenance on a gateway.</p>
     */
    inline int GetMinuteOfHour() const { return m_minuteOfHour; }
    inline bool MinuteOfHourHasBeenSet() const { return m_minuteOfHourHasBeenSet; }
    inline void SetMinuteOfHour(int value) { m_minuteOfHourHasBeenSet = true; m_minuteOfHour = value; }
    inline PutMaintenanceStartTimeRequest& WithMinuteOfHour(int value) { SetMinuteOfHour(value); return *this;}
    ///@}
  private:

    int m_dayOfMonth{0};
    bool m_dayOfMonthHasBeenSet = false;

    int m_dayOfWeek{0};
    bool m_dayOfWeekHasBeenSet = false;

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;

    int m_hourOfDay{0};
    bool m_hourOfDayHasBeenSet = false;

    int m_minuteOfHour{0};
    bool m_minuteOfHourHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
