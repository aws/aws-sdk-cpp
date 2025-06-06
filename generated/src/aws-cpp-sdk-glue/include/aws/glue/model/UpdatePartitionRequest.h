﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdatePartitionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdatePartitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePartition"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Data Catalog where the partition to be updated resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    UpdatePartitionRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    UpdatePartitionRequest& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table in which the partition to be updated is located.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    UpdatePartitionRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of partition key values that define the partition to update.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionValueList() const { return m_partitionValueList; }
    inline bool PartitionValueListHasBeenSet() const { return m_partitionValueListHasBeenSet; }
    template<typename PartitionValueListT = Aws::Vector<Aws::String>>
    void SetPartitionValueList(PartitionValueListT&& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList = std::forward<PartitionValueListT>(value); }
    template<typename PartitionValueListT = Aws::Vector<Aws::String>>
    UpdatePartitionRequest& WithPartitionValueList(PartitionValueListT&& value) { SetPartitionValueList(std::forward<PartitionValueListT>(value)); return *this;}
    template<typename PartitionValueListT = Aws::String>
    UpdatePartitionRequest& AddPartitionValueList(PartitionValueListT&& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList.emplace_back(std::forward<PartitionValueListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The new partition object to update the partition to.</p> <p>The
     * <code>Values</code> property can't be changed. If you want to change the
     * partition key values for a partition, delete and recreate the partition.</p>
     */
    inline const PartitionInput& GetPartitionInput() const { return m_partitionInput; }
    inline bool PartitionInputHasBeenSet() const { return m_partitionInputHasBeenSet; }
    template<typename PartitionInputT = PartitionInput>
    void SetPartitionInput(PartitionInputT&& value) { m_partitionInputHasBeenSet = true; m_partitionInput = std::forward<PartitionInputT>(value); }
    template<typename PartitionInputT = PartitionInput>
    UpdatePartitionRequest& WithPartitionInput(PartitionInputT&& value) { SetPartitionInput(std::forward<PartitionInputT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_partitionValueList;
    bool m_partitionValueListHasBeenSet = false;

    PartitionInput m_partitionInput;
    bool m_partitionInputHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
