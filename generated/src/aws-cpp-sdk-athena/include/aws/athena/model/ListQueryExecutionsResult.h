/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListQueryExecutionsResult
  {
  public:
    AWS_ATHENA_API ListQueryExecutionsResult() = default;
    AWS_ATHENA_API ListQueryExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API ListQueryExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique IDs of each query execution as an array of strings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueryExecutionIds() const { return m_queryExecutionIds; }
    template<typename QueryExecutionIdsT = Aws::Vector<Aws::String>>
    void SetQueryExecutionIds(QueryExecutionIdsT&& value) { m_queryExecutionIdsHasBeenSet = true; m_queryExecutionIds = std::forward<QueryExecutionIdsT>(value); }
    template<typename QueryExecutionIdsT = Aws::Vector<Aws::String>>
    ListQueryExecutionsResult& WithQueryExecutionIds(QueryExecutionIdsT&& value) { SetQueryExecutionIds(std::forward<QueryExecutionIdsT>(value)); return *this;}
    template<typename QueryExecutionIdsT = Aws::String>
    ListQueryExecutionsResult& AddQueryExecutionIds(QueryExecutionIdsT&& value) { m_queryExecutionIdsHasBeenSet = true; m_queryExecutionIds.emplace_back(std::forward<QueryExecutionIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to be used by the next request if this request is truncated.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListQueryExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListQueryExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_queryExecutionIds;
    bool m_queryExecutionIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
