/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/AWSMigrationHub/model/MigrationTaskUpdate.h>
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
namespace MigrationHub
{
namespace Model
{
  class ListMigrationTaskUpdatesResult
  {
  public:
    AWS_MIGRATIONHUB_API ListMigrationTaskUpdatesResult();
    AWS_MIGRATIONHUB_API ListMigrationTaskUpdatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUB_API ListMigrationTaskUpdatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response includes a <code>NextToken</code> value, that means that
     * there are more results available. The value of <code>NextToken</code> is a
     * unique pagination token for each page. To retrieve the next page of results,
     * call this API again and specify this <code>NextToken</code> value in the
     * request. Keep all other arguments unchanged. Each pagination token expires after
     * 24 hours. Using an expired pagination token will return an HTTP 400 InvalidToken
     * error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMigrationTaskUpdatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMigrationTaskUpdatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMigrationTaskUpdatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of migration-task updates.</p>
     */
    inline const Aws::Vector<MigrationTaskUpdate>& GetMigrationTaskUpdateList() const{ return m_migrationTaskUpdateList; }
    inline void SetMigrationTaskUpdateList(const Aws::Vector<MigrationTaskUpdate>& value) { m_migrationTaskUpdateList = value; }
    inline void SetMigrationTaskUpdateList(Aws::Vector<MigrationTaskUpdate>&& value) { m_migrationTaskUpdateList = std::move(value); }
    inline ListMigrationTaskUpdatesResult& WithMigrationTaskUpdateList(const Aws::Vector<MigrationTaskUpdate>& value) { SetMigrationTaskUpdateList(value); return *this;}
    inline ListMigrationTaskUpdatesResult& WithMigrationTaskUpdateList(Aws::Vector<MigrationTaskUpdate>&& value) { SetMigrationTaskUpdateList(std::move(value)); return *this;}
    inline ListMigrationTaskUpdatesResult& AddMigrationTaskUpdateList(const MigrationTaskUpdate& value) { m_migrationTaskUpdateList.push_back(value); return *this; }
    inline ListMigrationTaskUpdatesResult& AddMigrationTaskUpdateList(MigrationTaskUpdate&& value) { m_migrationTaskUpdateList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMigrationTaskUpdatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMigrationTaskUpdatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMigrationTaskUpdatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<MigrationTaskUpdate> m_migrationTaskUpdateList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
