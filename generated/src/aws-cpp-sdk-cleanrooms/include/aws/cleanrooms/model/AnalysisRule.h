/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisRulePolicy.h>
#include <aws/cleanrooms/model/AnalysisRuleType.h>
#include <aws/cleanrooms/model/ConfiguredTableAssociationAnalysisRulePolicy.h>
#include <aws/cleanrooms/model/ConsolidatedPolicy.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>A specification about how data from the configured table can be used in a
 * query.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisRule">AWS
 * API Reference</a></p>
 */
class AnalysisRule {
 public:
  AWS_CLEANROOMS_API AnalysisRule() = default;
  AWS_CLEANROOMS_API AnalysisRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API AnalysisRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique ID for the associated collaboration.</p>
   */
  inline const Aws::String& GetCollaborationId() const { return m_collaborationId; }
  inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }
  template <typename CollaborationIdT = Aws::String>
  void SetCollaborationId(CollaborationIdT&& value) {
    m_collaborationIdHasBeenSet = true;
    m_collaborationId = std::forward<CollaborationIdT>(value);
  }
  template <typename CollaborationIdT = Aws::String>
  AnalysisRule& WithCollaborationId(CollaborationIdT&& value) {
    SetCollaborationId(std::forward<CollaborationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of analysis rule.</p>
   */
  inline AnalysisRuleType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(AnalysisRuleType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AnalysisRule& WithType(AnalysisRuleType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for the analysis rule.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AnalysisRule& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the analysis rule was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
  inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  void SetCreateTime(CreateTimeT&& value) {
    m_createTimeHasBeenSet = true;
    m_createTime = std::forward<CreateTimeT>(value);
  }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  AnalysisRule& WithCreateTime(CreateTimeT&& value) {
    SetCreateTime(std::forward<CreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the analysis rule was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
  inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
  template <typename UpdateTimeT = Aws::Utils::DateTime>
  void SetUpdateTime(UpdateTimeT&& value) {
    m_updateTimeHasBeenSet = true;
    m_updateTime = std::forward<UpdateTimeT>(value);
  }
  template <typename UpdateTimeT = Aws::Utils::DateTime>
  AnalysisRule& WithUpdateTime(UpdateTimeT&& value) {
    SetUpdateTime(std::forward<UpdateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A policy that describes the associated data usage limitations.</p>
   */
  inline const AnalysisRulePolicy& GetPolicy() const { return m_policy; }
  inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
  template <typename PolicyT = AnalysisRulePolicy>
  void SetPolicy(PolicyT&& value) {
    m_policyHasBeenSet = true;
    m_policy = std::forward<PolicyT>(value);
  }
  template <typename PolicyT = AnalysisRulePolicy>
  AnalysisRule& WithPolicy(PolicyT&& value) {
    SetPolicy(std::forward<PolicyT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ConfiguredTableAssociationAnalysisRulePolicy& GetCollaborationPolicy() const { return m_collaborationPolicy; }
  inline bool CollaborationPolicyHasBeenSet() const { return m_collaborationPolicyHasBeenSet; }
  template <typename CollaborationPolicyT = ConfiguredTableAssociationAnalysisRulePolicy>
  void SetCollaborationPolicy(CollaborationPolicyT&& value) {
    m_collaborationPolicyHasBeenSet = true;
    m_collaborationPolicy = std::forward<CollaborationPolicyT>(value);
  }
  template <typename CollaborationPolicyT = ConfiguredTableAssociationAnalysisRulePolicy>
  AnalysisRule& WithCollaborationPolicy(CollaborationPolicyT&& value) {
    SetCollaborationPolicy(std::forward<CollaborationPolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The consolidated policy for the analysis rule.</p>
   */
  inline const ConsolidatedPolicy& GetConsolidatedPolicy() const { return m_consolidatedPolicy; }
  inline bool ConsolidatedPolicyHasBeenSet() const { return m_consolidatedPolicyHasBeenSet; }
  template <typename ConsolidatedPolicyT = ConsolidatedPolicy>
  void SetConsolidatedPolicy(ConsolidatedPolicyT&& value) {
    m_consolidatedPolicyHasBeenSet = true;
    m_consolidatedPolicy = std::forward<ConsolidatedPolicyT>(value);
  }
  template <typename ConsolidatedPolicyT = ConsolidatedPolicy>
  AnalysisRule& WithConsolidatedPolicy(ConsolidatedPolicyT&& value) {
    SetConsolidatedPolicy(std::forward<ConsolidatedPolicyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_collaborationId;

  AnalysisRuleType m_type{AnalysisRuleType::NOT_SET};

  Aws::String m_name;

  Aws::Utils::DateTime m_createTime{};

  Aws::Utils::DateTime m_updateTime{};

  AnalysisRulePolicy m_policy;

  ConfiguredTableAssociationAnalysisRulePolicy m_collaborationPolicy;

  ConsolidatedPolicy m_consolidatedPolicy;
  bool m_collaborationIdHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_createTimeHasBeenSet = false;
  bool m_updateTimeHasBeenSet = false;
  bool m_policyHasBeenSet = false;
  bool m_collaborationPolicyHasBeenSet = false;
  bool m_consolidatedPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
