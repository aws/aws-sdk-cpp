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
    AWS_IOTEVENTS_API DetectorDebugOption();
    AWS_IOTEVENTS_API DetectorDebugOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API DetectorDebugOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }
    inline DetectorDebugOption& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}
    inline DetectorDebugOption& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}
    inline DetectorDebugOption& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the input attribute key used to create the detector (the
     * instance of the detector model).</p>
     */
    inline const Aws::String& GetKeyValue() const{ return m_keyValue; }
    inline bool KeyValueHasBeenSet() const { return m_keyValueHasBeenSet; }
    inline void SetKeyValue(const Aws::String& value) { m_keyValueHasBeenSet = true; m_keyValue = value; }
    inline void SetKeyValue(Aws::String&& value) { m_keyValueHasBeenSet = true; m_keyValue = std::move(value); }
    inline void SetKeyValue(const char* value) { m_keyValueHasBeenSet = true; m_keyValue.assign(value); }
    inline DetectorDebugOption& WithKeyValue(const Aws::String& value) { SetKeyValue(value); return *this;}
    inline DetectorDebugOption& WithKeyValue(Aws::String&& value) { SetKeyValue(std::move(value)); return *this;}
    inline DetectorDebugOption& WithKeyValue(const char* value) { SetKeyValue(value); return *this;}
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
