/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/LoggingLevel.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Information about logging options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/LoggingOptions">AWS
   * API Reference</a></p>
   */
  class LoggingOptions
  {
  public:
    AWS_IOTANALYTICS_API LoggingOptions();
    AWS_IOTANALYTICS_API LoggingOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API LoggingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the role that grants permission to IoT Analytics to perform
     * logging.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role that grants permission to IoT Analytics to perform
     * logging.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the role that grants permission to IoT Analytics to perform
     * logging.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the role that grants permission to IoT Analytics to perform
     * logging.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role that grants permission to IoT Analytics to perform
     * logging.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role that grants permission to IoT Analytics to perform
     * logging.</p>
     */
    inline LoggingOptions& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that grants permission to IoT Analytics to perform
     * logging.</p>
     */
    inline LoggingOptions& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that grants permission to IoT Analytics to perform
     * logging.</p>
     */
    inline LoggingOptions& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The logging level. Currently, only ERROR is supported.</p>
     */
    inline const LoggingLevel& GetLevel() const{ return m_level; }

    /**
     * <p>The logging level. Currently, only ERROR is supported.</p>
     */
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }

    /**
     * <p>The logging level. Currently, only ERROR is supported.</p>
     */
    inline void SetLevel(const LoggingLevel& value) { m_levelHasBeenSet = true; m_level = value; }

    /**
     * <p>The logging level. Currently, only ERROR is supported.</p>
     */
    inline void SetLevel(LoggingLevel&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }

    /**
     * <p>The logging level. Currently, only ERROR is supported.</p>
     */
    inline LoggingOptions& WithLevel(const LoggingLevel& value) { SetLevel(value); return *this;}

    /**
     * <p>The logging level. Currently, only ERROR is supported.</p>
     */
    inline LoggingOptions& WithLevel(LoggingLevel&& value) { SetLevel(std::move(value)); return *this;}


    /**
     * <p>If true, logging is enabled for IoT Analytics.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>If true, logging is enabled for IoT Analytics.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>If true, logging is enabled for IoT Analytics.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>If true, logging is enabled for IoT Analytics.</p>
     */
    inline LoggingOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    LoggingLevel m_level;
    bool m_levelHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
