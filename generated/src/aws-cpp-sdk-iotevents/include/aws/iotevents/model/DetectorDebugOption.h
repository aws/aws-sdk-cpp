/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The detector model and the specific detectors (instances) for which the
   * logging level is given.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DetectorDebugOption">AWS
   * API Reference</a></p>
   */
  class DetectorDebugOption
  {
  public:
    AWS_IOTEVENTS_API DetectorDebugOption() = default;
    AWS_IOTEVENTS_API DetectorDebugOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API DetectorDebugOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelName() const { return m_detectorModelName; }
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }
    template<typename DetectorModelNameT = Aws::String>
    void SetDetectorModelName(DetectorModelNameT&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::forward<DetectorModelNameT>(value); }
    template<typename DetectorModelNameT = Aws::String>
    DetectorDebugOption& WithDetectorModelName(DetectorModelNameT&& value) { SetDetectorModelName(std::forward<DetectorModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the input attribute key used to create the detector (the
     * instance of the detector model).</p>
     */
    inline const Aws::String& GetKeyValue() const { return m_keyValue; }
    inline bool KeyValueHasBeenSet() const { return m_keyValueHasBeenSet; }
    template<typename KeyValueT = Aws::String>
    void SetKeyValue(KeyValueT&& value) { m_keyValueHasBeenSet = true; m_keyValue = std::forward<KeyValueT>(value); }
    template<typename KeyValueT = Aws::String>
    DetectorDebugOption& WithKeyValue(KeyValueT&& value) { SetKeyValue(std::forward<KeyValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet = false;

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
