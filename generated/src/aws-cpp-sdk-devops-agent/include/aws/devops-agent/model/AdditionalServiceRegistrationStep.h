/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/OAuthAdditionalStepDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Additional steps required to complete service registration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/AdditionalServiceRegistrationStep">AWS
 * API Reference</a></p>
 */
class AdditionalServiceRegistrationStep {
 public:
  AWS_DEVOPSAGENT_API AdditionalServiceRegistrationStep() = default;
  AWS_DEVOPSAGENT_API AdditionalServiceRegistrationStep(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API AdditionalServiceRegistrationStep& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>OAuth authorization step required.</p>
   */
  inline const OAuthAdditionalStepDetails& GetOauth() const { return m_oauth; }
  inline bool OauthHasBeenSet() const { return m_oauthHasBeenSet; }
  template <typename OauthT = OAuthAdditionalStepDetails>
  void SetOauth(OauthT&& value) {
    m_oauthHasBeenSet = true;
    m_oauth = std::forward<OauthT>(value);
  }
  template <typename OauthT = OAuthAdditionalStepDetails>
  AdditionalServiceRegistrationStep& WithOauth(OauthT&& value) {
    SetOauth(std::forward<OauthT>(value));
    return *this;
  }
  ///@}
 private:
  OAuthAdditionalStepDetails m_oauth;
  bool m_oauthHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
