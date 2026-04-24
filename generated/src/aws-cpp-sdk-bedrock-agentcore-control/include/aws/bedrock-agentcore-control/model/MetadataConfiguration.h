/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
 * <p>Configuration for HTTP header and query parameter propagation between the
 * gateway and target servers.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/MetadataConfiguration">AWS
 * API Reference</a></p>
 */
class MetadataConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API MetadataConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API MetadataConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API MetadataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of HTTP headers that are allowed to be propagated from incoming client
   * requests to the target.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedRequestHeaders() const { return m_allowedRequestHeaders; }
  inline bool AllowedRequestHeadersHasBeenSet() const { return m_allowedRequestHeadersHasBeenSet; }
  template <typename AllowedRequestHeadersT = Aws::Vector<Aws::String>>
  void SetAllowedRequestHeaders(AllowedRequestHeadersT&& value) {
    m_allowedRequestHeadersHasBeenSet = true;
    m_allowedRequestHeaders = std::forward<AllowedRequestHeadersT>(value);
  }
  template <typename AllowedRequestHeadersT = Aws::Vector<Aws::String>>
  MetadataConfiguration& WithAllowedRequestHeaders(AllowedRequestHeadersT&& value) {
    SetAllowedRequestHeaders(std::forward<AllowedRequestHeadersT>(value));
    return *this;
  }
  template <typename AllowedRequestHeadersT = Aws::String>
  MetadataConfiguration& AddAllowedRequestHeaders(AllowedRequestHeadersT&& value) {
    m_allowedRequestHeadersHasBeenSet = true;
    m_allowedRequestHeaders.emplace_back(std::forward<AllowedRequestHeadersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of URL query parameters that are allowed to be propagated from
   * incoming gateway URL to the target.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedQueryParameters() const { return m_allowedQueryParameters; }
  inline bool AllowedQueryParametersHasBeenSet() const { return m_allowedQueryParametersHasBeenSet; }
  template <typename AllowedQueryParametersT = Aws::Vector<Aws::String>>
  void SetAllowedQueryParameters(AllowedQueryParametersT&& value) {
    m_allowedQueryParametersHasBeenSet = true;
    m_allowedQueryParameters = std::forward<AllowedQueryParametersT>(value);
  }
  template <typename AllowedQueryParametersT = Aws::Vector<Aws::String>>
  MetadataConfiguration& WithAllowedQueryParameters(AllowedQueryParametersT&& value) {
    SetAllowedQueryParameters(std::forward<AllowedQueryParametersT>(value));
    return *this;
  }
  template <typename AllowedQueryParametersT = Aws::String>
  MetadataConfiguration& AddAllowedQueryParameters(AllowedQueryParametersT&& value) {
    m_allowedQueryParametersHasBeenSet = true;
    m_allowedQueryParameters.emplace_back(std::forward<AllowedQueryParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of HTTP headers that are allowed to be propagated from the target
   * response back to the client.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedResponseHeaders() const { return m_allowedResponseHeaders; }
  inline bool AllowedResponseHeadersHasBeenSet() const { return m_allowedResponseHeadersHasBeenSet; }
  template <typename AllowedResponseHeadersT = Aws::Vector<Aws::String>>
  void SetAllowedResponseHeaders(AllowedResponseHeadersT&& value) {
    m_allowedResponseHeadersHasBeenSet = true;
    m_allowedResponseHeaders = std::forward<AllowedResponseHeadersT>(value);
  }
  template <typename AllowedResponseHeadersT = Aws::Vector<Aws::String>>
  MetadataConfiguration& WithAllowedResponseHeaders(AllowedResponseHeadersT&& value) {
    SetAllowedResponseHeaders(std::forward<AllowedResponseHeadersT>(value));
    return *this;
  }
  template <typename AllowedResponseHeadersT = Aws::String>
  MetadataConfiguration& AddAllowedResponseHeaders(AllowedResponseHeadersT&& value) {
    m_allowedResponseHeadersHasBeenSet = true;
    m_allowedResponseHeaders.emplace_back(std::forward<AllowedResponseHeadersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_allowedRequestHeaders;

  Aws::Vector<Aws::String> m_allowedQueryParameters;

  Aws::Vector<Aws::String> m_allowedResponseHeaders;
  bool m_allowedRequestHeadersHasBeenSet = false;
  bool m_allowedQueryParametersHasBeenSet = false;
  bool m_allowedResponseHeadersHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
