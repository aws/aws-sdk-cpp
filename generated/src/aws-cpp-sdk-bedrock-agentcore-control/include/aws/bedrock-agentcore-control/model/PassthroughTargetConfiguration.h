/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HttpApiSchemaConfiguration.h>
#include <aws/bedrock-agentcore-control/model/PassthroughProtocolType.h>
#include <aws/bedrock-agentcore-control/model/StickinessConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>The configuration for an HTTP passthrough target. A passthrough target
 * forwards requests directly to an external HTTP endpoint.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/PassthroughTargetConfiguration">AWS
 * API Reference</a></p>
 */
class PassthroughTargetConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API PassthroughTargetConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API PassthroughTargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API PassthroughTargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTPS endpoint that the gateway forwards requests to for this passthrough
   * target.</p>
   */
  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  PassthroughTargetConfiguration& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The application protocol that the passthrough target implements. This value
   * is required for passthrough targets:</p> <ul> <li> <p> <code>MCP</code> - The
   * Model Context Protocol.</p> </li> <li> <p> <code>A2A</code> - The Agent-to-Agent
   * protocol.</p> </li> <li> <p> <code>INFERENCE</code> - The protocol for routing
   * requests to a large language model (LLM) provider.</p> </li> <li> <p>
   * <code>CUSTOM</code> - A custom application protocol.</p> </li> </ul>
   */
  inline PassthroughProtocolType GetProtocolType() const { return m_protocolType; }
  inline bool ProtocolTypeHasBeenSet() const { return m_protocolTypeHasBeenSet; }
  inline void SetProtocolType(PassthroughProtocolType value) {
    m_protocolTypeHasBeenSet = true;
    m_protocolType = value;
  }
  inline PassthroughTargetConfiguration& WithProtocolType(PassthroughProtocolType value) {
    SetProtocolType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The API schema configuration that defines the structure of the passthrough
   * target's API.</p>
   */
  inline const HttpApiSchemaConfiguration& GetSchema() const { return m_schema; }
  inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
  template <typename SchemaT = HttpApiSchemaConfiguration>
  void SetSchema(SchemaT&& value) {
    m_schemaHasBeenSet = true;
    m_schema = std::forward<SchemaT>(value);
  }
  template <typename SchemaT = HttpApiSchemaConfiguration>
  PassthroughTargetConfiguration& WithSchema(SchemaT&& value) {
    SetSchema(std::forward<SchemaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session stickiness configuration for the passthrough target. This
   * configuration routes requests within the same session to the same target.</p>
   */
  inline const StickinessConfiguration& GetStickinessConfiguration() const { return m_stickinessConfiguration; }
  inline bool StickinessConfigurationHasBeenSet() const { return m_stickinessConfigurationHasBeenSet; }
  template <typename StickinessConfigurationT = StickinessConfiguration>
  void SetStickinessConfiguration(StickinessConfigurationT&& value) {
    m_stickinessConfigurationHasBeenSet = true;
    m_stickinessConfiguration = std::forward<StickinessConfigurationT>(value);
  }
  template <typename StickinessConfigurationT = StickinessConfiguration>
  PassthroughTargetConfiguration& WithStickinessConfiguration(StickinessConfigurationT&& value) {
    SetStickinessConfiguration(std::forward<StickinessConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_endpoint;

  PassthroughProtocolType m_protocolType{PassthroughProtocolType::NOT_SET};

  HttpApiSchemaConfiguration m_schema;

  StickinessConfiguration m_stickinessConfiguration;
  bool m_endpointHasBeenSet = false;
  bool m_protocolTypeHasBeenSet = false;
  bool m_schemaHasBeenSet = false;
  bool m_stickinessConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
