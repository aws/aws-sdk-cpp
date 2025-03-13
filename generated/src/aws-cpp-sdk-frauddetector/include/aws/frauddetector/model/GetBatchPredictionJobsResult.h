/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/BatchPrediction.h>
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
  class GetBatchPredictionJobsResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetBatchPredictionJobsResult() = default;
    AWS_FRAUDDETECTOR_API GetBatchPredictionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetBatchPredictionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array containing the details of each batch prediction job.</p>
     */
    inline const Aws::Vector<BatchPrediction>& GetBatchPredictions() const { return m_batchPredictions; }
    template<typename BatchPredictionsT = Aws::Vector<BatchPrediction>>
    void SetBatchPredictions(BatchPredictionsT&& value) { m_batchPredictionsHasBeenSet = true; m_batchPredictions = std::forward<BatchPredictionsT>(value); }
    template<typename BatchPredictionsT = Aws::Vector<BatchPrediction>>
    GetBatchPredictionJobsResult& WithBatchPredictions(BatchPredictionsT&& value) { SetBatchPredictions(std::forward<BatchPredictionsT>(value)); return *this;}
    template<typename BatchPredictionsT = BatchPrediction>
    GetBatchPredictionJobsResult& AddBatchPredictions(BatchPredictionsT&& value) { m_batchPredictionsHasBeenSet = true; m_batchPredictions.emplace_back(std::forward<BatchPredictionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token for the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetBatchPredictionJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBatchPredictionJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchPrediction> m_batchPredictions;
    bool m_batchPredictionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
