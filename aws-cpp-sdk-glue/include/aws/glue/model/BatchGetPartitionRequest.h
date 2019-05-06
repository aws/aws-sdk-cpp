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
  class AWS_GLUE_API BatchGetPartitionRequest : public GlueRequest
  {
  public:
    BatchGetPartitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetPartition"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is supplied, the AWS account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is supplied, the AWS account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is supplied, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is supplied, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is supplied, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is supplied, the AWS account ID is used by default.</p>
     */
    inline BatchGetPartitionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is supplied, the AWS account ID is used by default.</p>
     */
    inline BatchGetPartitionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is supplied, the AWS account ID is used by default.</p>
     */
    inline BatchGetPartitionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline BatchGetPartitionRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline BatchGetPartitionRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline BatchGetPartitionRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the partitions' table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline BatchGetPartitionRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline BatchGetPartitionRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline BatchGetPartitionRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>A list of partition values identifying the partitions to retrieve.</p>
     */
    inline const Aws::Vector<PartitionValueList>& GetPartitionsToGet() const{ return m_partitionsToGet; }

    /**
     * <p>A list of partition values identifying the partitions to retrieve.</p>
     */
    inline bool PartitionsToGetHasBeenSet() const { return m_partitionsToGetHasBeenSet; }

    /**
     * <p>A list of partition values identifying the partitions to retrieve.</p>
     */
    inline void SetPartitionsToGet(const Aws::Vector<PartitionValueList>& value) { m_partitionsToGetHasBeenSet = true; m_partitionsToGet = value; }

    /**
     * <p>A list of partition values identifying the partitions to retrieve.</p>
     */
    inline void SetPartitionsToGet(Aws::Vector<PartitionValueList>&& value) { m_partitionsToGetHasBeenSet = true; m_partitionsToGet = std::move(value); }

    /**
     * <p>A list of partition values identifying the partitions to retrieve.</p>
     */
    inline BatchGetPartitionRequest& WithPartitionsToGet(const Aws::Vector<PartitionValueList>& value) { SetPartitionsToGet(value); return *this;}

    /**
     * <p>A list of partition values identifying the partitions to retrieve.</p>
     */
    inline BatchGetPartitionRequest& WithPartitionsToGet(Aws::Vector<PartitionValueList>&& value) { SetPartitionsToGet(std::move(value)); return *this;}

    /**
     * <p>A list of partition values identifying the partitions to retrieve.</p>
     */
    inline BatchGetPartitionRequest& AddPartitionsToGet(const PartitionValueList& value) { m_partitionsToGetHasBeenSet = true; m_partitionsToGet.push_back(value); return *this; }

    /**
     * <p>A list of partition values identifying the partitions to retrieve.</p>
     */
    inline BatchGetPartitionRequest& AddPartitionsToGet(PartitionValueList&& value) { m_partitionsToGetHasBeenSet = true; m_partitionsToGet.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::Vector<PartitionValueList> m_partitionsToGet;
    bool m_partitionsToGetHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
