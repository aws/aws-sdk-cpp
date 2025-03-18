/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/ExecutionStatus.h>
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
namespace LookoutMetrics
{
namespace Model
{
  class DescribeAnomalyDetectionExecutionsResult
  {
  public:
    AWS_LOOKOUTMETRICS_API DescribeAnomalyDetectionExecutionsResult() = default;
    AWS_LOOKOUTMETRICS_API DescribeAnomalyDetectionExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API DescribeAnomalyDetectionExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of detection jobs.</p>
     */
    inline const Aws::Vector<ExecutionStatus>& GetExecutionList() const { return m_executionList; }
    template<typename ExecutionListT = Aws::Vector<ExecutionStatus>>
    void SetExecutionList(ExecutionListT&& value) { m_executionListHasBeenSet = true; m_executionList = std::forward<ExecutionListT>(value); }
    template<typename ExecutionListT = Aws::Vector<ExecutionStatus>>
    DescribeAnomalyDetectionExecutionsResult& WithExecutionList(ExecutionListT&& value) { SetExecutionList(std::forward<ExecutionListT>(value)); return *this;}
    template<typename ExecutionListT = ExecutionStatus>
    DescribeAnomalyDetectionExecutionsResult& AddExecutionList(ExecutionListT&& value) { m_executionListHasBeenSet = true; m_executionList.emplace_back(std::forward<ExecutionListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAnomalyDetectionExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAnomalyDetectionExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExecutionStatus> m_executionList;
    bool m_executionListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
