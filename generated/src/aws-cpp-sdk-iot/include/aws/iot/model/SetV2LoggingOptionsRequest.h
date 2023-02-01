/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class SetV2LoggingOptionsRequest : public IoTRequest
  {
  public:
    AWS_IOT_API SetV2LoggingOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetV2LoggingOptions"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the role that allows IoT to write to Cloudwatch logs.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role that allows IoT to write to Cloudwatch logs.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the role that allows IoT to write to Cloudwatch logs.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the role that allows IoT to write to Cloudwatch logs.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role that allows IoT to write to Cloudwatch logs.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role that allows IoT to write to Cloudwatch logs.</p>
     */
    inline SetV2LoggingOptionsRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that allows IoT to write to Cloudwatch logs.</p>
     */
    inline SetV2LoggingOptionsRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that allows IoT to write to Cloudwatch logs.</p>
     */
    inline SetV2LoggingOptionsRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The default logging level.</p>
     */
    inline const LogLevel& GetDefaultLogLevel() const{ return m_defaultLogLevel; }

    /**
     * <p>The default logging level.</p>
     */
    inline bool DefaultLogLevelHasBeenSet() const { return m_defaultLogLevelHasBeenSet; }

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
     * <p>If true all logs are disabled. The default is false.</p>
     */
    inline bool GetDisableAllLogs() const{ return m_disableAllLogs; }

    /**
     * <p>If true all logs are disabled. The default is false.</p>
     */
    inline bool DisableAllLogsHasBeenSet() const { return m_disableAllLogsHasBeenSet; }

    /**
     * <p>If true all logs are disabled. The default is false.</p>
     */
    inline void SetDisableAllLogs(bool value) { m_disableAllLogsHasBeenSet = true; m_disableAllLogs = value; }

    /**
     * <p>If true all logs are disabled. The default is false.</p>
     */
    inline SetV2LoggingOptionsRequest& WithDisableAllLogs(bool value) { SetDisableAllLogs(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    LogLevel m_defaultLogLevel;
    bool m_defaultLogLevelHasBeenSet = false;

    bool m_disableAllLogs;
    bool m_disableAllLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
