/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/ProtectedQuerySummary.h>
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
namespace CleanRooms
{
namespace Model
{
  class ListProtectedQueriesResult
  {
  public:
    AWS_CLEANROOMS_API ListProtectedQueriesResult() = default;
    AWS_CLEANROOMS_API ListProtectedQueriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListProtectedQueriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProtectedQueriesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of protected queries.</p>
     */
    inline const Aws::Vector<ProtectedQuerySummary>& GetProtectedQueries() const { return m_protectedQueries; }
    template<typename ProtectedQueriesT = Aws::Vector<ProtectedQuerySummary>>
    void SetProtectedQueries(ProtectedQueriesT&& value) { m_protectedQueriesHasBeenSet = true; m_protectedQueries = std::forward<ProtectedQueriesT>(value); }
    template<typename ProtectedQueriesT = Aws::Vector<ProtectedQuerySummary>>
    ListProtectedQueriesResult& WithProtectedQueries(ProtectedQueriesT&& value) { SetProtectedQueries(std::forward<ProtectedQueriesT>(value)); return *this;}
    template<typename ProtectedQueriesT = ProtectedQuerySummary>
    ListProtectedQueriesResult& AddProtectedQueries(ProtectedQueriesT&& value) { m_protectedQueriesHasBeenSet = true; m_protectedQueries.emplace_back(std::forward<ProtectedQueriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProtectedQueriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ProtectedQuerySummary> m_protectedQueries;
    bool m_protectedQueriesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
