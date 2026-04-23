/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_IOT_API LogTargetConfiguration
  {
  public:
    LogTargetConfiguration();
    LogTargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    LogTargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_logTargetHasBeenSet;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
