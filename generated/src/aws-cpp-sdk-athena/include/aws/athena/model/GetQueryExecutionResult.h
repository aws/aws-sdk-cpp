/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/QueryExecution.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetQueryExecutionResult
  {
  public:
    AWS_ATHENA_API GetQueryExecutionResult() = default;
    AWS_ATHENA_API GetQueryExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetQueryExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the query execution.</p>
     */
    inline const QueryExecution& GetQueryExecution() const { return m_queryExecution; }
    template<typename QueryExecutionT = QueryExecution>
    void SetQueryExecution(QueryExecutionT&& value) { m_queryExecutionHasBeenSet = true; m_queryExecution = std::forward<QueryExecutionT>(value); }
    template<typename QueryExecutionT = QueryExecution>
    GetQueryExecutionResult& WithQueryExecution(QueryExecutionT&& value) { SetQueryExecution(std::forward<QueryExecutionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQueryExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    QueryExecution m_queryExecution;
    bool m_queryExecutionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
