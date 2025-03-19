/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/DetectorModelConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTEvents
{
namespace Model
{
  class UpdateDetectorModelResult
  {
  public:
    AWS_IOTEVENTS_API UpdateDetectorModelResult() = default;
    AWS_IOTEVENTS_API UpdateDetectorModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API UpdateDetectorModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about how the detector model is configured.</p>
     */
    inline const DetectorModelConfiguration& GetDetectorModelConfiguration() const { return m_detectorModelConfiguration; }
    template<typename DetectorModelConfigurationT = DetectorModelConfiguration>
    void SetDetectorModelConfiguration(DetectorModelConfigurationT&& value) { m_detectorModelConfigurationHasBeenSet = true; m_detectorModelConfiguration = std::forward<DetectorModelConfigurationT>(value); }
    template<typename DetectorModelConfigurationT = DetectorModelConfiguration>
    UpdateDetectorModelResult& WithDetectorModelConfiguration(DetectorModelConfigurationT&& value) { SetDetectorModelConfiguration(std::forward<DetectorModelConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateDetectorModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DetectorModelConfiguration m_detectorModelConfiguration;
    bool m_detectorModelConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
