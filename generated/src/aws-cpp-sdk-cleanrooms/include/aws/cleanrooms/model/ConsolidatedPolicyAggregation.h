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
   * <p> Controls on the analysis specifications that can be run on a configured
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConsolidatedPolicyAggregation">AWS
   * API Reference</a></p>
   */
  class ConsolidatedPolicyAggregation
  {
  public:
    AWS_CLEANROOMS_API ConsolidatedPolicyAggregation();
    AWS_CLEANROOMS_API ConsolidatedPolicyAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConsolidatedPolicyAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Aggregate columns in consolidated policy aggregation.</p>
     */
    inline const Aws::Vector<AggregateColumn>& GetAggregateColumns() const{ return m_aggregateColumns; }
    inline bool AggregateColumnsHasBeenSet() const { return m_aggregateColumnsHasBeenSet; }
    inline void SetAggregateColumns(const Aws::Vector<AggregateColumn>& value) { m_aggregateColumnsHasBeenSet = true; m_aggregateColumns = value; }
    inline void SetAggregateColumns(Aws::Vector<AggregateColumn>&& value) { m_aggregateColumnsHasBeenSet = true; m_aggregateColumns = std::move(value); }
    inline ConsolidatedPolicyAggregation& WithAggregateColumns(const Aws::Vector<AggregateColumn>& value) { SetAggregateColumns(value); return *this;}
    inline ConsolidatedPolicyAggregation& WithAggregateColumns(Aws::Vector<AggregateColumn>&& value) { SetAggregateColumns(std::move(value)); return *this;}
    inline ConsolidatedPolicyAggregation& AddAggregateColumns(const AggregateColumn& value) { m_aggregateColumnsHasBeenSet = true; m_aggregateColumns.push_back(value); return *this; }
    inline ConsolidatedPolicyAggregation& AddAggregateColumns(AggregateColumn&& value) { m_aggregateColumnsHasBeenSet = true; m_aggregateColumns.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The columns to join on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJoinColumns() const{ return m_joinColumns; }
    inline bool JoinColumnsHasBeenSet() const { return m_joinColumnsHasBeenSet; }
    inline void SetJoinColumns(const Aws::Vector<Aws::String>& value) { m_joinColumnsHasBeenSet = true; m_joinColumns = value; }
    inline void SetJoinColumns(Aws::Vector<Aws::String>&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns = std::move(value); }
    inline ConsolidatedPolicyAggregation& WithJoinColumns(const Aws::Vector<Aws::String>& value) { SetJoinColumns(value); return *this;}
    inline ConsolidatedPolicyAggregation& WithJoinColumns(Aws::Vector<Aws::String>&& value) { SetJoinColumns(std::move(value)); return *this;}
    inline ConsolidatedPolicyAggregation& AddJoinColumns(const Aws::String& value) { m_joinColumnsHasBeenSet = true; m_joinColumns.push_back(value); return *this; }
    inline ConsolidatedPolicyAggregation& AddJoinColumns(Aws::String&& value) { m_joinColumnsHasBeenSet = true; m_joinColumns.push_back(std::move(value)); return *this; }
    inline ConsolidatedPolicyAggregation& AddJoinColumns(const char* value) { m_joinColumnsHasBeenSet = true; m_joinColumns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Join required</p>
     */
    inline const JoinRequiredOption& GetJoinRequired() const{ return m_joinRequired; }
    inline bool JoinRequiredHasBeenSet() const { return m_joinRequiredHasBeenSet; }
    inline void SetJoinRequired(const JoinRequiredOption& value) { m_joinRequiredHasBeenSet = true; m_joinRequired = value; }
    inline void SetJoinRequired(JoinRequiredOption&& value) { m_joinRequiredHasBeenSet = true; m_joinRequired = std::move(value); }
    inline ConsolidatedPolicyAggregation& WithJoinRequired(const JoinRequiredOption& value) { SetJoinRequired(value); return *this;}
    inline ConsolidatedPolicyAggregation& WithJoinRequired(JoinRequiredOption&& value) { SetJoinRequired(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The allowed join operators.</p>
     */
    inline const Aws::Vector<JoinOperator>& GetAllowedJoinOperators() const{ return m_allowedJoinOperators; }
    inline bool AllowedJoinOperatorsHasBeenSet() const { return m_allowedJoinOperatorsHasBeenSet; }
    inline void SetAllowedJoinOperators(const Aws::Vector<JoinOperator>& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators = value; }
    inline void SetAllowedJoinOperators(Aws::Vector<JoinOperator>&& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators = std::move(value); }
    inline ConsolidatedPolicyAggregation& WithAllowedJoinOperators(const Aws::Vector<JoinOperator>& value) { SetAllowedJoinOperators(value); return *this;}
    inline ConsolidatedPolicyAggregation& WithAllowedJoinOperators(Aws::Vector<JoinOperator>&& value) { SetAllowedJoinOperators(std::move(value)); return *this;}
    inline ConsolidatedPolicyAggregation& AddAllowedJoinOperators(const JoinOperator& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators.push_back(value); return *this; }
    inline ConsolidatedPolicyAggregation& AddAllowedJoinOperators(JoinOperator&& value) { m_allowedJoinOperatorsHasBeenSet = true; m_allowedJoinOperators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The dimension columns of the consolidated policy aggregation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDimensionColumns() const{ return m_dimensionColumns; }
    inline bool DimensionColumnsHasBeenSet() const { return m_dimensionColumnsHasBeenSet; }
    inline void SetDimensionColumns(const Aws::Vector<Aws::String>& value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns = value; }
    inline void SetDimensionColumns(Aws::Vector<Aws::String>&& value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns = std::move(value); }
    inline ConsolidatedPolicyAggregation& WithDimensionColumns(const Aws::Vector<Aws::String>& value) { SetDimensionColumns(value); return *this;}
    inline ConsolidatedPolicyAggregation& WithDimensionColumns(Aws::Vector<Aws::String>&& value) { SetDimensionColumns(std::move(value)); return *this;}
    inline ConsolidatedPolicyAggregation& AddDimensionColumns(const Aws::String& value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns.push_back(value); return *this; }
    inline ConsolidatedPolicyAggregation& AddDimensionColumns(Aws::String&& value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns.push_back(std::move(value)); return *this; }
    inline ConsolidatedPolicyAggregation& AddDimensionColumns(const char* value) { m_dimensionColumnsHasBeenSet = true; m_dimensionColumns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The scalar functions.</p>
     */
    inline const Aws::Vector<ScalarFunctions>& GetScalarFunctions() const{ return m_scalarFunctions; }
    inline bool ScalarFunctionsHasBeenSet() const { return m_scalarFunctionsHasBeenSet; }
    inline void SetScalarFunctions(const Aws::Vector<ScalarFunctions>& value) { m_scalarFunctionsHasBeenSet = true; m_scalarFunctions = value; }
    inline void SetScalarFunctions(Aws::Vector<ScalarFunctions>&& value) { m_scalarFunctionsHasBeenSet = true; m_scalarFunctions = std::move(value); }
    inline ConsolidatedPolicyAggregation& WithScalarFunctions(const Aws::Vector<ScalarFunctions>& value) { SetScalarFunctions(value); return *this;}
    inline ConsolidatedPolicyAggregation& WithScalarFunctions(Aws::Vector<ScalarFunctions>&& value) { SetScalarFunctions(std::move(value)); return *this;}
    inline ConsolidatedPolicyAggregation& AddScalarFunctions(const ScalarFunctions& value) { m_scalarFunctionsHasBeenSet = true; m_scalarFunctions.push_back(value); return *this; }
    inline ConsolidatedPolicyAggregation& AddScalarFunctions(ScalarFunctions&& value) { m_scalarFunctionsHasBeenSet = true; m_scalarFunctions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The output constraints of the consolidated policy aggregation.</p>
     */
    inline const Aws::Vector<AggregationConstraint>& GetOutputConstraints() const{ return m_outputConstraints; }
    inline bool OutputConstraintsHasBeenSet() const { return m_outputConstraintsHasBeenSet; }
    inline void SetOutputConstraints(const Aws::Vector<AggregationConstraint>& value) { m_outputConstraintsHasBeenSet = true; m_outputConstraints = value; }
    inline void SetOutputConstraints(Aws::Vector<AggregationConstraint>&& value) { m_outputConstraintsHasBeenSet = true; m_outputConstraints = std::move(value); }
    inline ConsolidatedPolicyAggregation& WithOutputConstraints(const Aws::Vector<AggregationConstraint>& value) { SetOutputConstraints(value); return *this;}
    inline ConsolidatedPolicyAggregation& WithOutputConstraints(Aws::Vector<AggregationConstraint>&& value) { SetOutputConstraints(std::move(value)); return *this;}
    inline ConsolidatedPolicyAggregation& AddOutputConstraints(const AggregationConstraint& value) { m_outputConstraintsHasBeenSet = true; m_outputConstraints.push_back(value); return *this; }
    inline ConsolidatedPolicyAggregation& AddOutputConstraints(AggregationConstraint&& value) { m_outputConstraintsHasBeenSet = true; m_outputConstraints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Additional analyses for the consolidated policy aggregation.</p>
     */
    inline const AdditionalAnalyses& GetAdditionalAnalyses() const{ return m_additionalAnalyses; }
    inline bool AdditionalAnalysesHasBeenSet() const { return m_additionalAnalysesHasBeenSet; }
    inline void SetAdditionalAnalyses(const AdditionalAnalyses& value) { m_additionalAnalysesHasBeenSet = true; m_additionalAnalyses = value; }
    inline void SetAdditionalAnalyses(AdditionalAnalyses&& value) { m_additionalAnalysesHasBeenSet = true; m_additionalAnalyses = std::move(value); }
    inline ConsolidatedPolicyAggregation& WithAdditionalAnalyses(const AdditionalAnalyses& value) { SetAdditionalAnalyses(value); return *this;}
    inline ConsolidatedPolicyAggregation& WithAdditionalAnalyses(AdditionalAnalyses&& value) { SetAdditionalAnalyses(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The allowed result receivers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedResultReceivers() const{ return m_allowedResultReceivers; }
    inline bool AllowedResultReceiversHasBeenSet() const { return m_allowedResultReceiversHasBeenSet; }
    inline void SetAllowedResultReceivers(const Aws::Vector<Aws::String>& value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers = value; }
    inline void SetAllowedResultReceivers(Aws::Vector<Aws::String>&& value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers = std::move(value); }
    inline ConsolidatedPolicyAggregation& WithAllowedResultReceivers(const Aws::Vector<Aws::String>& value) { SetAllowedResultReceivers(value); return *this;}
    inline ConsolidatedPolicyAggregation& WithAllowedResultReceivers(Aws::Vector<Aws::String>&& value) { SetAllowedResultReceivers(std::move(value)); return *this;}
    inline ConsolidatedPolicyAggregation& AddAllowedResultReceivers(const Aws::String& value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers.push_back(value); return *this; }
    inline ConsolidatedPolicyAggregation& AddAllowedResultReceivers(Aws::String&& value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers.push_back(std::move(value)); return *this; }
    inline ConsolidatedPolicyAggregation& AddAllowedResultReceivers(const char* value) { m_allowedResultReceiversHasBeenSet = true; m_allowedResultReceivers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The additional analyses allowed by the consolidated policy aggregation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAdditionalAnalyses() const{ return m_allowedAdditionalAnalyses; }
    inline bool AllowedAdditionalAnalysesHasBeenSet() const { return m_allowedAdditionalAnalysesHasBeenSet; }
    inline void SetAllowedAdditionalAnalyses(const Aws::Vector<Aws::String>& value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses = value; }
    inline void SetAllowedAdditionalAnalyses(Aws::Vector<Aws::String>&& value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses = std::move(value); }
    inline ConsolidatedPolicyAggregation& WithAllowedAdditionalAnalyses(const Aws::Vector<Aws::String>& value) { SetAllowedAdditionalAnalyses(value); return *this;}
    inline ConsolidatedPolicyAggregation& WithAllowedAdditionalAnalyses(Aws::Vector<Aws::String>&& value) { SetAllowedAdditionalAnalyses(std::move(value)); return *this;}
    inline ConsolidatedPolicyAggregation& AddAllowedAdditionalAnalyses(const Aws::String& value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses.push_back(value); return *this; }
    inline ConsolidatedPolicyAggregation& AddAllowedAdditionalAnalyses(Aws::String&& value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses.push_back(std::move(value)); return *this; }
    inline ConsolidatedPolicyAggregation& AddAllowedAdditionalAnalyses(const char* value) { m_allowedAdditionalAnalysesHasBeenSet = true; m_allowedAdditionalAnalyses.push_back(value); return *this; }
    ///@}
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

    AdditionalAnalyses m_additionalAnalyses;
    bool m_additionalAnalysesHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedResultReceivers;
    bool m_allowedResultReceiversHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedAdditionalAnalyses;
    bool m_allowedAdditionalAnalysesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
