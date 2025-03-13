/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/iot/model/LogTarget.h>
#include <aws/iot/model/LogLevel.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class SetV2LoggingLevelRequest : public IoTRequest
  {
  public:
    AWS_IOT_API SetV2LoggingLevelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetV2LoggingLevel"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The log target.</p>
     */
    inline const LogTarget& GetLogTarget() const { return m_logTarget; }
    inline bool LogTargetHasBeenSet() const { return m_logTargetHasBeenSet; }
    template<typename LogTargetT = LogTarget>
    void SetLogTarget(LogTargetT&& value) { m_logTargetHasBeenSet = true; m_logTarget = std::forward<LogTargetT>(value); }
    template<typename LogTargetT = LogTarget>
    SetV2LoggingLevelRequest& WithLogTarget(LogTargetT&& value) { SetLogTarget(std::forward<LogTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log level.</p>
     */
    inline LogLevel GetLogLevel() const { return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(LogLevel value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline SetV2LoggingLevelRequest& WithLogLevel(LogLevel value) { SetLogLevel(value); return *this;}
    ///@}
  private:

    LogTarget m_logTarget;
    bool m_logTargetHasBeenSet = false;

    LogLevel m_logLevel{LogLevel::NOT_SET};
    bool m_logLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
