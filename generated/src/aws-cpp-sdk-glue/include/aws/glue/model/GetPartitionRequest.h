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
  class GetPartitionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetPartitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPartition"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Data Catalog where the partition in question resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline GetPartitionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline GetPartitionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline GetPartitionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the catalog database where the partition resides.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline GetPartitionRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline GetPartitionRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline GetPartitionRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the partition's table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline GetPartitionRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline GetPartitionRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline GetPartitionRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values that define the partition.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionValues() const{ return m_partitionValues; }
    inline bool PartitionValuesHasBeenSet() const { return m_partitionValuesHasBeenSet; }
    inline void SetPartitionValues(const Aws::Vector<Aws::String>& value) { m_partitionValuesHasBeenSet = true; m_partitionValues = value; }
    inline void SetPartitionValues(Aws::Vector<Aws::String>&& value) { m_partitionValuesHasBeenSet = true; m_partitionValues = std::move(value); }
    inline GetPartitionRequest& WithPartitionValues(const Aws::Vector<Aws::String>& value) { SetPartitionValues(value); return *this;}
    inline GetPartitionRequest& WithPartitionValues(Aws::Vector<Aws::String>&& value) { SetPartitionValues(std::move(value)); return *this;}
    inline GetPartitionRequest& AddPartitionValues(const Aws::String& value) { m_partitionValuesHasBeenSet = true; m_partitionValues.push_back(value); return *this; }
    inline GetPartitionRequest& AddPartitionValues(Aws::String&& value) { m_partitionValuesHasBeenSet = true; m_partitionValues.push_back(std::move(value)); return *this; }
    inline GetPartitionRequest& AddPartitionValues(const char* value) { m_partitionValuesHasBeenSet = true; m_partitionValues.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_partitionValues;
    bool m_partitionValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
