/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/AggregateFunctionName.h>
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
   * <p>Column in configured table that can be used in aggregate function in
   * query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AggregateColumn">AWS
   * API Reference</a></p>
   */
  class AggregateColumn
  {
  public:
    AWS_CLEANROOMS_API AggregateColumn() = default;
    AWS_CLEANROOMS_API AggregateColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AggregateColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Column names in configured table of aggregate columns.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNames() const { return m_columnNames; }
    inline bool ColumnNamesHasBeenSet() const { return m_columnNamesHasBeenSet; }
    template<typename ColumnNamesT = Aws::Vector<Aws::String>>
    void SetColumnNames(ColumnNamesT&& value) { m_columnNamesHasBeenSet = true; m_columnNames = std::forward<ColumnNamesT>(value); }
    template<typename ColumnNamesT = Aws::Vector<Aws::String>>
    AggregateColumn& WithColumnNames(ColumnNamesT&& value) { SetColumnNames(std::forward<ColumnNamesT>(value)); return *this;}
    template<typename ColumnNamesT = Aws::String>
    AggregateColumn& AddColumnNames(ColumnNamesT&& value) { m_columnNamesHasBeenSet = true; m_columnNames.emplace_back(std::forward<ColumnNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Aggregation function that can be applied to aggregate column in query.</p>
     */
    inline AggregateFunctionName GetFunction() const { return m_function; }
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }
    inline void SetFunction(AggregateFunctionName value) { m_functionHasBeenSet = true; m_function = value; }
    inline AggregateColumn& WithFunction(AggregateFunctionName value) { SetFunction(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_columnNames;
    bool m_columnNamesHasBeenSet = false;

    AggregateFunctionName m_function{AggregateFunctionName::NOT_SET};
    bool m_functionHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
