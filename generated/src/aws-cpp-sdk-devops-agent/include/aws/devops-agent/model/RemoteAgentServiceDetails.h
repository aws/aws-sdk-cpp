/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/RemoteAgentAuthorizationConfig.h>

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
 * <p>Complete service details for token-based remote A2A agent
 * integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/RemoteAgentServiceDetails">AWS
 * API Reference</a></p>
 */
class RemoteAgentServiceDetails {
 public:
  AWS_DEVOPSAGENT_API RemoteAgentServiceDetails() = default;
  AWS_DEVOPSAGENT_API RemoteAgentServiceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API RemoteAgentServiceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RemoteAgentServiceDetails& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  RemoteAgentServiceDetails& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  RemoteAgentServiceDetails& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Remote agent authorization configuration.</p>
   */
  inline const RemoteAgentAuthorizationConfig& GetAuthorizationConfig() const { return m_authorizationConfig; }
  inline bool AuthorizationConfigHasBeenSet() const { return m_authorizationConfigHasBeenSet; }
  template <typename AuthorizationConfigT = RemoteAgentAuthorizationConfig>
  void SetAuthorizationConfig(AuthorizationConfigT&& value) {
    m_authorizationConfigHasBeenSet = true;
    m_authorizationConfig = std::forward<AuthorizationConfigT>(value);
  }
  template <typename AuthorizationConfigT = RemoteAgentAuthorizationConfig>
  RemoteAgentServiceDetails& WithAuthorizationConfig(AuthorizationConfigT&& value) {
    SetAuthorizationConfig(std::forward<AuthorizationConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_endpoint;

  Aws::String m_description;

  RemoteAgentAuthorizationConfig m_authorizationConfig;
  bool m_nameHasBeenSet = false;
  bool m_endpointHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_authorizationConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
