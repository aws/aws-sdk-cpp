/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxDatabaseListEntry.h>
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
namespace finspace
{
namespace Model
{
  class ListKxDatabasesResult
  {
  public:
    AWS_FINSPACE_API ListKxDatabasesResult();
    AWS_FINSPACE_API ListKxDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API ListKxDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of databases in the kdb environment.</p>
     */
    inline const Aws::Vector<KxDatabaseListEntry>& GetKxDatabases() const{ return m_kxDatabases; }

    /**
     * <p>A list of databases in the kdb environment.</p>
     */
    inline void SetKxDatabases(const Aws::Vector<KxDatabaseListEntry>& value) { m_kxDatabases = value; }

    /**
     * <p>A list of databases in the kdb environment.</p>
     */
    inline void SetKxDatabases(Aws::Vector<KxDatabaseListEntry>&& value) { m_kxDatabases = std::move(value); }

    /**
     * <p>A list of databases in the kdb environment.</p>
     */
    inline ListKxDatabasesResult& WithKxDatabases(const Aws::Vector<KxDatabaseListEntry>& value) { SetKxDatabases(value); return *this;}

    /**
     * <p>A list of databases in the kdb environment.</p>
     */
    inline ListKxDatabasesResult& WithKxDatabases(Aws::Vector<KxDatabaseListEntry>&& value) { SetKxDatabases(std::move(value)); return *this;}

    /**
     * <p>A list of databases in the kdb environment.</p>
     */
    inline ListKxDatabasesResult& AddKxDatabases(const KxDatabaseListEntry& value) { m_kxDatabases.push_back(value); return *this; }

    /**
     * <p>A list of databases in the kdb environment.</p>
     */
    inline ListKxDatabasesResult& AddKxDatabases(KxDatabaseListEntry&& value) { m_kxDatabases.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxDatabasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxDatabasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxDatabasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListKxDatabasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListKxDatabasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListKxDatabasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<KxDatabaseListEntry> m_kxDatabases;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
