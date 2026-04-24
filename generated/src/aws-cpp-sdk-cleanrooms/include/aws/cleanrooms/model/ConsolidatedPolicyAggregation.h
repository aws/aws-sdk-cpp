/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AdditionalAnalyses.h>
#include <aws/cleanrooms/model/AggregateColumn.h>
#include <aws/cleanrooms/model/AggregationConstraint.h>
#include <aws/cleanrooms/model/JoinOperator.h>
#include <aws/cleanrooms/model/JoinRequiredOption.h>
#include <aws/cleanrooms/model/ScalarFunctions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p> Controls on the analysis specifications that can be run on a configured
 * table.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConsolidatedPolicyAggregation">AWS
 * API Reference</a></p>
 */
class ConsolidatedPolicyAggregation {
 public:
  AWS_CLEANROOMS_API ConsolidatedPolicyAggregation() = default;
  AWS_CLEANROOMS_API ConsolidatedPolicyAggregation(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API ConsolidatedPolicyAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> Aggregate columns in consolidated policy aggregation.</p>
   */
  inline const Aws::Vector<AggregateColumn>& GetAggregateColumns() const { return m_aggregateColumns; }
  inline bool AggregateColumnsHasBeenSet() const { return m_aggregateColumnsHasBeenSet; }
  template <typename AggregateColumnsT = Aws::Vector<AggregateColumn>>
  void SetAggregateColumns(AggregateColumnsT&& value) {
    m_aggregateColumnsHasBeenSet = true;
    m_aggregateColumns = std::forward<AggregateColumnsT>(value);
  }
  template <typename AggregateColumnsT = Aws::Vector<AggregateColumn>>
  ConsolidatedPolicyAggregation& WithAggregateColumns(AggregateColumnsT&& value) {
    SetAggregateColumns(std::forward<AggregateColumnsT>(value));
    return *this;
  }
  template <typename AggregateColumnsT = AggregateColumn>
  ConsolidatedPolicyAggregation& AddAggregateColumns(AggregateColumnsT&& value) {
    m_aggregateColumnsHasBeenSet = true;
    m_aggregateColumns.emplace_back(std::forward<AggregateColumnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The columns to join on.</p>
   */
  inline const Aws::Vector<Aws::String>& GetJoinColumns() const { return m_joinColumns; }
  inline bool JoinColumnsHasBeenSet() const { return m_joinColumnsHasBeenSet; }
  template <typename JoinColumnsT = Aws::Vector<Aws::String>>
  void SetJoinColumns(JoinColumnsT&& value) {
    m_joinColumnsHasBeenSet = true;
    m_joinColumns = std::forward<JoinColumnsT>(value);
  }
  template <typename JoinColumnsT = Aws::Vector<Aws::String>>
  ConsolidatedPolicyAggregation& WithJoinColumns(JoinColumnsT&& value) {
    SetJoinColumns(std::forward<JoinColumnsT>(value));
    return *this;
  }
  template <typename JoinColumnsT = Aws::String>
  ConsolidatedPolicyAggregation& AddJoinColumns(JoinColumnsT&& value) {
    m_joinColumnsHasBeenSet = true;
    m_joinColumns.emplace_back(std::forward<JoinColumnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Join required</p>
   */
  inline JoinRequiredOption GetJoinRequired() const { return m_joinRequired; }
  inline bool JoinRequiredHasBeenSet() const { return m_joinRequiredHasBeenSet; }
  inline void SetJoinRequired(JoinRequiredOption value) {
    m_joinRequiredHasBeenSet = true;
    m_joinRequired = value;
  }
  inline ConsolidatedPolicyAggregation& WithJoinRequired(JoinRequiredOption value) {
    SetJoinRequired(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The allowed join operators.</p>
   */
  inline const Aws::Vector<JoinOperator>& GetAllowedJoinOperators() const { return m_allowedJoinOperators; }
  inline bool AllowedJoinOperatorsHasBeenSet() const { return m_allowedJoinOperatorsHasBeenSet; }
  template <typename AllowedJoinOperatorsT = Aws::Vector<JoinOperator>>
  void SetAllowedJoinOperators(AllowedJoinOperatorsT&& value) {
    m_allowedJoinOperatorsHasBeenSet = true;
    m_allowedJoinOperators = std::forward<AllowedJoinOperatorsT>(value);
  }
  template <typename AllowedJoinOperatorsT = Aws::Vector<JoinOperator>>
  ConsolidatedPolicyAggregation& WithAllowedJoinOperators(AllowedJoinOperatorsT&& value) {
    SetAllowedJoinOperators(std::forward<AllowedJoinOperatorsT>(value));
    return *this;
  }
  inline ConsolidatedPolicyAggregation& AddAllowedJoinOperators(JoinOperator value) {
    m_allowedJoinOperatorsHasBeenSet = true;
    m_allowedJoinOperators.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The dimension columns of the consolidated policy aggregation.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDimensionColumns() const { return m_dimensionColumns; }
  inline bool DimensionColumnsHasBeenSet() const { return m_dimensionColumnsHasBeenSet; }
  template <typename DimensionColumnsT = Aws::Vector<Aws::String>>
  void SetDimensionColumns(DimensionColumnsT&& value) {
    m_dimensionColumnsHasBeenSet = true;
    m_dimensionColumns = std::forward<DimensionColumnsT>(value);
  }
  template <typename DimensionColumnsT = Aws::Vector<Aws::String>>
  ConsolidatedPolicyAggregation& WithDimensionColumns(DimensionColumnsT&& value) {
    SetDimensionColumns(std::forward<DimensionColumnsT>(value));
    return *this;
  }
  template <typename DimensionColumnsT = Aws::String>
  ConsolidatedPolicyAggregation& AddDimensionColumns(DimensionColumnsT&& value) {
    m_dimensionColumnsHasBeenSet = true;
    m_dimensionColumns.emplace_back(std::forward<DimensionColumnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The scalar functions.</p>
   */
  inline const Aws::Vector<ScalarFunctions>& GetScalarFunctions() const { return m_scalarFunctions; }
  inline bool ScalarFunctionsHasBeenSet() const { return m_scalarFunctionsHasBeenSet; }
  template <typename ScalarFunctionsT = Aws::Vector<ScalarFunctions>>
  void SetScalarFunctions(ScalarFunctionsT&& value) {
    m_scalarFunctionsHasBeenSet = true;
    m_scalarFunctions = std::forward<ScalarFunctionsT>(value);
  }
  template <typename ScalarFunctionsT = Aws::Vector<ScalarFunctions>>
  ConsolidatedPolicyAggregation& WithScalarFunctions(ScalarFunctionsT&& value) {
    SetScalarFunctions(std::forward<ScalarFunctionsT>(value));
    return *this;
  }
  inline ConsolidatedPolicyAggregation& AddScalarFunctions(ScalarFunctions value) {
    m_scalarFunctionsHasBeenSet = true;
    m_scalarFunctions.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The output constraints of the consolidated policy aggregation.</p>
   */
  inline const Aws::Vector<AggregationConstraint>& GetOutputConstraints() const { return m_outputConstraints; }
  inline bool OutputConstraintsHasBeenSet() const { return m_outputConstraintsHasBeenSet; }
  template <typename OutputConstraintsT = Aws::Vector<AggregationConstraint>>
  void SetOutputConstraints(OutputConstraintsT&& value) {
    m_outputConstraintsHasBeenSet = true;
    m_outputConstraints = std::forward<OutputConstraintsT>(value);
  }
  template <typename OutputConstraintsT = Aws::Vector<AggregationConstraint>>
  ConsolidatedPolicyAggregation& WithOutputConstraints(OutputConstraintsT&& value) {
    SetOutputConstraints(std::forward<OutputConstraintsT>(value));
    return *this;
  }
  template <typename OutputConstraintsT = AggregationConstraint>
  ConsolidatedPolicyAggregation& AddOutputConstraints(OutputConstraintsT&& value) {
    m_outputConstraintsHasBeenSet = true;
    m_outputConstraints.emplace_back(std::forward<OutputConstraintsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Additional analyses for the consolidated policy aggregation.</p>
   */
  inline AdditionalAnalyses GetAdditionalAnalyses() const { return m_additionalAnalyses; }
  inline bool AdditionalAnalysesHasBeenSet() const { return m_additionalAnalysesHasBeenSet; }
  inline void SetAdditionalAnalyses(AdditionalAnalyses value) {
    m_additionalAnalysesHasBeenSet = true;
    m_additionalAnalyses = value;
  }
  inline ConsolidatedPolicyAggregation& WithAdditionalAnalyses(AdditionalAnalyses value) {
    SetAdditionalAnalyses(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The allowed result receivers.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedResultReceivers() const { return m_allowedResultReceivers; }
  inline bool AllowedResultReceiversHasBeenSet() const { return m_allowedResultReceiversHasBeenSet; }
  template <typename AllowedResultReceiversT = Aws::Vector<Aws::String>>
  void SetAllowedResultReceivers(AllowedResultReceiversT&& value) {
    m_allowedResultReceiversHasBeenSet = true;
    m_allowedResultReceivers = std::forward<AllowedResultReceiversT>(value);
  }
  template <typename AllowedResultReceiversT = Aws::Vector<Aws::String>>
  ConsolidatedPolicyAggregation& WithAllowedResultReceivers(AllowedResultReceiversT&& value) {
    SetAllowedResultReceivers(std::forward<AllowedResultReceiversT>(value));
    return *this;
  }
  template <typename AllowedResultReceiversT = Aws::String>
  ConsolidatedPolicyAggregation& AddAllowedResultReceivers(AllowedResultReceiversT&& value) {
    m_allowedResultReceiversHasBeenSet = true;
    m_allowedResultReceivers.emplace_back(std::forward<AllowedResultReceiversT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The additional analyses allowed by the consolidated policy aggregation.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedAdditionalAnalyses() const { return m_allowedAdditionalAnalyses; }
  inline bool AllowedAdditionalAnalysesHasBeenSet() const { return m_allowedAdditionalAnalysesHasBeenSet; }
  template <typename AllowedAdditionalAnalysesT = Aws::Vector<Aws::String>>
  void SetAllowedAdditionalAnalyses(AllowedAdditionalAnalysesT&& value) {
    m_allowedAdditionalAnalysesHasBeenSet = true;
    m_allowedAdditionalAnalyses = std::forward<AllowedAdditionalAnalysesT>(value);
  }
  template <typename AllowedAdditionalAnalysesT = Aws::Vector<Aws::String>>
  ConsolidatedPolicyAggregation& WithAllowedAdditionalAnalyses(AllowedAdditionalAnalysesT&& value) {
    SetAllowedAdditionalAnalyses(std::forward<AllowedAdditionalAnalysesT>(value));
    return *this;
  }
  template <typename AllowedAdditionalAnalysesT = Aws::String>
  ConsolidatedPolicyAggregation& AddAllowedAdditionalAnalyses(AllowedAdditionalAnalysesT&& value) {
    m_allowedAdditionalAnalysesHasBeenSet = true;
    m_allowedAdditionalAnalyses.emplace_back(std::forward<AllowedAdditionalAnalysesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AggregateColumn> m_aggregateColumns;

  Aws::Vector<Aws::String> m_joinColumns;

  JoinRequiredOption m_joinRequired{JoinRequiredOption::NOT_SET};

  Aws::Vector<JoinOperator> m_allowedJoinOperators;

  Aws::Vector<Aws::String> m_dimensionColumns;

  Aws::Vector<ScalarFunctions> m_scalarFunctions;

  Aws::Vector<AggregationConstraint> m_outputConstraints;

  AdditionalAnalyses m_additionalAnalyses{AdditionalAnalyses::NOT_SET};

  Aws::Vector<Aws::String> m_allowedResultReceivers;

  Aws::Vector<Aws::String> m_allowedAdditionalAnalyses;
  bool m_aggregateColumnsHasBeenSet = false;
  bool m_joinColumnsHasBeenSet = false;
  bool m_joinRequiredHasBeenSet = false;
  bool m_allowedJoinOperatorsHasBeenSet = false;
  bool m_dimensionColumnsHasBeenSet = false;
  bool m_scalarFunctionsHasBeenSet = false;
  bool m_outputConstraintsHasBeenSet = false;
  bool m_additionalAnalysesHasBeenSet = false;
  bool m_allowedResultReceiversHasBeenSet = false;
  bool m_allowedAdditionalAnalysesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
