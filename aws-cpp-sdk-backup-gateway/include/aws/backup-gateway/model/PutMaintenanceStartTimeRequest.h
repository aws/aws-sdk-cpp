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
    AWS_BACKUPGATEWAY_API PutMaintenanceStartTimeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMaintenanceStartTime"; }

    AWS_BACKUPGATEWAY_API Aws::String SerializePayload() const override;

    AWS_BACKUPGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The day of the month start maintenance on a gateway.</p> <p>Valid values
     * range from <code>Sunday</code> to <code>Saturday</code>.</p>
     */
    inline int GetDayOfMonth() const{ return m_dayOfMonth; }

    /**
     * <p>The day of the month start maintenance on a gateway.</p> <p>Valid values
     * range from <code>Sunday</code> to <code>Saturday</code>.</p>
     */
    inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }

    /**
     * <p>The day of the month start maintenance on a gateway.</p> <p>Valid values
     * range from <code>Sunday</code> to <code>Saturday</code>.</p>
     */
    inline void SetDayOfMonth(int value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = value; }

    /**
     * <p>The day of the month start maintenance on a gateway.</p> <p>Valid values
     * range from <code>Sunday</code> to <code>Saturday</code>.</p>
     */
    inline PutMaintenanceStartTimeRequest& WithDayOfMonth(int value) { SetDayOfMonth(value); return *this;}


    /**
     * <p>The day of the week to start maintenance on a gateway.</p>
     */
    inline int GetDayOfWeek() const{ return m_dayOfWeek; }

    /**
     * <p>The day of the week to start maintenance on a gateway.</p>
     */
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }

    /**
     * <p>The day of the week to start maintenance on a gateway.</p>
     */
    inline void SetDayOfWeek(int value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }

    /**
     * <p>The day of the week to start maintenance on a gateway.</p>
     */
    inline PutMaintenanceStartTimeRequest& WithDayOfWeek(int value) { SetDayOfWeek(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the gateway, used to specify its
     * maintenance start time.</p>
     */
    inline const Aws::String& GetGatewayArn() const{ return m_gatewayArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the gateway, used to specify its
     * maintenance start time.</p>
     */
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the gateway, used to specify its
     * maintenance start time.</p>
     */
    inline void SetGatewayArn(const Aws::String& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the gateway, used to specify its
     * maintenance start time.</p>
     */
    inline void SetGatewayArn(Aws::String&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the gateway, used to specify its
     * maintenance start time.</p>
     */
    inline void SetGatewayArn(const char* value) { m_gatewayArnHasBeenSet = true; m_gatewayArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the gateway, used to specify its
     * maintenance start time.</p>
     */
    inline PutMaintenanceStartTimeRequest& WithGatewayArn(const Aws::String& value) { SetGatewayArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the gateway, used to specify its
     * maintenance start time.</p>
     */
    inline PutMaintenanceStartTimeRequest& WithGatewayArn(Aws::String&& value) { SetGatewayArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the gateway, used to specify its
     * maintenance start time.</p>
     */
    inline PutMaintenanceStartTimeRequest& WithGatewayArn(const char* value) { SetGatewayArn(value); return *this;}


    /**
     * <p>The hour of the day to start maintenance on a gateway.</p>
     */
    inline int GetHourOfDay() const{ return m_hourOfDay; }

    /**
     * <p>The hour of the day to start maintenance on a gateway.</p>
     */
    inline bool HourOfDayHasBeenSet() const { return m_hourOfDayHasBeenSet; }

    /**
     * <p>The hour of the day to start maintenance on a gateway.</p>
     */
    inline void SetHourOfDay(int value) { m_hourOfDayHasBeenSet = true; m_hourOfDay = value; }

    /**
     * <p>The hour of the day to start maintenance on a gateway.</p>
     */
    inline PutMaintenanceStartTimeRequest& WithHourOfDay(int value) { SetHourOfDay(value); return *this;}


    /**
     * <p>The minute of the hour to start maintenance on a gateway.</p>
     */
    inline int GetMinuteOfHour() const{ return m_minuteOfHour; }

    /**
     * <p>The minute of the hour to start maintenance on a gateway.</p>
     */
    inline bool MinuteOfHourHasBeenSet() const { return m_minuteOfHourHasBeenSet; }

    /**
     * <p>The minute of the hour to start maintenance on a gateway.</p>
     */
    inline void SetMinuteOfHour(int value) { m_minuteOfHourHasBeenSet = true; m_minuteOfHour = value; }

    /**
     * <p>The minute of the hour to start maintenance on a gateway.</p>
     */
    inline PutMaintenanceStartTimeRequest& WithMinuteOfHour(int value) { SetMinuteOfHour(value); return *this;}

  private:

    int m_dayOfMonth;
    bool m_dayOfMonthHasBeenSet = false;

    int m_dayOfWeek;
    bool m_dayOfWeekHasBeenSet = false;

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;

    int m_hourOfDay;
    bool m_hourOfDayHasBeenSet = false;

    int m_minuteOfHour;
    bool m_minuteOfHourHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
