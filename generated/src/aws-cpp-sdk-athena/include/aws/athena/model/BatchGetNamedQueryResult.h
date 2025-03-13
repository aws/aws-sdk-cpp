/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/NamedQuery.h>
#include <aws/athena/model/UnprocessedNamedQueryId.h>
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
  class BatchGetNamedQueryResult
  {
  public:
    AWS_ATHENA_API BatchGetNamedQueryResult() = default;
    AWS_ATHENA_API BatchGetNamedQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API BatchGetNamedQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the named query IDs submitted.</p>
     */
    inline const Aws::Vector<NamedQuery>& GetNamedQueries() const { return m_namedQueries; }
    template<typename NamedQueriesT = Aws::Vector<NamedQuery>>
    void SetNamedQueries(NamedQueriesT&& value) { m_namedQueriesHasBeenSet = true; m_namedQueries = std::forward<NamedQueriesT>(value); }
    template<typename NamedQueriesT = Aws::Vector<NamedQuery>>
    BatchGetNamedQueryResult& WithNamedQueries(NamedQueriesT&& value) { SetNamedQueries(std::forward<NamedQueriesT>(value)); return *this;}
    template<typename NamedQueriesT = NamedQuery>
    BatchGetNamedQueryResult& AddNamedQueries(NamedQueriesT&& value) { m_namedQueriesHasBeenSet = true; m_namedQueries.emplace_back(std::forward<NamedQueriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about provided query IDs.</p>
     */
    inline const Aws::Vector<UnprocessedNamedQueryId>& GetUnprocessedNamedQueryIds() const { return m_unprocessedNamedQueryIds; }
    template<typename UnprocessedNamedQueryIdsT = Aws::Vector<UnprocessedNamedQueryId>>
    void SetUnprocessedNamedQueryIds(UnprocessedNamedQueryIdsT&& value) { m_unprocessedNamedQueryIdsHasBeenSet = true; m_unprocessedNamedQueryIds = std::forward<UnprocessedNamedQueryIdsT>(value); }
    template<typename UnprocessedNamedQueryIdsT = Aws::Vector<UnprocessedNamedQueryId>>
    BatchGetNamedQueryResult& WithUnprocessedNamedQueryIds(UnprocessedNamedQueryIdsT&& value) { SetUnprocessedNamedQueryIds(std::forward<UnprocessedNamedQueryIdsT>(value)); return *this;}
    template<typename UnprocessedNamedQueryIdsT = UnprocessedNamedQueryId>
    BatchGetNamedQueryResult& AddUnprocessedNamedQueryIds(UnprocessedNamedQueryIdsT&& value) { m_unprocessedNamedQueryIdsHasBeenSet = true; m_unprocessedNamedQueryIds.emplace_back(std::forward<UnprocessedNamedQueryIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetNamedQueryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NamedQuery> m_namedQueries;
    bool m_namedQueriesHasBeenSet = false;

    Aws::Vector<UnprocessedNamedQueryId> m_unprocessedNamedQueryIds;
    bool m_unprocessedNamedQueryIdsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
