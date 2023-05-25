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
   * <p>Provides status of the delivery of the snapshot or the configuration history
   * to the specified Amazon S3 bucket. Also provides the status of notifications
   * about the Amazon S3 delivery to the specified Amazon SNS topic.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConfigExportDeliveryInfo">AWS
   * API Reference</a></p>
   */
  class ConfigExportDeliveryInfo
  {
  public:
    AWS_CONFIGSERVICE_API ConfigExportDeliveryInfo();
    AWS_CONFIGSERVICE_API ConfigExportDeliveryInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConfigExportDeliveryInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Status of the last attempted delivery.</p>
     */
    inline const DeliveryStatus& GetLastStatus() const{ return m_lastStatus; }

    /**
     * <p>Status of the last attempted delivery.</p>
     */
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }

    /**
     * <p>Status of the last attempted delivery.</p>
     */
    inline void SetLastStatus(const DeliveryStatus& value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }

    /**
     * <p>Status of the last attempted delivery.</p>
     */
    inline void SetLastStatus(DeliveryStatus&& value) { m_lastStatusHasBeenSet = true; m_lastStatus = std::move(value); }

    /**
     * <p>Status of the last attempted delivery.</p>
     */
    inline ConfigExportDeliveryInfo& WithLastStatus(const DeliveryStatus& value) { SetLastStatus(value); return *this;}

    /**
     * <p>Status of the last attempted delivery.</p>
     */
    inline ConfigExportDeliveryInfo& WithLastStatus(DeliveryStatus&& value) { SetLastStatus(std::move(value)); return *this;}


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
    inline ConfigExportDeliveryInfo& WithLastErrorCode(const Aws::String& value) { SetLastErrorCode(value); return *this;}

    /**
     * <p>The error code from the last attempted delivery.</p>
     */
    inline ConfigExportDeliveryInfo& WithLastErrorCode(Aws::String&& value) { SetLastErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code from the last attempted delivery.</p>
     */
    inline ConfigExportDeliveryInfo& WithLastErrorCode(const char* value) { SetLastErrorCode(value); return *this;}


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
    inline ConfigExportDeliveryInfo& WithLastErrorMessage(const Aws::String& value) { SetLastErrorMessage(value); return *this;}

    /**
     * <p>The error message from the last attempted delivery.</p>
     */
    inline ConfigExportDeliveryInfo& WithLastErrorMessage(Aws::String&& value) { SetLastErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message from the last attempted delivery.</p>
     */
    inline ConfigExportDeliveryInfo& WithLastErrorMessage(const char* value) { SetLastErrorMessage(value); return *this;}


    /**
     * <p>The time of the last attempted delivery.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAttemptTime() const{ return m_lastAttemptTime; }

    /**
     * <p>The time of the last attempted delivery.</p>
     */
    inline bool LastAttemptTimeHasBeenSet() const { return m_lastAttemptTimeHasBeenSet; }

    /**
     * <p>The time of the last attempted delivery.</p>
     */
    inline void SetLastAttemptTime(const Aws::Utils::DateTime& value) { m_lastAttemptTimeHasBeenSet = true; m_lastAttemptTime = value; }

    /**
     * <p>The time of the last attempted delivery.</p>
     */
    inline void SetLastAttemptTime(Aws::Utils::DateTime&& value) { m_lastAttemptTimeHasBeenSet = true; m_lastAttemptTime = std::move(value); }

    /**
     * <p>The time of the last attempted delivery.</p>
     */
    inline ConfigExportDeliveryInfo& WithLastAttemptTime(const Aws::Utils::DateTime& value) { SetLastAttemptTime(value); return *this;}

    /**
     * <p>The time of the last attempted delivery.</p>
     */
    inline ConfigExportDeliveryInfo& WithLastAttemptTime(Aws::Utils::DateTime&& value) { SetLastAttemptTime(std::move(value)); return *this;}


    /**
     * <p>The time of the last successful delivery.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulTime() const{ return m_lastSuccessfulTime; }

    /**
     * <p>The time of the last successful delivery.</p>
     */
    inline bool LastSuccessfulTimeHasBeenSet() const { return m_lastSuccessfulTimeHasBeenSet; }

    /**
     * <p>The time of the last successful delivery.</p>
     */
    inline void SetLastSuccessfulTime(const Aws::Utils::DateTime& value) { m_lastSuccessfulTimeHasBeenSet = true; m_lastSuccessfulTime = value; }

    /**
     * <p>The time of the last successful delivery.</p>
     */
    inline void SetLastSuccessfulTime(Aws::Utils::DateTime&& value) { m_lastSuccessfulTimeHasBeenSet = true; m_lastSuccessfulTime = std::move(value); }

    /**
     * <p>The time of the last successful delivery.</p>
     */
    inline ConfigExportDeliveryInfo& WithLastSuccessfulTime(const Aws::Utils::DateTime& value) { SetLastSuccessfulTime(value); return *this;}

    /**
     * <p>The time of the last successful delivery.</p>
     */
    inline ConfigExportDeliveryInfo& WithLastSuccessfulTime(Aws::Utils::DateTime&& value) { SetLastSuccessfulTime(std::move(value)); return *this;}


    /**
     * <p>The time that the next delivery occurs.</p>
     */
    inline const Aws::Utils::DateTime& GetNextDeliveryTime() const{ return m_nextDeliveryTime; }

    /**
     * <p>The time that the next delivery occurs.</p>
     */
    inline bool NextDeliveryTimeHasBeenSet() const { return m_nextDeliveryTimeHasBeenSet; }

    /**
     * <p>The time that the next delivery occurs.</p>
     */
    inline void SetNextDeliveryTime(const Aws::Utils::DateTime& value) { m_nextDeliveryTimeHasBeenSet = true; m_nextDeliveryTime = value; }

    /**
     * <p>The time that the next delivery occurs.</p>
     */
    inline void SetNextDeliveryTime(Aws::Utils::DateTime&& value) { m_nextDeliveryTimeHasBeenSet = true; m_nextDeliveryTime = std::move(value); }

    /**
     * <p>The time that the next delivery occurs.</p>
     */
    inline ConfigExportDeliveryInfo& WithNextDeliveryTime(const Aws::Utils::DateTime& value) { SetNextDeliveryTime(value); return *this;}

    /**
     * <p>The time that the next delivery occurs.</p>
     */
    inline ConfigExportDeliveryInfo& WithNextDeliveryTime(Aws::Utils::DateTime&& value) { SetNextDeliveryTime(std::move(value)); return *this;}

  private:

    DeliveryStatus m_lastStatus;
    bool m_lastStatusHasBeenSet = false;

    Aws::String m_lastErrorCode;
    bool m_lastErrorCodeHasBeenSet = false;

    Aws::String m_lastErrorMessage;
    bool m_lastErrorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastAttemptTime;
    bool m_lastAttemptTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulTime;
    bool m_lastSuccessfulTimeHasBeenSet = false;

    Aws::Utils::DateTime m_nextDeliveryTime;
    bool m_nextDeliveryTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
