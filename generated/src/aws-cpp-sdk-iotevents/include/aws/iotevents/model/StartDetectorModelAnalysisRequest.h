﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/IoTEventsRequest.h>
#include <aws/iotevents/model/DetectorModelDefinition.h>
#include <utility>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class StartDetectorModelAnalysisRequest : public IoTEventsRequest
  {
  public:
    AWS_IOTEVENTS_API StartDetectorModelAnalysisRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDetectorModelAnalysis"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const DetectorModelDefinition& GetDetectorModelDefinition() const { return m_detectorModelDefinition; }
    inline bool DetectorModelDefinitionHasBeenSet() const { return m_detectorModelDefinitionHasBeenSet; }
    template<typename DetectorModelDefinitionT = DetectorModelDefinition>
    void SetDetectorModelDefinition(DetectorModelDefinitionT&& value) { m_detectorModelDefinitionHasBeenSet = true; m_detectorModelDefinition = std::forward<DetectorModelDefinitionT>(value); }
    template<typename DetectorModelDefinitionT = DetectorModelDefinition>
    StartDetectorModelAnalysisRequest& WithDetectorModelDefinition(DetectorModelDefinitionT&& value) { SetDetectorModelDefinition(std::forward<DetectorModelDefinitionT>(value)); return *this;}
    ///@}
  private:

    DetectorModelDefinition m_detectorModelDefinition;
    bool m_detectorModelDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
