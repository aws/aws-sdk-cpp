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
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_IOT_API SetV2LoggingOptionsRequest : public IoTRequest
  {
  public:
    SetV2LoggingOptionsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetV2LoggingOptions"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The role ARN that allows IoT to write to Cloudwatch logs.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The role ARN that allows IoT to write to Cloudwatch logs.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The role ARN that allows IoT to write to Cloudwatch logs.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The role ARN that allows IoT to write to Cloudwatch logs.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The role ARN that allows IoT to write to Cloudwatch logs.</p>
     */
    inline SetV2LoggingOptionsRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The role ARN that allows IoT to write to Cloudwatch logs.</p>
     */
    inline SetV2LoggingOptionsRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The role ARN that allows IoT to write to Cloudwatch logs.</p>
     */
    inline SetV2LoggingOptionsRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The default logging level.</p>
     */
    inline const LogLevel& GetDefaultLogLevel() const{ return m_defaultLogLevel; }

    /**
     * <p>The default logging level.</p>
     */
    inline void SetDefaultLogLevel(const LogLevel& value) { m_defaultLogLevelHasBeenSet = true; m_defaultLogLevel = value; }

    /**
     * <p>The default logging level.</p>
     */
    inline void SetDefaultLogLevel(LogLevel&& value) { m_defaultLogLevelHasBeenSet = true; m_defaultLogLevel = std::move(value); }

    /**
     * <p>The default logging level.</p>
     */
    inline SetV2LoggingOptionsRequest& WithDefaultLogLevel(const LogLevel& value) { SetDefaultLogLevel(value); return *this;}

    /**
     * <p>The default logging level.</p>
     */
    inline SetV2LoggingOptionsRequest& WithDefaultLogLevel(LogLevel&& value) { SetDefaultLogLevel(std::move(value)); return *this;}


    /**
     * <p>Set to true to disable all logs, otherwise set to false.</p>
     */
    inline bool GetDisableAllLogs() const{ return m_disableAllLogs; }

    /**
     * <p>Set to true to disable all logs, otherwise set to false.</p>
     */
    inline void SetDisableAllLogs(bool value) { m_disableAllLogsHasBeenSet = true; m_disableAllLogs = value; }

    /**
     * <p>Set to true to disable all logs, otherwise set to false.</p>
     */
    inline SetV2LoggingOptionsRequest& WithDisableAllLogs(bool value) { SetDisableAllLogs(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    LogLevel m_defaultLogLevel;
    bool m_defaultLogLevelHasBeenSet;

    bool m_disableAllLogs;
    bool m_disableAllLogsHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
