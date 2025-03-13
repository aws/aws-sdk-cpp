/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents-data/model/DetectorState.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTEventsData
{
namespace Model
{

  /**
   * <p>Information about the detector (instance).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/Detector">AWS
   * API Reference</a></p>
   */
  class Detector
  {
  public:
    AWS_IOTEVENTSDATA_API Detector() = default;
    AWS_IOTEVENTSDATA_API Detector(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Detector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the detector model that created this detector (instance).</p>
     */
    inline const Aws::String& GetDetectorModelName() const { return m_detectorModelName; }
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }
    template<typename DetectorModelNameT = Aws::String>
    void SetDetectorModelName(DetectorModelNameT&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::forward<DetectorModelNameT>(value); }
    template<typename DetectorModelNameT = Aws::String>
    Detector& WithDetectorModelName(DetectorModelNameT&& value) { SetDetectorModelName(std::forward<DetectorModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the key (identifying the device or system) that caused the
     * creation of this detector (instance).</p>
     */
    inline const Aws::String& GetKeyValue() const { return m_keyValue; }
    inline bool KeyValueHasBeenSet() const { return m_keyValueHasBeenSet; }
    template<typename KeyValueT = Aws::String>
    void SetKeyValue(KeyValueT&& value) { m_keyValueHasBeenSet = true; m_keyValue = std::forward<KeyValueT>(value); }
    template<typename KeyValueT = Aws::String>
    Detector& WithKeyValue(KeyValueT&& value) { SetKeyValue(std::forward<KeyValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the detector model that created this detector (instance).</p>
     */
    inline const Aws::String& GetDetectorModelVersion() const { return m_detectorModelVersion; }
    inline bool DetectorModelVersionHasBeenSet() const { return m_detectorModelVersionHasBeenSet; }
    template<typename DetectorModelVersionT = Aws::String>
    void SetDetectorModelVersion(DetectorModelVersionT&& value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion = std::forward<DetectorModelVersionT>(value); }
    template<typename DetectorModelVersionT = Aws::String>
    Detector& WithDetectorModelVersion(DetectorModelVersionT&& value) { SetDetectorModelVersion(std::forward<DetectorModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the detector (instance).</p>
     */
    inline const DetectorState& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = DetectorState>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = DetectorState>
    Detector& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the detector (instance) was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Detector& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the detector (instance) was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    Detector& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet = false;

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet = false;

    Aws::String m_detectorModelVersion;
    bool m_detectorModelVersionHasBeenSet = false;

    DetectorState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
