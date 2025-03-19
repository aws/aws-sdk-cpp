/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/TaskRunSortColumnType.h>
#include <aws/glue/model/SortDirectionType.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The sorting criteria that are used to sort the list of task runs for the
   * machine learning transform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TaskRunSortCriteria">AWS
   * API Reference</a></p>
   */
  class TaskRunSortCriteria
  {
  public:
    AWS_GLUE_API TaskRunSortCriteria() = default;
    AWS_GLUE_API TaskRunSortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TaskRunSortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The column to be used to sort the list of task runs for the machine learning
     * transform.</p>
     */
    inline TaskRunSortColumnType GetColumn() const { return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    inline void SetColumn(TaskRunSortColumnType value) { m_columnHasBeenSet = true; m_column = value; }
    inline TaskRunSortCriteria& WithColumn(TaskRunSortColumnType value) { SetColumn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort direction to be used to sort the list of task runs for the machine
     * learning transform.</p>
     */
    inline SortDirectionType GetSortDirection() const { return m_sortDirection; }
    inline bool SortDirectionHasBeenSet() const { return m_sortDirectionHasBeenSet; }
    inline void SetSortDirection(SortDirectionType value) { m_sortDirectionHasBeenSet = true; m_sortDirection = value; }
    inline TaskRunSortCriteria& WithSortDirection(SortDirectionType value) { SetSortDirection(value); return *this;}
    ///@}
  private:

    TaskRunSortColumnType m_column{TaskRunSortColumnType::NOT_SET};
    bool m_columnHasBeenSet = false;

    SortDirectionType m_sortDirection{SortDirectionType::NOT_SET};
    bool m_sortDirectionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
