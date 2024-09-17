/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/PartitionIndex.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreatePartitionIndexRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreatePartitionIndexRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePartitionIndex"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline CreatePartitionIndexRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline CreatePartitionIndexRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline CreatePartitionIndexRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of a database in which you want to create a partition
     * index.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline CreatePartitionIndexRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline CreatePartitionIndexRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline CreatePartitionIndexRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of a table in which you want to create a partition
     * index.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline CreatePartitionIndexRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline CreatePartitionIndexRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline CreatePartitionIndexRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a <code>PartitionIndex</code> structure to create a partition index
     * in an existing table.</p>
     */
    inline const PartitionIndex& GetPartitionIndex() const{ return m_partitionIndex; }
    inline bool PartitionIndexHasBeenSet() const { return m_partitionIndexHasBeenSet; }
    inline void SetPartitionIndex(const PartitionIndex& value) { m_partitionIndexHasBeenSet = true; m_partitionIndex = value; }
    inline void SetPartitionIndex(PartitionIndex&& value) { m_partitionIndexHasBeenSet = true; m_partitionIndex = std::move(value); }
    inline CreatePartitionIndexRequest& WithPartitionIndex(const PartitionIndex& value) { SetPartitionIndex(value); return *this;}
    inline CreatePartitionIndexRequest& WithPartitionIndex(PartitionIndex&& value) { SetPartitionIndex(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    PartitionIndex m_partitionIndex;
    bool m_partitionIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
