﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class BatchDeleteTableVersionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API BatchDeleteTableVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteTableVersion"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Data Catalog where the tables reside. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline BatchDeleteTableVersionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline BatchDeleteTableVersionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline BatchDeleteTableVersionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database in the catalog in which the table resides. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline BatchDeleteTableVersionRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline BatchDeleteTableVersionRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline BatchDeleteTableVersionRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table. For Hive compatibility, this name is entirely
     * lowercase.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline BatchDeleteTableVersionRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline BatchDeleteTableVersionRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline BatchDeleteTableVersionRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the IDs of versions to be deleted. A <code>VersionId</code> is a
     * string representation of an integer. Each version is incremented by 1.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionIds() const{ return m_versionIds; }
    inline bool VersionIdsHasBeenSet() const { return m_versionIdsHasBeenSet; }
    inline void SetVersionIds(const Aws::Vector<Aws::String>& value) { m_versionIdsHasBeenSet = true; m_versionIds = value; }
    inline void SetVersionIds(Aws::Vector<Aws::String>&& value) { m_versionIdsHasBeenSet = true; m_versionIds = std::move(value); }
    inline BatchDeleteTableVersionRequest& WithVersionIds(const Aws::Vector<Aws::String>& value) { SetVersionIds(value); return *this;}
    inline BatchDeleteTableVersionRequest& WithVersionIds(Aws::Vector<Aws::String>&& value) { SetVersionIds(std::move(value)); return *this;}
    inline BatchDeleteTableVersionRequest& AddVersionIds(const Aws::String& value) { m_versionIdsHasBeenSet = true; m_versionIds.push_back(value); return *this; }
    inline BatchDeleteTableVersionRequest& AddVersionIds(Aws::String&& value) { m_versionIdsHasBeenSet = true; m_versionIds.push_back(std::move(value)); return *this; }
    inline BatchDeleteTableVersionRequest& AddVersionIds(const char* value) { m_versionIdsHasBeenSet = true; m_versionIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_versionIds;
    bool m_versionIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
