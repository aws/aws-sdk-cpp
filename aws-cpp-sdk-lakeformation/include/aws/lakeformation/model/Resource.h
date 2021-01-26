/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/CatalogResource.h>
#include <aws/lakeformation/model/DatabaseResource.h>
#include <aws/lakeformation/model/TableResource.h>
#include <aws/lakeformation/model/TableWithColumnsResource.h>
#include <aws/lakeformation/model/DataLocationResource.h>
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
   * <p>A structure for the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/Resource">AWS
   * API Reference</a></p>
   */
  class AWS_LAKEFORMATION_API Resource
  {
  public:
    Resource();
    Resource(Aws::Utils::Json::JsonView jsonValue);
    Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your AWS Lake
     * Formation environment. </p>
     */
    inline const CatalogResource& GetCatalog() const{ return m_catalog; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your AWS Lake
     * Formation environment. </p>
     */
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your AWS Lake
     * Formation environment. </p>
     */
    inline void SetCatalog(const CatalogResource& value) { m_catalogHasBeenSet = true; m_catalog = value; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your AWS Lake
     * Formation environment. </p>
     */
    inline void SetCatalog(CatalogResource&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your AWS Lake
     * Formation environment. </p>
     */
    inline Resource& WithCatalog(const CatalogResource& value) { SetCatalog(value); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your AWS Lake
     * Formation environment. </p>
     */
    inline Resource& WithCatalog(CatalogResource&& value) { SetCatalog(std::move(value)); return *this;}


    /**
     * <p>The database for the resource. Unique to the Data Catalog. A database is a
     * set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database permissions to a principal. </p>
     */
    inline const DatabaseResource& GetDatabase() const{ return m_database; }

    /**
     * <p>The database for the resource. Unique to the Data Catalog. A database is a
     * set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database permissions to a principal. </p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>The database for the resource. Unique to the Data Catalog. A database is a
     * set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database permissions to a principal. </p>
     */
    inline void SetDatabase(const DatabaseResource& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>The database for the resource. Unique to the Data Catalog. A database is a
     * set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database permissions to a principal. </p>
     */
    inline void SetDatabase(DatabaseResource&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>The database for the resource. Unique to the Data Catalog. A database is a
     * set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database permissions to a principal. </p>
     */
    inline Resource& WithDatabase(const DatabaseResource& value) { SetDatabase(value); return *this;}

    /**
     * <p>The database for the resource. Unique to the Data Catalog. A database is a
     * set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database permissions to a principal. </p>
     */
    inline Resource& WithDatabase(DatabaseResource&& value) { SetDatabase(std::move(value)); return *this;}


    /**
     * <p>The table for the resource. A table is a metadata definition that represents
     * your data. You can Grant and Revoke table privileges to a principal. </p>
     */
    inline const TableResource& GetTable() const{ return m_table; }

    /**
     * <p>The table for the resource. A table is a metadata definition that represents
     * your data. You can Grant and Revoke table privileges to a principal. </p>
     */
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }

    /**
     * <p>The table for the resource. A table is a metadata definition that represents
     * your data. You can Grant and Revoke table privileges to a principal. </p>
     */
    inline void SetTable(const TableResource& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>The table for the resource. A table is a metadata definition that represents
     * your data. You can Grant and Revoke table privileges to a principal. </p>
     */
    inline void SetTable(TableResource&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }

    /**
     * <p>The table for the resource. A table is a metadata definition that represents
     * your data. You can Grant and Revoke table privileges to a principal. </p>
     */
    inline Resource& WithTable(const TableResource& value) { SetTable(value); return *this;}

    /**
     * <p>The table for the resource. A table is a metadata definition that represents
     * your data. You can Grant and Revoke table privileges to a principal. </p>
     */
    inline Resource& WithTable(TableResource&& value) { SetTable(std::move(value)); return *this;}


    /**
     * <p>The table with columns for the resource. A principal with permissions to this
     * resource can select metadata from the columns of a table in the Data Catalog and
     * the underlying data in Amazon S3.</p>
     */
    inline const TableWithColumnsResource& GetTableWithColumns() const{ return m_tableWithColumns; }

    /**
     * <p>The table with columns for the resource. A principal with permissions to this
     * resource can select metadata from the columns of a table in the Data Catalog and
     * the underlying data in Amazon S3.</p>
     */
    inline bool TableWithColumnsHasBeenSet() const { return m_tableWithColumnsHasBeenSet; }

    /**
     * <p>The table with columns for the resource. A principal with permissions to this
     * resource can select metadata from the columns of a table in the Data Catalog and
     * the underlying data in Amazon S3.</p>
     */
    inline void SetTableWithColumns(const TableWithColumnsResource& value) { m_tableWithColumnsHasBeenSet = true; m_tableWithColumns = value; }

    /**
     * <p>The table with columns for the resource. A principal with permissions to this
     * resource can select metadata from the columns of a table in the Data Catalog and
     * the underlying data in Amazon S3.</p>
     */
    inline void SetTableWithColumns(TableWithColumnsResource&& value) { m_tableWithColumnsHasBeenSet = true; m_tableWithColumns = std::move(value); }

    /**
     * <p>The table with columns for the resource. A principal with permissions to this
     * resource can select metadata from the columns of a table in the Data Catalog and
     * the underlying data in Amazon S3.</p>
     */
    inline Resource& WithTableWithColumns(const TableWithColumnsResource& value) { SetTableWithColumns(value); return *this;}

    /**
     * <p>The table with columns for the resource. A principal with permissions to this
     * resource can select metadata from the columns of a table in the Data Catalog and
     * the underlying data in Amazon S3.</p>
     */
    inline Resource& WithTableWithColumns(TableWithColumnsResource&& value) { SetTableWithColumns(std::move(value)); return *this;}


    /**
     * <p>The location of an Amazon S3 path where permissions are granted or revoked.
     * </p>
     */
    inline const DataLocationResource& GetDataLocation() const{ return m_dataLocation; }

    /**
     * <p>The location of an Amazon S3 path where permissions are granted or revoked.
     * </p>
     */
    inline bool DataLocationHasBeenSet() const { return m_dataLocationHasBeenSet; }

    /**
     * <p>The location of an Amazon S3 path where permissions are granted or revoked.
     * </p>
     */
    inline void SetDataLocation(const DataLocationResource& value) { m_dataLocationHasBeenSet = true; m_dataLocation = value; }

    /**
     * <p>The location of an Amazon S3 path where permissions are granted or revoked.
     * </p>
     */
    inline void SetDataLocation(DataLocationResource&& value) { m_dataLocationHasBeenSet = true; m_dataLocation = std::move(value); }

    /**
     * <p>The location of an Amazon S3 path where permissions are granted or revoked.
     * </p>
     */
    inline Resource& WithDataLocation(const DataLocationResource& value) { SetDataLocation(value); return *this;}

    /**
     * <p>The location of an Amazon S3 path where permissions are granted or revoked.
     * </p>
     */
    inline Resource& WithDataLocation(DataLocationResource&& value) { SetDataLocation(std::move(value)); return *this;}

  private:

    CatalogResource m_catalog;
    bool m_catalogHasBeenSet;

    DatabaseResource m_database;
    bool m_databaseHasBeenSet;

    TableResource m_table;
    bool m_tableHasBeenSet;

    TableWithColumnsResource m_tableWithColumns;
    bool m_tableWithColumnsHasBeenSet;

    DataLocationResource m_dataLocation;
    bool m_dataLocationHasBeenSet;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
