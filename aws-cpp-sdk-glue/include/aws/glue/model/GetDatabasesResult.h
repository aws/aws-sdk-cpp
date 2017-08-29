/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GLUE_API GetDatabasesResult
  {
  public:
    GetDatabasesResult();
    GetDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
