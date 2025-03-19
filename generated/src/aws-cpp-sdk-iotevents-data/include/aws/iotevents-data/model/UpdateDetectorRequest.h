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
    AWS_IOTEVENTSDATA_API UpdateDetectorRequest() = default;
    AWS_IOTEVENTSDATA_API UpdateDetectorRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API UpdateDetectorRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID to assign to the detector update <code>"message"</code>. Each
     * <code>"messageId"</code> must be unique within each batch sent.</p>
     */
    inline const Aws::String& GetMessageId() const { return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    template<typename MessageIdT = Aws::String>
    void SetMessageId(MessageIdT&& value) { m_messageIdHasBeenSet = true; m_messageId = std::forward<MessageIdT>(value); }
    template<typename MessageIdT = Aws::String>
    UpdateDetectorRequest& WithMessageId(MessageIdT&& value) { SetMessageId(std::forward<MessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the detector model that created the detectors (instances).</p>
     */
    inline const Aws::String& GetDetectorModelName() const { return m_detectorModelName; }
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }
    template<typename DetectorModelNameT = Aws::String>
    void SetDetectorModelName(DetectorModelNameT&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::forward<DetectorModelNameT>(value); }
    template<typename DetectorModelNameT = Aws::String>
    UpdateDetectorRequest& WithDetectorModelName(DetectorModelNameT&& value) { SetDetectorModelName(std::forward<DetectorModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the input key attribute (identifying the device or system) that
     * caused the creation of this detector (instance).</p>
     */
    inline const Aws::String& GetKeyValue() const { return m_keyValue; }
    inline bool KeyValueHasBeenSet() const { return m_keyValueHasBeenSet; }
    template<typename KeyValueT = Aws::String>
    void SetKeyValue(KeyValueT&& value) { m_keyValueHasBeenSet = true; m_keyValue = std::forward<KeyValueT>(value); }
    template<typename KeyValueT = Aws::String>
    UpdateDetectorRequest& WithKeyValue(KeyValueT&& value) { SetKeyValue(std::forward<KeyValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new state, variable values, and timer settings of the detector
     * (instance).</p>
     */
    inline const DetectorStateDefinition& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = DetectorStateDefinition>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = DetectorStateDefinition>
    UpdateDetectorRequest& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
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
