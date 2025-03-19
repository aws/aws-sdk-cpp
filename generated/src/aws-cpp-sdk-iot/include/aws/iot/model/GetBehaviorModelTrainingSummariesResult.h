/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/BehaviorModelTrainingSummary.h>
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
namespace IoT
{
namespace Model
{
  class GetBehaviorModelTrainingSummariesResult
  {
  public:
    AWS_IOT_API GetBehaviorModelTrainingSummariesResult() = default;
    AWS_IOT_API GetBehaviorModelTrainingSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetBehaviorModelTrainingSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of all ML Detect behaviors and their model status for a given
     * Security Profile. </p>
     */
    inline const Aws::Vector<BehaviorModelTrainingSummary>& GetSummaries() const { return m_summaries; }
    template<typename SummariesT = Aws::Vector<BehaviorModelTrainingSummary>>
    void SetSummaries(SummariesT&& value) { m_summariesHasBeenSet = true; m_summaries = std::forward<SummariesT>(value); }
    template<typename SummariesT = Aws::Vector<BehaviorModelTrainingSummary>>
    GetBehaviorModelTrainingSummariesResult& WithSummaries(SummariesT&& value) { SetSummaries(std::forward<SummariesT>(value)); return *this;}
    template<typename SummariesT = BehaviorModelTrainingSummary>
    GetBehaviorModelTrainingSummariesResult& AddSummaries(SummariesT&& value) { m_summariesHasBeenSet = true; m_summaries.emplace_back(std::forward<SummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetBehaviorModelTrainingSummariesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBehaviorModelTrainingSummariesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BehaviorModelTrainingSummary> m_summaries;
    bool m_summariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
