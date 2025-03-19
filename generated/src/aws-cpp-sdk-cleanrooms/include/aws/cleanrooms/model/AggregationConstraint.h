/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/AggregationType.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Constraint on query output removing output rows that do not meet a minimum
   * number of distinct values of a specified column.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AggregationConstraint">AWS
   * API Reference</a></p>
   */
  class AggregationConstraint
  {
  public:
    AWS_CLEANROOMS_API AggregationConstraint() = default;
    AWS_CLEANROOMS_API AggregationConstraint(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AggregationConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Column in aggregation constraint for which there must be a minimum number of
     * distinct values in an output row for it to be in the query output.</p>
     */
    inline const Aws::String& GetColumnName() const { return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    template<typename ColumnNameT = Aws::String>
    void SetColumnName(ColumnNameT&& value) { m_columnNameHasBeenSet = true; m_columnName = std::forward<ColumnNameT>(value); }
    template<typename ColumnNameT = Aws::String>
    AggregationConstraint& WithColumnName(ColumnNameT&& value) { SetColumnName(std::forward<ColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of distinct values that an output row must be an
     * aggregation of. Minimum threshold of distinct values for a specified column that
     * must exist in an output row for it to be in the query output.</p>
     */
    inline int GetMinimum() const { return m_minimum; }
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }
    inline void SetMinimum(int value) { m_minimumHasBeenSet = true; m_minimum = value; }
    inline AggregationConstraint& WithMinimum(int value) { SetMinimum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of aggregation the constraint allows. The only valid value is
     * currently `COUNT_DISTINCT`.</p>
     */
    inline AggregationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AggregationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AggregationConstraint& WithType(AggregationType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    int m_minimum{0};
    bool m_minimumHasBeenSet = false;

    AggregationType m_type{AggregationType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
