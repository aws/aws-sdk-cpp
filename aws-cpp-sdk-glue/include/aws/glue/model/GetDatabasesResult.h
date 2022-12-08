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


    /**
     * <p>A list of <code>Database</code> objects from the specified catalog.</p>
     */
    inline const Aws::Vector<Database>& GetDatabaseList() const{ return m_databaseList; }

    /**
     * <p>A list of <code>Database</code> objects from the specified catalog.</p>
     */
    inline void SetDatabaseList(const Aws::Vector<Database>& value) { m_databaseList = value; }

    /**
     * <p>A list of <code>Database</code> objects from the specified catalog.</p>
     */
    inline void SetDatabaseList(Aws::Vector<Database>&& value) { m_databaseList = std::move(value); }

    /**
     * <p>A list of <code>Database</code> objects from the specified catalog.</p>
     */
    inline GetDatabasesResult& WithDatabaseList(const Aws::Vector<Database>& value) { SetDatabaseList(value); return *this;}

    /**
     * <p>A list of <code>Database</code> objects from the specified catalog.</p>
     */
    inline GetDatabasesResult& WithDatabaseList(Aws::Vector<Database>&& value) { SetDatabaseList(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Database</code> objects from the specified catalog.</p>
     */
    inline GetDatabasesResult& AddDatabaseList(const Database& value) { m_databaseList.push_back(value); return *this; }

    /**
     * <p>A list of <code>Database</code> objects from the specified catalog.</p>
     */
    inline GetDatabasesResult& AddDatabaseList(Database&& value) { m_databaseList.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline GetDatabasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline GetDatabasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline GetDatabasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Database> m_databaseList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
