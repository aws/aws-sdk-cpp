/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Provides the name of the columns that are required to overlap.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/QueryConstraintRequireOverlap">AWS
   * API Reference</a></p>
   */
  class QueryConstraintRequireOverlap
  {
  public:
    AWS_CLEANROOMS_API QueryConstraintRequireOverlap() = default;
    AWS_CLEANROOMS_API QueryConstraintRequireOverlap(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API QueryConstraintRequireOverlap& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The columns that are required to overlap.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumns() const { return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    template<typename ColumnsT = Aws::Vector<Aws::String>>
    void SetColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns = std::forward<ColumnsT>(value); }
    template<typename ColumnsT = Aws::Vector<Aws::String>>
    QueryConstraintRequireOverlap& WithColumns(ColumnsT&& value) { SetColumns(std::forward<ColumnsT>(value)); return *this;}
    template<typename ColumnsT = Aws::String>
    QueryConstraintRequireOverlap& AddColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns.emplace_back(std::forward<ColumnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_columns;
    bool m_columnsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
