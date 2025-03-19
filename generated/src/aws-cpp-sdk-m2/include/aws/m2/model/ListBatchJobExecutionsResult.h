/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/BatchJobExecutionSummary.h>
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
  class ListBatchJobExecutionsResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobExecutionsResult() = default;
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of batch job executions for an application.</p>
     */
    inline const Aws::Vector<BatchJobExecutionSummary>& GetBatchJobExecutions() const { return m_batchJobExecutions; }
    template<typename BatchJobExecutionsT = Aws::Vector<BatchJobExecutionSummary>>
    void SetBatchJobExecutions(BatchJobExecutionsT&& value) { m_batchJobExecutionsHasBeenSet = true; m_batchJobExecutions = std::forward<BatchJobExecutionsT>(value); }
    template<typename BatchJobExecutionsT = Aws::Vector<BatchJobExecutionSummary>>
    ListBatchJobExecutionsResult& WithBatchJobExecutions(BatchJobExecutionsT&& value) { SetBatchJobExecutions(std::forward<BatchJobExecutionsT>(value)); return *this;}
    template<typename BatchJobExecutionsT = BatchJobExecutionSummary>
    ListBatchJobExecutionsResult& AddBatchJobExecutions(BatchJobExecutionsT&& value) { m_batchJobExecutionsHasBeenSet = true; m_batchJobExecutions.emplace_back(std::forward<BatchJobExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that's returned when the response doesn't contain all
     * batch job executions.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBatchJobExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBatchJobExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchJobExecutionSummary> m_batchJobExecutions;
    bool m_batchJobExecutionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
