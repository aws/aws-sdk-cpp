/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ErrorDetail.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TableOptimizerType.h>
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
   * <p>Contains details on one of the errors in the error list returned by the
   * <code>BatchGetTableOptimizer</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetTableOptimizerError">AWS
   * API Reference</a></p>
   */
  class BatchGetTableOptimizerError
  {
  public:
    AWS_GLUE_API BatchGetTableOptimizerError();
    AWS_GLUE_API BatchGetTableOptimizerError(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API BatchGetTableOptimizerError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An <code>ErrorDetail</code> object containing code and message details about
     * the error.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const ErrorDetail& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(ErrorDetail&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline BatchGetTableOptimizerError& WithError(const ErrorDetail& value) { SetError(value); return *this;}
    inline BatchGetTableOptimizerError& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline BatchGetTableOptimizerError& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline BatchGetTableOptimizerError& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline BatchGetTableOptimizerError& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
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
    inline BatchGetTableOptimizerError& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline BatchGetTableOptimizerError& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline BatchGetTableOptimizerError& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
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
    inline BatchGetTableOptimizerError& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline BatchGetTableOptimizerError& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline BatchGetTableOptimizerError& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of table optimizer.</p>
     */
    inline const TableOptimizerType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TableOptimizerType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TableOptimizerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline BatchGetTableOptimizerError& WithType(const TableOptimizerType& value) { SetType(value); return *this;}
    inline BatchGetTableOptimizerError& WithType(TableOptimizerType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    TableOptimizerType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
