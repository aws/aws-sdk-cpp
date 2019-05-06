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
#include <aws/glue/model/PartitionInput.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API CreatePartitionRequest : public GlueRequest
  {
  public:
    CreatePartitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePartition"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the catalog in which the partion is to be created. Currently, this
     * should be the AWS account ID.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the catalog in which the partion is to be created. Currently, this
     * should be the AWS account ID.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the catalog in which the partion is to be created. Currently, this
     * should be the AWS account ID.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the catalog in which the partion is to be created. Currently, this
     * should be the AWS account ID.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the catalog in which the partion is to be created. Currently, this
     * should be the AWS account ID.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the catalog in which the partion is to be created. Currently, this
     * should be the AWS account ID.</p>
     */
    inline CreatePartitionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the catalog in which the partion is to be created. Currently, this
     * should be the AWS account ID.</p>
     */
    inline CreatePartitionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the catalog in which the partion is to be created. Currently, this
     * should be the AWS account ID.</p>
     */
    inline CreatePartitionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the metadata database in which the partition is to be
     * created.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the metadata database in which the partition is to be
     * created.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the metadata database in which the partition is to be
     * created.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the metadata database in which the partition is to be
     * created.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the metadata database in which the partition is to be
     * created.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the metadata database in which the partition is to be
     * created.</p>
     */
    inline CreatePartitionRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the metadata database in which the partition is to be
     * created.</p>
     */
    inline CreatePartitionRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the metadata database in which the partition is to be
     * created.</p>
     */
    inline CreatePartitionRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the metadata table in which the partition is to be created.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the metadata table in which the partition is to be created.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the metadata table in which the partition is to be created.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the metadata table in which the partition is to be created.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the metadata table in which the partition is to be created.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the metadata table in which the partition is to be created.</p>
     */
    inline CreatePartitionRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the metadata table in which the partition is to be created.</p>
     */
    inline CreatePartitionRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the metadata table in which the partition is to be created.</p>
     */
    inline CreatePartitionRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>A <code>PartitionInput</code> structure defining the partition to be
     * created.</p>
     */
    inline const PartitionInput& GetPartitionInput() const{ return m_partitionInput; }

    /**
     * <p>A <code>PartitionInput</code> structure defining the partition to be
     * created.</p>
     */
    inline bool PartitionInputHasBeenSet() const { return m_partitionInputHasBeenSet; }

    /**
     * <p>A <code>PartitionInput</code> structure defining the partition to be
     * created.</p>
     */
    inline void SetPartitionInput(const PartitionInput& value) { m_partitionInputHasBeenSet = true; m_partitionInput = value; }

    /**
     * <p>A <code>PartitionInput</code> structure defining the partition to be
     * created.</p>
     */
    inline void SetPartitionInput(PartitionInput&& value) { m_partitionInputHasBeenSet = true; m_partitionInput = std::move(value); }

    /**
     * <p>A <code>PartitionInput</code> structure defining the partition to be
     * created.</p>
     */
    inline CreatePartitionRequest& WithPartitionInput(const PartitionInput& value) { SetPartitionInput(value); return *this;}

    /**
     * <p>A <code>PartitionInput</code> structure defining the partition to be
     * created.</p>
     */
    inline CreatePartitionRequest& WithPartitionInput(PartitionInput&& value) { SetPartitionInput(std::move(value)); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    PartitionInput m_partitionInput;
    bool m_partitionInputHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
