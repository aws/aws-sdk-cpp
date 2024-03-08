/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TableOptimizer.h>
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
  class GetTableOptimizerResult
  {
  public:
    AWS_GLUE_API GetTableOptimizerResult();
    AWS_GLUE_API GetTableOptimizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetTableOptimizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetTableOptimizerResult& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline GetTableOptimizerResult& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline GetTableOptimizerResult& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


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
    inline GetTableOptimizerResult& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline GetTableOptimizerResult& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline GetTableOptimizerResult& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


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
    inline GetTableOptimizerResult& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline GetTableOptimizerResult& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline GetTableOptimizerResult& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The optimizer associated with the specified table.</p>
     */
    inline const TableOptimizer& GetTableOptimizer() const{ return m_tableOptimizer; }

    /**
     * <p>The optimizer associated with the specified table.</p>
     */
    inline void SetTableOptimizer(const TableOptimizer& value) { m_tableOptimizer = value; }

    /**
     * <p>The optimizer associated with the specified table.</p>
     */
    inline void SetTableOptimizer(TableOptimizer&& value) { m_tableOptimizer = std::move(value); }

    /**
     * <p>The optimizer associated with the specified table.</p>
     */
    inline GetTableOptimizerResult& WithTableOptimizer(const TableOptimizer& value) { SetTableOptimizer(value); return *this;}

    /**
     * <p>The optimizer associated with the specified table.</p>
     */
    inline GetTableOptimizerResult& WithTableOptimizer(TableOptimizer&& value) { SetTableOptimizer(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTableOptimizerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTableOptimizerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTableOptimizerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_catalogId;

    Aws::String m_databaseName;

    Aws::String m_tableName;

    TableOptimizer m_tableOptimizer;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
