/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/RateConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>A single rule entry within a rate limit that maps dimension values to rate
 * configurations. Each entry defines the rate limits for a specific combination of
 * dimension values.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/LimitEntry">AWS
 * API Reference</a></p>
 */
class LimitEntry {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API LimitEntry() = default;
  AWS_BEDROCKAGENTCORECONTROL_API LimitEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API LimitEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A map of dimension names to dimension values for this rule entry. Keys must
   * match the parent rate limit's dimension keys. Values may use <code>*</code> as a
   * wildcard, but only in trailing positions based on the dimension keys
   * ordering.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetDimensions() const { return m_dimensions; }
  inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
  template <typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
  void SetDimensions(DimensionsT&& value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions = std::forward<DimensionsT>(value);
  }
  template <typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
  LimitEntry& WithDimensions(DimensionsT&& value) {
    SetDimensions(std::forward<DimensionsT>(value));
    return *this;
  }
  template <typename DimensionsKeyT = Aws::String, typename DimensionsValueT = Aws::String>
  LimitEntry& AddDimensions(DimensionsKeyT&& key, DimensionsValueT&& value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions.emplace(std::forward<DimensionsKeyT>(key), std::forward<DimensionsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The request rate limit configuration. Specifies the maximum number of
   * requests allowed per time period.</p>
   */
  inline const Aws::Vector<RateConfig>& GetRequests() const { return m_requests; }
  inline bool RequestsHasBeenSet() const { return m_requestsHasBeenSet; }
  template <typename RequestsT = Aws::Vector<RateConfig>>
  void SetRequests(RequestsT&& value) {
    m_requestsHasBeenSet = true;
    m_requests = std::forward<RequestsT>(value);
  }
  template <typename RequestsT = Aws::Vector<RateConfig>>
  LimitEntry& WithRequests(RequestsT&& value) {
    SetRequests(std::forward<RequestsT>(value));
    return *this;
  }
  template <typename RequestsT = RateConfig>
  LimitEntry& AddRequests(RequestsT&& value) {
    m_requestsHasBeenSet = true;
    m_requests.emplace_back(std::forward<RequestsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token rate limit configuration. Specifies the maximum number of tokens
   * allowed per time period.</p>
   */
  inline const Aws::Vector<RateConfig>& GetTokens() const { return m_tokens; }
  inline bool TokensHasBeenSet() const { return m_tokensHasBeenSet; }
  template <typename TokensT = Aws::Vector<RateConfig>>
  void SetTokens(TokensT&& value) {
    m_tokensHasBeenSet = true;
    m_tokens = std::forward<TokensT>(value);
  }
  template <typename TokensT = Aws::Vector<RateConfig>>
  LimitEntry& WithTokens(TokensT&& value) {
    SetTokens(std::forward<TokensT>(value));
    return *this;
  }
  template <typename TokensT = RateConfig>
  LimitEntry& AddTokens(TokensT&& value) {
    m_tokensHasBeenSet = true;
    m_tokens.emplace_back(std::forward<TokensT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection rate limit configuration. Specifies the maximum number of
   * concurrent connections allowed.</p>
   */
  inline const Aws::Vector<RateConfig>& GetConnections() const { return m_connections; }
  inline bool ConnectionsHasBeenSet() const { return m_connectionsHasBeenSet; }
  template <typename ConnectionsT = Aws::Vector<RateConfig>>
  void SetConnections(ConnectionsT&& value) {
    m_connectionsHasBeenSet = true;
    m_connections = std::forward<ConnectionsT>(value);
  }
  template <typename ConnectionsT = Aws::Vector<RateConfig>>
  LimitEntry& WithConnections(ConnectionsT&& value) {
    SetConnections(std::forward<ConnectionsT>(value));
    return *this;
  }
  template <typename ConnectionsT = RateConfig>
  LimitEntry& AddConnections(ConnectionsT&& value) {
    m_connectionsHasBeenSet = true;
    m_connections.emplace_back(std::forward<ConnectionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_dimensions;

  Aws::Vector<RateConfig> m_requests;

  Aws::Vector<RateConfig> m_tokens;

  Aws::Vector<RateConfig> m_connections;
  bool m_dimensionsHasBeenSet = false;
  bool m_requestsHasBeenSet = false;
  bool m_tokensHasBeenSet = false;
  bool m_connectionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
