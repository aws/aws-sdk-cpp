/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetPartitionIndexesRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetPartitionIndexesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPartitionIndexes"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline GetPartitionIndexesRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline GetPartitionIndexesRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline GetPartitionIndexesRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>Specifies the name of a database from which you want to retrieve partition
     * indexes.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>Specifies the name of a database from which you want to retrieve partition
     * indexes.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>Specifies the name of a database from which you want to retrieve partition
     * indexes.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>Specifies the name of a database from which you want to retrieve partition
     * indexes.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>Specifies the name of a database from which you want to retrieve partition
     * indexes.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>Specifies the name of a database from which you want to retrieve partition
     * indexes.</p>
     */
    inline GetPartitionIndexesRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>Specifies the name of a database from which you want to retrieve partition
     * indexes.</p>
     */
    inline GetPartitionIndexesRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of a database from which you want to retrieve partition
     * indexes.</p>
     */
    inline GetPartitionIndexesRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Specifies the name of a table for which you want to retrieve the partition
     * indexes.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>Specifies the name of a table for which you want to retrieve the partition
     * indexes.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>Specifies the name of a table for which you want to retrieve the partition
     * indexes.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>Specifies the name of a table for which you want to retrieve the partition
     * indexes.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>Specifies the name of a table for which you want to retrieve the partition
     * indexes.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>Specifies the name of a table for which you want to retrieve the partition
     * indexes.</p>
     */
    inline GetPartitionIndexesRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>Specifies the name of a table for which you want to retrieve the partition
     * indexes.</p>
     */
    inline GetPartitionIndexesRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of a table for which you want to retrieve the partition
     * indexes.</p>
     */
    inline GetPartitionIndexesRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline GetPartitionIndexesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline GetPartitionIndexesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline GetPartitionIndexesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
