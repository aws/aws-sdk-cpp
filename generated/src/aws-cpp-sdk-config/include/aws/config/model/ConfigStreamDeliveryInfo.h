/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/DeliveryStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  /**
   * <p>A list that contains the status of the delivery of the configuration stream
   * notification to the Amazon SNS topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConfigStreamDeliveryInfo">AWS
   * API Reference</a></p>
   */
  class ConfigStreamDeliveryInfo
  {
  public:
    AWS_CONFIGSERVICE_API ConfigStreamDeliveryInfo();
    AWS_CONFIGSERVICE_API ConfigStreamDeliveryInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConfigStreamDeliveryInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Status of the last attempted delivery.</p> <p> <b>Note</b> Providing an SNS
     * topic on a <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_DeliveryChannel.html">DeliveryChannel</a>
     * for Config is optional. If the SNS delivery is turned off, the last status will
     * be <b>Not_Applicable</b>.</p>
     */
    inline const DeliveryStatus& GetLastStatus() const{ return m_lastStatus; }

    /**
     * <p>Status of the last attempted delivery.</p> <p> <b>Note</b> Providing an SNS
     * topic on a <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_DeliveryChannel.html">DeliveryChannel</a>
     * for Config is optional. If the SNS delivery is turned off, the last status will
     * be <b>Not_Applicable</b>.</p>
     */
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }

    /**
     * <p>Status of the last attempted delivery.</p> <p> <b>Note</b> Providing an SNS
     * topic on a <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_DeliveryChannel.html">DeliveryChannel</a>
     * for Config is optional. If the SNS delivery is turned off, the last status will
     * be <b>Not_Applicable</b>.</p>
     */
    inline void SetLastStatus(const DeliveryStatus& value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }

    /**
     * <p>Status of the last attempted delivery.</p> <p> <b>Note</b> Providing an SNS
     * topic on a <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_DeliveryChannel.html">DeliveryChannel</a>
     * for Config is optional. If the SNS delivery is turned off, the last status will
     * be <b>Not_Applicable</b>.</p>
     */
    inline void SetLastStatus(DeliveryStatus&& value) { m_lastStatusHasBeenSet = true; m_lastStatus = std::move(value); }

    /**
     * <p>Status of the last attempted delivery.</p> <p> <b>Note</b> Providing an SNS
     * topic on a <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_DeliveryChannel.html">DeliveryChannel</a>
     * for Config is optional. If the SNS delivery is turned off, the last status will
     * be <b>Not_Applicable</b>.</p>
     */
    inline ConfigStreamDeliveryInfo& WithLastStatus(const DeliveryStatus& value) { SetLastStatus(value); return *this;}

    /**
     * <p>Status of the last attempted delivery.</p> <p> <b>Note</b> Providing an SNS
     * topic on a <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_DeliveryChannel.html">DeliveryChannel</a>
     * for Config is optional. If the SNS delivery is turned off, the last status will
     * be <b>Not_Applicable</b>.</p>
     */
    inline ConfigStreamDeliveryInfo& WithLastStatus(DeliveryStatus&& value) { SetLastStatus(std::move(value)); return *this;}


    /**
     * <p>The error code from the last attempted delivery.</p>
     */
    inline const Aws::String& GetLastErrorCode() const{ return m_lastErrorCode; }

    /**
     * <p>The error code from the last attempted delivery.</p>
     */
    inline bool LastErrorCodeHasBeenSet() const { return m_lastErrorCodeHasBeenSet; }

    /**
     * <p>The error code from the last attempted delivery.</p>
     */
    inline void SetLastErrorCode(const Aws::String& value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode = value; }

    /**
     * <p>The error code from the last attempted delivery.</p>
     */
    inline void SetLastErrorCode(Aws::String&& value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode = std::move(value); }

    /**
     * <p>The error code from the last attempted delivery.</p>
     */
    inline void SetLastErrorCode(const char* value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode.assign(value); }

    /**
     * <p>The error code from the last attempted delivery.</p>
     */
    inline ConfigStreamDeliveryInfo& WithLastErrorCode(const Aws::String& value) { SetLastErrorCode(value); return *this;}

    /**
     * <p>The error code from the last attempted delivery.</p>
     */
    inline ConfigStreamDeliveryInfo& WithLastErrorCode(Aws::String&& value) { SetLastErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code from the last attempted delivery.</p>
     */
    inline ConfigStreamDeliveryInfo& WithLastErrorCode(const char* value) { SetLastErrorCode(value); return *this;}


    /**
     * <p>The error message from the last attempted delivery.</p>
     */
    inline const Aws::String& GetLastErrorMessage() const{ return m_lastErrorMessage; }

    /**
     * <p>The error message from the last attempted delivery.</p>
     */
    inline bool LastErrorMessageHasBeenSet() const { return m_lastErrorMessageHasBeenSet; }

    /**
     * <p>The error message from the last attempted delivery.</p>
     */
    inline void SetLastErrorMessage(const Aws::String& value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage = value; }

    /**
     * <p>The error message from the last attempted delivery.</p>
     */
    inline void SetLastErrorMessage(Aws::String&& value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage = std::move(value); }

    /**
     * <p>The error message from the last attempted delivery.</p>
     */
    inline void SetLastErrorMessage(const char* value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage.assign(value); }

    /**
     * <p>The error message from the last attempted delivery.</p>
     */
    inline ConfigStreamDeliveryInfo& WithLastErrorMessage(const Aws::String& value) { SetLastErrorMessage(value); return *this;}

    /**
     * <p>The error message from the last attempted delivery.</p>
     */
    inline ConfigStreamDeliveryInfo& WithLastErrorMessage(Aws::String&& value) { SetLastErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message from the last attempted delivery.</p>
     */
    inline ConfigStreamDeliveryInfo& WithLastErrorMessage(const char* value) { SetLastErrorMessage(value); return *this;}


    /**
     * <p>The time from the last status change.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusChangeTime() const{ return m_lastStatusChangeTime; }

    /**
     * <p>The time from the last status change.</p>
     */
    inline bool LastStatusChangeTimeHasBeenSet() const { return m_lastStatusChangeTimeHasBeenSet; }

    /**
     * <p>The time from the last status change.</p>
     */
    inline void SetLastStatusChangeTime(const Aws::Utils::DateTime& value) { m_lastStatusChangeTimeHasBeenSet = true; m_lastStatusChangeTime = value; }

    /**
     * <p>The time from the last status change.</p>
     */
    inline void SetLastStatusChangeTime(Aws::Utils::DateTime&& value) { m_lastStatusChangeTimeHasBeenSet = true; m_lastStatusChangeTime = std::move(value); }

    /**
     * <p>The time from the last status change.</p>
     */
    inline ConfigStreamDeliveryInfo& WithLastStatusChangeTime(const Aws::Utils::DateTime& value) { SetLastStatusChangeTime(value); return *this;}

    /**
     * <p>The time from the last status change.</p>
     */
    inline ConfigStreamDeliveryInfo& WithLastStatusChangeTime(Aws::Utils::DateTime&& value) { SetLastStatusChangeTime(std::move(value)); return *this;}

  private:

    DeliveryStatus m_lastStatus;
    bool m_lastStatusHasBeenSet = false;

    Aws::String m_lastErrorCode;
    bool m_lastErrorCodeHasBeenSet = false;

    Aws::String m_lastErrorMessage;
    bool m_lastErrorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusChangeTime;
    bool m_lastStatusChangeTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
