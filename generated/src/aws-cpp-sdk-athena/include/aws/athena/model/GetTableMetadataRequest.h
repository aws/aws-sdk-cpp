/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class GetTableMetadataRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API GetTableMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTableMetadata"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the data catalog that contains the database and table metadata to
     * return.</p>
     */
    inline const Aws::String& GetCatalogName() const{ return m_catalogName; }

    /**
     * <p>The name of the data catalog that contains the database and table metadata to
     * return.</p>
     */
    inline bool CatalogNameHasBeenSet() const { return m_catalogNameHasBeenSet; }

    /**
     * <p>The name of the data catalog that contains the database and table metadata to
     * return.</p>
     */
    inline void SetCatalogName(const Aws::String& value) { m_catalogNameHasBeenSet = true; m_catalogName = value; }

    /**
     * <p>The name of the data catalog that contains the database and table metadata to
     * return.</p>
     */
    inline void SetCatalogName(Aws::String&& value) { m_catalogNameHasBeenSet = true; m_catalogName = std::move(value); }

    /**
     * <p>The name of the data catalog that contains the database and table metadata to
     * return.</p>
     */
    inline void SetCatalogName(const char* value) { m_catalogNameHasBeenSet = true; m_catalogName.assign(value); }

    /**
     * <p>The name of the data catalog that contains the database and table metadata to
     * return.</p>
     */
    inline GetTableMetadataRequest& WithCatalogName(const Aws::String& value) { SetCatalogName(value); return *this;}

    /**
     * <p>The name of the data catalog that contains the database and table metadata to
     * return.</p>
     */
    inline GetTableMetadataRequest& WithCatalogName(Aws::String&& value) { SetCatalogName(std::move(value)); return *this;}

    /**
     * <p>The name of the data catalog that contains the database and table metadata to
     * return.</p>
     */
    inline GetTableMetadataRequest& WithCatalogName(const char* value) { SetCatalogName(value); return *this;}


    /**
     * <p>The name of the database that contains the table metadata to return.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database that contains the table metadata to return.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database that contains the table metadata to return.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database that contains the table metadata to return.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database that contains the table metadata to return.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database that contains the table metadata to return.</p>
     */
    inline GetTableMetadataRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database that contains the table metadata to return.</p>
     */
    inline GetTableMetadataRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database that contains the table metadata to return.</p>
     */
    inline GetTableMetadataRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the table for which metadata is returned.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table for which metadata is returned.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table for which metadata is returned.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table for which metadata is returned.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table for which metadata is returned.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table for which metadata is returned.</p>
     */
    inline GetTableMetadataRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table for which metadata is returned.</p>
     */
    inline GetTableMetadataRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table for which metadata is returned.</p>
     */
    inline GetTableMetadataRequest& WithTableName(const char* value) { SetTableName(value); return *this;}

  private:

    Aws::String m_catalogName;
    bool m_catalogNameHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
