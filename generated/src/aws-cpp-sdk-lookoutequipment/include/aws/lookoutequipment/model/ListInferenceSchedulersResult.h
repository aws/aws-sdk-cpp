/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/InferenceSchedulerSummary.h>
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
  class ListInferenceSchedulersResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListInferenceSchedulersResult() = default;
    AWS_LOOKOUTEQUIPMENT_API ListInferenceSchedulersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListInferenceSchedulersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference schedulers. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInferenceSchedulersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the specified inference scheduler, including data
     * upload frequency, model name and ARN, and status. </p>
     */
    inline const Aws::Vector<InferenceSchedulerSummary>& GetInferenceSchedulerSummaries() const { return m_inferenceSchedulerSummaries; }
    template<typename InferenceSchedulerSummariesT = Aws::Vector<InferenceSchedulerSummary>>
    void SetInferenceSchedulerSummaries(InferenceSchedulerSummariesT&& value) { m_inferenceSchedulerSummariesHasBeenSet = true; m_inferenceSchedulerSummaries = std::forward<InferenceSchedulerSummariesT>(value); }
    template<typename InferenceSchedulerSummariesT = Aws::Vector<InferenceSchedulerSummary>>
    ListInferenceSchedulersResult& WithInferenceSchedulerSummaries(InferenceSchedulerSummariesT&& value) { SetInferenceSchedulerSummaries(std::forward<InferenceSchedulerSummariesT>(value)); return *this;}
    template<typename InferenceSchedulerSummariesT = InferenceSchedulerSummary>
    ListInferenceSchedulersResult& AddInferenceSchedulerSummaries(InferenceSchedulerSummariesT&& value) { m_inferenceSchedulerSummariesHasBeenSet = true; m_inferenceSchedulerSummaries.emplace_back(std::forward<InferenceSchedulerSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInferenceSchedulersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<InferenceSchedulerSummary> m_inferenceSchedulerSummaries;
    bool m_inferenceSchedulerSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
