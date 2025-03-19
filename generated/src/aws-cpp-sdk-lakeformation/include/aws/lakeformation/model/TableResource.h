/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/TableWildcard.h>
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
   * <p>A structure for the table object. A table is a metadata definition that
   * represents your data. You can Grant and Revoke table privileges to a principal.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/TableResource">AWS
   * API Reference</a></p>
   */
  class TableResource
  {
  public:
    AWS_LAKEFORMATION_API TableResource() = default;
    AWS_LAKEFORMATION_API TableResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API TableResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    TableResource& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database for the table. Unique to a Data Catalog. A database
     * is a set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database privileges to a principal. </p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    TableResource& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TableResource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A wildcard object representing every table under a database.</p> <p>At least
     * one of <code>TableResource$Name</code> or
     * <code>TableResource$TableWildcard</code> is required.</p>
     */
    inline const TableWildcard& GetTableWildcard() const { return m_tableWildcard; }
    inline bool TableWildcardHasBeenSet() const { return m_tableWildcardHasBeenSet; }
    template<typename TableWildcardT = TableWildcard>
    void SetTableWildcard(TableWildcardT&& value) { m_tableWildcardHasBeenSet = true; m_tableWildcard = std::forward<TableWildcardT>(value); }
    template<typename TableWildcardT = TableWildcard>
    TableResource& WithTableWildcard(TableWildcardT&& value) { SetTableWildcard(std::forward<TableWildcardT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TableWildcard m_tableWildcard;
    bool m_tableWildcardHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
