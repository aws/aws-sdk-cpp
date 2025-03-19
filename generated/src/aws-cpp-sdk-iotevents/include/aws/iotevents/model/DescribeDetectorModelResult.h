/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/DetectorModel.h>
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
  class DescribeDetectorModelResult
  {
  public:
    AWS_IOTEVENTS_API DescribeDetectorModelResult() = default;
    AWS_IOTEVENTS_API DescribeDetectorModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API DescribeDetectorModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the detector model.</p>
     */
    inline const DetectorModel& GetDetectorModel() const { return m_detectorModel; }
    template<typename DetectorModelT = DetectorModel>
    void SetDetectorModel(DetectorModelT&& value) { m_detectorModelHasBeenSet = true; m_detectorModel = std::forward<DetectorModelT>(value); }
    template<typename DetectorModelT = DetectorModel>
    DescribeDetectorModelResult& WithDetectorModel(DetectorModelT&& value) { SetDetectorModel(std::forward<DetectorModelT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDetectorModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DetectorModel m_detectorModel;
    bool m_detectorModelHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
