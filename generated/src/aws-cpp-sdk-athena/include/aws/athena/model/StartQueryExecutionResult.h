/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
  class StartQueryExecutionResult
  {
  public:
    AWS_ATHENA_API StartQueryExecutionResult() = default;
    AWS_ATHENA_API StartQueryExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API StartQueryExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of the query that ran as a result of this request.</p>
     */
    inline const Aws::String& GetQueryExecutionId() const { return m_queryExecutionId; }
    template<typename QueryExecutionIdT = Aws::String>
    void SetQueryExecutionId(QueryExecutionIdT&& value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId = std::forward<QueryExecutionIdT>(value); }
    template<typename QueryExecutionIdT = Aws::String>
    StartQueryExecutionResult& WithQueryExecutionId(QueryExecutionIdT&& value) { SetQueryExecutionId(std::forward<QueryExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartQueryExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryExecutionId;
    bool m_queryExecutionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
