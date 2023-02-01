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
    AWS_IOT_API LogTargetConfiguration();
    AWS_IOT_API LogTargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API LogTargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A log target</p>
     */
    inline const LogTarget& GetLogTarget() const{ return m_logTarget; }

    /**
     * <p>A log target</p>
     */
    inline bool LogTargetHasBeenSet() const { return m_logTargetHasBeenSet; }

    /**
     * <p>A log target</p>
     */
    inline void SetLogTarget(const LogTarget& value) { m_logTargetHasBeenSet = true; m_logTarget = value; }

    /**
     * <p>A log target</p>
     */
    inline void SetLogTarget(LogTarget&& value) { m_logTargetHasBeenSet = true; m_logTarget = std::move(value); }

    /**
     * <p>A log target</p>
     */
    inline LogTargetConfiguration& WithLogTarget(const LogTarget& value) { SetLogTarget(value); return *this;}

    /**
     * <p>A log target</p>
     */
    inline LogTargetConfiguration& WithLogTarget(LogTarget&& value) { SetLogTarget(std::move(value)); return *this;}


    /**
     * <p>The logging level.</p>
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    /**
     * <p>The logging level.</p>
     */
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }

    /**
     * <p>The logging level.</p>
     */
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }

    /**
     * <p>The logging level.</p>
     */
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }

    /**
     * <p>The logging level.</p>
     */
    inline LogTargetConfiguration& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    /**
     * <p>The logging level.</p>
     */
    inline LogTargetConfiguration& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}

  private:

    LogTarget m_logTarget;
    bool m_logTargetHasBeenSet = false;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
