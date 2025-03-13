/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/JobStep.h>
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
namespace MainframeModernization
{
namespace Model
{
  class ListBatchJobRestartPointsResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobRestartPointsResult() = default;
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobRestartPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobRestartPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns all the batch job steps and related information for a batch job that
     * previously ran.</p>
     */
    inline const Aws::Vector<JobStep>& GetBatchJobSteps() const { return m_batchJobSteps; }
    template<typename BatchJobStepsT = Aws::Vector<JobStep>>
    void SetBatchJobSteps(BatchJobStepsT&& value) { m_batchJobStepsHasBeenSet = true; m_batchJobSteps = std::forward<BatchJobStepsT>(value); }
    template<typename BatchJobStepsT = Aws::Vector<JobStep>>
    ListBatchJobRestartPointsResult& WithBatchJobSteps(BatchJobStepsT&& value) { SetBatchJobSteps(std::forward<BatchJobStepsT>(value)); return *this;}
    template<typename BatchJobStepsT = JobStep>
    ListBatchJobRestartPointsResult& AddBatchJobSteps(BatchJobStepsT&& value) { m_batchJobStepsHasBeenSet = true; m_batchJobSteps.emplace_back(std::forward<BatchJobStepsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBatchJobRestartPointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<JobStep> m_batchJobSteps;
    bool m_batchJobStepsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
