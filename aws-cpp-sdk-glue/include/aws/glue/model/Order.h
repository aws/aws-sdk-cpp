/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies the sort order of a sorted column.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Order">AWS API
   * Reference</a></p>
   */
  class Order
  {
  public:
    AWS_GLUE_API Order();
    AWS_GLUE_API Order(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Order& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the column.</p>
     */
    inline const Aws::String& GetColumn() const{ return m_column; }

    /**
     * <p>The name of the column.</p>
     */
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetColumn(const Aws::String& value) { m_columnHasBeenSet = true; m_column = value; }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetColumn(Aws::String&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetColumn(const char* value) { m_columnHasBeenSet = true; m_column.assign(value); }

    /**
     * <p>The name of the column.</p>
     */
    inline Order& WithColumn(const Aws::String& value) { SetColumn(value); return *this;}

    /**
     * <p>The name of the column.</p>
     */
    inline Order& WithColumn(Aws::String&& value) { SetColumn(std::move(value)); return *this;}

    /**
     * <p>The name of the column.</p>
     */
    inline Order& WithColumn(const char* value) { SetColumn(value); return *this;}


    /**
     * <p>Indicates that the column is sorted in ascending order (<code>== 1</code>),
     * or in descending order (<code>==0</code>).</p>
     */
    inline int GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>Indicates that the column is sorted in ascending order (<code>== 1</code>),
     * or in descending order (<code>==0</code>).</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>Indicates that the column is sorted in ascending order (<code>== 1</code>),
     * or in descending order (<code>==0</code>).</p>
     */
    inline void SetSortOrder(int value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>Indicates that the column is sorted in ascending order (<code>== 1</code>),
     * or in descending order (<code>==0</code>).</p>
     */
    inline Order& WithSortOrder(int value) { SetSortOrder(value); return *this;}

  private:

    Aws::String m_column;
    bool m_columnHasBeenSet = false;

    int m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
