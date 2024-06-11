﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/PartitionValueList.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class BatchGetPartitionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API BatchGetPartitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetPartition"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline BatchGetPartitionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline BatchGetPartitionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline BatchGetPartitionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline BatchGetPartitionRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline BatchGetPartitionRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline BatchGetPartitionRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the partitions' table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline BatchGetPartitionRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline BatchGetPartitionRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline BatchGetPartitionRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of partition values identifying the partitions to retrieve.</p>
     */
    inline const Aws::Vector<PartitionValueList>& GetPartitionsToGet() const{ return m_partitionsToGet; }
    inline bool PartitionsToGetHasBeenSet() const { return m_partitionsToGetHasBeenSet; }
    inline void SetPartitionsToGet(const Aws::Vector<PartitionValueList>& value) { m_partitionsToGetHasBeenSet = true; m_partitionsToGet = value; }
    inline void SetPartitionsToGet(Aws::Vector<PartitionValueList>&& value) { m_partitionsToGetHasBeenSet = true; m_partitionsToGet = std::move(value); }
    inline BatchGetPartitionRequest& WithPartitionsToGet(const Aws::Vector<PartitionValueList>& value) { SetPartitionsToGet(value); return *this;}
    inline BatchGetPartitionRequest& WithPartitionsToGet(Aws::Vector<PartitionValueList>&& value) { SetPartitionsToGet(std::move(value)); return *this;}
    inline BatchGetPartitionRequest& AddPartitionsToGet(const PartitionValueList& value) { m_partitionsToGetHasBeenSet = true; m_partitionsToGet.push_back(value); return *this; }
    inline BatchGetPartitionRequest& AddPartitionsToGet(PartitionValueList&& value) { m_partitionsToGetHasBeenSet = true; m_partitionsToGet.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<PartitionValueList> m_partitionsToGet;
    bool m_partitionsToGetHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
