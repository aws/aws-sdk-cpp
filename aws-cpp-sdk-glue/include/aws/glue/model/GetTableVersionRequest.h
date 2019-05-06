/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API GetTableVersionRequest : public GlueRequest
  {
  public:
    GetTableVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTableVersion"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog where the tables reside. If none is supplied, the
     * AWS account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog where the tables reside. If none is supplied, the
     * AWS account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog where the tables reside. If none is supplied, the
     * AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog where the tables reside. If none is supplied, the
     * AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog where the tables reside. If none is supplied, the
     * AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog where the tables reside. If none is supplied, the
     * AWS account ID is used by default.</p>
     */
    inline GetTableVersionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog where the tables reside. If none is supplied, the
     * AWS account ID is used by default.</p>
     */
    inline GetTableVersionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog where the tables reside. If none is supplied, the
     * AWS account ID is used by default.</p>
     */
    inline GetTableVersionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The database in the catalog in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The database in the catalog in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The database in the catalog in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The database in the catalog in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The database in the catalog in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The database in the catalog in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline GetTableVersionRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The database in the catalog in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline GetTableVersionRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The database in the catalog in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline GetTableVersionRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the table. For Hive compatibility, this name is entirely
     * lowercase.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table. For Hive compatibility, this name is entirely
     * lowercase.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table. For Hive compatibility, this name is entirely
     * lowercase.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table. For Hive compatibility, this name is entirely
     * lowercase.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table. For Hive compatibility, this name is entirely
     * lowercase.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table. For Hive compatibility, this name is entirely
     * lowercase.</p>
     */
    inline GetTableVersionRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table. For Hive compatibility, this name is entirely
     * lowercase.</p>
     */
    inline GetTableVersionRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table. For Hive compatibility, this name is entirely
     * lowercase.</p>
     */
    inline GetTableVersionRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The ID value of the table version to be retrieved. A <code>VersionID</code>
     * is a string representation of an integer. Each version is incremented by 1. </p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The ID value of the table version to be retrieved. A <code>VersionID</code>
     * is a string representation of an integer. Each version is incremented by 1. </p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The ID value of the table version to be retrieved. A <code>VersionID</code>
     * is a string representation of an integer. Each version is incremented by 1. </p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The ID value of the table version to be retrieved. A <code>VersionID</code>
     * is a string representation of an integer. Each version is incremented by 1. </p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The ID value of the table version to be retrieved. A <code>VersionID</code>
     * is a string representation of an integer. Each version is incremented by 1. </p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The ID value of the table version to be retrieved. A <code>VersionID</code>
     * is a string representation of an integer. Each version is incremented by 1. </p>
     */
    inline GetTableVersionRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The ID value of the table version to be retrieved. A <code>VersionID</code>
     * is a string representation of an integer. Each version is incremented by 1. </p>
     */
    inline GetTableVersionRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The ID value of the table version to be retrieved. A <code>VersionID</code>
     * is a string representation of an integer. Each version is incremented by 1. </p>
     */
    inline GetTableVersionRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
