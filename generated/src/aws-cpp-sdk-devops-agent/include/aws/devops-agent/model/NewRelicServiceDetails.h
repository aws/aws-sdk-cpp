/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/NewRelicServiceAuthorizationConfig.h>

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
 * <p>Complete service details for New Relic integration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/NewRelicServiceDetails">AWS
 * API Reference</a></p>
 */
class NewRelicServiceDetails {
 public:
  AWS_DEVOPSAGENT_API NewRelicServiceDetails() = default;
  AWS_DEVOPSAGENT_API NewRelicServiceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API NewRelicServiceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>New Relic MCP server authorization configuration.</p>
   */
  inline const NewRelicServiceAuthorizationConfig& GetAuthorizationConfig() const { return m_authorizationConfig; }
  inline bool AuthorizationConfigHasBeenSet() const { return m_authorizationConfigHasBeenSet; }
  template <typename AuthorizationConfigT = NewRelicServiceAuthorizationConfig>
  void SetAuthorizationConfig(AuthorizationConfigT&& value) {
    m_authorizationConfigHasBeenSet = true;
    m_authorizationConfig = std::forward<AuthorizationConfigT>(value);
  }
  template <typename AuthorizationConfigT = NewRelicServiceAuthorizationConfig>
  NewRelicServiceDetails& WithAuthorizationConfig(AuthorizationConfigT&& value) {
    SetAuthorizationConfig(std::forward<AuthorizationConfigT>(value));
    return *this;
  }
  ///@}
 private:
  NewRelicServiceAuthorizationConfig m_authorizationConfig;
  bool m_authorizationConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
