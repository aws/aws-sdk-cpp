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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/GlobalTable.h>
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
namespace DynamoDB
{
namespace Model
{
  class AWS_DYNAMODB_API ListGlobalTablesResult
  {
  public:
    ListGlobalTablesResult();
    ListGlobalTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListGlobalTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of global table names.</p>
     */
    inline const Aws::Vector<GlobalTable>& GetGlobalTables() const{ return m_globalTables; }

    /**
     * <p>List of global table names.</p>
     */
    inline void SetGlobalTables(const Aws::Vector<GlobalTable>& value) { m_globalTables = value; }

    /**
     * <p>List of global table names.</p>
     */
    inline void SetGlobalTables(Aws::Vector<GlobalTable>&& value) { m_globalTables = std::move(value); }

    /**
     * <p>List of global table names.</p>
     */
    inline ListGlobalTablesResult& WithGlobalTables(const Aws::Vector<GlobalTable>& value) { SetGlobalTables(value); return *this;}

    /**
     * <p>List of global table names.</p>
     */
    inline ListGlobalTablesResult& WithGlobalTables(Aws::Vector<GlobalTable>&& value) { SetGlobalTables(std::move(value)); return *this;}

    /**
     * <p>List of global table names.</p>
     */
    inline ListGlobalTablesResult& AddGlobalTables(const GlobalTable& value) { m_globalTables.push_back(value); return *this; }

    /**
     * <p>List of global table names.</p>
     */
    inline ListGlobalTablesResult& AddGlobalTables(GlobalTable&& value) { m_globalTables.push_back(std::move(value)); return *this; }


    /**
     * <p>Last evaluated global table name.</p>
     */
    inline const Aws::String& GetLastEvaluatedGlobalTableName() const{ return m_lastEvaluatedGlobalTableName; }

    /**
     * <p>Last evaluated global table name.</p>
     */
    inline void SetLastEvaluatedGlobalTableName(const Aws::String& value) { m_lastEvaluatedGlobalTableName = value; }

    /**
     * <p>Last evaluated global table name.</p>
     */
    inline void SetLastEvaluatedGlobalTableName(Aws::String&& value) { m_lastEvaluatedGlobalTableName = std::move(value); }

    /**
     * <p>Last evaluated global table name.</p>
     */
    inline void SetLastEvaluatedGlobalTableName(const char* value) { m_lastEvaluatedGlobalTableName.assign(value); }

    /**
     * <p>Last evaluated global table name.</p>
     */
    inline ListGlobalTablesResult& WithLastEvaluatedGlobalTableName(const Aws::String& value) { SetLastEvaluatedGlobalTableName(value); return *this;}

    /**
     * <p>Last evaluated global table name.</p>
     */
    inline ListGlobalTablesResult& WithLastEvaluatedGlobalTableName(Aws::String&& value) { SetLastEvaluatedGlobalTableName(std::move(value)); return *this;}

    /**
     * <p>Last evaluated global table name.</p>
     */
    inline ListGlobalTablesResult& WithLastEvaluatedGlobalTableName(const char* value) { SetLastEvaluatedGlobalTableName(value); return *this;}

  private:

    Aws::Vector<GlobalTable> m_globalTables;

    Aws::String m_lastEvaluatedGlobalTableName;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
