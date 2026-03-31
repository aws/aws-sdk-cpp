/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/ServiceNowServiceAuthorizationConfig.h>

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
 * <p>Complete service details for ServiceNow integration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ServiceNowServiceDetails">AWS
 * API Reference</a></p>
 */
class ServiceNowServiceDetails {
 public:
  AWS_DEVOPSAGENT_API ServiceNowServiceDetails() = default;
  AWS_DEVOPSAGENT_API ServiceNowServiceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API ServiceNowServiceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ServiceNow instance URL.</p>
   */
  inline const Aws::String& GetInstanceUrl() const { return m_instanceUrl; }
  inline bool InstanceUrlHasBeenSet() const { return m_instanceUrlHasBeenSet; }
  template <typename InstanceUrlT = Aws::String>
  void SetInstanceUrl(InstanceUrlT&& value) {
    m_instanceUrlHasBeenSet = true;
    m_instanceUrl = std::forward<InstanceUrlT>(value);
  }
  template <typename InstanceUrlT = Aws::String>
  ServiceNowServiceDetails& WithInstanceUrl(InstanceUrlT&& value) {
    SetInstanceUrl(std::forward<InstanceUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ServiceNow OAuth client credentials configuration. Use this when registering
   * with OAuth client credentials flow.</p>
   */
  inline const ServiceNowServiceAuthorizationConfig& GetAuthorizationConfig() const { return m_authorizationConfig; }
  inline bool AuthorizationConfigHasBeenSet() const { return m_authorizationConfigHasBeenSet; }
  template <typename AuthorizationConfigT = ServiceNowServiceAuthorizationConfig>
  void SetAuthorizationConfig(AuthorizationConfigT&& value) {
    m_authorizationConfigHasBeenSet = true;
    m_authorizationConfig = std::forward<AuthorizationConfigT>(value);
  }
  template <typename AuthorizationConfigT = ServiceNowServiceAuthorizationConfig>
  ServiceNowServiceDetails& WithAuthorizationConfig(AuthorizationConfigT&& value) {
    SetAuthorizationConfig(std::forward<AuthorizationConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceUrl;

  ServiceNowServiceAuthorizationConfig m_authorizationConfig;
  bool m_instanceUrlHasBeenSet = false;
  bool m_authorizationConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
