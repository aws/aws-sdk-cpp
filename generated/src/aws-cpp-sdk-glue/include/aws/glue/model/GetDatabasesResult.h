/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Database.h>
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
namespace Glue
{
namespace Model
{
  class GetDatabasesResult
  {
  public:
    AWS_GLUE_API GetDatabasesResult();
    AWS_GLUE_API GetDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>Database</code> objects from the specified catalog.</p>
     */
    inline const Aws::Vector<Database>& GetDatabaseList() const{ return m_databaseList; }
    inline void SetDatabaseList(const Aws::Vector<Database>& value) { m_databaseList = value; }
    inline void SetDatabaseList(Aws::Vector<Database>&& value) { m_databaseList = std::move(value); }
    inline GetDatabasesResult& WithDatabaseList(const Aws::Vector<Database>& value) { SetDatabaseList(value); return *this;}
    inline GetDatabasesResult& WithDatabaseList(Aws::Vector<Database>&& value) { SetDatabaseList(std::move(value)); return *this;}
    inline GetDatabasesResult& AddDatabaseList(const Database& value) { m_databaseList.push_back(value); return *this; }
    inline GetDatabasesResult& AddDatabaseList(Database&& value) { m_databaseList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetDatabasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetDatabasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetDatabasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDatabasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDatabasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDatabasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Database> m_databaseList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
