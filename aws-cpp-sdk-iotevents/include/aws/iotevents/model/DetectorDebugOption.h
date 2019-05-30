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
  class AWS_IOTEVENTS_API DetectorDebugOption
  {
  public:
    DetectorDebugOption();
    DetectorDebugOption(Aws::Utils::Json::JsonView jsonValue);
    DetectorDebugOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the detector model.</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }

    /**
     * <p>The name of the detector model.</p>
     */
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }

    /**
     * <p>The name of the detector model.</p>
     */
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }

    /**
     * <p>The name of the detector model.</p>
     */
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }

    /**
     * <p>The name of the detector model.</p>
     */
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }

    /**
     * <p>The name of the detector model.</p>
     */
    inline DetectorDebugOption& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}

    /**
     * <p>The name of the detector model.</p>
     */
    inline DetectorDebugOption& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the detector model.</p>
     */
    inline DetectorDebugOption& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}


    /**
     * <p>The value of the input attribute key used to create the detector (the
     * instance of the detector model).</p>
     */
    inline const Aws::String& GetKeyValue() const{ return m_keyValue; }

    /**
     * <p>The value of the input attribute key used to create the detector (the
     * instance of the detector model).</p>
     */
    inline bool KeyValueHasBeenSet() const { return m_keyValueHasBeenSet; }

    /**
     * <p>The value of the input attribute key used to create the detector (the
     * instance of the detector model).</p>
     */
    inline void SetKeyValue(const Aws::String& value) { m_keyValueHasBeenSet = true; m_keyValue = value; }

    /**
     * <p>The value of the input attribute key used to create the detector (the
     * instance of the detector model).</p>
     */
    inline void SetKeyValue(Aws::String&& value) { m_keyValueHasBeenSet = true; m_keyValue = std::move(value); }

    /**
     * <p>The value of the input attribute key used to create the detector (the
     * instance of the detector model).</p>
     */
    inline void SetKeyValue(const char* value) { m_keyValueHasBeenSet = true; m_keyValue.assign(value); }

    /**
     * <p>The value of the input attribute key used to create the detector (the
     * instance of the detector model).</p>
     */
    inline DetectorDebugOption& WithKeyValue(const Aws::String& value) { SetKeyValue(value); return *this;}

    /**
     * <p>The value of the input attribute key used to create the detector (the
     * instance of the detector model).</p>
     */
    inline DetectorDebugOption& WithKeyValue(Aws::String&& value) { SetKeyValue(std::move(value)); return *this;}

    /**
     * <p>The value of the input attribute key used to create the detector (the
     * instance of the detector model).</p>
     */
    inline DetectorDebugOption& WithKeyValue(const char* value) { SetKeyValue(value); return *this;}

  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet;

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
