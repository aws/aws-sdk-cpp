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
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents-data/model/DetectorStateSummary.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/DetectorSummary">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTSDATA_API DetectorSummary
  {
  public:
    DetectorSummary();
    DetectorSummary(Aws::Utils::Json::JsonView jsonValue);
    DetectorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the detector model that created this detector (instance).</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }

    /**
     * <p>The name of the detector model that created this detector (instance).</p>
     */
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }

    /**
     * <p>The name of the detector model that created this detector (instance).</p>
     */
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }

    /**
     * <p>The name of the detector model that created this detector (instance).</p>
     */
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }

    /**
     * <p>The name of the detector model that created this detector (instance).</p>
     */
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }

    /**
     * <p>The name of the detector model that created this detector (instance).</p>
     */
    inline DetectorSummary& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}

    /**
     * <p>The name of the detector model that created this detector (instance).</p>
     */
    inline DetectorSummary& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the detector model that created this detector (instance).</p>
     */
    inline DetectorSummary& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}


    /**
     * <p>The value of the key (identifying the device or system) that caused the
     * creation of this detector (instance).</p>
     */
    inline const Aws::String& GetKeyValue() const{ return m_keyValue; }

    /**
     * <p>The value of the key (identifying the device or system) that caused the
     * creation of this detector (instance).</p>
     */
    inline bool KeyValueHasBeenSet() const { return m_keyValueHasBeenSet; }

    /**
     * <p>The value of the key (identifying the device or system) that caused the
     * creation of this detector (instance).</p>
     */
    inline void SetKeyValue(const Aws::String& value) { m_keyValueHasBeenSet = true; m_keyValue = value; }

    /**
     * <p>The value of the key (identifying the device or system) that caused the
     * creation of this detector (instance).</p>
     */
    inline void SetKeyValue(Aws::String&& value) { m_keyValueHasBeenSet = true; m_keyValue = std::move(value); }

    /**
     * <p>The value of the key (identifying the device or system) that caused the
     * creation of this detector (instance).</p>
     */
    inline void SetKeyValue(const char* value) { m_keyValueHasBeenSet = true; m_keyValue.assign(value); }

    /**
     * <p>The value of the key (identifying the device or system) that caused the
     * creation of this detector (instance).</p>
     */
    inline DetectorSummary& WithKeyValue(const Aws::String& value) { SetKeyValue(value); return *this;}

    /**
     * <p>The value of the key (identifying the device or system) that caused the
     * creation of this detector (instance).</p>
     */
    inline DetectorSummary& WithKeyValue(Aws::String&& value) { SetKeyValue(std::move(value)); return *this;}

    /**
     * <p>The value of the key (identifying the device or system) that caused the
     * creation of this detector (instance).</p>
     */
    inline DetectorSummary& WithKeyValue(const char* value) { SetKeyValue(value); return *this;}


    /**
     * <p>The version of the detector model that created this detector (instance).</p>
     */
    inline const Aws::String& GetDetectorModelVersion() const{ return m_detectorModelVersion; }

    /**
     * <p>The version of the detector model that created this detector (instance).</p>
     */
    inline bool DetectorModelVersionHasBeenSet() const { return m_detectorModelVersionHasBeenSet; }

    /**
     * <p>The version of the detector model that created this detector (instance).</p>
     */
    inline void SetDetectorModelVersion(const Aws::String& value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion = value; }

    /**
     * <p>The version of the detector model that created this detector (instance).</p>
     */
    inline void SetDetectorModelVersion(Aws::String&& value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion = std::move(value); }

    /**
     * <p>The version of the detector model that created this detector (instance).</p>
     */
    inline void SetDetectorModelVersion(const char* value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion.assign(value); }

    /**
     * <p>The version of the detector model that created this detector (instance).</p>
     */
    inline DetectorSummary& WithDetectorModelVersion(const Aws::String& value) { SetDetectorModelVersion(value); return *this;}

    /**
     * <p>The version of the detector model that created this detector (instance).</p>
     */
    inline DetectorSummary& WithDetectorModelVersion(Aws::String&& value) { SetDetectorModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the detector model that created this detector (instance).</p>
     */
    inline DetectorSummary& WithDetectorModelVersion(const char* value) { SetDetectorModelVersion(value); return *this;}


    /**
     * <p>The current state of the detector (instance).</p>
     */
    inline const DetectorStateSummary& GetState() const{ return m_state; }

    /**
     * <p>The current state of the detector (instance).</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the detector (instance).</p>
     */
    inline void SetState(const DetectorStateSummary& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the detector (instance).</p>
     */
    inline void SetState(DetectorStateSummary&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the detector (instance).</p>
     */
    inline DetectorSummary& WithState(const DetectorStateSummary& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the detector (instance).</p>
     */
    inline DetectorSummary& WithState(DetectorStateSummary&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The time the detector (instance) was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the detector (instance) was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the detector (instance) was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the detector (instance) was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the detector (instance) was created.</p>
     */
    inline DetectorSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the detector (instance) was created.</p>
     */
    inline DetectorSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time the detector (instance) was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The time the detector (instance) was last updated.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The time the detector (instance) was last updated.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The time the detector (instance) was last updated.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The time the detector (instance) was last updated.</p>
     */
    inline DetectorSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The time the detector (instance) was last updated.</p>
     */
    inline DetectorSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet;

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet;

    Aws::String m_detectorModelVersion;
    bool m_detectorModelVersionHasBeenSet;

    DetectorStateSummary m_state;
    bool m_stateHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
