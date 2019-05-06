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
  class AWS_IOT_API SetV2LoggingLevelRequest : public IoTRequest
  {
  public:
    SetV2LoggingLevelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetV2LoggingLevel"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The log target.</p>
     */
    inline const LogTarget& GetLogTarget() const{ return m_logTarget; }

    /**
     * <p>The log target.</p>
     */
    inline bool LogTargetHasBeenSet() const { return m_logTargetHasBeenSet; }

    /**
     * <p>The log target.</p>
     */
    inline void SetLogTarget(const LogTarget& value) { m_logTargetHasBeenSet = true; m_logTarget = value; }

    /**
     * <p>The log target.</p>
     */
    inline void SetLogTarget(LogTarget&& value) { m_logTargetHasBeenSet = true; m_logTarget = std::move(value); }

    /**
     * <p>The log target.</p>
     */
    inline SetV2LoggingLevelRequest& WithLogTarget(const LogTarget& value) { SetLogTarget(value); return *this;}

    /**
     * <p>The log target.</p>
     */
    inline SetV2LoggingLevelRequest& WithLogTarget(LogTarget&& value) { SetLogTarget(std::move(value)); return *this;}


    /**
     * <p>The log level.</p>
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    /**
     * <p>The log level.</p>
     */
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }

    /**
     * <p>The log level.</p>
     */
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }

    /**
     * <p>The log level.</p>
     */
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }

    /**
     * <p>The log level.</p>
     */
    inline SetV2LoggingLevelRequest& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    /**
     * <p>The log level.</p>
     */
    inline SetV2LoggingLevelRequest& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}

  private:

    LogTarget m_logTarget;
    bool m_logTargetHasBeenSet;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
