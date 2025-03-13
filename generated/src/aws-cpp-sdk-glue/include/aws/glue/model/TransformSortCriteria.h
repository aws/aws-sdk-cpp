/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/TransformSortColumnType.h>
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
   * <p>The sorting criteria that are associated with the machine learning
   * transform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TransformSortCriteria">AWS
   * API Reference</a></p>
   */
  class TransformSortCriteria
  {
  public:
    AWS_GLUE_API TransformSortCriteria() = default;
    AWS_GLUE_API TransformSortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TransformSortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The column to be used in the sorting criteria that are associated with the
     * machine learning transform.</p>
     */
    inline TransformSortColumnType GetColumn() const { return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    inline void SetColumn(TransformSortColumnType value) { m_columnHasBeenSet = true; m_column = value; }
    inline TransformSortCriteria& WithColumn(TransformSortColumnType value) { SetColumn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort direction to be used in the sorting criteria that are associated
     * with the machine learning transform.</p>
     */
    inline SortDirectionType GetSortDirection() const { return m_sortDirection; }
    inline bool SortDirectionHasBeenSet() const { return m_sortDirectionHasBeenSet; }
    inline void SetSortDirection(SortDirectionType value) { m_sortDirectionHasBeenSet = true; m_sortDirection = value; }
    inline TransformSortCriteria& WithSortDirection(SortDirectionType value) { SetSortDirection(value); return *this;}
    ///@}
  private:

    TransformSortColumnType m_column{TransformSortColumnType::NOT_SET};
    bool m_columnHasBeenSet = false;

    SortDirectionType m_sortDirection{SortDirectionType::NOT_SET};
    bool m_sortDirectionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
