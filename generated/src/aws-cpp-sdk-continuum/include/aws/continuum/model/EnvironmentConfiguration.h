/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/EnvironmentNetworkConfiguration.h>
#include <aws/continuum/model/PatchCreationPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>Environment-level operating policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/EnvironmentConfiguration">AWS
 * API Reference</a></p>
 */
class EnvironmentConfiguration {
 public:
  AWS_CONTINUUM_API EnvironmentConfiguration() = default;
  AWS_CONTINUUM_API EnvironmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API EnvironmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Network policy for agent execution.</p>
   */
  inline const EnvironmentNetworkConfiguration& GetNetwork() const { return m_network; }
  inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
  template <typename NetworkT = EnvironmentNetworkConfiguration>
  void SetNetwork(NetworkT&& value) {
    m_networkHasBeenSet = true;
    m_network = std::forward<NetworkT>(value);
  }
  template <typename NetworkT = EnvironmentNetworkConfiguration>
  EnvironmentConfiguration& WithNetwork(NetworkT&& value) {
    SetNetwork(std::forward<NetworkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Recurring scan interval: P1D (1 day), P2D (2 days), or P7D (7 days). PT0H
   * disables recurring scans. Defaults to P1D when creating an environment.</p>
   */
  inline const Aws::String& GetScanFrequency() const { return m_scanFrequency; }
  inline bool ScanFrequencyHasBeenSet() const { return m_scanFrequencyHasBeenSet; }
  template <typename ScanFrequencyT = Aws::String>
  void SetScanFrequency(ScanFrequencyT&& value) {
    m_scanFrequencyHasBeenSet = true;
    m_scanFrequency = std::forward<ScanFrequencyT>(value);
  }
  template <typename ScanFrequencyT = Aws::String>
  EnvironmentConfiguration& WithScanFrequency(ScanFrequencyT&& value) {
    SetScanFrequency(std::forward<ScanFrequencyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether Continuum creates a patch for a proposed remediation. Defaults to
   * DISABLED.</p>
   */
  inline PatchCreationPolicy GetPatchCreationPolicy() const { return m_patchCreationPolicy; }
  inline bool PatchCreationPolicyHasBeenSet() const { return m_patchCreationPolicyHasBeenSet; }
  inline void SetPatchCreationPolicy(PatchCreationPolicy value) {
    m_patchCreationPolicyHasBeenSet = true;
    m_patchCreationPolicy = value;
  }
  inline EnvironmentConfiguration& WithPatchCreationPolicy(PatchCreationPolicy value) {
    SetPatchCreationPolicy(value);
    return *this;
  }
  ///@}
 private:
  EnvironmentNetworkConfiguration m_network;

  Aws::String m_scanFrequency;

  PatchCreationPolicy m_patchCreationPolicy{PatchCreationPolicy::NOT_SET};
  bool m_networkHasBeenSet = false;
  bool m_scanFrequencyHasBeenSet = false;
  bool m_patchCreationPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
