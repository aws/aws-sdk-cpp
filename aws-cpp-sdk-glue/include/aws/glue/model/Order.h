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
  class AWS_GLUE_API Order
  {
  public:
    Order();
    Order(Aws::Utils::Json::JsonView jsonValue);
    Order& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_columnHasBeenSet;

    int m_sortOrder;
    bool m_sortOrderHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
