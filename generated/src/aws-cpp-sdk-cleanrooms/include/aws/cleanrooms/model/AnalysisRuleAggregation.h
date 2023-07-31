/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/JoinRequiredOption.h>
#include <aws/cleanrooms/model/AggregateColumn.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/JoinOperator.h>
#include <aws/cleanrooms/model/ScalarFunctions.h>
#include <aws/cleanrooms/model/AggregationConstraint.h>
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
   * <p>A type of analysis rule that enables query structure and specified queries
   * that produce aggregate statistics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisRuleAggregation">AWS
   * API Reference</a></p>
   */
  class AnalysisRuleAggregation
  {
  public:
    AWS_CLEANROOMS_API AnalysisRuleAggregation();
    AWS_CLEANROOMS_API AnalysisRuleAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisRuleAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The columns that query runners are allowed to use in aggregation queries.</p>
     */
    inline const Aws::Vector<AggregateColumn>& GetAggregateColumns() const{ return m_aggregateColumns; }

    /**
     * <p>The columns that query runners are allowed to use in aggregation queries.</p>
     */
    inline bool AggregateColumnsHasBeenSet() const { return m_aggregateColumnsHasBeenSet; }

    /**
     * <p>The columns that query runners are allowed to use in aggregation queries.</p>
     */
    inline void SetAggregateColumns(const Aws::Vector<AggregateColumn>& value) { m_aggregateColumnsHasBeenSet = true; m_aggregateColumns = value; }

    /**
     * <p>The columns that query runners are allowed to use in aggregation queries.</p>
     */
    inline void SetAggregateColumns(Aws::Vector<AggregateColumn>&& value) { m_aggregateColumnsHasBeenSet = true; m_aggregateColumns = std::move(value); }

    /**
     * <p>The columns that query runners are allowed to use in aggregation queries.</p>
     */
    inline AnalysisRuleAggregation& WithAggregateColumns(const Aws::Vector<AggregateColumn>& value) { SetAggregateColumns(value); return *this;}

    /**
     * <p>The columns that query runners are allowed to use in aggregation queries.</p>
     */
    inline AnalysisRuleAggregation& WithAggregateColumns(Aws::Vector<AggregateColumn>&& value) { SetAggregateColumns(std::move(value)); return *this;}

    /**
     * <p>The columns that query runners are allowed to use in aggregation queries.</p>
     */
    inline AnalysisRuleAggregation& AddAggregateColumns(const AggregateColumn& value) { m_aggregateColumnsHasBeenSet = true; m_aggregateColumns.push_back(value); return *this; }

    /**
     * <p>The columns that query runners are allowed to use in aggregation queries.</p>
     */
    inline AnalysisRuleAggregation& AddAggregateColumns(AggregateColumn&& value) { m_aggregateColumnsHasBeenSet = true; m_aggregateColumns.push_back(std::move(value)); return *this; }


    /**
     * <p>Columns in configured table that can be used in join statements and/or as
     * aggregate columns. They can never be outputted directly.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJoinColumns() const{ return m_joinColumns; }

    /**
     * <p>Columns in configured table that can be used in join statements and/or as
     * aggregate columns. They can never be outputted directly.</p>
     */
    inline bool JoinColumnsHasBeenSet() const { return m_joinColumnsHasBeenSet; }

    /**
     * <p>Columns in configured table that can be used in join statements and/or as
     * aggregate columns. They can never be outputted directly.</p>
     */
    inline void SetJoinColumns(const Aws::Vector<Aws::String>& value) { m_joinColumnsHasBeenSet = true; m_joinColumns = value; }

    /**
     * <p>Columns in configured table that can be used in join statements and/or as
     * aggregate columns. They can never be outputted directly.</p>
     */
    inline void SetJoinColumns(Aws::Vector<Aws::String>&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns = std::move(value); }

    /**
     * <p>Columns in configured table that can be used in join statements and/or as
     * aggregate columns. They can never be outputted directly.</p>
     */
    inline AnalysisRuleAggregation& WithJoinColumns(const Aws::Vector<Aws::String>& value) { SetJoinColumns(value); return *this;}

    /**
     * <p>Columns in configured table that can be used in join statements and/or as
     * aggregate columns. They can never be outputted directly.</p>
     */
    inline AnalysisRuleAggregation& WithJoinColumns(Aws::Vector<Aws::String>&& value) { SetJoinColumns(std::move(value)); return *this;}

    /**
     * <p>Columns in configured table that can be used in join statements and/or as
     * aggregate columns. They can never be outputted directly.</p>
     */
    inline AnalysisRuleAggregation& AddJoinColumns(const Aws::String& value) { m_joinColumnsHasBeenSet = true; m_joinColumns.push_back(value); return *this; }

    /**
     * <p>Columns in configured table that can be used in join statements and/or as
     * aggregate columns. They can never be outputted directly.</p>
     */
    inline AnalysisRuleAggregation& AddJoinColumns(Aws::String&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>Columns in configured table that can be used in join statements and/or as
     * aggregate columns. They can never be outputted directly.</p>
     */
    inline AnalysisRuleAggregation& AddJoinColumns(const char* value) { m_joinColumnsHasBeenSet = true; m_joinColumns.push_back(value); return *this; }


    /**
     * <p>Control that requires member who runs query to do a join with their
     * configured table and/or other configured table in query.</p>
     */
    inline const JoinRequiredOption& GetJoinRequired() const{ return m_joinRequired; }

    /**
     * <p>Control that requires member who runs query to do a join with their
     * configured table and/or other configured table in query.</p>
     */
    inline bool JoinRequiredHasBeenSet() const { return m_joinRequiredHasBeenSet; }

    /**
     * <p>Control that requires member who runs query to do a join with their
     * configured table and/or other configured table in query.</p>
     */
    inline void SetJoinRequired(const JoinRequiredOption& value) { m_joinRequiredHasBeenSet = true; m_joinRequired = value; }

    /**
     * <p>Control that requires member who runs query to do a join with their
     * configured table and/or other configured table in query.</p>
     */
    inline void SetJoinRequired(JoinRequiredOption&& value) { m_joinRequiredHasBeenSet = true; m_joinRequired = std::move(value); }

    /**
     * <p>Control that requires member who runs query to do a join with their
     * configured table and/or other configured table in query.</p>
     */
    inline AnalysisRuleAggregation& WithJoinRequired(const JoinRequiredOption& value) { SetJoinRequired(value); return *this;}

    /**
     * <p>Control that requires member who runs query to do a join with their
     * configured table and/or other configured table in query.</p>
     */
    inline AnalysisRuleAggregation& WithJoinRequired(JoinRequiredOption&& value) { SetJoinRequired(std::move(value)); return *this;}


    /**
     * <p>Which logical operators (if any) are to be used in an INNER JOIN match
     * condition. Default is <code>AND</code>.</p>
     */
    inline const Aws::Vector<JoinOperator>& GetAllowedJoinOperators() const{ return m_allowedJoinOperators; }

    /**
     * <p>Which logical operators (if any) are to be used in an INNER JOIN match
     * condition. Default is <code>AND</code>.</p>
     */
    inline bool AllowedJoinOperatorsHasBeenSet() const { return m_allowedJoinOperatorsHasBeenSet; }

    /**
     * <p>Which logical operators (if any) are to be used in an INNER JOIN match
     * condition. Default is <code>AND</code>.</p>
     */
    inline void SetAllowedJoinOperators(const Aws::Vector<JoinOperator>& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators = value; }

    /**
     * <p>Which logical operators (if any) are to be used in an INNER JOIN match
     * condition. Default is <code>AND</code>.</p>
     */
    inline void SetAllowedJoinOperators(Aws::Vector<JoinOperator>&& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators = std::move(value); }

    /**
     * <p>Which logical operators (if any) are to be used in an INNER JOIN match
     * condition. Default is <code>AND</code>.</p>
     */
    inline AnalysisRuleAggregation& WithAllowedJoinOperators(const Aws::Vector<JoinOperator>& value) { SetAllowedJoinOperators(value); return *this;}

    /**
     * <p>Which logical operators (if any) are to be used in an INNER JOIN match
     * condition. Default is <code>AND</code>.</p>
     */
    inline AnalysisRuleAggregation& WithAllowedJoinOperators(Aws::Vector<JoinOperator>&& value) { SetAllowedJoinOperators(std::move(value)); return *this;}

    /**
     * <p>Which logical operators (if any) are to be used in an INNER JOIN match
     * condition. Default is <code>AND</code>.</p>
     */
    inline AnalysisRuleAggregation& AddAllowedJoinOperators(const JoinOperator& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators.push_back(value); return *this; }

    /**
     * <p>Which logical operators (if any) are to be used in an INNER JOIN match
     * condition. Default is <code>AND</code>.</p>
     */
    inline AnalysisRuleAggregation& AddAllowedJoinOperators(JoinOperator&& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators.push_back(std::move(value)); return *this; }


    /**
     * <p>The columns that query runners are allowed to select, group by, or filter
     * by.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDimensionColumns() const{ return m_dimensionColumns; }

    /**
     * <p>The columns that query runners are allowed to select, group by, or filter
     * by.</p>
     */
    inline bool DimensionColumnsHasBeenSet() const { return m_dimensionColumnsHasBeenSet; }

    /**
     * <p>The columns that query runners are allowed to select, group by, or filter
     * by.</p>
     */
    inline void SetDimensionColumns(const Aws::Vector<Aws::String>& value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns = value; }

    /**
     * <p>The columns that query runners are allowed to select, group by, or filter
     * by.</p>
     */
    inline void SetDimensionColumns(Aws::Vector<Aws::String>&& value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns = std::move(value); }

    /**
     * <p>The columns that query runners are allowed to select, group by, or filter
     * by.</p>
     */
    inline AnalysisRuleAggregation& WithDimensionColumns(const Aws::Vector<Aws::String>& value) { SetDimensionColumns(value); return *this;}

    /**
     * <p>The columns that query runners are allowed to select, group by, or filter
     * by.</p>
     */
    inline AnalysisRuleAggregation& WithDimensionColumns(Aws::Vector<Aws::String>&& value) { SetDimensionColumns(std::move(value)); return *this;}

    /**
     * <p>The columns that query runners are allowed to select, group by, or filter
     * by.</p>
     */
    inline AnalysisRuleAggregation& AddDimensionColumns(const Aws::String& value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns.push_back(value); return *this; }

    /**
     * <p>The columns that query runners are allowed to select, group by, or filter
     * by.</p>
     */
    inline AnalysisRuleAggregation& AddDimensionColumns(Aws::String&& value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>The columns that query runners are allowed to select, group by, or filter
     * by.</p>
     */
    inline AnalysisRuleAggregation& AddDimensionColumns(const char* value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns.push_back(value); return *this; }


    /**
     * <p>Set of scalar functions that are allowed to be used on dimension columns and
     * the output of aggregation of metrics.</p>
     */
    inline const Aws::Vector<ScalarFunctions>& GetScalarFunctions() const{ return m_scalarFunctions; }

    /**
     * <p>Set of scalar functions that are allowed to be used on dimension columns and
     * the output of aggregation of metrics.</p>
     */
    inline bool ScalarFunctionsHasBeenSet() const { return m_scalarFunctionsHasBeenSet; }

    /**
     * <p>Set of scalar functions that are allowed to be used on dimension columns and
     * the output of aggregation of metrics.</p>
     */
    inline void SetScalarFunctions(const Aws::Vector<ScalarFunctions>& value) { m_scalarFunctionsHasBeenSet = true; m_scalarFunctions = value; }

    /**
     * <p>Set of scalar functions that are allowed to be used on dimension columns and
     * the output of aggregation of metrics.</p>
     */
    inline void SetScalarFunctions(Aws::Vector<ScalarFunctions>&& value) { m_scalarFunctionsHasBeenSet = true; m_scalarFunctions = std::move(value); }

    /**
     * <p>Set of scalar functions that are allowed to be used on dimension columns and
     * the output of aggregation of metrics.</p>
     */
    inline AnalysisRuleAggregation& WithScalarFunctions(const Aws::Vector<ScalarFunctions>& value) { SetScalarFunctions(value); return *this;}

    /**
     * <p>Set of scalar functions that are allowed to be used on dimension columns and
     * the output of aggregation of metrics.</p>
     */
    inline AnalysisRuleAggregation& WithScalarFunctions(Aws::Vector<ScalarFunctions>&& value) { SetScalarFunctions(std::move(value)); return *this;}

    /**
     * <p>Set of scalar functions that are allowed to be used on dimension columns and
     * the output of aggregation of metrics.</p>
     */
    inline AnalysisRuleAggregation& AddScalarFunctions(const ScalarFunctions& value) { m_scalarFunctionsHasBeenSet = true; m_scalarFunctions.push_back(value); return *this; }

    /**
     * <p>Set of scalar functions that are allowed to be used on dimension columns and
     * the output of aggregation of metrics.</p>
     */
    inline AnalysisRuleAggregation& AddScalarFunctions(ScalarFunctions&& value) { m_scalarFunctionsHasBeenSet = true; m_scalarFunctions.push_back(std::move(value)); return *this; }


    /**
     * <p>Columns that must meet a specific threshold value (after an aggregation
     * function is applied to it) for each output row to be returned.</p>
     */
    inline const Aws::Vector<AggregationConstraint>& GetOutputConstraints() const{ return m_outputConstraints; }

    /**
     * <p>Columns that must meet a specific threshold value (after an aggregation
     * function is applied to it) for each output row to be returned.</p>
     */
    inline bool OutputConstraintsHasBeenSet() const { return m_outputConstraintsHasBeenSet; }

    /**
     * <p>Columns that must meet a specific threshold value (after an aggregation
     * function is applied to it) for each output row to be returned.</p>
     */
    inline void SetOutputConstraints(const Aws::Vector<AggregationConstraint>& value) { m_outputConstraintsHasBeenSet = true; m_outputConstraints = value; }

    /**
     * <p>Columns that must meet a specific threshold value (after an aggregation
     * function is applied to it) for each output row to be returned.</p>
     */
    inline void SetOutputConstraints(Aws::Vector<AggregationConstraint>&& value) { m_outputConstraintsHasBeenSet = true; m_outputConstraints = std::move(value); }

    /**
     * <p>Columns that must meet a specific threshold value (after an aggregation
     * function is applied to it) for each output row to be returned.</p>
     */
    inline AnalysisRuleAggregation& WithOutputConstraints(const Aws::Vector<AggregationConstraint>& value) { SetOutputConstraints(value); return *this;}

    /**
     * <p>Columns that must meet a specific threshold value (after an aggregation
     * function is applied to it) for each output row to be returned.</p>
     */
    inline AnalysisRuleAggregation& WithOutputConstraints(Aws::Vector<AggregationConstraint>&& value) { SetOutputConstraints(std::move(value)); return *this;}

    /**
     * <p>Columns that must meet a specific threshold value (after an aggregation
     * function is applied to it) for each output row to be returned.</p>
     */
    inline AnalysisRuleAggregation& AddOutputConstraints(const AggregationConstraint& value) { m_outputConstraintsHasBeenSet = true; m_outputConstraints.push_back(value); return *this; }

    /**
     * <p>Columns that must meet a specific threshold value (after an aggregation
     * function is applied to it) for each output row to be returned.</p>
     */
    inline AnalysisRuleAggregation& AddOutputConstraints(AggregationConstraint&& value) { m_outputConstraintsHasBeenSet = true; m_outputConstraints.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AggregateColumn> m_aggregateColumns;
    bool m_aggregateColumnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_joinColumns;
    bool m_joinColumnsHasBeenSet = false;

    JoinRequiredOption m_joinRequired;
    bool m_joinRequiredHasBeenSet = false;

    Aws::Vector<JoinOperator> m_allowedJoinOperators;
    bool m_allowedJoinOperatorsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dimensionColumns;
    bool m_dimensionColumnsHasBeenSet = false;

    Aws::Vector<ScalarFunctions> m_scalarFunctions;
    bool m_scalarFunctionsHasBeenSet = false;

    Aws::Vector<AggregationConstraint> m_outputConstraints;
    bool m_outputConstraintsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
