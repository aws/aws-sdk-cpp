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
  class AWS_GLUE_API UpdatePartitionRequest : public GlueRequest
  {
  public:
    UpdatePartitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePartition"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog where the partition to be updated resides. If none
     * is supplied, the AWS account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog where the partition to be updated resides. If none
     * is supplied, the AWS account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog where the partition to be updated resides. If none
     * is supplied, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog where the partition to be updated resides. If none
     * is supplied, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog where the partition to be updated resides. If none
     * is supplied, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog where the partition to be updated resides. If none
     * is supplied, the AWS account ID is used by default.</p>
     */
    inline UpdatePartitionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog where the partition to be updated resides. If none
     * is supplied, the AWS account ID is used by default.</p>
     */
    inline UpdatePartitionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog where the partition to be updated resides. If none
     * is supplied, the AWS account ID is used by default.</p>
     */
    inline UpdatePartitionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline UpdatePartitionRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline UpdatePartitionRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline UpdatePartitionRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the table where the partition to be updated is located.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table where the partition to be updated is located.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table where the partition to be updated is located.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table where the partition to be updated is located.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table where the partition to be updated is located.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table where the partition to be updated is located.</p>
     */
    inline UpdatePartitionRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table where the partition to be updated is located.</p>
     */
    inline UpdatePartitionRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table where the partition to be updated is located.</p>
     */
    inline UpdatePartitionRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>A list of the values defining the partition.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionValueList() const{ return m_partitionValueList; }

    /**
     * <p>A list of the values defining the partition.</p>
     */
    inline bool PartitionValueListHasBeenSet() const { return m_partitionValueListHasBeenSet; }

    /**
     * <p>A list of the values defining the partition.</p>
     */
    inline void SetPartitionValueList(const Aws::Vector<Aws::String>& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList = value; }

    /**
     * <p>A list of the values defining the partition.</p>
     */
    inline void SetPartitionValueList(Aws::Vector<Aws::String>&& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList = std::move(value); }

    /**
     * <p>A list of the values defining the partition.</p>
     */
    inline UpdatePartitionRequest& WithPartitionValueList(const Aws::Vector<Aws::String>& value) { SetPartitionValueList(value); return *this;}

    /**
     * <p>A list of the values defining the partition.</p>
     */
    inline UpdatePartitionRequest& WithPartitionValueList(Aws::Vector<Aws::String>&& value) { SetPartitionValueList(std::move(value)); return *this;}

    /**
     * <p>A list of the values defining the partition.</p>
     */
    inline UpdatePartitionRequest& AddPartitionValueList(const Aws::String& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList.push_back(value); return *this; }

    /**
     * <p>A list of the values defining the partition.</p>
     */
    inline UpdatePartitionRequest& AddPartitionValueList(Aws::String&& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the values defining the partition.</p>
     */
    inline UpdatePartitionRequest& AddPartitionValueList(const char* value) { m_partitionValueListHasBeenSet = true; m_partitionValueList.push_back(value); return *this; }


    /**
     * <p>The new partition object to which to update the partition.</p>
     */
    inline const PartitionInput& GetPartitionInput() const{ return m_partitionInput; }

    /**
     * <p>The new partition object to which to update the partition.</p>
     */
    inline bool PartitionInputHasBeenSet() const { return m_partitionInputHasBeenSet; }

    /**
     * <p>The new partition object to which to update the partition.</p>
     */
    inline void SetPartitionInput(const PartitionInput& value) { m_partitionInputHasBeenSet = true; m_partitionInput = value; }

    /**
     * <p>The new partition object to which to update the partition.</p>
     */
    inline void SetPartitionInput(PartitionInput&& value) { m_partitionInputHasBeenSet = true; m_partitionInput = std::move(value); }

    /**
     * <p>The new partition object to which to update the partition.</p>
     */
    inline UpdatePartitionRequest& WithPartitionInput(const PartitionInput& value) { SetPartitionInput(value); return *this;}

    /**
     * <p>The new partition object to which to update the partition.</p>
     */
    inline UpdatePartitionRequest& WithPartitionInput(PartitionInput&& value) { SetPartitionInput(std::move(value)); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::Vector<Aws::String> m_partitionValueList;
    bool m_partitionValueListHasBeenSet;

    PartitionInput m_partitionInput;
    bool m_partitionInputHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
