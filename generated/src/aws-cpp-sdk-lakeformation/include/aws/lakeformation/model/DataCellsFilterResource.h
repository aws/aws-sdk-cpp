/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure for a data cells filter resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DataCellsFilterResource">AWS
   * API Reference</a></p>
   */
  class DataCellsFilterResource
  {
  public:
    AWS_LAKEFORMATION_API DataCellsFilterResource();
    AWS_LAKEFORMATION_API DataCellsFilterResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API DataCellsFilterResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the catalog to which the table belongs.</p>
     */
    inline const Aws::String& GetTableCatalogId() const{ return m_tableCatalogId; }
    inline bool TableCatalogIdHasBeenSet() const { return m_tableCatalogIdHasBeenSet; }
    inline void SetTableCatalogId(const Aws::String& value) { m_tableCatalogIdHasBeenSet = true; m_tableCatalogId = value; }
    inline void SetTableCatalogId(Aws::String&& value) { m_tableCatalogIdHasBeenSet = true; m_tableCatalogId = std::move(value); }
    inline void SetTableCatalogId(const char* value) { m_tableCatalogIdHasBeenSet = true; m_tableCatalogId.assign(value); }
    inline DataCellsFilterResource& WithTableCatalogId(const Aws::String& value) { SetTableCatalogId(value); return *this;}
    inline DataCellsFilterResource& WithTableCatalogId(Aws::String&& value) { SetTableCatalogId(std::move(value)); return *this;}
    inline DataCellsFilterResource& WithTableCatalogId(const char* value) { SetTableCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A database in the Glue Data Catalog.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline DataCellsFilterResource& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline DataCellsFilterResource& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline DataCellsFilterResource& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
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
    inline DataCellsFilterResource& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline DataCellsFilterResource& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline DataCellsFilterResource& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data cells filter. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DataCellsFilterResource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DataCellsFilterResource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DataCellsFilterResource& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_tableCatalogId;
    bool m_tableCatalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
