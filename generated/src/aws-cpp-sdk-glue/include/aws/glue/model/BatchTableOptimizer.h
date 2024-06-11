﻿/**
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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Contains details for one of the table optimizers returned by the
   * <code>BatchGetTableOptimizer</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchTableOptimizer">AWS
   * API Reference</a></p>
   */
  class BatchTableOptimizer
  {
  public:
    AWS_GLUE_API BatchTableOptimizer();
    AWS_GLUE_API BatchTableOptimizer(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API BatchTableOptimizer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline BatchTableOptimizer& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline BatchTableOptimizer& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline BatchTableOptimizer& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline BatchTableOptimizer& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline BatchTableOptimizer& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline BatchTableOptimizer& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline BatchTableOptimizer& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline BatchTableOptimizer& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline BatchTableOptimizer& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>TableOptimizer</code> object that contains details on the
     * configuration and last run of a table optimzer.</p>
     */
    inline const TableOptimizer& GetTableOptimizer() const{ return m_tableOptimizer; }
    inline bool TableOptimizerHasBeenSet() const { return m_tableOptimizerHasBeenSet; }
    inline void SetTableOptimizer(const TableOptimizer& value) { m_tableOptimizerHasBeenSet = true; m_tableOptimizer = value; }
    inline void SetTableOptimizer(TableOptimizer&& value) { m_tableOptimizerHasBeenSet = true; m_tableOptimizer = std::move(value); }
    inline BatchTableOptimizer& WithTableOptimizer(const TableOptimizer& value) { SetTableOptimizer(value); return *this;}
    inline BatchTableOptimizer& WithTableOptimizer(TableOptimizer&& value) { SetTableOptimizer(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    TableOptimizer m_tableOptimizer;
    bool m_tableOptimizerHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
