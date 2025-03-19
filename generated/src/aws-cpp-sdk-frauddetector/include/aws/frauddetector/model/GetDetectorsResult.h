/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/Detector.h>
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
  class GetDetectorsResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetDetectorsResult() = default;
    AWS_FRAUDDETECTOR_API GetDetectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetDetectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The detectors.</p>
     */
    inline const Aws::Vector<Detector>& GetDetectors() const { return m_detectors; }
    template<typename DetectorsT = Aws::Vector<Detector>>
    void SetDetectors(DetectorsT&& value) { m_detectorsHasBeenSet = true; m_detectors = std::forward<DetectorsT>(value); }
    template<typename DetectorsT = Aws::Vector<Detector>>
    GetDetectorsResult& WithDetectors(DetectorsT&& value) { SetDetectors(std::forward<DetectorsT>(value)); return *this;}
    template<typename DetectorsT = Detector>
    GetDetectorsResult& AddDetectors(DetectorsT&& value) { m_detectorsHasBeenSet = true; m_detectors.emplace_back(std::forward<DetectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next page token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetDetectorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDetectorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Detector> m_detectors;
    bool m_detectorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
