/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ExecutionRecord.h>
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
namespace Appflow
{
namespace Model
{
  class DescribeFlowExecutionRecordsResult
  {
  public:
    AWS_APPFLOW_API DescribeFlowExecutionRecordsResult() = default;
    AWS_APPFLOW_API DescribeFlowExecutionRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API DescribeFlowExecutionRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Returns a list of all instances when this flow was run. </p>
     */
    inline const Aws::Vector<ExecutionRecord>& GetFlowExecutions() const { return m_flowExecutions; }
    template<typename FlowExecutionsT = Aws::Vector<ExecutionRecord>>
    void SetFlowExecutions(FlowExecutionsT&& value) { m_flowExecutionsHasBeenSet = true; m_flowExecutions = std::forward<FlowExecutionsT>(value); }
    template<typename FlowExecutionsT = Aws::Vector<ExecutionRecord>>
    DescribeFlowExecutionRecordsResult& WithFlowExecutions(FlowExecutionsT&& value) { SetFlowExecutions(std::forward<FlowExecutionsT>(value)); return *this;}
    template<typename FlowExecutionsT = ExecutionRecord>
    DescribeFlowExecutionRecordsResult& AddFlowExecutions(FlowExecutionsT&& value) { m_flowExecutionsHasBeenSet = true; m_flowExecutions.emplace_back(std::forward<FlowExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeFlowExecutionRecordsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFlowExecutionRecordsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExecutionRecord> m_flowExecutions;
    bool m_flowExecutionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
