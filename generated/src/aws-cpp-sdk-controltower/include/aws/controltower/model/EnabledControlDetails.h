/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/DriftStatusSummary.h>
#include <aws/controltower/model/EnabledControlParameterSummary.h>
#include <aws/controltower/model/EnablementStatusSummary.h>
#include <aws/controltower/model/Region.h>
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
namespace ControlTower {
namespace Model {

/**
 * <p>Information about the enabled control.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnabledControlDetails">AWS
 * API Reference</a></p>
 */
class EnabledControlDetails {
 public:
  AWS_CONTROLTOWER_API EnabledControlDetails() = default;
  AWS_CONTROLTOWER_API EnabledControlDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTROLTOWER_API EnabledControlDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the enabled control.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  EnabledControlDetails& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The control identifier of the enabled control. For information on how to find
   * the <code>controlIdentifier</code>, see <a
   * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
   * overview page</a>.</p>
   */
  inline const Aws::String& GetControlIdentifier() const { return m_controlIdentifier; }
  inline bool ControlIdentifierHasBeenSet() const { return m_controlIdentifierHasBeenSet; }
  template <typename ControlIdentifierT = Aws::String>
  void SetControlIdentifier(ControlIdentifierT&& value) {
    m_controlIdentifierHasBeenSet = true;
    m_controlIdentifier = std::forward<ControlIdentifierT>(value);
  }
  template <typename ControlIdentifierT = Aws::String>
  EnabledControlDetails& WithControlIdentifier(ControlIdentifierT&& value) {
    SetControlIdentifier(std::forward<ControlIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the organizational unit. For information on how to find the
   * <code>targetIdentifier</code>, see <a
   * href="https://docs.aws.amazon.com/controltower/latest/APIReference/Welcome.html">the
   * overview page</a>.</p>
   */
  inline const Aws::String& GetTargetIdentifier() const { return m_targetIdentifier; }
  inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }
  template <typename TargetIdentifierT = Aws::String>
  void SetTargetIdentifier(TargetIdentifierT&& value) {
    m_targetIdentifierHasBeenSet = true;
    m_targetIdentifier = std::forward<TargetIdentifierT>(value);
  }
  template <typename TargetIdentifierT = Aws::String>
  EnabledControlDetails& WithTargetIdentifier(TargetIdentifierT&& value) {
    SetTargetIdentifier(std::forward<TargetIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deployment summary of the enabled control.</p>
   */
  inline const EnablementStatusSummary& GetStatusSummary() const { return m_statusSummary; }
  inline bool StatusSummaryHasBeenSet() const { return m_statusSummaryHasBeenSet; }
  template <typename StatusSummaryT = EnablementStatusSummary>
  void SetStatusSummary(StatusSummaryT&& value) {
    m_statusSummaryHasBeenSet = true;
    m_statusSummary = std::forward<StatusSummaryT>(value);
  }
  template <typename StatusSummaryT = EnablementStatusSummary>
  EnabledControlDetails& WithStatusSummary(StatusSummaryT&& value) {
    SetStatusSummary(std::forward<StatusSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The drift status of the enabled control.</p>
   */
  inline const DriftStatusSummary& GetDriftStatusSummary() const { return m_driftStatusSummary; }
  inline bool DriftStatusSummaryHasBeenSet() const { return m_driftStatusSummaryHasBeenSet; }
  template <typename DriftStatusSummaryT = DriftStatusSummary>
  void SetDriftStatusSummary(DriftStatusSummaryT&& value) {
    m_driftStatusSummaryHasBeenSet = true;
    m_driftStatusSummary = std::forward<DriftStatusSummaryT>(value);
  }
  template <typename DriftStatusSummaryT = DriftStatusSummary>
  EnabledControlDetails& WithDriftStatusSummary(DriftStatusSummaryT&& value) {
    SetDriftStatusSummary(std::forward<DriftStatusSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the parent enabled control from which this control inherits its
   * configuration, if applicable.</p>
   */
  inline const Aws::String& GetParentIdentifier() const { return m_parentIdentifier; }
  inline bool ParentIdentifierHasBeenSet() const { return m_parentIdentifierHasBeenSet; }
  template <typename ParentIdentifierT = Aws::String>
  void SetParentIdentifier(ParentIdentifierT&& value) {
    m_parentIdentifierHasBeenSet = true;
    m_parentIdentifier = std::forward<ParentIdentifierT>(value);
  }
  template <typename ParentIdentifierT = Aws::String>
  EnabledControlDetails& WithParentIdentifier(ParentIdentifierT&& value) {
    SetParentIdentifier(std::forward<ParentIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Target Amazon Web Services Regions for the enabled control.</p>
   */
  inline const Aws::Vector<Region>& GetTargetRegions() const { return m_targetRegions; }
  inline bool TargetRegionsHasBeenSet() const { return m_targetRegionsHasBeenSet; }
  template <typename TargetRegionsT = Aws::Vector<Region>>
  void SetTargetRegions(TargetRegionsT&& value) {
    m_targetRegionsHasBeenSet = true;
    m_targetRegions = std::forward<TargetRegionsT>(value);
  }
  template <typename TargetRegionsT = Aws::Vector<Region>>
  EnabledControlDetails& WithTargetRegions(TargetRegionsT&& value) {
    SetTargetRegions(std::forward<TargetRegionsT>(value));
    return *this;
  }
  template <typename TargetRegionsT = Region>
  EnabledControlDetails& AddTargetRegions(TargetRegionsT&& value) {
    m_targetRegionsHasBeenSet = true;
    m_targetRegions.emplace_back(std::forward<TargetRegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Array of <code>EnabledControlParameter</code> objects.</p>
   */
  inline const Aws::Vector<EnabledControlParameterSummary>& GetParameters() const { return m_parameters; }
  inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
  template <typename ParametersT = Aws::Vector<EnabledControlParameterSummary>>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = Aws::Vector<EnabledControlParameterSummary>>
  EnabledControlDetails& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  template <typename ParametersT = EnabledControlParameterSummary>
  EnabledControlDetails& AddParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters.emplace_back(std::forward<ParametersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_controlIdentifier;

  Aws::String m_targetIdentifier;

  EnablementStatusSummary m_statusSummary;

  DriftStatusSummary m_driftStatusSummary;

  Aws::String m_parentIdentifier;

  Aws::Vector<Region> m_targetRegions;

  Aws::Vector<EnabledControlParameterSummary> m_parameters;
  bool m_arnHasBeenSet = false;
  bool m_controlIdentifierHasBeenSet = false;
  bool m_targetIdentifierHasBeenSet = false;
  bool m_statusSummaryHasBeenSet = false;
  bool m_driftStatusSummaryHasBeenSet = false;
  bool m_parentIdentifierHasBeenSet = false;
  bool m_targetRegionsHasBeenSet = false;
  bool m_parametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace ControlTower
}  // namespace Aws
