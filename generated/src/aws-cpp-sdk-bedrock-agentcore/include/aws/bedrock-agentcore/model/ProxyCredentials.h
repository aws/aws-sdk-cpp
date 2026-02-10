/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/BasicAuth.h>

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
 * <p>Union type representing different proxy authentication methods. Currently
 * supports HTTP Basic Authentication (username and password).</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ProxyCredentials">AWS
 * API Reference</a></p>
 */
class ProxyCredentials {
 public:
  AWS_BEDROCKAGENTCORE_API ProxyCredentials() = default;
  AWS_BEDROCKAGENTCORE_API ProxyCredentials(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ProxyCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>HTTP Basic Authentication credentials (username and password) stored in
   * Amazon Web Services Secrets Manager.</p>
   */
  inline const BasicAuth& GetBasicAuth() const { return m_basicAuth; }
  inline bool BasicAuthHasBeenSet() const { return m_basicAuthHasBeenSet; }
  template <typename BasicAuthT = BasicAuth>
  void SetBasicAuth(BasicAuthT&& value) {
    m_basicAuthHasBeenSet = true;
    m_basicAuth = std::forward<BasicAuthT>(value);
  }
  template <typename BasicAuthT = BasicAuth>
  ProxyCredentials& WithBasicAuth(BasicAuthT&& value) {
    SetBasicAuth(std::forward<BasicAuthT>(value));
    return *this;
  }
  ///@}
 private:
  BasicAuth m_basicAuth;
  bool m_basicAuthHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
