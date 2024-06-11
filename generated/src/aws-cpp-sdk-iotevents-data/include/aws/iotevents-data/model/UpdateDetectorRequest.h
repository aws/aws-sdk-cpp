/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateDetectorRequest
  {
  public:
    AWS_IOTEVENTSDATA_API UpdateDetectorRequest();
    AWS_IOTEVENTSDATA_API UpdateDetectorRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API UpdateDetectorRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID to assign to the detector update <code>"message"</code>. Each
     * <code>"messageId"</code> must be unique within each batch sent.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }
    inline UpdateDetectorRequest& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline UpdateDetectorRequest& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline UpdateDetectorRequest& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the detector model that created the detectors (instances).</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }
    inline UpdateDetectorRequest& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}
    inline UpdateDetectorRequest& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}
    inline UpdateDetectorRequest& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the input key attribute (identifying the device or system) that
     * caused the creation of this detector (instance).</p>
     */
    inline const Aws::String& GetKeyValue() const{ return m_keyValue; }
    inline bool KeyValueHasBeenSet() const { return m_keyValueHasBeenSet; }
    inline void SetKeyValue(const Aws::String& value) { m_keyValueHasBeenSet = true; m_keyValue = value; }
    inline void SetKeyValue(Aws::String&& value) { m_keyValueHasBeenSet = true; m_keyValue = std::move(value); }
    inline void SetKeyValue(const char* value) { m_keyValueHasBeenSet = true; m_keyValue.assign(value); }
    inline UpdateDetectorRequest& WithKeyValue(const Aws::String& value) { SetKeyValue(value); return *this;}
    inline UpdateDetectorRequest& WithKeyValue(Aws::String&& value) { SetKeyValue(std::move(value)); return *this;}
    inline UpdateDetectorRequest& WithKeyValue(const char* value) { SetKeyValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new state, variable values, and timer settings of the detector
     * (instance).</p>
     */
    inline const DetectorStateDefinition& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const DetectorStateDefinition& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(DetectorStateDefinition&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline UpdateDetectorRequest& WithState(const DetectorStateDefinition& value) { SetState(value); return *this;}
    inline UpdateDetectorRequest& WithState(DetectorStateDefinition&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet = false;

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet = false;

    DetectorStateDefinition m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
