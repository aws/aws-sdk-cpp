/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/StepSearchSummary.h>
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
namespace deadline
{
namespace Model
{
  class SearchStepsResult
  {
  public:
    AWS_DEADLINE_API SearchStepsResult() = default;
    AWS_DEADLINE_API SearchStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API SearchStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The steps in the search.</p>
     */
    inline const Aws::Vector<StepSearchSummary>& GetSteps() const { return m_steps; }
    template<typename StepsT = Aws::Vector<StepSearchSummary>>
    void SetSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps = std::forward<StepsT>(value); }
    template<typename StepsT = Aws::Vector<StepSearchSummary>>
    SearchStepsResult& WithSteps(StepsT&& value) { SetSteps(std::forward<StepsT>(value)); return *this;}
    template<typename StepsT = StepSearchSummary>
    SearchStepsResult& AddSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps.emplace_back(std::forward<StepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next incremental starting point after the defined
     * <code>itemOffset</code>.</p>
     */
    inline int GetNextItemOffset() const { return m_nextItemOffset; }
    inline void SetNextItemOffset(int value) { m_nextItemOffsetHasBeenSet = true; m_nextItemOffset = value; }
    inline SearchStepsResult& WithNextItemOffset(int value) { SetNextItemOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of results in the search.</p>
     */
    inline int GetTotalResults() const { return m_totalResults; }
    inline void SetTotalResults(int value) { m_totalResultsHasBeenSet = true; m_totalResults = value; }
    inline SearchStepsResult& WithTotalResults(int value) { SetTotalResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchStepsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StepSearchSummary> m_steps;
    bool m_stepsHasBeenSet = false;

    int m_nextItemOffset{0};
    bool m_nextItemOffsetHasBeenSet = false;

    int m_totalResults{0};
    bool m_totalResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
