/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/Conversational.h>
#include <aws/bedrock-agentcore/model/MemoryJsonData.h>

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
 * <p>A single content payload item to ingest. A payload item contains either
 * conversational or JSON content.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/IngestPayloadType">AWS
 * API Reference</a></p>
 */
class IngestPayloadType {
 public:
  AWS_BEDROCKAGENTCORE_API IngestPayloadType() = default;
  AWS_BEDROCKAGENTCORE_API IngestPayloadType(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API IngestPayloadType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The conversational content for this payload item.</p>
   */
  inline const Conversational& GetConversational() const { return m_conversational; }
  inline bool ConversationalHasBeenSet() const { return m_conversationalHasBeenSet; }
  template <typename ConversationalT = Conversational>
  void SetConversational(ConversationalT&& value) {
    m_conversationalHasBeenSet = true;
    m_conversational = std::forward<ConversationalT>(value);
  }
  template <typename ConversationalT = Conversational>
  IngestPayloadType& WithConversational(ConversationalT&& value) {
    SetConversational(std::forward<ConversationalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON content for this payload item.</p>
   */
  inline const MemoryJsonData& GetJson() const { return m_json; }
  inline bool JsonHasBeenSet() const { return m_jsonHasBeenSet; }
  template <typename JsonT = MemoryJsonData>
  void SetJson(JsonT&& value) {
    m_jsonHasBeenSet = true;
    m_json = std::forward<JsonT>(value);
  }
  template <typename JsonT = MemoryJsonData>
  IngestPayloadType& WithJson(JsonT&& value) {
    SetJson(std::forward<JsonT>(value));
    return *this;
  }
  ///@}
 private:
  Conversational m_conversational;

  MemoryJsonData m_json;
  bool m_conversationalHasBeenSet = false;
  bool m_jsonHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
