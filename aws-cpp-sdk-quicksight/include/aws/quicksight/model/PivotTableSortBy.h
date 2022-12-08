/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FieldSort.h>
#include <aws/quicksight/model/ColumnSort.h>
#include <aws/quicksight/model/DataPathSort.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The sort by field for the field sort options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableSortBy">AWS
   * API Reference</a></p>
   */
  class PivotTableSortBy
  {
  public:
    AWS_QUICKSIGHT_API PivotTableSortBy();
    AWS_QUICKSIGHT_API PivotTableSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field sort (field id, direction) for the pivot table sort by options.</p>
     */
    inline const FieldSort& GetField() const{ return m_field; }

    /**
     * <p>The field sort (field id, direction) for the pivot table sort by options.</p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>The field sort (field id, direction) for the pivot table sort by options.</p>
     */
    inline void SetField(const FieldSort& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The field sort (field id, direction) for the pivot table sort by options.</p>
     */
    inline void SetField(FieldSort&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>The field sort (field id, direction) for the pivot table sort by options.</p>
     */
    inline PivotTableSortBy& WithField(const FieldSort& value) { SetField(value); return *this;}

    /**
     * <p>The field sort (field id, direction) for the pivot table sort by options.</p>
     */
    inline PivotTableSortBy& WithField(FieldSort&& value) { SetField(std::move(value)); return *this;}


    /**
     * <p>The column sort (field id, direction) for the pivot table sort by
     * options.</p>
     */
    inline const ColumnSort& GetColumn() const{ return m_column; }

    /**
     * <p>The column sort (field id, direction) for the pivot table sort by
     * options.</p>
     */
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }

    /**
     * <p>The column sort (field id, direction) for the pivot table sort by
     * options.</p>
     */
    inline void SetColumn(const ColumnSort& value) { m_columnHasBeenSet = true; m_column = value; }

    /**
     * <p>The column sort (field id, direction) for the pivot table sort by
     * options.</p>
     */
    inline void SetColumn(ColumnSort&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }

    /**
     * <p>The column sort (field id, direction) for the pivot table sort by
     * options.</p>
     */
    inline PivotTableSortBy& WithColumn(const ColumnSort& value) { SetColumn(value); return *this;}

    /**
     * <p>The column sort (field id, direction) for the pivot table sort by
     * options.</p>
     */
    inline PivotTableSortBy& WithColumn(ColumnSort&& value) { SetColumn(std::move(value)); return *this;}


    /**
     * <p>The data path sort (data path value, direction) for the pivot table sort by
     * options.</p>
     */
    inline const DataPathSort& GetDataPath() const{ return m_dataPath; }

    /**
     * <p>The data path sort (data path value, direction) for the pivot table sort by
     * options.</p>
     */
    inline bool DataPathHasBeenSet() const { return m_dataPathHasBeenSet; }

    /**
     * <p>The data path sort (data path value, direction) for the pivot table sort by
     * options.</p>
     */
    inline void SetDataPath(const DataPathSort& value) { m_dataPathHasBeenSet = true; m_dataPath = value; }

    /**
     * <p>The data path sort (data path value, direction) for the pivot table sort by
     * options.</p>
     */
    inline void SetDataPath(DataPathSort&& value) { m_dataPathHasBeenSet = true; m_dataPath = std::move(value); }

    /**
     * <p>The data path sort (data path value, direction) for the pivot table sort by
     * options.</p>
     */
    inline PivotTableSortBy& WithDataPath(const DataPathSort& value) { SetDataPath(value); return *this;}

    /**
     * <p>The data path sort (data path value, direction) for the pivot table sort by
     * options.</p>
     */
    inline PivotTableSortBy& WithDataPath(DataPathSort&& value) { SetDataPath(std::move(value)); return *this;}

  private:

    FieldSort m_field;
    bool m_fieldHasBeenSet = false;

    ColumnSort m_column;
    bool m_columnHasBeenSet = false;

    DataPathSort m_dataPath;
    bool m_dataPathHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
