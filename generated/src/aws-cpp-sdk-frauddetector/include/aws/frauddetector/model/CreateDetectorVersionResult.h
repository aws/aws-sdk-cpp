/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/DetectorVersionStatus.h>
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
namespace FraudDetector
{
namespace Model
{
  class CreateDetectorVersionResult
  {
  public:
    AWS_FRAUDDETECTOR_API CreateDetectorVersionResult() = default;
    AWS_FRAUDDETECTOR_API CreateDetectorVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API CreateDetectorVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID for the created version's parent detector.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    CreateDetectorVersionResult& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the created detector. </p>
     */
    inline const Aws::String& GetDetectorVersionId() const { return m_detectorVersionId; }
    template<typename DetectorVersionIdT = Aws::String>
    void SetDetectorVersionId(DetectorVersionIdT&& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = std::forward<DetectorVersionIdT>(value); }
    template<typename DetectorVersionIdT = Aws::String>
    CreateDetectorVersionResult& WithDetectorVersionId(DetectorVersionIdT&& value) { SetDetectorVersionId(std::forward<DetectorVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the detector version.</p>
     */
    inline DetectorVersionStatus GetStatus() const { return m_status; }
    inline void SetStatus(DetectorVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateDetectorVersionResult& WithStatus(DetectorVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDetectorVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_detectorVersionId;
    bool m_detectorVersionIdHasBeenSet = false;

    DetectorVersionStatus m_status{DetectorVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
