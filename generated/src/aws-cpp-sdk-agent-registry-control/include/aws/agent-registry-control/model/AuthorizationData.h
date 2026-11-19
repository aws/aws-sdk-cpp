/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/OAuth2AuthorizationData.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>The authorization that a user must complete before a registry record can
 * synchronize from its source. Only <code>CreateRegistryRecord</code> and
 * <code>UpdateRegistryRecord</code> return it. <code>GetRegistryRecord</code> and
 * <code>ListRegistryRecords</code> never do.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/AuthorizationData">AWS
 * API Reference</a></p>
 */
class AuthorizationData {
 public:
  AWS_AGENTREGISTRYCONTROL_API AuthorizationData() = default;
  AWS_AGENTREGISTRYCONTROL_API AuthorizationData(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API AuthorizationData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The OAuth 2.0 authorization that a GitHub user must approve.</p>
   */
  inline const OAuth2AuthorizationData& GetOauth2() const { return m_oauth2; }
  inline bool Oauth2HasBeenSet() const { return m_oauth2HasBeenSet; }
  template <typename Oauth2T = OAuth2AuthorizationData>
  void SetOauth2(Oauth2T&& value) {
    m_oauth2HasBeenSet = true;
    m_oauth2 = std::forward<Oauth2T>(value);
  }
  template <typename Oauth2T = OAuth2AuthorizationData>
  AuthorizationData& WithOauth2(Oauth2T&& value) {
    SetOauth2(std::forward<Oauth2T>(value));
    return *this;
  }
  ///@}
 private:
  OAuth2AuthorizationData m_oauth2;
  bool m_oauth2HasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
