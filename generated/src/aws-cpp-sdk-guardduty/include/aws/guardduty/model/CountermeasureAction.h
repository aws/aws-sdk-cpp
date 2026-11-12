/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/ActionPriority.h>
#include <aws/guardduty/model/AffectedResource.h>
#include <aws/guardduty/model/Disposition.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains an action that you can take to respond to a threat.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CountermeasureAction">AWS
 * API Reference</a></p>
 */
class CountermeasureAction {
 public:
  AWS_GUARDDUTY_API CountermeasureAction() = default;
  AWS_GUARDDUTY_API CountermeasureAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API CountermeasureAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A short title for the action.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  CountermeasureAction& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the action.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CountermeasureAction& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority of the action. Possible values are <code>IMMEDIATE</code>,
   * <code>SHORT_TERM</code>, and <code>STRATEGIC</code>.</p>
   */
  inline ActionPriority GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(ActionPriority value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline CountermeasureAction& WithPriority(ActionPriority value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The defensive technique that the action applies.</p>
   */
  inline const Aws::String& GetDefenseTechnique() const { return m_defenseTechnique; }
  inline bool DefenseTechniqueHasBeenSet() const { return m_defenseTechniqueHasBeenSet; }
  template <typename DefenseTechniqueT = Aws::String>
  void SetDefenseTechnique(DefenseTechniqueT&& value) {
    m_defenseTechniqueHasBeenSet = true;
    m_defenseTechnique = std::forward<DefenseTechniqueT>(value);
  }
  template <typename DefenseTechniqueT = Aws::String>
  CountermeasureAction& WithDefenseTechnique(DefenseTechniqueT&& value) {
    SetDefenseTechnique(std::forward<DefenseTechniqueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MITRE ATT&amp;CK technique IDs that the action mitigates, such as
   * <code>T1059.004</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMitigates() const { return m_mitigates; }
  inline bool MitigatesHasBeenSet() const { return m_mitigatesHasBeenSet; }
  template <typename MitigatesT = Aws::Vector<Aws::String>>
  void SetMitigates(MitigatesT&& value) {
    m_mitigatesHasBeenSet = true;
    m_mitigates = std::forward<MitigatesT>(value);
  }
  template <typename MitigatesT = Aws::Vector<Aws::String>>
  CountermeasureAction& WithMitigates(MitigatesT&& value) {
    SetMitigates(std::forward<MitigatesT>(value));
    return *this;
  }
  template <typename MitigatesT = Aws::String>
  CountermeasureAction& AddMitigates(MitigatesT&& value) {
    m_mitigatesHasBeenSet = true;
    m_mitigates.emplace_back(std::forward<MitigatesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>CLI commands that you can run to carry out the action.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCliCommands() const { return m_cliCommands; }
  inline bool CliCommandsHasBeenSet() const { return m_cliCommandsHasBeenSet; }
  template <typename CliCommandsT = Aws::Vector<Aws::String>>
  void SetCliCommands(CliCommandsT&& value) {
    m_cliCommandsHasBeenSet = true;
    m_cliCommands = std::forward<CliCommandsT>(value);
  }
  template <typename CliCommandsT = Aws::Vector<Aws::String>>
  CountermeasureAction& WithCliCommands(CliCommandsT&& value) {
    SetCliCommands(std::forward<CliCommandsT>(value));
    return *this;
  }
  template <typename CliCommandsT = Aws::String>
  CountermeasureAction& AddCliCommands(CliCommandsT&& value) {
    m_cliCommandsHasBeenSet = true;
    m_cliCommands.emplace_back(std::forward<CliCommandsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The numeric identifier of the action's disposition.</p>
   */
  inline int GetDispositionId() const { return m_dispositionId; }
  inline bool DispositionIdHasBeenSet() const { return m_dispositionIdHasBeenSet; }
  inline void SetDispositionId(int value) {
    m_dispositionIdHasBeenSet = true;
    m_dispositionId = value;
  }
  inline CountermeasureAction& WithDispositionId(int value) {
    SetDispositionId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The outcome of the action. Possible values are <code>Isolated</code>,
   * <code>Blocked</code>, <code>Deleted</code>, <code>Access Revoked</code>, and
   * <code>Logged</code>.</p>
   */
  inline Disposition GetDisposition() const { return m_disposition; }
  inline bool DispositionHasBeenSet() const { return m_dispositionHasBeenSet; }
  inline void SetDisposition(Disposition value) {
    m_dispositionHasBeenSet = true;
    m_disposition = value;
  }
  inline CountermeasureAction& WithDisposition(Disposition value) {
    SetDisposition(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resources that the action applies to.</p>
   */
  inline const Aws::Vector<AffectedResource>& GetAffectedResources() const { return m_affectedResources; }
  inline bool AffectedResourcesHasBeenSet() const { return m_affectedResourcesHasBeenSet; }
  template <typename AffectedResourcesT = Aws::Vector<AffectedResource>>
  void SetAffectedResources(AffectedResourcesT&& value) {
    m_affectedResourcesHasBeenSet = true;
    m_affectedResources = std::forward<AffectedResourcesT>(value);
  }
  template <typename AffectedResourcesT = Aws::Vector<AffectedResource>>
  CountermeasureAction& WithAffectedResources(AffectedResourcesT&& value) {
    SetAffectedResources(std::forward<AffectedResourcesT>(value));
    return *this;
  }
  template <typename AffectedResourcesT = AffectedResource>
  CountermeasureAction& AddAffectedResources(AffectedResourcesT&& value) {
    m_affectedResourcesHasBeenSet = true;
    m_affectedResources.emplace_back(std::forward<AffectedResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_title;

  Aws::String m_description;

  ActionPriority m_priority{ActionPriority::NOT_SET};

  Aws::String m_defenseTechnique;

  Aws::Vector<Aws::String> m_mitigates;

  Aws::Vector<Aws::String> m_cliCommands;

  int m_dispositionId{0};

  Disposition m_disposition{Disposition::NOT_SET};

  Aws::Vector<AffectedResource> m_affectedResources;
  bool m_titleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_defenseTechniqueHasBeenSet = false;
  bool m_mitigatesHasBeenSet = false;
  bool m_cliCommandsHasBeenSet = false;
  bool m_dispositionIdHasBeenSet = false;
  bool m_dispositionHasBeenSet = false;
  bool m_affectedResourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
