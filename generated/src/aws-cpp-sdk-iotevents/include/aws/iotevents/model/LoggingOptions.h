/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/LoggingLevel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents/model/DetectorDebugOption.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>The values of the AWS IoT Events logging options.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/LoggingOptions">AWS
   * API Reference</a></p>
   */
  class LoggingOptions
  {
  public:
    AWS_IOTEVENTS_API LoggingOptions();
    AWS_IOTEVENTS_API LoggingOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API LoggingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform
     * logging.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform
     * logging.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform
     * logging.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform
     * logging.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform
     * logging.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform
     * logging.</p>
     */
    inline LoggingOptions& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform
     * logging.</p>
     */
    inline LoggingOptions& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform
     * logging.</p>
     */
    inline LoggingOptions& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The logging level.</p>
     */
    inline const LoggingLevel& GetLevel() const{ return m_level; }

    /**
     * <p>The logging level.</p>
     */
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }

    /**
     * <p>The logging level.</p>
     */
    inline void SetLevel(const LoggingLevel& value) { m_levelHasBeenSet = true; m_level = value; }

    /**
     * <p>The logging level.</p>
     */
    inline void SetLevel(LoggingLevel&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }

    /**
     * <p>The logging level.</p>
     */
    inline LoggingOptions& WithLevel(const LoggingLevel& value) { SetLevel(value); return *this;}

    /**
     * <p>The logging level.</p>
     */
    inline LoggingOptions& WithLevel(LoggingLevel&& value) { SetLevel(std::move(value)); return *this;}


    /**
     * <p>If TRUE, logging is enabled for AWS IoT Events.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>If TRUE, logging is enabled for AWS IoT Events.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>If TRUE, logging is enabled for AWS IoT Events.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>If TRUE, logging is enabled for AWS IoT Events.</p>
     */
    inline LoggingOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Information that identifies those detector models and their detectors
     * (instances) for which the logging level is given.</p>
     */
    inline const Aws::Vector<DetectorDebugOption>& GetDetectorDebugOptions() const{ return m_detectorDebugOptions; }

    /**
     * <p>Information that identifies those detector models and their detectors
     * (instances) for which the logging level is given.</p>
     */
    inline bool DetectorDebugOptionsHasBeenSet() const { return m_detectorDebugOptionsHasBeenSet; }

    /**
     * <p>Information that identifies those detector models and their detectors
     * (instances) for which the logging level is given.</p>
     */
    inline void SetDetectorDebugOptions(const Aws::Vector<DetectorDebugOption>& value) { m_detectorDebugOptionsHasBeenSet = true; m_detectorDebugOptions = value; }

    /**
     * <p>Information that identifies those detector models and their detectors
     * (instances) for which the logging level is given.</p>
     */
    inline void SetDetectorDebugOptions(Aws::Vector<DetectorDebugOption>&& value) { m_detectorDebugOptionsHasBeenSet = true; m_detectorDebugOptions = std::move(value); }

    /**
     * <p>Information that identifies those detector models and their detectors
     * (instances) for which the logging level is given.</p>
     */
    inline LoggingOptions& WithDetectorDebugOptions(const Aws::Vector<DetectorDebugOption>& value) { SetDetectorDebugOptions(value); return *this;}

    /**
     * <p>Information that identifies those detector models and their detectors
     * (instances) for which the logging level is given.</p>
     */
    inline LoggingOptions& WithDetectorDebugOptions(Aws::Vector<DetectorDebugOption>&& value) { SetDetectorDebugOptions(std::move(value)); return *this;}

    /**
     * <p>Information that identifies those detector models and their detectors
     * (instances) for which the logging level is given.</p>
     */
    inline LoggingOptions& AddDetectorDebugOptions(const DetectorDebugOption& value) { m_detectorDebugOptionsHasBeenSet = true; m_detectorDebugOptions.push_back(value); return *this; }

    /**
     * <p>Information that identifies those detector models and their detectors
     * (instances) for which the logging level is given.</p>
     */
    inline LoggingOptions& AddDetectorDebugOptions(DetectorDebugOption&& value) { m_detectorDebugOptionsHasBeenSet = true; m_detectorDebugOptions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    LoggingLevel m_level;
    bool m_levelHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Vector<DetectorDebugOption> m_detectorDebugOptions;
    bool m_detectorDebugOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
