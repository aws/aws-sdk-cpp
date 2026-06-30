/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/InheritedAdditionalAnalyses.h>
#include <aws/cleanrooms/model/InheritedAllowedAdditionalAnalyses.h>
#include <aws/cleanrooms/model/InheritedAllowedResultReceivers.h>
#include <aws/cleanrooms/model/InheritedDisallowedOutputColumns.h>

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
 * <p>Contains the privacy constraints inherited from parent tables for an
 * intermediate table version.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IntermediateTableInheritedConstraints">AWS
 * API Reference</a></p>
 */
class IntermediateTableInheritedConstraints {
 public:
  AWS_CLEANROOMS_API IntermediateTableInheritedConstraints() = default;
  AWS_CLEANROOMS_API IntermediateTableInheritedConstraints(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API IntermediateTableInheritedConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The inherited additional analyses constraint.</p>
   */
  inline const InheritedAdditionalAnalyses& GetAdditionalAnalyses() const { return m_additionalAnalyses; }
  inline bool AdditionalAnalysesHasBeenSet() const { return m_additionalAnalysesHasBeenSet; }
  template <typename AdditionalAnalysesT = InheritedAdditionalAnalyses>
  void SetAdditionalAnalyses(AdditionalAnalysesT&& value) {
    m_additionalAnalysesHasBeenSet = true;
    m_additionalAnalyses = std::forward<AdditionalAnalysesT>(value);
  }
  template <typename AdditionalAnalysesT = InheritedAdditionalAnalyses>
  IntermediateTableInheritedConstraints& WithAdditionalAnalyses(AdditionalAnalysesT&& value) {
    SetAdditionalAnalyses(std::forward<AdditionalAnalysesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The inherited allowed additional analyses constraint.</p>
   */
  inline const InheritedAllowedAdditionalAnalyses& GetAllowedAdditionalAnalyses() const { return m_allowedAdditionalAnalyses; }
  inline bool AllowedAdditionalAnalysesHasBeenSet() const { return m_allowedAdditionalAnalysesHasBeenSet; }
  template <typename AllowedAdditionalAnalysesT = InheritedAllowedAdditionalAnalyses>
  void SetAllowedAdditionalAnalyses(AllowedAdditionalAnalysesT&& value) {
    m_allowedAdditionalAnalysesHasBeenSet = true;
    m_allowedAdditionalAnalyses = std::forward<AllowedAdditionalAnalysesT>(value);
  }
  template <typename AllowedAdditionalAnalysesT = InheritedAllowedAdditionalAnalyses>
  IntermediateTableInheritedConstraints& WithAllowedAdditionalAnalyses(AllowedAdditionalAnalysesT&& value) {
    SetAllowedAdditionalAnalyses(std::forward<AllowedAdditionalAnalysesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The inherited allowed result receivers constraint.</p>
   */
  inline const InheritedAllowedResultReceivers& GetAllowedResultReceivers() const { return m_allowedResultReceivers; }
  inline bool AllowedResultReceiversHasBeenSet() const { return m_allowedResultReceiversHasBeenSet; }
  template <typename AllowedResultReceiversT = InheritedAllowedResultReceivers>
  void SetAllowedResultReceivers(AllowedResultReceiversT&& value) {
    m_allowedResultReceiversHasBeenSet = true;
    m_allowedResultReceivers = std::forward<AllowedResultReceiversT>(value);
  }
  template <typename AllowedResultReceiversT = InheritedAllowedResultReceivers>
  IntermediateTableInheritedConstraints& WithAllowedResultReceivers(AllowedResultReceiversT&& value) {
    SetAllowedResultReceivers(std::forward<AllowedResultReceiversT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The inherited disallowed output columns constraint.</p>
   */
  inline const InheritedDisallowedOutputColumns& GetDisallowedOutputColumns() const { return m_disallowedOutputColumns; }
  inline bool DisallowedOutputColumnsHasBeenSet() const { return m_disallowedOutputColumnsHasBeenSet; }
  template <typename DisallowedOutputColumnsT = InheritedDisallowedOutputColumns>
  void SetDisallowedOutputColumns(DisallowedOutputColumnsT&& value) {
    m_disallowedOutputColumnsHasBeenSet = true;
    m_disallowedOutputColumns = std::forward<DisallowedOutputColumnsT>(value);
  }
  template <typename DisallowedOutputColumnsT = InheritedDisallowedOutputColumns>
  IntermediateTableInheritedConstraints& WithDisallowedOutputColumns(DisallowedOutputColumnsT&& value) {
    SetDisallowedOutputColumns(std::forward<DisallowedOutputColumnsT>(value));
    return *this;
  }
  ///@}
 private:
  InheritedAdditionalAnalyses m_additionalAnalyses;

  InheritedAllowedAdditionalAnalyses m_allowedAdditionalAnalyses;

  InheritedAllowedResultReceivers m_allowedResultReceivers;

  InheritedDisallowedOutputColumns m_disallowedOutputColumns;
  bool m_additionalAnalysesHasBeenSet = false;
  bool m_allowedAdditionalAnalysesHasBeenSet = false;
  bool m_allowedResultReceiversHasBeenSet = false;
  bool m_disallowedOutputColumnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
