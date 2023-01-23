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
    AWS_LAKEFORMATION_API TableResource();
    AWS_LAKEFORMATION_API TableResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API TableResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline TableResource& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline TableResource& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline TableResource& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the database for the table. Unique to a Data Catalog. A database
     * is a set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database privileges to a principal. </p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database for the table. Unique to a Data Catalog. A database
     * is a set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database privileges to a principal. </p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database for the table. Unique to a Data Catalog. A database
     * is a set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database privileges to a principal. </p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database for the table. Unique to a Data Catalog. A database
     * is a set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database privileges to a principal. </p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database for the table. Unique to a Data Catalog. A database
     * is a set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database privileges to a principal. </p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database for the table. Unique to a Data Catalog. A database
     * is a set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database privileges to a principal. </p>
     */
    inline TableResource& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database for the table. Unique to a Data Catalog. A database
     * is a set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database privileges to a principal. </p>
     */
    inline TableResource& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database for the table. Unique to a Data Catalog. A database
     * is a set of associated table definitions organized into a logical group. You can
     * Grant and Revoke database privileges to a principal. </p>
     */
    inline TableResource& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the table.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline TableResource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline TableResource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline TableResource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A wildcard object representing every table under a database.</p> <p>At least
     * one of <code>TableResource$Name</code> or
     * <code>TableResource$TableWildcard</code> is required.</p>
     */
    inline const TableWildcard& GetTableWildcard() const{ return m_tableWildcard; }

    /**
     * <p>A wildcard object representing every table under a database.</p> <p>At least
     * one of <code>TableResource$Name</code> or
     * <code>TableResource$TableWildcard</code> is required.</p>
     */
    inline bool TableWildcardHasBeenSet() const { return m_tableWildcardHasBeenSet; }

    /**
     * <p>A wildcard object representing every table under a database.</p> <p>At least
     * one of <code>TableResource$Name</code> or
     * <code>TableResource$TableWildcard</code> is required.</p>
     */
    inline void SetTableWildcard(const TableWildcard& value) { m_tableWildcardHasBeenSet = true; m_tableWildcard = value; }

    /**
     * <p>A wildcard object representing every table under a database.</p> <p>At least
     * one of <code>TableResource$Name</code> or
     * <code>TableResource$TableWildcard</code> is required.</p>
     */
    inline void SetTableWildcard(TableWildcard&& value) { m_tableWildcardHasBeenSet = true; m_tableWildcard = std::move(value); }

    /**
     * <p>A wildcard object representing every table under a database.</p> <p>At least
     * one of <code>TableResource$Name</code> or
     * <code>TableResource$TableWildcard</code> is required.</p>
     */
    inline TableResource& WithTableWildcard(const TableWildcard& value) { SetTableWildcard(value); return *this;}

    /**
     * <p>A wildcard object representing every table under a database.</p> <p>At least
     * one of <code>TableResource$Name</code> or
     * <code>TableResource$TableWildcard</code> is required.</p>
     */
    inline TableResource& WithTableWildcard(TableWildcard&& value) { SetTableWildcard(std::move(value)); return *this;}

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
