/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/DetectAnomalyResult.h>
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
namespace LookoutforVision
{
namespace Model
{
  class DetectAnomaliesResult
  {
  public:
    AWS_LOOKOUTFORVISION_API DetectAnomaliesResult() = default;
    AWS_LOOKOUTFORVISION_API DetectAnomaliesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API DetectAnomaliesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The results of the <code>DetectAnomalies</code> operation.</p>
     */
    inline const DetectAnomalyResult& GetDetectAnomalyResult() const { return m_detectAnomalyResult; }
    template<typename DetectAnomalyResultT = DetectAnomalyResult>
    void SetDetectAnomalyResult(DetectAnomalyResultT&& value) { m_detectAnomalyResultHasBeenSet = true; m_detectAnomalyResult = std::forward<DetectAnomalyResultT>(value); }
    template<typename DetectAnomalyResultT = DetectAnomalyResult>
    DetectAnomaliesResult& WithDetectAnomalyResult(DetectAnomalyResultT&& value) { SetDetectAnomalyResult(std::forward<DetectAnomalyResultT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetectAnomaliesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DetectAnomalyResult m_detectAnomalyResult;
    bool m_detectAnomalyResultHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
