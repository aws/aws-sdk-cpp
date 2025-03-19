/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/QueryExecution.h>
#include <aws/athena/model/UnprocessedQueryExecutionId.h>
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
namespace Athena
{
namespace Model
{
  class BatchGetQueryExecutionResult
  {
  public:
    AWS_ATHENA_API BatchGetQueryExecutionResult() = default;
    AWS_ATHENA_API BatchGetQueryExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API BatchGetQueryExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about a query execution.</p>
     */
    inline const Aws::Vector<QueryExecution>& GetQueryExecutions() const { return m_queryExecutions; }
    template<typename QueryExecutionsT = Aws::Vector<QueryExecution>>
    void SetQueryExecutions(QueryExecutionsT&& value) { m_queryExecutionsHasBeenSet = true; m_queryExecutions = std::forward<QueryExecutionsT>(value); }
    template<typename QueryExecutionsT = Aws::Vector<QueryExecution>>
    BatchGetQueryExecutionResult& WithQueryExecutions(QueryExecutionsT&& value) { SetQueryExecutions(std::forward<QueryExecutionsT>(value)); return *this;}
    template<typename QueryExecutionsT = QueryExecution>
    BatchGetQueryExecutionResult& AddQueryExecutions(QueryExecutionsT&& value) { m_queryExecutionsHasBeenSet = true; m_queryExecutions.emplace_back(std::forward<QueryExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the query executions that failed to run.</p>
     */
    inline const Aws::Vector<UnprocessedQueryExecutionId>& GetUnprocessedQueryExecutionIds() const { return m_unprocessedQueryExecutionIds; }
    template<typename UnprocessedQueryExecutionIdsT = Aws::Vector<UnprocessedQueryExecutionId>>
    void SetUnprocessedQueryExecutionIds(UnprocessedQueryExecutionIdsT&& value) { m_unprocessedQueryExecutionIdsHasBeenSet = true; m_unprocessedQueryExecutionIds = std::forward<UnprocessedQueryExecutionIdsT>(value); }
    template<typename UnprocessedQueryExecutionIdsT = Aws::Vector<UnprocessedQueryExecutionId>>
    BatchGetQueryExecutionResult& WithUnprocessedQueryExecutionIds(UnprocessedQueryExecutionIdsT&& value) { SetUnprocessedQueryExecutionIds(std::forward<UnprocessedQueryExecutionIdsT>(value)); return *this;}
    template<typename UnprocessedQueryExecutionIdsT = UnprocessedQueryExecutionId>
    BatchGetQueryExecutionResult& AddUnprocessedQueryExecutionIds(UnprocessedQueryExecutionIdsT&& value) { m_unprocessedQueryExecutionIdsHasBeenSet = true; m_unprocessedQueryExecutionIds.emplace_back(std::forward<UnprocessedQueryExecutionIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetQueryExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<QueryExecution> m_queryExecutions;
    bool m_queryExecutionsHasBeenSet = false;

    Aws::Vector<UnprocessedQueryExecutionId> m_unprocessedQueryExecutionIds;
    bool m_unprocessedQueryExecutionIdsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
