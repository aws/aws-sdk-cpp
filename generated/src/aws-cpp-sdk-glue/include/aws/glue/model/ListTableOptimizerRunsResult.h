/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/TableOptimizerRun.h>
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
  class ListTableOptimizerRunsResult
  {
  public:
    AWS_GLUE_API ListTableOptimizerRunsResult();
    AWS_GLUE_API ListTableOptimizerRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListTableOptimizerRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogId = value; }

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogId = std::move(value); }

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogId.assign(value); }

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline ListTableOptimizerRunsResult& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline ListTableOptimizerRunsResult& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline ListTableOptimizerRunsResult& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseName = value; }

    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseName = std::move(value); }

    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseName.assign(value); }

    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline ListTableOptimizerRunsResult& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline ListTableOptimizerRunsResult& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline ListTableOptimizerRunsResult& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableName = value; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableName = std::move(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const char* value) { m_tableName.assign(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline ListTableOptimizerRunsResult& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline ListTableOptimizerRunsResult& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline ListTableOptimizerRunsResult& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>A continuation token for paginating the returned list of optimizer runs,
     * returned if the current segment of the list is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token for paginating the returned list of optimizer runs,
     * returned if the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token for paginating the returned list of optimizer runs,
     * returned if the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token for paginating the returned list of optimizer runs,
     * returned if the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token for paginating the returned list of optimizer runs,
     * returned if the current segment of the list is not the last.</p>
     */
    inline ListTableOptimizerRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token for paginating the returned list of optimizer runs,
     * returned if the current segment of the list is not the last.</p>
     */
    inline ListTableOptimizerRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token for paginating the returned list of optimizer runs,
     * returned if the current segment of the list is not the last.</p>
     */
    inline ListTableOptimizerRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of the optimizer runs associated with a table.</p>
     */
    inline const Aws::Vector<TableOptimizerRun>& GetTableOptimizerRuns() const{ return m_tableOptimizerRuns; }

    /**
     * <p>A list of the optimizer runs associated with a table.</p>
     */
    inline void SetTableOptimizerRuns(const Aws::Vector<TableOptimizerRun>& value) { m_tableOptimizerRuns = value; }

    /**
     * <p>A list of the optimizer runs associated with a table.</p>
     */
    inline void SetTableOptimizerRuns(Aws::Vector<TableOptimizerRun>&& value) { m_tableOptimizerRuns = std::move(value); }

    /**
     * <p>A list of the optimizer runs associated with a table.</p>
     */
    inline ListTableOptimizerRunsResult& WithTableOptimizerRuns(const Aws::Vector<TableOptimizerRun>& value) { SetTableOptimizerRuns(value); return *this;}

    /**
     * <p>A list of the optimizer runs associated with a table.</p>
     */
    inline ListTableOptimizerRunsResult& WithTableOptimizerRuns(Aws::Vector<TableOptimizerRun>&& value) { SetTableOptimizerRuns(std::move(value)); return *this;}

    /**
     * <p>A list of the optimizer runs associated with a table.</p>
     */
    inline ListTableOptimizerRunsResult& AddTableOptimizerRuns(const TableOptimizerRun& value) { m_tableOptimizerRuns.push_back(value); return *this; }

    /**
     * <p>A list of the optimizer runs associated with a table.</p>
     */
    inline ListTableOptimizerRunsResult& AddTableOptimizerRuns(TableOptimizerRun&& value) { m_tableOptimizerRuns.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTableOptimizerRunsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTableOptimizerRunsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTableOptimizerRunsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_catalogId;

    Aws::String m_databaseName;

    Aws::String m_tableName;

    Aws::String m_nextToken;

    Aws::Vector<TableOptimizerRun> m_tableOptimizerRuns;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
