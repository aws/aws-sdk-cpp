/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/InferenceExecutionSummary.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class ListInferenceExecutionsResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListInferenceExecutionsResult() = default;
    AWS_LOOKOUTEQUIPMENT_API ListInferenceExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListInferenceExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference executions. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInferenceExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides an array of information about the individual inference executions
     * returned from the <code>ListInferenceExecutions</code> operation, including
     * model used, inference scheduler, data configuration, and so on. </p> 
     * <p>If you don't supply the <code>InferenceSchedulerName</code> request
     * parameter, or if you supply the name of an inference scheduler that doesn't
     * exist, <code>ListInferenceExecutions</code> returns an empty array in
     * <code>InferenceExecutionSummaries</code>.</p> 
     */
    inline const Aws::Vector<InferenceExecutionSummary>& GetInferenceExecutionSummaries() const { return m_inferenceExecutionSummaries; }
    template<typename InferenceExecutionSummariesT = Aws::Vector<InferenceExecutionSummary>>
    void SetInferenceExecutionSummaries(InferenceExecutionSummariesT&& value) { m_inferenceExecutionSummariesHasBeenSet = true; m_inferenceExecutionSummaries = std::forward<InferenceExecutionSummariesT>(value); }
    template<typename InferenceExecutionSummariesT = Aws::Vector<InferenceExecutionSummary>>
    ListInferenceExecutionsResult& WithInferenceExecutionSummaries(InferenceExecutionSummariesT&& value) { SetInferenceExecutionSummaries(std::forward<InferenceExecutionSummariesT>(value)); return *this;}
    template<typename InferenceExecutionSummariesT = InferenceExecutionSummary>
    ListInferenceExecutionsResult& AddInferenceExecutionSummaries(InferenceExecutionSummariesT&& value) { m_inferenceExecutionSummariesHasBeenSet = true; m_inferenceExecutionSummaries.emplace_back(std::forward<InferenceExecutionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInferenceExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<InferenceExecutionSummary> m_inferenceExecutionSummaries;
    bool m_inferenceExecutionSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
