/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EMRServerless {
namespace Model {

/**
 * <p>The IAM Identity Center Configuration accepts the Identity Center instance
 * parameter required to enable trusted identity propagation. This configuration
 * allows identity propagation between integrated services and the Identity Center
 * instance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/IdentityCenterConfigurationInput">AWS
 * API Reference</a></p>
 */
class IdentityCenterConfigurationInput {
 public:
  AWS_EMRSERVERLESS_API IdentityCenterConfigurationInput() = default;
  AWS_EMRSERVERLESS_API IdentityCenterConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRSERVERLESS_API IdentityCenterConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the IAM Identity Center instance.</p>
   */
  inline const Aws::String& GetIdentityCenterInstanceArn() const { return m_identityCenterInstanceArn; }
  inline bool IdentityCenterInstanceArnHasBeenSet() const { return m_identityCenterInstanceArnHasBeenSet; }
  template <typename IdentityCenterInstanceArnT = Aws::String>
  void SetIdentityCenterInstanceArn(IdentityCenterInstanceArnT&& value) {
    m_identityCenterInstanceArnHasBeenSet = true;
    m_identityCenterInstanceArn = std::forward<IdentityCenterInstanceArnT>(value);
  }
  template <typename IdentityCenterInstanceArnT = Aws::String>
  IdentityCenterConfigurationInput& WithIdentityCenterInstanceArn(IdentityCenterInstanceArnT&& value) {
    SetIdentityCenterInstanceArn(std::forward<IdentityCenterInstanceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables user background sessions for this application so Livy sessions can
   * continue running after users log out of their interactive notebook or their
   * Identity Center sessions expire.</p>
   */
  inline bool GetUserBackgroundSessionsEnabled() const { return m_userBackgroundSessionsEnabled; }
  inline bool UserBackgroundSessionsEnabledHasBeenSet() const { return m_userBackgroundSessionsEnabledHasBeenSet; }
  inline void SetUserBackgroundSessionsEnabled(bool value) {
    m_userBackgroundSessionsEnabledHasBeenSet = true;
    m_userBackgroundSessionsEnabled = value;
  }
  inline IdentityCenterConfigurationInput& WithUserBackgroundSessionsEnabled(bool value) {
    SetUserBackgroundSessionsEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_identityCenterInstanceArn;

  bool m_userBackgroundSessionsEnabled{false};
  bool m_identityCenterInstanceArnHasBeenSet = false;
  bool m_userBackgroundSessionsEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMRServerless
}  // namespace Aws
