/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DetectorModel
  {
  public:
    AWS_IOTEVENTS_API DetectorModel() = default;
    AWS_IOTEVENTS_API DetectorModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API DetectorModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information that defines how a detector operates.</p>
     */
    inline const DetectorModelDefinition& GetDetectorModelDefinition() const { return m_detectorModelDefinition; }
    inline bool DetectorModelDefinitionHasBeenSet() const { return m_detectorModelDefinitionHasBeenSet; }
    template<typename DetectorModelDefinitionT = DetectorModelDefinition>
    void SetDetectorModelDefinition(DetectorModelDefinitionT&& value) { m_detectorModelDefinitionHasBeenSet = true; m_detectorModelDefinition = std::forward<DetectorModelDefinitionT>(value); }
    template<typename DetectorModelDefinitionT = DetectorModelDefinition>
    DetectorModel& WithDetectorModelDefinition(DetectorModelDefinitionT&& value) { SetDetectorModelDefinition(std::forward<DetectorModelDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about how the detector is configured.</p>
     */
    inline const DetectorModelConfiguration& GetDetectorModelConfiguration() const { return m_detectorModelConfiguration; }
    inline bool DetectorModelConfigurationHasBeenSet() const { return m_detectorModelConfigurationHasBeenSet; }
    template<typename DetectorModelConfigurationT = DetectorModelConfiguration>
    void SetDetectorModelConfiguration(DetectorModelConfigurationT&& value) { m_detectorModelConfigurationHasBeenSet = true; m_detectorModelConfiguration = std::forward<DetectorModelConfigurationT>(value); }
    template<typename DetectorModelConfigurationT = DetectorModelConfiguration>
    DetectorModel& WithDetectorModelConfiguration(DetectorModelConfigurationT&& value) { SetDetectorModelConfiguration(std::forward<DetectorModelConfigurationT>(value)); return *this;}
    ///@}
  private:

    DetectorModelDefinition m_detectorModelDefinition;
    bool m_detectorModelDefinitionHasBeenSet = false;

    DetectorModelConfiguration m_detectorModelConfiguration;
    bool m_detectorModelConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
