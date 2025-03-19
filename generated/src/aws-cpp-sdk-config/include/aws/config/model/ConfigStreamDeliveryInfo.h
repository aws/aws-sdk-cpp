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
    AWS_CONFIGSERVICE_API ConfigStreamDeliveryInfo() = default;
    AWS_CONFIGSERVICE_API ConfigStreamDeliveryInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConfigStreamDeliveryInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Status of the last attempted delivery.</p> <p> <b>Note</b> Providing an SNS
     * topic on a <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_DeliveryChannel.html">DeliveryChannel</a>
     * for Config is optional. If the SNS delivery is turned off, the last status will
     * be <b>Not_Applicable</b>.</p>
     */
    inline DeliveryStatus GetLastStatus() const { return m_lastStatus; }
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }
    inline void SetLastStatus(DeliveryStatus value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }
    inline ConfigStreamDeliveryInfo& WithLastStatus(DeliveryStatus value) { SetLastStatus(value); return *this;}
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
    ConfigStreamDeliveryInfo& WithLastErrorCode(LastErrorCodeT&& value) { SetLastErrorCode(std::forward<LastErrorCodeT>(value)); return *this;}
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
    ConfigStreamDeliveryInfo& WithLastErrorMessage(LastErrorMessageT&& value) { SetLastErrorMessage(std::forward<LastErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time from the last status change.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusChangeTime() const { return m_lastStatusChangeTime; }
    inline bool LastStatusChangeTimeHasBeenSet() const { return m_lastStatusChangeTimeHasBeenSet; }
    template<typename LastStatusChangeTimeT = Aws::Utils::DateTime>
    void SetLastStatusChangeTime(LastStatusChangeTimeT&& value) { m_lastStatusChangeTimeHasBeenSet = true; m_lastStatusChangeTime = std::forward<LastStatusChangeTimeT>(value); }
    template<typename LastStatusChangeTimeT = Aws::Utils::DateTime>
    ConfigStreamDeliveryInfo& WithLastStatusChangeTime(LastStatusChangeTimeT&& value) { SetLastStatusChangeTime(std::forward<LastStatusChangeTimeT>(value)); return *this;}
    ///@}
  private:

    DeliveryStatus m_lastStatus{DeliveryStatus::NOT_SET};
    bool m_lastStatusHasBeenSet = false;

    Aws::String m_lastErrorCode;
    bool m_lastErrorCodeHasBeenSet = false;

    Aws::String m_lastErrorMessage;
    bool m_lastErrorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusChangeTime{};
    bool m_lastStatusChangeTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
