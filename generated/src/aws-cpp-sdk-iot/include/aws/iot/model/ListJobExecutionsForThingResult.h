/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/JobExecutionSummaryForThing.h>
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
  class ListJobExecutionsForThingResult
  {
  public:
    AWS_IOT_API ListJobExecutionsForThingResult() = default;
    AWS_IOT_API ListJobExecutionsForThingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListJobExecutionsForThingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of job execution summaries.</p>
     */
    inline const Aws::Vector<JobExecutionSummaryForThing>& GetExecutionSummaries() const { return m_executionSummaries; }
    template<typename ExecutionSummariesT = Aws::Vector<JobExecutionSummaryForThing>>
    void SetExecutionSummaries(ExecutionSummariesT&& value) { m_executionSummariesHasBeenSet = true; m_executionSummaries = std::forward<ExecutionSummariesT>(value); }
    template<typename ExecutionSummariesT = Aws::Vector<JobExecutionSummaryForThing>>
    ListJobExecutionsForThingResult& WithExecutionSummaries(ExecutionSummariesT&& value) { SetExecutionSummaries(std::forward<ExecutionSummariesT>(value)); return *this;}
    template<typename ExecutionSummariesT = JobExecutionSummaryForThing>
    ListJobExecutionsForThingResult& AddExecutionSummaries(ExecutionSummariesT&& value) { m_executionSummariesHasBeenSet = true; m_executionSummaries.emplace_back(std::forward<ExecutionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListJobExecutionsForThingResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListJobExecutionsForThingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<JobExecutionSummaryForThing> m_executionSummaries;
    bool m_executionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
