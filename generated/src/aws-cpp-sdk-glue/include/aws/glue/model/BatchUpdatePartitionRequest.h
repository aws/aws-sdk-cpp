﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/BatchUpdatePartitionRequestEntry.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class BatchUpdatePartitionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API BatchUpdatePartitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdatePartition"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the catalog in which the partition is to be updated. Currently,
     * this should be the Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline BatchUpdatePartitionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline BatchUpdatePartitionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline BatchUpdatePartitionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metadata database in which the partition is to be
     * updated.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline BatchUpdatePartitionRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline BatchUpdatePartitionRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline BatchUpdatePartitionRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metadata table in which the partition is to be updated.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline BatchUpdatePartitionRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline BatchUpdatePartitionRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline BatchUpdatePartitionRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 100 <code>BatchUpdatePartitionRequestEntry</code> objects to
     * update.</p>
     */
    inline const Aws::Vector<BatchUpdatePartitionRequestEntry>& GetEntries() const{ return m_entries; }
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
    inline void SetEntries(const Aws::Vector<BatchUpdatePartitionRequestEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }
    inline void SetEntries(Aws::Vector<BatchUpdatePartitionRequestEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }
    inline BatchUpdatePartitionRequest& WithEntries(const Aws::Vector<BatchUpdatePartitionRequestEntry>& value) { SetEntries(value); return *this;}
    inline BatchUpdatePartitionRequest& WithEntries(Aws::Vector<BatchUpdatePartitionRequestEntry>&& value) { SetEntries(std::move(value)); return *this;}
    inline BatchUpdatePartitionRequest& AddEntries(const BatchUpdatePartitionRequestEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }
    inline BatchUpdatePartitionRequest& AddEntries(BatchUpdatePartitionRequestEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<BatchUpdatePartitionRequestEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
