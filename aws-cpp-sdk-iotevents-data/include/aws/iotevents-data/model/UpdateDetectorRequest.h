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
#include <aws/iotevents-data/model/DetectorStateDefinition.h>
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
   * <p>Information used to update the detector (instance).</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/UpdateDetectorRequest">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTSDATA_API UpdateDetectorRequest
  {
  public:
    UpdateDetectorRequest();
    UpdateDetectorRequest(Aws::Utils::Json::JsonView jsonValue);
    UpdateDetectorRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID to assign to the detector update <code>"message"</code>. Each
     * <code>"messageId"</code> must be unique within each batch sent.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The ID to assign to the detector update <code>"message"</code>. Each
     * <code>"messageId"</code> must be unique within each batch sent.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The ID to assign to the detector update <code>"message"</code>. Each
     * <code>"messageId"</code> must be unique within each batch sent.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The ID to assign to the detector update <code>"message"</code>. Each
     * <code>"messageId"</code> must be unique within each batch sent.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The ID to assign to the detector update <code>"message"</code>. Each
     * <code>"messageId"</code> must be unique within each batch sent.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The ID to assign to the detector update <code>"message"</code>. Each
     * <code>"messageId"</code> must be unique within each batch sent.</p>
     */
    inline UpdateDetectorRequest& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The ID to assign to the detector update <code>"message"</code>. Each
     * <code>"messageId"</code> must be unique within each batch sent.</p>
     */
    inline UpdateDetectorRequest& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The ID to assign to the detector update <code>"message"</code>. Each
     * <code>"messageId"</code> must be unique within each batch sent.</p>
     */
    inline UpdateDetectorRequest& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The name of the detector model that created the detectors (instances).</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }

    /**
     * <p>The name of the detector model that created the detectors (instances).</p>
     */
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }

    /**
     * <p>The name of the detector model that created the detectors (instances).</p>
     */
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }

    /**
     * <p>The name of the detector model that created the detectors (instances).</p>
     */
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }

    /**
     * <p>The name of the detector model that created the detectors (instances).</p>
     */
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }

    /**
     * <p>The name of the detector model that created the detectors (instances).</p>
     */
    inline UpdateDetectorRequest& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}

    /**
     * <p>The name of the detector model that created the detectors (instances).</p>
     */
    inline UpdateDetectorRequest& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the detector model that created the detectors (instances).</p>
     */
    inline UpdateDetectorRequest& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}


    /**
     * <p>The value of the input key attribute (identifying the device or system) that
     * caused the creation of this detector (instance).</p>
     */
    inline const Aws::String& GetKeyValue() const{ return m_keyValue; }

    /**
     * <p>The value of the input key attribute (identifying the device or system) that
     * caused the creation of this detector (instance).</p>
     */
    inline bool KeyValueHasBeenSet() const { return m_keyValueHasBeenSet; }

    /**
     * <p>The value of the input key attribute (identifying the device or system) that
     * caused the creation of this detector (instance).</p>
     */
    inline void SetKeyValue(const Aws::String& value) { m_keyValueHasBeenSet = true; m_keyValue = value; }

    /**
     * <p>The value of the input key attribute (identifying the device or system) that
     * caused the creation of this detector (instance).</p>
     */
    inline void SetKeyValue(Aws::String&& value) { m_keyValueHasBeenSet = true; m_keyValue = std::move(value); }

    /**
     * <p>The value of the input key attribute (identifying the device or system) that
     * caused the creation of this detector (instance).</p>
     */
    inline void SetKeyValue(const char* value) { m_keyValueHasBeenSet = true; m_keyValue.assign(value); }

    /**
     * <p>The value of the input key attribute (identifying the device or system) that
     * caused the creation of this detector (instance).</p>
     */
    inline UpdateDetectorRequest& WithKeyValue(const Aws::String& value) { SetKeyValue(value); return *this;}

    /**
     * <p>The value of the input key attribute (identifying the device or system) that
     * caused the creation of this detector (instance).</p>
     */
    inline UpdateDetectorRequest& WithKeyValue(Aws::String&& value) { SetKeyValue(std::move(value)); return *this;}

    /**
     * <p>The value of the input key attribute (identifying the device or system) that
     * caused the creation of this detector (instance).</p>
     */
    inline UpdateDetectorRequest& WithKeyValue(const char* value) { SetKeyValue(value); return *this;}


    /**
     * <p>The new state, variable values, and timer settings of the detector
     * (instance).</p>
     */
    inline const DetectorStateDefinition& GetState() const{ return m_state; }

    /**
     * <p>The new state, variable values, and timer settings of the detector
     * (instance).</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The new state, variable values, and timer settings of the detector
     * (instance).</p>
     */
    inline void SetState(const DetectorStateDefinition& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The new state, variable values, and timer settings of the detector
     * (instance).</p>
     */
    inline void SetState(DetectorStateDefinition&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The new state, variable values, and timer settings of the detector
     * (instance).</p>
     */
    inline UpdateDetectorRequest& WithState(const DetectorStateDefinition& value) { SetState(value); return *this;}

    /**
     * <p>The new state, variable values, and timer settings of the detector
     * (instance).</p>
     */
    inline UpdateDetectorRequest& WithState(DetectorStateDefinition&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet;

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet;

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet;

    DetectorStateDefinition m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
