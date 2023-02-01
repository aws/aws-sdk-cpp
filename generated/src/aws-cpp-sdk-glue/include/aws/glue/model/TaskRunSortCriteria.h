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
    AWS_GLUE_API TaskRunSortCriteria();
    AWS_GLUE_API TaskRunSortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TaskRunSortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The column to be used to sort the list of task runs for the machine learning
     * transform.</p>
     */
    inline const TaskRunSortColumnType& GetColumn() const{ return m_column; }

    /**
     * <p>The column to be used to sort the list of task runs for the machine learning
     * transform.</p>
     */
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }

    /**
     * <p>The column to be used to sort the list of task runs for the machine learning
     * transform.</p>
     */
    inline void SetColumn(const TaskRunSortColumnType& value) { m_columnHasBeenSet = true; m_column = value; }

    /**
     * <p>The column to be used to sort the list of task runs for the machine learning
     * transform.</p>
     */
    inline void SetColumn(TaskRunSortColumnType&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }

    /**
     * <p>The column to be used to sort the list of task runs for the machine learning
     * transform.</p>
     */
    inline TaskRunSortCriteria& WithColumn(const TaskRunSortColumnType& value) { SetColumn(value); return *this;}

    /**
     * <p>The column to be used to sort the list of task runs for the machine learning
     * transform.</p>
     */
    inline TaskRunSortCriteria& WithColumn(TaskRunSortColumnType&& value) { SetColumn(std::move(value)); return *this;}


    /**
     * <p>The sort direction to be used to sort the list of task runs for the machine
     * learning transform.</p>
     */
    inline const SortDirectionType& GetSortDirection() const{ return m_sortDirection; }

    /**
     * <p>The sort direction to be used to sort the list of task runs for the machine
     * learning transform.</p>
     */
    inline bool SortDirectionHasBeenSet() const { return m_sortDirectionHasBeenSet; }

    /**
     * <p>The sort direction to be used to sort the list of task runs for the machine
     * learning transform.</p>
     */
    inline void SetSortDirection(const SortDirectionType& value) { m_sortDirectionHasBeenSet = true; m_sortDirection = value; }

    /**
     * <p>The sort direction to be used to sort the list of task runs for the machine
     * learning transform.</p>
     */
    inline void SetSortDirection(SortDirectionType&& value) { m_sortDirectionHasBeenSet = true; m_sortDirection = std::move(value); }

    /**
     * <p>The sort direction to be used to sort the list of task runs for the machine
     * learning transform.</p>
     */
    inline TaskRunSortCriteria& WithSortDirection(const SortDirectionType& value) { SetSortDirection(value); return *this;}

    /**
     * <p>The sort direction to be used to sort the list of task runs for the machine
     * learning transform.</p>
     */
    inline TaskRunSortCriteria& WithSortDirection(SortDirectionType&& value) { SetSortDirection(std::move(value)); return *this;}

  private:

    TaskRunSortColumnType m_column;
    bool m_columnHasBeenSet = false;

    SortDirectionType m_sortDirection;
    bool m_sortDirectionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
