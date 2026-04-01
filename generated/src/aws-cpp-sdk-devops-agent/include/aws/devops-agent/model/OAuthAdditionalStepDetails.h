/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

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
 * <p>Details for completing OAuth authorization step.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/OAuthAdditionalStepDetails">AWS
 * API Reference</a></p>
 */
class OAuthAdditionalStepDetails {
 public:
  AWS_DEVOPSAGENT_API OAuthAdditionalStepDetails() = default;
  AWS_DEVOPSAGENT_API OAuthAdditionalStepDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API OAuthAdditionalStepDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URL to redirect the user to for OAuth authorization.</p>
   */
  inline const Aws::String& GetAuthorizationUrl() const { return m_authorizationUrl; }
  inline bool AuthorizationUrlHasBeenSet() const { return m_authorizationUrlHasBeenSet; }
  template <typename AuthorizationUrlT = Aws::String>
  void SetAuthorizationUrl(AuthorizationUrlT&& value) {
    m_authorizationUrlHasBeenSet = true;
    m_authorizationUrl = std::forward<AuthorizationUrlT>(value);
  }
  template <typename AuthorizationUrlT = Aws::String>
  OAuthAdditionalStepDetails& WithAuthorizationUrl(AuthorizationUrlT&& value) {
    SetAuthorizationUrl(std::forward<AuthorizationUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_authorizationUrl;
  bool m_authorizationUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
