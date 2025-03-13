/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/InferenceEventSummary.h>
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
  class ListInferenceEventsResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListInferenceEventsResult() = default;
    AWS_LOOKOUTEQUIPMENT_API ListInferenceEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListInferenceEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An opaque pagination token indicating where to continue the listing of
     * inference executions. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInferenceEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides an array of information about the individual inference events
     * returned from the <code>ListInferenceEvents</code> operation, including
     * scheduler used, event start time, event end time, diagnostics, and so on. </p>
     */
    inline const Aws::Vector<InferenceEventSummary>& GetInferenceEventSummaries() const { return m_inferenceEventSummaries; }
    template<typename InferenceEventSummariesT = Aws::Vector<InferenceEventSummary>>
    void SetInferenceEventSummaries(InferenceEventSummariesT&& value) { m_inferenceEventSummariesHasBeenSet = true; m_inferenceEventSummaries = std::forward<InferenceEventSummariesT>(value); }
    template<typename InferenceEventSummariesT = Aws::Vector<InferenceEventSummary>>
    ListInferenceEventsResult& WithInferenceEventSummaries(InferenceEventSummariesT&& value) { SetInferenceEventSummaries(std::forward<InferenceEventSummariesT>(value)); return *this;}
    template<typename InferenceEventSummariesT = InferenceEventSummary>
    ListInferenceEventsResult& AddInferenceEventSummaries(InferenceEventSummariesT&& value) { m_inferenceEventSummariesHasBeenSet = true; m_inferenceEventSummaries.emplace_back(std::forward<InferenceEventSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInferenceEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<InferenceEventSummary> m_inferenceEventSummaries;
    bool m_inferenceEventSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
