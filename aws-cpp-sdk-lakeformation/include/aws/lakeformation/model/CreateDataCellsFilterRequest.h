/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/lakeformation/model/DataCellsFilter.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class CreateDataCellsFilterRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API CreateDataCellsFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataCellsFilter"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>A <code>DataCellsFilter</code> structure containing information about the
     * data cells filter.</p>
     */
    inline const DataCellsFilter& GetTableData() const{ return m_tableData; }

    /**
     * <p>A <code>DataCellsFilter</code> structure containing information about the
     * data cells filter.</p>
     */
    inline bool TableDataHasBeenSet() const { return m_tableDataHasBeenSet; }

    /**
     * <p>A <code>DataCellsFilter</code> structure containing information about the
     * data cells filter.</p>
     */
    inline void SetTableData(const DataCellsFilter& value) { m_tableDataHasBeenSet = true; m_tableData = value; }

    /**
     * <p>A <code>DataCellsFilter</code> structure containing information about the
     * data cells filter.</p>
     */
    inline void SetTableData(DataCellsFilter&& value) { m_tableDataHasBeenSet = true; m_tableData = std::move(value); }

    /**
     * <p>A <code>DataCellsFilter</code> structure containing information about the
     * data cells filter.</p>
     */
    inline CreateDataCellsFilterRequest& WithTableData(const DataCellsFilter& value) { SetTableData(value); return *this;}

    /**
     * <p>A <code>DataCellsFilter</code> structure containing information about the
     * data cells filter.</p>
     */
    inline CreateDataCellsFilterRequest& WithTableData(DataCellsFilter&& value) { SetTableData(std::move(value)); return *this;}

  private:

    DataCellsFilter m_tableData;
    bool m_tableDataHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
