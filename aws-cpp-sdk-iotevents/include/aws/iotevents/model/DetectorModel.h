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
#include <aws/iotevents/model/DetectorModelDefinition.h>
#include <aws/iotevents/model/DetectorModelConfiguration.h>
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
   * <p>Information about the detector model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DetectorModel">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTS_API DetectorModel
  {
  public:
    DetectorModel();
    DetectorModel(Aws::Utils::Json::JsonView jsonValue);
    DetectorModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information that defines how a detector operates.</p>
     */
    inline const DetectorModelDefinition& GetDetectorModelDefinition() const{ return m_detectorModelDefinition; }

    /**
     * <p>Information that defines how a detector operates.</p>
     */
    inline bool DetectorModelDefinitionHasBeenSet() const { return m_detectorModelDefinitionHasBeenSet; }

    /**
     * <p>Information that defines how a detector operates.</p>
     */
    inline void SetDetectorModelDefinition(const DetectorModelDefinition& value) { m_detectorModelDefinitionHasBeenSet = true; m_detectorModelDefinition = value; }

    /**
     * <p>Information that defines how a detector operates.</p>
     */
    inline void SetDetectorModelDefinition(DetectorModelDefinition&& value) { m_detectorModelDefinitionHasBeenSet = true; m_detectorModelDefinition = std::move(value); }

    /**
     * <p>Information that defines how a detector operates.</p>
     */
    inline DetectorModel& WithDetectorModelDefinition(const DetectorModelDefinition& value) { SetDetectorModelDefinition(value); return *this;}

    /**
     * <p>Information that defines how a detector operates.</p>
     */
    inline DetectorModel& WithDetectorModelDefinition(DetectorModelDefinition&& value) { SetDetectorModelDefinition(std::move(value)); return *this;}


    /**
     * <p>Information about how the detector is configured.</p>
     */
    inline const DetectorModelConfiguration& GetDetectorModelConfiguration() const{ return m_detectorModelConfiguration; }

    /**
     * <p>Information about how the detector is configured.</p>
     */
    inline bool DetectorModelConfigurationHasBeenSet() const { return m_detectorModelConfigurationHasBeenSet; }

    /**
     * <p>Information about how the detector is configured.</p>
     */
    inline void SetDetectorModelConfiguration(const DetectorModelConfiguration& value) { m_detectorModelConfigurationHasBeenSet = true; m_detectorModelConfiguration = value; }

    /**
     * <p>Information about how the detector is configured.</p>
     */
    inline void SetDetectorModelConfiguration(DetectorModelConfiguration&& value) { m_detectorModelConfigurationHasBeenSet = true; m_detectorModelConfiguration = std::move(value); }

    /**
     * <p>Information about how the detector is configured.</p>
     */
    inline DetectorModel& WithDetectorModelConfiguration(const DetectorModelConfiguration& value) { SetDetectorModelConfiguration(value); return *this;}

    /**
     * <p>Information about how the detector is configured.</p>
     */
    inline DetectorModel& WithDetectorModelConfiguration(DetectorModelConfiguration&& value) { SetDetectorModelConfiguration(std::move(value)); return *this;}

  private:

    DetectorModelDefinition m_detectorModelDefinition;
    bool m_detectorModelDefinitionHasBeenSet;

    DetectorModelConfiguration m_detectorModelConfiguration;
    bool m_detectorModelConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
