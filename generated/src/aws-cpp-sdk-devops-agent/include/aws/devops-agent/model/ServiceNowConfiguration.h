/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>Configuration for ServiceNow instance integration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ServiceNowConfiguration">AWS
 * API Reference</a></p>
 */
class ServiceNowConfiguration {
 public:
  AWS_DEVOPSAGENT_API ServiceNowConfiguration() = default;
  AWS_DEVOPSAGENT_API ServiceNowConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API ServiceNowConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ServiceNow instance ID</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  ServiceNowConfiguration& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Scoped down authentication scopes for fine grained control</p>
   */
  inline const Aws::Vector<Aws::String>& GetAuthScopes() const { return m_authScopes; }
  inline bool AuthScopesHasBeenSet() const { return m_authScopesHasBeenSet; }
  template <typename AuthScopesT = Aws::Vector<Aws::String>>
  void SetAuthScopes(AuthScopesT&& value) {
    m_authScopesHasBeenSet = true;
    m_authScopes = std::forward<AuthScopesT>(value);
  }
  template <typename AuthScopesT = Aws::Vector<Aws::String>>
  ServiceNowConfiguration& WithAuthScopes(AuthScopesT&& value) {
    SetAuthScopes(std::forward<AuthScopesT>(value));
    return *this;
  }
  template <typename AuthScopesT = Aws::String>
  ServiceNowConfiguration& AddAuthScopes(AuthScopesT&& value) {
    m_authScopesHasBeenSet = true;
    m_authScopes.emplace_back(std::forward<AuthScopesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::Vector<Aws::String> m_authScopes;
  bool m_instanceIdHasBeenSet = false;
  bool m_authScopesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
