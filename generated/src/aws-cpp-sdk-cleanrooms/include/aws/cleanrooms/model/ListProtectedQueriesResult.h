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
    AWS_CLEANROOMS_API ListProtectedQueriesResult();
    AWS_CLEANROOMS_API ListProtectedQueriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListProtectedQueriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListProtectedQueriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListProtectedQueriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListProtectedQueriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of protected queries.</p>
     */
    inline const Aws::Vector<ProtectedQuerySummary>& GetProtectedQueries() const{ return m_protectedQueries; }

    /**
     * <p>A list of protected queries.</p>
     */
    inline void SetProtectedQueries(const Aws::Vector<ProtectedQuerySummary>& value) { m_protectedQueries = value; }

    /**
     * <p>A list of protected queries.</p>
     */
    inline void SetProtectedQueries(Aws::Vector<ProtectedQuerySummary>&& value) { m_protectedQueries = std::move(value); }

    /**
     * <p>A list of protected queries.</p>
     */
    inline ListProtectedQueriesResult& WithProtectedQueries(const Aws::Vector<ProtectedQuerySummary>& value) { SetProtectedQueries(value); return *this;}

    /**
     * <p>A list of protected queries.</p>
     */
    inline ListProtectedQueriesResult& WithProtectedQueries(Aws::Vector<ProtectedQuerySummary>&& value) { SetProtectedQueries(std::move(value)); return *this;}

    /**
     * <p>A list of protected queries.</p>
     */
    inline ListProtectedQueriesResult& AddProtectedQueries(const ProtectedQuerySummary& value) { m_protectedQueries.push_back(value); return *this; }

    /**
     * <p>A list of protected queries.</p>
     */
    inline ListProtectedQueriesResult& AddProtectedQueries(ProtectedQuerySummary&& value) { m_protectedQueries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListProtectedQueriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListProtectedQueriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListProtectedQueriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ProtectedQuerySummary> m_protectedQueries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
