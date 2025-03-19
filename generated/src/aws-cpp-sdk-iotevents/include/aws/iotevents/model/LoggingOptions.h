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
    AWS_IOTEVENTS_API LoggingOptions() = default;
    AWS_IOTEVENTS_API LoggingOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API LoggingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the role that grants permission to AWS IoT Events to perform
     * logging.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    LoggingOptions& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging level.</p>
     */
    inline LoggingLevel GetLevel() const { return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(LoggingLevel value) { m_levelHasBeenSet = true; m_level = value; }
    inline LoggingOptions& WithLevel(LoggingLevel value) { SetLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If TRUE, logging is enabled for AWS IoT Events.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline LoggingOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information that identifies those detector models and their detectors
     * (instances) for which the logging level is given.</p>
     */
    inline const Aws::Vector<DetectorDebugOption>& GetDetectorDebugOptions() const { return m_detectorDebugOptions; }
    inline bool DetectorDebugOptionsHasBeenSet() const { return m_detectorDebugOptionsHasBeenSet; }
    template<typename DetectorDebugOptionsT = Aws::Vector<DetectorDebugOption>>
    void SetDetectorDebugOptions(DetectorDebugOptionsT&& value) { m_detectorDebugOptionsHasBeenSet = true; m_detectorDebugOptions = std::forward<DetectorDebugOptionsT>(value); }
    template<typename DetectorDebugOptionsT = Aws::Vector<DetectorDebugOption>>
    LoggingOptions& WithDetectorDebugOptions(DetectorDebugOptionsT&& value) { SetDetectorDebugOptions(std::forward<DetectorDebugOptionsT>(value)); return *this;}
    template<typename DetectorDebugOptionsT = DetectorDebugOption>
    LoggingOptions& AddDetectorDebugOptions(DetectorDebugOptionsT&& value) { m_detectorDebugOptionsHasBeenSet = true; m_detectorDebugOptions.emplace_back(std::forward<DetectorDebugOptionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    LoggingLevel m_level{LoggingLevel::NOT_SET};
    bool m_levelHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::Vector<DetectorDebugOption> m_detectorDebugOptions;
    bool m_detectorDebugOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
