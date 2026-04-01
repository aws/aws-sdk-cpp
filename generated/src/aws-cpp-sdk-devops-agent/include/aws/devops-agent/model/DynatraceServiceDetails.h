/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/DynatraceServiceAuthorizationConfig.h>

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
 * <p>Complete service details for Dynatrace integration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/DynatraceServiceDetails">AWS
 * API Reference</a></p>
 */
class DynatraceServiceDetails {
 public:
  AWS_DEVOPSAGENT_API DynatraceServiceDetails() = default;
  AWS_DEVOPSAGENT_API DynatraceServiceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API DynatraceServiceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Dynatrace resource account urn.</p>
   */
  inline const Aws::String& GetAccountUrn() const { return m_accountUrn; }
  inline bool AccountUrnHasBeenSet() const { return m_accountUrnHasBeenSet; }
  template <typename AccountUrnT = Aws::String>
  void SetAccountUrn(AccountUrnT&& value) {
    m_accountUrnHasBeenSet = true;
    m_accountUrn = std::forward<AccountUrnT>(value);
  }
  template <typename AccountUrnT = Aws::String>
  DynatraceServiceDetails& WithAccountUrn(AccountUrnT&& value) {
    SetAccountUrn(std::forward<AccountUrnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Dynatrace OAuth client credentials configuration. Use this when registering
   * with OAuth client credentials flow.</p>
   */
  inline const DynatraceServiceAuthorizationConfig& GetAuthorizationConfig() const { return m_authorizationConfig; }
  inline bool AuthorizationConfigHasBeenSet() const { return m_authorizationConfigHasBeenSet; }
  template <typename AuthorizationConfigT = DynatraceServiceAuthorizationConfig>
  void SetAuthorizationConfig(AuthorizationConfigT&& value) {
    m_authorizationConfigHasBeenSet = true;
    m_authorizationConfig = std::forward<AuthorizationConfigT>(value);
  }
  template <typename AuthorizationConfigT = DynatraceServiceAuthorizationConfig>
  DynatraceServiceDetails& WithAuthorizationConfig(AuthorizationConfigT&& value) {
    SetAuthorizationConfig(std::forward<AuthorizationConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountUrn;

  DynatraceServiceAuthorizationConfig m_authorizationConfig;
  bool m_accountUrnHasBeenSet = false;
  bool m_authorizationConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
