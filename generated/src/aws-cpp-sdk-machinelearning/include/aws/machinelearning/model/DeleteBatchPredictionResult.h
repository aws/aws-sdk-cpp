/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
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
namespace MachineLearning
{
namespace Model
{
  /**
   * <p> Represents the output of a <code>DeleteBatchPrediction</code> operation.</p>
   * <p>You can use the <code>GetBatchPrediction</code> operation and check the value
   * of the <code>Status</code> parameter to see whether a
   * <code>BatchPrediction</code> is marked as <code>DELETED</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DeleteBatchPredictionOutput">AWS
   * API Reference</a></p>
   */
  class DeleteBatchPredictionResult
  {
  public:
    AWS_MACHINELEARNING_API DeleteBatchPredictionResult() = default;
    AWS_MACHINELEARNING_API DeleteBatchPredictionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API DeleteBatchPredictionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A user-supplied ID that uniquely identifies the <code>BatchPrediction</code>.
     * This value should be identical to the value of the
     * <code>BatchPredictionID</code> in the request.</p>
     */
    inline const Aws::String& GetBatchPredictionId() const { return m_batchPredictionId; }
    template<typename BatchPredictionIdT = Aws::String>
    void SetBatchPredictionId(BatchPredictionIdT&& value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId = std::forward<BatchPredictionIdT>(value); }
    template<typename BatchPredictionIdT = Aws::String>
    DeleteBatchPredictionResult& WithBatchPredictionId(BatchPredictionIdT&& value) { SetBatchPredictionId(std::forward<BatchPredictionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteBatchPredictionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_batchPredictionId;
    bool m_batchPredictionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
