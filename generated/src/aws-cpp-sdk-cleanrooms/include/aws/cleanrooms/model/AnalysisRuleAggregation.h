/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/JoinRequiredOption.h>
#include <aws/cleanrooms/model/AdditionalAnalyses.h>
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
    AWS_CLEANROOMS_API AnalysisRuleAggregation() = default;
    AWS_CLEANROOMS_API AnalysisRuleAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisRuleAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The columns that query runners are allowed to use in aggregation queries.</p>
     */
    inline const Aws::Vector<AggregateColumn>& GetAggregateColumns() const { return m_aggregateColumns; }
    inline bool AggregateColumnsHasBeenSet() const { return m_aggregateColumnsHasBeenSet; }
    template<typename AggregateColumnsT = Aws::Vector<AggregateColumn>>
    void SetAggregateColumns(AggregateColumnsT&& value) { m_aggregateColumnsHasBeenSet = true; m_aggregateColumns = std::forward<AggregateColumnsT>(value); }
    template<typename AggregateColumnsT = Aws::Vector<AggregateColumn>>
    AnalysisRuleAggregation& WithAggregateColumns(AggregateColumnsT&& value) { SetAggregateColumns(std::forward<AggregateColumnsT>(value)); return *this;}
    template<typename AggregateColumnsT = AggregateColumn>
    AnalysisRuleAggregation& AddAggregateColumns(AggregateColumnsT&& value) { m_aggregateColumnsHasBeenSet = true; m_aggregateColumns.emplace_back(std::forward<AggregateColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Columns in configured table that can be used in join statements and/or as
     * aggregate columns. They can never be outputted directly.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJoinColumns() const { return m_joinColumns; }
    inline bool JoinColumnsHasBeenSet() const { return m_joinColumnsHasBeenSet; }
    template<typename JoinColumnsT = Aws::Vector<Aws::String>>
    void SetJoinColumns(JoinColumnsT&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns = std::forward<JoinColumnsT>(value); }
    template<typename JoinColumnsT = Aws::Vector<Aws::String>>
    AnalysisRuleAggregation& WithJoinColumns(JoinColumnsT&& value) { SetJoinColumns(std::forward<JoinColumnsT>(value)); return *this;}
    template<typename JoinColumnsT = Aws::String>
    AnalysisRuleAggregation& AddJoinColumns(JoinColumnsT&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns.emplace_back(std::forward<JoinColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Control that requires member who runs query to do a join with their
     * configured table and/or other configured table in query.</p>
     */
    inline JoinRequiredOption GetJoinRequired() const { return m_joinRequired; }
    inline bool JoinRequiredHasBeenSet() const { return m_joinRequiredHasBeenSet; }
    inline void SetJoinRequired(JoinRequiredOption value) { m_joinRequiredHasBeenSet = true; m_joinRequired = value; }
    inline AnalysisRuleAggregation& WithJoinRequired(JoinRequiredOption value) { SetJoinRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Which logical operators (if any) are to be used in an INNER JOIN match
     * condition. Default is <code>AND</code>.</p>
     */
    inline const Aws::Vector<JoinOperator>& GetAllowedJoinOperators() const { return m_allowedJoinOperators; }
    inline bool AllowedJoinOperatorsHasBeenSet() const { return m_allowedJoinOperatorsHasBeenSet; }
    template<typename AllowedJoinOperatorsT = Aws::Vector<JoinOperator>>
    void SetAllowedJoinOperators(AllowedJoinOperatorsT&& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators = std::forward<AllowedJoinOperatorsT>(value); }
    template<typename AllowedJoinOperatorsT = Aws::Vector<JoinOperator>>
    AnalysisRuleAggregation& WithAllowedJoinOperators(AllowedJoinOperatorsT&& value) { SetAllowedJoinOperators(std::forward<AllowedJoinOperatorsT>(value)); return *this;}
    inline AnalysisRuleAggregation& AddAllowedJoinOperators(JoinOperator value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The columns that query runners are allowed to select, group by, or filter
     * by.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDimensionColumns() const { return m_dimensionColumns; }
    inline bool DimensionColumnsHasBeenSet() const { return m_dimensionColumnsHasBeenSet; }
    template<typename DimensionColumnsT = Aws::Vector<Aws::String>>
    void SetDimensionColumns(DimensionColumnsT&& value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns = std::forward<DimensionColumnsT>(value); }
    template<typename DimensionColumnsT = Aws::Vector<Aws::String>>
    AnalysisRuleAggregation& WithDimensionColumns(DimensionColumnsT&& value) { SetDimensionColumns(std::forward<DimensionColumnsT>(value)); return *this;}
    template<typename DimensionColumnsT = Aws::String>
    AnalysisRuleAggregation& AddDimensionColumns(DimensionColumnsT&& value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns.emplace_back(std::forward<DimensionColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Set of scalar functions that are allowed to be used on dimension columns and
     * the output of aggregation of metrics.</p>
     */
    inline const Aws::Vector<ScalarFunctions>& GetScalarFunctions() const { return m_scalarFunctions; }
    inline bool ScalarFunctionsHasBeenSet() const { return m_scalarFunctionsHasBeenSet; }
    template<typename ScalarFunctionsT = Aws::Vector<ScalarFunctions>>
    void SetScalarFunctions(ScalarFunctionsT&& value) { m_scalarFunctionsHasBeenSet = true; m_scalarFunctions = std::forward<ScalarFunctionsT>(value); }
    template<typename ScalarFunctionsT = Aws::Vector<ScalarFunctions>>
    AnalysisRuleAggregation& WithScalarFunctions(ScalarFunctionsT&& value) { SetScalarFunctions(std::forward<ScalarFunctionsT>(value)); return *this;}
    inline AnalysisRuleAggregation& AddScalarFunctions(ScalarFunctions value) { m_scalarFunctionsHasBeenSet = true; m_scalarFunctions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Columns that must meet a specific threshold value (after an aggregation
     * function is applied to it) for each output row to be returned.</p>
     */
    inline const Aws::Vector<AggregationConstraint>& GetOutputConstraints() const { return m_outputConstraints; }
    inline bool OutputConstraintsHasBeenSet() const { return m_outputConstraintsHasBeenSet; }
    template<typename OutputConstraintsT = Aws::Vector<AggregationConstraint>>
    void SetOutputConstraints(OutputConstraintsT&& value) { m_outputConstraintsHasBeenSet = true; m_outputConstraints = std::forward<OutputConstraintsT>(value); }
    template<typename OutputConstraintsT = Aws::Vector<AggregationConstraint>>
    AnalysisRuleAggregation& WithOutputConstraints(OutputConstraintsT&& value) { SetOutputConstraints(std::forward<OutputConstraintsT>(value)); return *this;}
    template<typename OutputConstraintsT = AggregationConstraint>
    AnalysisRuleAggregation& AddOutputConstraints(OutputConstraintsT&& value) { m_outputConstraintsHasBeenSet = true; m_outputConstraints.emplace_back(std::forward<OutputConstraintsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An indicator as to whether additional analyses (such as Clean Rooms ML) can
     * be applied to the output of the direct query. </p> <p>The
     * <code>additionalAnalyses</code> parameter is currently supported for the list
     * analysis rule (<code>AnalysisRuleList</code>) and the custom analysis rule
     * (<code>AnalysisRuleCustom</code>).</p>
     */
    inline AdditionalAnalyses GetAdditionalAnalyses() const { return m_additionalAnalyses; }
    inline bool AdditionalAnalysesHasBeenSet() const { return m_additionalAnalysesHasBeenSet; }
    inline void SetAdditionalAnalyses(AdditionalAnalyses value) { m_additionalAnalysesHasBeenSet = true; m_additionalAnalyses = value; }
    inline AnalysisRuleAggregation& WithAdditionalAnalyses(AdditionalAnalyses value) { SetAdditionalAnalyses(value); return *this;}
    ///@}
  private:

    Aws::Vector<AggregateColumn> m_aggregateColumns;
    bool m_aggregateColumnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_joinColumns;
    bool m_joinColumnsHasBeenSet = false;

    JoinRequiredOption m_joinRequired{JoinRequiredOption::NOT_SET};
    bool m_joinRequiredHasBeenSet = false;

    Aws::Vector<JoinOperator> m_allowedJoinOperators;
    bool m_allowedJoinOperatorsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dimensionColumns;
    bool m_dimensionColumnsHasBeenSet = false;

    Aws::Vector<ScalarFunctions> m_scalarFunctions;
    bool m_scalarFunctionsHasBeenSet = false;

    Aws::Vector<AggregationConstraint> m_outputConstraints;
    bool m_outputConstraintsHasBeenSet = false;

    AdditionalAnalyses m_additionalAnalyses{AdditionalAnalyses::NOT_SET};
    bool m_additionalAnalysesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
