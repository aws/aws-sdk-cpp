/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/LogTarget.h>
#include <aws/iot/model/LogLevel.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The target configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/LogTargetConfiguration">AWS
   * API Reference</a></p>
   */
  class LogTargetConfiguration
  {
  public:
    AWS_IOT_API LogTargetConfiguration() = default;
    AWS_IOT_API LogTargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API LogTargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A log target</p>
     */
    inline const LogTarget& GetLogTarget() const { return m_logTarget; }
    inline bool LogTargetHasBeenSet() const { return m_logTargetHasBeenSet; }
    template<typename LogTargetT = LogTarget>
    void SetLogTarget(LogTargetT&& value) { m_logTargetHasBeenSet = true; m_logTarget = std::forward<LogTargetT>(value); }
    template<typename LogTargetT = LogTarget>
    LogTargetConfiguration& WithLogTarget(LogTargetT&& value) { SetLogTarget(std::forward<LogTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging level.</p>
     */
    inline LogLevel GetLogLevel() const { return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(LogLevel value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline LogTargetConfiguration& WithLogLevel(LogLevel value) { SetLogLevel(value); return *this;}
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
