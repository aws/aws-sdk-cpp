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
    AWS_CLEANROOMS_API AggregateColumn();
    AWS_CLEANROOMS_API AggregateColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AggregateColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Column names in configured table of aggregate columns.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNames() const{ return m_columnNames; }

    /**
     * <p>Column names in configured table of aggregate columns.</p>
     */
    inline bool ColumnNamesHasBeenSet() const { return m_columnNamesHasBeenSet; }

    /**
     * <p>Column names in configured table of aggregate columns.</p>
     */
    inline void SetColumnNames(const Aws::Vector<Aws::String>& value) { m_columnNamesHasBeenSet = true; m_columnNames = value; }

    /**
     * <p>Column names in configured table of aggregate columns.</p>
     */
    inline void SetColumnNames(Aws::Vector<Aws::String>&& value) { m_columnNamesHasBeenSet = true; m_columnNames = std::move(value); }

    /**
     * <p>Column names in configured table of aggregate columns.</p>
     */
    inline AggregateColumn& WithColumnNames(const Aws::Vector<Aws::String>& value) { SetColumnNames(value); return *this;}

    /**
     * <p>Column names in configured table of aggregate columns.</p>
     */
    inline AggregateColumn& WithColumnNames(Aws::Vector<Aws::String>&& value) { SetColumnNames(std::move(value)); return *this;}

    /**
     * <p>Column names in configured table of aggregate columns.</p>
     */
    inline AggregateColumn& AddColumnNames(const Aws::String& value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(value); return *this; }

    /**
     * <p>Column names in configured table of aggregate columns.</p>
     */
    inline AggregateColumn& AddColumnNames(Aws::String&& value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(std::move(value)); return *this; }

    /**
     * <p>Column names in configured table of aggregate columns.</p>
     */
    inline AggregateColumn& AddColumnNames(const char* value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(value); return *this; }


    /**
     * <p>Aggregation function that can be applied to aggregate column in query.</p>
     */
    inline const AggregateFunctionName& GetFunction() const{ return m_function; }

    /**
     * <p>Aggregation function that can be applied to aggregate column in query.</p>
     */
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }

    /**
     * <p>Aggregation function that can be applied to aggregate column in query.</p>
     */
    inline void SetFunction(const AggregateFunctionName& value) { m_functionHasBeenSet = true; m_function = value; }

    /**
     * <p>Aggregation function that can be applied to aggregate column in query.</p>
     */
    inline void SetFunction(AggregateFunctionName&& value) { m_functionHasBeenSet = true; m_function = std::move(value); }

    /**
     * <p>Aggregation function that can be applied to aggregate column in query.</p>
     */
    inline AggregateColumn& WithFunction(const AggregateFunctionName& value) { SetFunction(value); return *this;}

    /**
     * <p>Aggregation function that can be applied to aggregate column in query.</p>
     */
    inline AggregateColumn& WithFunction(AggregateFunctionName&& value) { SetFunction(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_columnNames;
    bool m_columnNamesHasBeenSet = false;

    AggregateFunctionName m_function;
    bool m_functionHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
