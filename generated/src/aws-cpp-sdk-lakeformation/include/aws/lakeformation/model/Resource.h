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
#include <aws/lakeformation/model/DataCellsFilterResource.h>
#include <aws/lakeformation/model/LFTagKeyResource.h>
#include <aws/lakeformation/model/LFTagPolicyResource.h>
#include <aws/lakeformation/model/LFTagExpressionResource.h>
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
  class Resource
  {
  public:
    AWS_LAKEFORMATION_API Resource() = default;
    AWS_LAKEFORMATION_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline const CatalogResource& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = CatalogResource>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = CatalogResource>
    Resource& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database for the resource. Unique to the Data Catalog. A database is a
     * set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database permissions to a principal. </p>
     */
    inline const DatabaseResource& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = DatabaseResource>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = DatabaseResource>
    Resource& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table for the resource. A table is a metadata definition that represents
     * your data. You can Grant and Revoke table privileges to a principal. </p>
     */
    inline const TableResource& GetTable() const { return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    template<typename TableT = TableResource>
    void SetTable(TableT&& value) { m_tableHasBeenSet = true; m_table = std::forward<TableT>(value); }
    template<typename TableT = TableResource>
    Resource& WithTable(TableT&& value) { SetTable(std::forward<TableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table with columns for the resource. A principal with permissions to this
     * resource can select metadata from the columns of a table in the Data Catalog and
     * the underlying data in Amazon S3.</p>
     */
    inline const TableWithColumnsResource& GetTableWithColumns() const { return m_tableWithColumns; }
    inline bool TableWithColumnsHasBeenSet() const { return m_tableWithColumnsHasBeenSet; }
    template<typename TableWithColumnsT = TableWithColumnsResource>
    void SetTableWithColumns(TableWithColumnsT&& value) { m_tableWithColumnsHasBeenSet = true; m_tableWithColumns = std::forward<TableWithColumnsT>(value); }
    template<typename TableWithColumnsT = TableWithColumnsResource>
    Resource& WithTableWithColumns(TableWithColumnsT&& value) { SetTableWithColumns(std::forward<TableWithColumnsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of an Amazon S3 path where permissions are granted or revoked.
     * </p>
     */
    inline const DataLocationResource& GetDataLocation() const { return m_dataLocation; }
    inline bool DataLocationHasBeenSet() const { return m_dataLocationHasBeenSet; }
    template<typename DataLocationT = DataLocationResource>
    void SetDataLocation(DataLocationT&& value) { m_dataLocationHasBeenSet = true; m_dataLocation = std::forward<DataLocationT>(value); }
    template<typename DataLocationT = DataLocationResource>
    Resource& WithDataLocation(DataLocationT&& value) { SetDataLocation(std::forward<DataLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A data cell filter.</p>
     */
    inline const DataCellsFilterResource& GetDataCellsFilter() const { return m_dataCellsFilter; }
    inline bool DataCellsFilterHasBeenSet() const { return m_dataCellsFilterHasBeenSet; }
    template<typename DataCellsFilterT = DataCellsFilterResource>
    void SetDataCellsFilter(DataCellsFilterT&& value) { m_dataCellsFilterHasBeenSet = true; m_dataCellsFilter = std::forward<DataCellsFilterT>(value); }
    template<typename DataCellsFilterT = DataCellsFilterResource>
    Resource& WithDataCellsFilter(DataCellsFilterT&& value) { SetDataCellsFilter(std::forward<DataCellsFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The LF-tag key and values attached to a resource.</p>
     */
    inline const LFTagKeyResource& GetLFTag() const { return m_lFTag; }
    inline bool LFTagHasBeenSet() const { return m_lFTagHasBeenSet; }
    template<typename LFTagT = LFTagKeyResource>
    void SetLFTag(LFTagT&& value) { m_lFTagHasBeenSet = true; m_lFTag = std::forward<LFTagT>(value); }
    template<typename LFTagT = LFTagKeyResource>
    Resource& WithLFTag(LFTagT&& value) { SetLFTag(std::forward<LFTagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of LF-tag conditions or saved LF-Tag expressions that define a
     * resource's LF-tag policy.</p>
     */
    inline const LFTagPolicyResource& GetLFTagPolicy() const { return m_lFTagPolicy; }
    inline bool LFTagPolicyHasBeenSet() const { return m_lFTagPolicyHasBeenSet; }
    template<typename LFTagPolicyT = LFTagPolicyResource>
    void SetLFTagPolicy(LFTagPolicyT&& value) { m_lFTagPolicyHasBeenSet = true; m_lFTagPolicy = std::forward<LFTagPolicyT>(value); }
    template<typename LFTagPolicyT = LFTagPolicyResource>
    Resource& WithLFTagPolicy(LFTagPolicyT&& value) { SetLFTagPolicy(std::forward<LFTagPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>LF-Tag expression resource. A logical expression composed of one or more
     * LF-Tag key:value pairs.</p>
     */
    inline const LFTagExpressionResource& GetLFTagExpression() const { return m_lFTagExpression; }
    inline bool LFTagExpressionHasBeenSet() const { return m_lFTagExpressionHasBeenSet; }
    template<typename LFTagExpressionT = LFTagExpressionResource>
    void SetLFTagExpression(LFTagExpressionT&& value) { m_lFTagExpressionHasBeenSet = true; m_lFTagExpression = std::forward<LFTagExpressionT>(value); }
    template<typename LFTagExpressionT = LFTagExpressionResource>
    Resource& WithLFTagExpression(LFTagExpressionT&& value) { SetLFTagExpression(std::forward<LFTagExpressionT>(value)); return *this;}
    ///@}
  private:

    CatalogResource m_catalog;
    bool m_catalogHasBeenSet = false;

    DatabaseResource m_database;
    bool m_databaseHasBeenSet = false;

    TableResource m_table;
    bool m_tableHasBeenSet = false;

    TableWithColumnsResource m_tableWithColumns;
    bool m_tableWithColumnsHasBeenSet = false;

    DataLocationResource m_dataLocation;
    bool m_dataLocationHasBeenSet = false;

    DataCellsFilterResource m_dataCellsFilter;
    bool m_dataCellsFilterHasBeenSet = false;

    LFTagKeyResource m_lFTag;
    bool m_lFTagHasBeenSet = false;

    LFTagPolicyResource m_lFTagPolicy;
    bool m_lFTagPolicyHasBeenSet = false;

    LFTagExpressionResource m_lFTagExpression;
    bool m_lFTagExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
