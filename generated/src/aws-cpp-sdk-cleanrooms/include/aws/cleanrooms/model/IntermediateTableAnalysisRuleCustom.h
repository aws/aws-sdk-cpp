/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AdditionalAnalyses.h>
#include <aws/cleanrooms/model/DifferentialPrivacyConfiguration.h>
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
 * <p>Contains the custom analysis rule configuration for an intermediate
 * table.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IntermediateTableAnalysisRuleCustom">AWS
 * API Reference</a></p>
 */
class IntermediateTableAnalysisRuleCustom {
 public:
  AWS_CLEANROOMS_API IntermediateTableAnalysisRuleCustom() = default;
  AWS_CLEANROOMS_API IntermediateTableAnalysisRuleCustom(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API IntermediateTableAnalysisRuleCustom& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of allowed analyses that can be performed on the intermediate
   * table.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedAnalyses() const { return m_allowedAnalyses; }
  inline bool AllowedAnalysesHasBeenSet() const { return m_allowedAnalysesHasBeenSet; }
  template <typename AllowedAnalysesT = Aws::Vector<Aws::String>>
  void SetAllowedAnalyses(AllowedAnalysesT&& value) {
    m_allowedAnalysesHasBeenSet = true;
    m_allowedAnalyses = std::forward<AllowedAnalysesT>(value);
  }
  template <typename AllowedAnalysesT = Aws::Vector<Aws::String>>
  IntermediateTableAnalysisRuleCustom& WithAllowedAnalyses(AllowedAnalysesT&& value) {
    SetAllowedAnalyses(std::forward<AllowedAnalysesT>(value));
    return *this;
  }
  template <typename AllowedAnalysesT = Aws::String>
  IntermediateTableAnalysisRuleCustom& AddAllowedAnalyses(AllowedAnalysesT&& value) {
    m_allowedAnalysesHasBeenSet = true;
    m_allowedAnalyses.emplace_back(std::forward<AllowedAnalysesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The setting that controls whether additional analyses are allowed on the
   * intermediate table.</p>
   */
  inline AdditionalAnalyses GetAdditionalAnalyses() const { return m_additionalAnalyses; }
  inline bool AdditionalAnalysesHasBeenSet() const { return m_additionalAnalysesHasBeenSet; }
  inline void SetAdditionalAnalyses(AdditionalAnalyses value) {
    m_additionalAnalysesHasBeenSet = true;
    m_additionalAnalyses = value;
  }
  inline IntermediateTableAnalysisRuleCustom& WithAdditionalAnalyses(AdditionalAnalyses value) {
    SetAdditionalAnalyses(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of allowed additional analyses for the intermediate table.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedAdditionalAnalyses() const { return m_allowedAdditionalAnalyses; }
  inline bool AllowedAdditionalAnalysesHasBeenSet() const { return m_allowedAdditionalAnalysesHasBeenSet; }
  template <typename AllowedAdditionalAnalysesT = Aws::Vector<Aws::String>>
  void SetAllowedAdditionalAnalyses(AllowedAdditionalAnalysesT&& value) {
    m_allowedAdditionalAnalysesHasBeenSet = true;
    m_allowedAdditionalAnalyses = std::forward<AllowedAdditionalAnalysesT>(value);
  }
  template <typename AllowedAdditionalAnalysesT = Aws::Vector<Aws::String>>
  IntermediateTableAnalysisRuleCustom& WithAllowedAdditionalAnalyses(AllowedAdditionalAnalysesT&& value) {
    SetAllowedAdditionalAnalyses(std::forward<AllowedAdditionalAnalysesT>(value));
    return *this;
  }
  template <typename AllowedAdditionalAnalysesT = Aws::String>
  IntermediateTableAnalysisRuleCustom& AddAllowedAdditionalAnalyses(AllowedAdditionalAnalysesT&& value) {
    m_allowedAdditionalAnalysesHasBeenSet = true;
    m_allowedAdditionalAnalyses.emplace_back(std::forward<AllowedAdditionalAnalysesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Amazon Web Services account IDs for the allowed analysis
   * providers.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedAnalysisProviders() const { return m_allowedAnalysisProviders; }
  inline bool AllowedAnalysisProvidersHasBeenSet() const { return m_allowedAnalysisProvidersHasBeenSet; }
  template <typename AllowedAnalysisProvidersT = Aws::Vector<Aws::String>>
  void SetAllowedAnalysisProviders(AllowedAnalysisProvidersT&& value) {
    m_allowedAnalysisProvidersHasBeenSet = true;
    m_allowedAnalysisProviders = std::forward<AllowedAnalysisProvidersT>(value);
  }
  template <typename AllowedAnalysisProvidersT = Aws::Vector<Aws::String>>
  IntermediateTableAnalysisRuleCustom& WithAllowedAnalysisProviders(AllowedAnalysisProvidersT&& value) {
    SetAllowedAnalysisProviders(std::forward<AllowedAnalysisProvidersT>(value));
    return *this;
  }
  template <typename AllowedAnalysisProvidersT = Aws::String>
  IntermediateTableAnalysisRuleCustom& AddAllowedAnalysisProviders(AllowedAnalysisProvidersT&& value) {
    m_allowedAnalysisProvidersHasBeenSet = true;
    m_allowedAnalysisProviders.emplace_back(std::forward<AllowedAnalysisProvidersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Amazon Web Services account IDs that are allowed to receive
   * results from queries run on the intermediate table.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedResultReceivers() const { return m_allowedResultReceivers; }
  inline bool AllowedResultReceiversHasBeenSet() const { return m_allowedResultReceiversHasBeenSet; }
  template <typename AllowedResultReceiversT = Aws::Vector<Aws::String>>
  void SetAllowedResultReceivers(AllowedResultReceiversT&& value) {
    m_allowedResultReceiversHasBeenSet = true;
    m_allowedResultReceivers = std::forward<AllowedResultReceiversT>(value);
  }
  template <typename AllowedResultReceiversT = Aws::Vector<Aws::String>>
  IntermediateTableAnalysisRuleCustom& WithAllowedResultReceivers(AllowedResultReceiversT&& value) {
    SetAllowedResultReceivers(std::forward<AllowedResultReceiversT>(value));
    return *this;
  }
  template <typename AllowedResultReceiversT = Aws::String>
  IntermediateTableAnalysisRuleCustom& AddAllowedResultReceivers(AllowedResultReceiversT&& value) {
    m_allowedResultReceiversHasBeenSet = true;
    m_allowedResultReceivers.emplace_back(std::forward<AllowedResultReceiversT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const DifferentialPrivacyConfiguration& GetDifferentialPrivacy() const { return m_differentialPrivacy; }
  inline bool DifferentialPrivacyHasBeenSet() const { return m_differentialPrivacyHasBeenSet; }
  template <typename DifferentialPrivacyT = DifferentialPrivacyConfiguration>
  void SetDifferentialPrivacy(DifferentialPrivacyT&& value) {
    m_differentialPrivacyHasBeenSet = true;
    m_differentialPrivacy = std::forward<DifferentialPrivacyT>(value);
  }
  template <typename DifferentialPrivacyT = DifferentialPrivacyConfiguration>
  IntermediateTableAnalysisRuleCustom& WithDifferentialPrivacy(DifferentialPrivacyT&& value) {
    SetDifferentialPrivacy(std::forward<DifferentialPrivacyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of columns that are not allowed in the query output.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDisallowedOutputColumns() const { return m_disallowedOutputColumns; }
  inline bool DisallowedOutputColumnsHasBeenSet() const { return m_disallowedOutputColumnsHasBeenSet; }
  template <typename DisallowedOutputColumnsT = Aws::Vector<Aws::String>>
  void SetDisallowedOutputColumns(DisallowedOutputColumnsT&& value) {
    m_disallowedOutputColumnsHasBeenSet = true;
    m_disallowedOutputColumns = std::forward<DisallowedOutputColumnsT>(value);
  }
  template <typename DisallowedOutputColumnsT = Aws::Vector<Aws::String>>
  IntermediateTableAnalysisRuleCustom& WithDisallowedOutputColumns(DisallowedOutputColumnsT&& value) {
    SetDisallowedOutputColumns(std::forward<DisallowedOutputColumnsT>(value));
    return *this;
  }
  template <typename DisallowedOutputColumnsT = Aws::String>
  IntermediateTableAnalysisRuleCustom& AddDisallowedOutputColumns(DisallowedOutputColumnsT&& value) {
    m_disallowedOutputColumnsHasBeenSet = true;
    m_disallowedOutputColumns.emplace_back(std::forward<DisallowedOutputColumnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_allowedAnalyses;

  AdditionalAnalyses m_additionalAnalyses{AdditionalAnalyses::NOT_SET};

  Aws::Vector<Aws::String> m_allowedAdditionalAnalyses;

  Aws::Vector<Aws::String> m_allowedAnalysisProviders;

  Aws::Vector<Aws::String> m_allowedResultReceivers;

  DifferentialPrivacyConfiguration m_differentialPrivacy;

  Aws::Vector<Aws::String> m_disallowedOutputColumns;
  bool m_allowedAnalysesHasBeenSet = false;
  bool m_additionalAnalysesHasBeenSet = false;
  bool m_allowedAdditionalAnalysesHasBeenSet = false;
  bool m_allowedAnalysisProvidersHasBeenSet = false;
  bool m_allowedResultReceiversHasBeenSet = false;
  bool m_differentialPrivacyHasBeenSet = false;
  bool m_disallowedOutputColumnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
