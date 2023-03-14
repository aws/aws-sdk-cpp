/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/SchemaSummary.h>
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
  class ListSchemasResult
  {
  public:
    AWS_CLEANROOMS_API ListSchemasResult();
    AWS_CLEANROOMS_API ListSchemasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListSchemasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The retrieved list of schemas.</p>
     */
    inline const Aws::Vector<SchemaSummary>& GetSchemaSummaries() const{ return m_schemaSummaries; }

    /**
     * <p>The retrieved list of schemas.</p>
     */
    inline void SetSchemaSummaries(const Aws::Vector<SchemaSummary>& value) { m_schemaSummaries = value; }

    /**
     * <p>The retrieved list of schemas.</p>
     */
    inline void SetSchemaSummaries(Aws::Vector<SchemaSummary>&& value) { m_schemaSummaries = std::move(value); }

    /**
     * <p>The retrieved list of schemas.</p>
     */
    inline ListSchemasResult& WithSchemaSummaries(const Aws::Vector<SchemaSummary>& value) { SetSchemaSummaries(value); return *this;}

    /**
     * <p>The retrieved list of schemas.</p>
     */
    inline ListSchemasResult& WithSchemaSummaries(Aws::Vector<SchemaSummary>&& value) { SetSchemaSummaries(std::move(value)); return *this;}

    /**
     * <p>The retrieved list of schemas.</p>
     */
    inline ListSchemasResult& AddSchemaSummaries(const SchemaSummary& value) { m_schemaSummaries.push_back(value); return *this; }

    /**
     * <p>The retrieved list of schemas.</p>
     */
    inline ListSchemasResult& AddSchemaSummaries(SchemaSummary&& value) { m_schemaSummaries.push_back(std::move(value)); return *this; }


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
    inline ListSchemasResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListSchemasResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListSchemasResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSchemasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSchemasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSchemasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<SchemaSummary> m_schemaSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
