/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ProxyCredentials.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Configuration for a customer-managed external proxy server. Includes server
 * location, optional domain-based routing patterns, and authentication
 * credentials.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ExternalProxy">AWS
 * API Reference</a></p>
 */
class ExternalProxy {
 public:
  AWS_BEDROCKAGENTCORE_API ExternalProxy() = default;
  AWS_BEDROCKAGENTCORE_API ExternalProxy(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ExternalProxy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The hostname of the proxy server. Must be a valid DNS hostname (maximum 253
   * characters).</p>
   */
  inline const Aws::String& GetServer() const { return m_server; }
  inline bool ServerHasBeenSet() const { return m_serverHasBeenSet; }
  template <typename ServerT = Aws::String>
  void SetServer(ServerT&& value) {
    m_serverHasBeenSet = true;
    m_server = std::forward<ServerT>(value);
  }
  template <typename ServerT = Aws::String>
  ExternalProxy& WithServer(ServerT&& value) {
    SetServer(std::forward<ServerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port number of the proxy server. Valid range: 1-65535.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline ExternalProxy& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional array of domain patterns that should route through this specific
   * proxy. Supports <code>.example.com</code> for subdomain matching (matches any
   * subdomain of example.com) or <code>example.com</code> for exact domain matching.
   * If omitted, this proxy acts as a catch-all for domains not matched by other
   * proxies. Maximum 100 patterns per proxy, each up to 253 characters.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDomainPatterns() const { return m_domainPatterns; }
  inline bool DomainPatternsHasBeenSet() const { return m_domainPatternsHasBeenSet; }
  template <typename DomainPatternsT = Aws::Vector<Aws::String>>
  void SetDomainPatterns(DomainPatternsT&& value) {
    m_domainPatternsHasBeenSet = true;
    m_domainPatterns = std::forward<DomainPatternsT>(value);
  }
  template <typename DomainPatternsT = Aws::Vector<Aws::String>>
  ExternalProxy& WithDomainPatterns(DomainPatternsT&& value) {
    SetDomainPatterns(std::forward<DomainPatternsT>(value));
    return *this;
  }
  template <typename DomainPatternsT = Aws::String>
  ExternalProxy& AddDomainPatterns(DomainPatternsT&& value) {
    m_domainPatternsHasBeenSet = true;
    m_domainPatterns.emplace_back(std::forward<DomainPatternsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional authentication credentials for the proxy server. If omitted, the
   * proxy is accessed without authentication (useful for IP-allowlisted
   * proxies).</p>
   */
  inline const ProxyCredentials& GetCredentials() const { return m_credentials; }
  inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
  template <typename CredentialsT = ProxyCredentials>
  void SetCredentials(CredentialsT&& value) {
    m_credentialsHasBeenSet = true;
    m_credentials = std::forward<CredentialsT>(value);
  }
  template <typename CredentialsT = ProxyCredentials>
  ExternalProxy& WithCredentials(CredentialsT&& value) {
    SetCredentials(std::forward<CredentialsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_server;

  int m_port{0};

  Aws::Vector<Aws::String> m_domainPatterns;

  ProxyCredentials m_credentials;
  bool m_serverHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_domainPatternsHasBeenSet = false;
  bool m_credentialsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
