/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/EventPredictionSummary.h>
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
  class ListEventPredictionsResult
  {
  public:
    AWS_FRAUDDETECTOR_API ListEventPredictionsResult() = default;
    AWS_FRAUDDETECTOR_API ListEventPredictionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API ListEventPredictionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The summary of the past predictions. </p>
     */
    inline const Aws::Vector<EventPredictionSummary>& GetEventPredictionSummaries() const { return m_eventPredictionSummaries; }
    template<typename EventPredictionSummariesT = Aws::Vector<EventPredictionSummary>>
    void SetEventPredictionSummaries(EventPredictionSummariesT&& value) { m_eventPredictionSummariesHasBeenSet = true; m_eventPredictionSummaries = std::forward<EventPredictionSummariesT>(value); }
    template<typename EventPredictionSummariesT = Aws::Vector<EventPredictionSummary>>
    ListEventPredictionsResult& WithEventPredictionSummaries(EventPredictionSummariesT&& value) { SetEventPredictionSummaries(std::forward<EventPredictionSummariesT>(value)); return *this;}
    template<typename EventPredictionSummariesT = EventPredictionSummary>
    ListEventPredictionsResult& AddEventPredictionSummaries(EventPredictionSummariesT&& value) { m_eventPredictionSummariesHasBeenSet = true; m_eventPredictionSummaries.emplace_back(std::forward<EventPredictionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Identifies the next page of results to return. Use the token to make the
     * call again to retrieve the next page. Keep all other arguments unchanged. Each
     * pagination token expires after 24 hours. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEventPredictionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEventPredictionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventPredictionSummary> m_eventPredictionSummaries;
    bool m_eventPredictionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
