/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/EMRContainers_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EMRContainers {
namespace Model {

/**
 * <p>Identity Center related configuration for the security
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/IdentityCenterConfiguration">AWS
 * API Reference</a></p>
 */
class IdentityCenterConfiguration {
 public:
  AWS_EMRCONTAINERS_API IdentityCenterConfiguration() = default;
  AWS_EMRCONTAINERS_API IdentityCenterConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRCONTAINERS_API IdentityCenterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Determines whether Identity Center is enabled for the security
   * configuration.</p>
   */
  inline bool GetEnableIdentityCenter() const { return m_enableIdentityCenter; }
  inline bool EnableIdentityCenterHasBeenSet() const { return m_enableIdentityCenterHasBeenSet; }
  inline void SetEnableIdentityCenter(bool value) {
    m_enableIdentityCenterHasBeenSet = true;
    m_enableIdentityCenter = value;
  }
  inline IdentityCenterConfiguration& WithEnableIdentityCenter(bool value) {
    SetEnableIdentityCenter(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines whether user assignment is required for the Identity Center
   * application.</p>
   */
  inline bool GetIdentityCenterApplicationAssignmentRequired() const { return m_identityCenterApplicationAssignmentRequired; }
  inline bool IdentityCenterApplicationAssignmentRequiredHasBeenSet() const {
    return m_identityCenterApplicationAssignmentRequiredHasBeenSet;
  }
  inline void SetIdentityCenterApplicationAssignmentRequired(bool value) {
    m_identityCenterApplicationAssignmentRequiredHasBeenSet = true;
    m_identityCenterApplicationAssignmentRequired = value;
  }
  inline IdentityCenterConfiguration& WithIdentityCenterApplicationAssignmentRequired(bool value) {
    SetIdentityCenterApplicationAssignmentRequired(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Identity Center instance.</p>
   */
  inline const Aws::String& GetIdentityCenterInstanceARN() const { return m_identityCenterInstanceARN; }
  inline bool IdentityCenterInstanceARNHasBeenSet() const { return m_identityCenterInstanceARNHasBeenSet; }
  template <typename IdentityCenterInstanceARNT = Aws::String>
  void SetIdentityCenterInstanceARN(IdentityCenterInstanceARNT&& value) {
    m_identityCenterInstanceARNHasBeenSet = true;
    m_identityCenterInstanceARN = std::forward<IdentityCenterInstanceARNT>(value);
  }
  template <typename IdentityCenterInstanceARNT = Aws::String>
  IdentityCenterConfiguration& WithIdentityCenterInstanceARN(IdentityCenterInstanceARNT&& value) {
    SetIdentityCenterInstanceARN(std::forward<IdentityCenterInstanceARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the EMR Identity Center application.</p>
   */
  inline const Aws::String& GetEmrIdentityCenterApplicationARN() const { return m_emrIdentityCenterApplicationARN; }
  inline bool EmrIdentityCenterApplicationARNHasBeenSet() const { return m_emrIdentityCenterApplicationARNHasBeenSet; }
  template <typename EmrIdentityCenterApplicationARNT = Aws::String>
  void SetEmrIdentityCenterApplicationARN(EmrIdentityCenterApplicationARNT&& value) {
    m_emrIdentityCenterApplicationARNHasBeenSet = true;
    m_emrIdentityCenterApplicationARN = std::forward<EmrIdentityCenterApplicationARNT>(value);
  }
  template <typename EmrIdentityCenterApplicationARNT = Aws::String>
  IdentityCenterConfiguration& WithEmrIdentityCenterApplicationARN(EmrIdentityCenterApplicationARNT&& value) {
    SetEmrIdentityCenterApplicationARN(std::forward<EmrIdentityCenterApplicationARNT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enableIdentityCenter{false};

  bool m_identityCenterApplicationAssignmentRequired{false};

  Aws::String m_identityCenterInstanceARN;

  Aws::String m_emrIdentityCenterApplicationARN;
  bool m_enableIdentityCenterHasBeenSet = false;
  bool m_identityCenterApplicationAssignmentRequiredHasBeenSet = false;
  bool m_identityCenterInstanceARNHasBeenSet = false;
  bool m_emrIdentityCenterApplicationARNHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMRContainers
}  // namespace Aws
