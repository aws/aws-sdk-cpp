/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListGlobalTablesResult
  {
  public:
    AWS_DYNAMODB_API ListGlobalTablesResult();
    AWS_DYNAMODB_API ListGlobalTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ListGlobalTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListGlobalTablesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListGlobalTablesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListGlobalTablesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<GlobalTable> m_globalTables;

    Aws::String m_lastEvaluatedGlobalTableName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
