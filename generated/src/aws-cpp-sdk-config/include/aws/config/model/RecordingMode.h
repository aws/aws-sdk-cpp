/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/RecordingFrequency.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/RecordingModeOverride.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Specifies the default recording frequency that Config uses to record
   * configuration changes. Config supports <i>Continuous recording</i> and <i>Daily
   * recording</i>.</p> <ul> <li> <p>Continuous recording allows you to record
   * configuration changes continuously whenever a change occurs.</p> </li> <li>
   * <p>Daily recording allows you to receive a configuration item (CI) representing
   * the most recent state of your resources over the last 24-hour period, only if
   * it’s different from the previous CI recorded. </p> </li> </ul> 
   * <p>Firewall Manager depends on continuous recording to monitor your resources.
   * If you are using Firewall Manager, it is recommended that you set the recording
   * frequency to Continuous.</p>  <p>You can also override the recording
   * frequency for specific resource types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/RecordingMode">AWS
   * API Reference</a></p>
   */
  class RecordingMode
  {
  public:
    AWS_CONFIGSERVICE_API RecordingMode() = default;
    AWS_CONFIGSERVICE_API RecordingMode(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API RecordingMode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default recording frequency that Config uses to record configuration
     * changes.</p>  <p>Daily recording cannot be specified for the
     * following resource types:</p> <ul> <li> <p>
     * <code>AWS::Config::ResourceCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConformancePackCompliance</code> </p> </li> <li> <p>
     * <code>AWS::Config::ConfigurationRecorder</code> </p> </li> </ul> <p>For the
     * <b>allSupported</b> (<code>ALL_SUPPORTED_RESOURCE_TYPES</code>) recording
     * strategy, these resource types will be set to Continuous recording.</p>
     * 
     */
    inline RecordingFrequency GetRecordingFrequency() const { return m_recordingFrequency; }
    inline bool RecordingFrequencyHasBeenSet() const { return m_recordingFrequencyHasBeenSet; }
    inline void SetRecordingFrequency(RecordingFrequency value) { m_recordingFrequencyHasBeenSet = true; m_recordingFrequency = value; }
    inline RecordingMode& WithRecordingFrequency(RecordingFrequency value) { SetRecordingFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>recordingModeOverride</code> objects for you to specify
     * your overrides for the recording mode. The <code>recordingModeOverride</code>
     * object in the <code>recordingModeOverrides</code> array consists of three
     * fields: a <code>description</code>, the new <code>recordingFrequency</code>, and
     * an array of <code>resourceTypes</code> to override.</p>
     */
    inline const Aws::Vector<RecordingModeOverride>& GetRecordingModeOverrides() const { return m_recordingModeOverrides; }
    inline bool RecordingModeOverridesHasBeenSet() const { return m_recordingModeOverridesHasBeenSet; }
    template<typename RecordingModeOverridesT = Aws::Vector<RecordingModeOverride>>
    void SetRecordingModeOverrides(RecordingModeOverridesT&& value) { m_recordingModeOverridesHasBeenSet = true; m_recordingModeOverrides = std::forward<RecordingModeOverridesT>(value); }
    template<typename RecordingModeOverridesT = Aws::Vector<RecordingModeOverride>>
    RecordingMode& WithRecordingModeOverrides(RecordingModeOverridesT&& value) { SetRecordingModeOverrides(std::forward<RecordingModeOverridesT>(value)); return *this;}
    template<typename RecordingModeOverridesT = RecordingModeOverride>
    RecordingMode& AddRecordingModeOverrides(RecordingModeOverridesT&& value) { m_recordingModeOverridesHasBeenSet = true; m_recordingModeOverrides.emplace_back(std::forward<RecordingModeOverridesT>(value)); return *this; }
    ///@}
  private:

    RecordingFrequency m_recordingFrequency{RecordingFrequency::NOT_SET};
    bool m_recordingFrequencyHasBeenSet = false;

    Aws::Vector<RecordingModeOverride> m_recordingModeOverrides;
    bool m_recordingModeOverridesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
