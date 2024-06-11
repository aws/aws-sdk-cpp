/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/Query.h>
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
namespace CloudTrail
{
namespace Model
{
  class ListQueriesResult
  {
  public:
    AWS_CLOUDTRAIL_API ListQueriesResult();
    AWS_CLOUDTRAIL_API ListQueriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API ListQueriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists matching query results, and shows query ID, status, and creation time
     * of each query.</p>
     */
    inline const Aws::Vector<Query>& GetQueries() const{ return m_queries; }
    inline void SetQueries(const Aws::Vector<Query>& value) { m_queries = value; }
    inline void SetQueries(Aws::Vector<Query>&& value) { m_queries = std::move(value); }
    inline ListQueriesResult& WithQueries(const Aws::Vector<Query>& value) { SetQueries(value); return *this;}
    inline ListQueriesResult& WithQueries(Aws::Vector<Query>&& value) { SetQueries(std::move(value)); return *this;}
    inline ListQueriesResult& AddQueries(const Query& value) { m_queries.push_back(value); return *this; }
    inline ListQueriesResult& AddQueries(Query&& value) { m_queries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token you can use to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListQueriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListQueriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListQueriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListQueriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListQueriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListQueriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Query> m_queries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
