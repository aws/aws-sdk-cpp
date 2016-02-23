/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/DeliveryStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  /**
   * <p>A list that contains the status of the delivery of either the snapshot or the
   * configuration history to the specified Amazon S3 bucket.</p>
   */
  class AWS_CONFIGSERVICE_API ConfigExportDeliveryInfo
  {
  public:
    ConfigExportDeliveryInfo();
    ConfigExportDeliveryInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    ConfigExportDeliveryInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Status of the last attempted delivery.</p>
     */
    inline const DeliveryStatus& GetLastStatus() const{ return m_lastStatus; }

    /**
     * <p>Status of the last attempted delivery.</p>
     */
    inline void SetLastStatus(const DeliveryStatus& value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }

    /**
     * <p>Status of the last attempted delivery.</p>
     */
    inline void SetLastStatus(DeliveryStatus&& value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }

    /**
     * <p>Status of the last attempted delivery.</p>
     */
    inline ConfigExportDeliveryInfo& WithLastStatus(const DeliveryStatus& value) { SetLastStatus(value); return *this;}

    /**
     * <p>Status of the last attempted delivery.</p>
     */
    inline ConfigExportDeliveryInfo& WithLastStatus(DeliveryStatus&& value) { SetLastStatus(value); return *this;}

    /**
     * <p>The error code from the last attempted delivery.</p>
     */
    inline const Aws::String& GetLastErrorCode() const{ return m_lastErrorCode; }

    /**
     * <p>The error code from the last attempted delivery.</p>
     */
    inline void SetLastErrorCode(const Aws::String& value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode = value; }

    /**
     * <p>The error code from the last attempted delivery.</p>
     */
    inline void SetLastErrorCode(Aws::String&& value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode = value; }

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
    inline ConfigExportDeliveryInfo& WithLastErrorCode(Aws::String&& value) { SetLastErrorCode(value); return *this;}

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
    inline void SetLastErrorMessage(const Aws::String& value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage = value; }

    /**
     * <p>The error message from the last attempted delivery.</p>
     */
    inline void SetLastErrorMessage(Aws::String&& value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage = value; }

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
    inline ConfigExportDeliveryInfo& WithLastErrorMessage(Aws::String&& value) { SetLastErrorMessage(value); return *this;}

    /**
     * <p>The error message from the last attempted delivery.</p>
     */
    inline ConfigExportDeliveryInfo& WithLastErrorMessage(const char* value) { SetLastErrorMessage(value); return *this;}

    /**
     * <p>The time of the last attempted delivery.</p>
     */
    inline double GetLastAttemptTime() const{ return m_lastAttemptTime; }

    /**
     * <p>The time of the last attempted delivery.</p>
     */
    inline void SetLastAttemptTime(double value) { m_lastAttemptTimeHasBeenSet = true; m_lastAttemptTime = value; }

    /**
     * <p>The time of the last attempted delivery.</p>
     */
    inline ConfigExportDeliveryInfo& WithLastAttemptTime(double value) { SetLastAttemptTime(value); return *this;}

    /**
     * <p>The time of the last successful delivery.</p>
     */
    inline double GetLastSuccessfulTime() const{ return m_lastSuccessfulTime; }

    /**
     * <p>The time of the last successful delivery.</p>
     */
    inline void SetLastSuccessfulTime(double value) { m_lastSuccessfulTimeHasBeenSet = true; m_lastSuccessfulTime = value; }

    /**
     * <p>The time of the last successful delivery.</p>
     */
    inline ConfigExportDeliveryInfo& WithLastSuccessfulTime(double value) { SetLastSuccessfulTime(value); return *this;}

    /**
     * <p>The time that the next delivery occurs.</p>
     */
    inline double GetNextDeliveryTime() const{ return m_nextDeliveryTime; }

    /**
     * <p>The time that the next delivery occurs.</p>
     */
    inline void SetNextDeliveryTime(double value) { m_nextDeliveryTimeHasBeenSet = true; m_nextDeliveryTime = value; }

    /**
     * <p>The time that the next delivery occurs.</p>
     */
    inline ConfigExportDeliveryInfo& WithNextDeliveryTime(double value) { SetNextDeliveryTime(value); return *this;}

  private:
    DeliveryStatus m_lastStatus;
    bool m_lastStatusHasBeenSet;
    Aws::String m_lastErrorCode;
    bool m_lastErrorCodeHasBeenSet;
    Aws::String m_lastErrorMessage;
    bool m_lastErrorMessageHasBeenSet;
    double m_lastAttemptTime;
    bool m_lastAttemptTimeHasBeenSet;
    double m_lastSuccessfulTime;
    bool m_lastSuccessfulTimeHasBeenSet;
    double m_nextDeliveryTime;
    bool m_nextDeliveryTimeHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
