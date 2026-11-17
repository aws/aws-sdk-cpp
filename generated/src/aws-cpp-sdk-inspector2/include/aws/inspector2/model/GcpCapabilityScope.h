/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ScopeState.h>
#include <aws/inspector2/model/ScopeType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>The scope of Google Cloud Platform (GCP) resources that Amazon Inspector
 * scans for a single scanning type, including the scope level, the targeted
 * resources, and the current state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GcpCapabilityScope">AWS
 * API Reference</a></p>
 */
class GcpCapabilityScope {
 public:
  AWS_INSPECTOR2_API GcpCapabilityScope() = default;
  AWS_INSPECTOR2_API GcpCapabilityScope(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API GcpCapabilityScope& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of scope: <code>ORGANIZATION</code>, which scans all projects in the
   * GCP organization, or <code>PROJECT</code>, which scans only the specified GCP
   * projects.</p>
   */
  inline ScopeType GetScopeType() const { return m_scopeType; }
  inline bool ScopeTypeHasBeenSet() const { return m_scopeTypeHasBeenSet; }
  inline void SetScopeType(ScopeType value) {
    m_scopeTypeHasBeenSet = true;
    m_scopeType = value;
  }
  inline GcpCapabilityScope& WithScopeType(ScopeType value) {
    SetScopeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The GCP project IDs to scan when <code>scopeType</code> is
   * <code>PROJECT</code>. Not used when <code>scopeType</code> is
   * <code>ORGANIZATION</code>. Amazon Inspector scans the organization of the Amazon
   * Web Services Config connector.</p>
   */
  inline const Aws::Vector<Aws::String>& GetScopeValues() const { return m_scopeValues; }
  inline bool ScopeValuesHasBeenSet() const { return m_scopeValuesHasBeenSet; }
  template <typename ScopeValuesT = Aws::Vector<Aws::String>>
  void SetScopeValues(ScopeValuesT&& value) {
    m_scopeValuesHasBeenSet = true;
    m_scopeValues = std::forward<ScopeValuesT>(value);
  }
  template <typename ScopeValuesT = Aws::Vector<Aws::String>>
  GcpCapabilityScope& WithScopeValues(ScopeValuesT&& value) {
    SetScopeValues(std::forward<ScopeValuesT>(value));
    return *this;
  }
  template <typename ScopeValuesT = Aws::String>
  GcpCapabilityScope& AddScopeValues(ScopeValuesT&& value) {
    m_scopeValuesHasBeenSet = true;
    m_scopeValues.emplace_back(std::forward<ScopeValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the scope configuration.</p>
   */
  inline ScopeState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ScopeState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline GcpCapabilityScope& WithState(ScopeState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current state of the scope configuration.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  GcpCapabilityScope& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}
 private:
  ScopeType m_scopeType{ScopeType::NOT_SET};

  Aws::Vector<Aws::String> m_scopeValues;

  ScopeState m_state{ScopeState::NOT_SET};

  Aws::String m_stateReason;
  bool m_scopeTypeHasBeenSet = false;
  bool m_scopeValuesHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
