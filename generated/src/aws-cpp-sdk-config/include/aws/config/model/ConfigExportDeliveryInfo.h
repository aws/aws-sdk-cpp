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
    AWS_CONFIGSERVICE_API ConfigExportDeliveryInfo() = default;
    AWS_CONFIGSERVICE_API ConfigExportDeliveryInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConfigExportDeliveryInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Status of the last attempted delivery.</p>
     */
    inline DeliveryStatus GetLastStatus() const { return m_lastStatus; }
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }
    inline void SetLastStatus(DeliveryStatus value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }
    inline ConfigExportDeliveryInfo& WithLastStatus(DeliveryStatus value) { SetLastStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code from the last attempted delivery.</p>
     */
    inline const Aws::String& GetLastErrorCode() const { return m_lastErrorCode; }
    inline bool LastErrorCodeHasBeenSet() const { return m_lastErrorCodeHasBeenSet; }
    template<typename LastErrorCodeT = Aws::String>
    void SetLastErrorCode(LastErrorCodeT&& value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode = std::forward<LastErrorCodeT>(value); }
    template<typename LastErrorCodeT = Aws::String>
    ConfigExportDeliveryInfo& WithLastErrorCode(LastErrorCodeT&& value) { SetLastErrorCode(std::forward<LastErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message from the last attempted delivery.</p>
     */
    inline const Aws::String& GetLastErrorMessage() const { return m_lastErrorMessage; }
    inline bool LastErrorMessageHasBeenSet() const { return m_lastErrorMessageHasBeenSet; }
    template<typename LastErrorMessageT = Aws::String>
    void SetLastErrorMessage(LastErrorMessageT&& value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage = std::forward<LastErrorMessageT>(value); }
    template<typename LastErrorMessageT = Aws::String>
    ConfigExportDeliveryInfo& WithLastErrorMessage(LastErrorMessageT&& value) { SetLastErrorMessage(std::forward<LastErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the last attempted delivery.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAttemptTime() const { return m_lastAttemptTime; }
    inline bool LastAttemptTimeHasBeenSet() const { return m_lastAttemptTimeHasBeenSet; }
    template<typename LastAttemptTimeT = Aws::Utils::DateTime>
    void SetLastAttemptTime(LastAttemptTimeT&& value) { m_lastAttemptTimeHasBeenSet = true; m_lastAttemptTime = std::forward<LastAttemptTimeT>(value); }
    template<typename LastAttemptTimeT = Aws::Utils::DateTime>
    ConfigExportDeliveryInfo& WithLastAttemptTime(LastAttemptTimeT&& value) { SetLastAttemptTime(std::forward<LastAttemptTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the last successful delivery.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulTime() const { return m_lastSuccessfulTime; }
    inline bool LastSuccessfulTimeHasBeenSet() const { return m_lastSuccessfulTimeHasBeenSet; }
    template<typename LastSuccessfulTimeT = Aws::Utils::DateTime>
    void SetLastSuccessfulTime(LastSuccessfulTimeT&& value) { m_lastSuccessfulTimeHasBeenSet = true; m_lastSuccessfulTime = std::forward<LastSuccessfulTimeT>(value); }
    template<typename LastSuccessfulTimeT = Aws::Utils::DateTime>
    ConfigExportDeliveryInfo& WithLastSuccessfulTime(LastSuccessfulTimeT&& value) { SetLastSuccessfulTime(std::forward<LastSuccessfulTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the next delivery occurs.</p>
     */
    inline const Aws::Utils::DateTime& GetNextDeliveryTime() const { return m_nextDeliveryTime; }
    inline bool NextDeliveryTimeHasBeenSet() const { return m_nextDeliveryTimeHasBeenSet; }
    template<typename NextDeliveryTimeT = Aws::Utils::DateTime>
    void SetNextDeliveryTime(NextDeliveryTimeT&& value) { m_nextDeliveryTimeHasBeenSet = true; m_nextDeliveryTime = std::forward<NextDeliveryTimeT>(value); }
    template<typename NextDeliveryTimeT = Aws::Utils::DateTime>
    ConfigExportDeliveryInfo& WithNextDeliveryTime(NextDeliveryTimeT&& value) { SetNextDeliveryTime(std::forward<NextDeliveryTimeT>(value)); return *this;}
    ///@}
  private:

    DeliveryStatus m_lastStatus{DeliveryStatus::NOT_SET};
    bool m_lastStatusHasBeenSet = false;

    Aws::String m_lastErrorCode;
    bool m_lastErrorCodeHasBeenSet = false;

    Aws::String m_lastErrorMessage;
    bool m_lastErrorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastAttemptTime{};
    bool m_lastAttemptTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulTime{};
    bool m_lastSuccessfulTimeHasBeenSet = false;

    Aws::Utils::DateTime m_nextDeliveryTime{};
    bool m_nextDeliveryTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
