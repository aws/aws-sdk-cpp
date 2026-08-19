/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/Conversational.h>
#include <aws/bedrock-agentcore/model/MemoryJsonData.h>
#include <aws/core/utils/Document.h>

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
 * <p>Contains the payload content for an event.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/PayloadType">AWS
 * API Reference</a></p>
 */
class PayloadType {
 public:
  AWS_BEDROCKAGENTCORE_API PayloadType() = default;
  AWS_BEDROCKAGENTCORE_API PayloadType(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API PayloadType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The conversational content of the payload.</p>
   */
  inline const Conversational& GetConversational() const { return m_conversational; }
  inline bool ConversationalHasBeenSet() const { return m_conversationalHasBeenSet; }
  template <typename ConversationalT = Conversational>
  void SetConversational(ConversationalT&& value) {
    m_conversationalHasBeenSet = true;
    m_conversational = std::forward<ConversationalT>(value);
  }
  template <typename ConversationalT = Conversational>
  PayloadType& WithConversational(ConversationalT&& value) {
    SetConversational(std::forward<ConversationalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The binary content of the payload.</p>
   */
  inline Aws::Utils::DocumentView GetBlob() const { return m_blob; }
  inline bool BlobHasBeenSet() const { return m_blobHasBeenSet; }
  template <typename BlobT = Aws::Utils::Document>
  void SetBlob(BlobT&& value) {
    m_blobHasBeenSet = true;
    m_blob = std::forward<BlobT>(value);
  }
  template <typename BlobT = Aws::Utils::Document>
  PayloadType& WithBlob(BlobT&& value) {
    SetBlob(std::forward<BlobT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON content of the payload. Use this type to store non-conversational,
   * JSON-formatted data, such as behavioral events, activity logs, or system
   * events.</p>
   */
  inline const MemoryJsonData& GetJson() const { return m_json; }
  inline bool JsonHasBeenSet() const { return m_jsonHasBeenSet; }
  template <typename JsonT = MemoryJsonData>
  void SetJson(JsonT&& value) {
    m_jsonHasBeenSet = true;
    m_json = std::forward<JsonT>(value);
  }
  template <typename JsonT = MemoryJsonData>
  PayloadType& WithJson(JsonT&& value) {
    SetJson(std::forward<JsonT>(value));
    return *this;
  }
  ///@}
 private:
  Conversational m_conversational;

  Aws::Utils::Document m_blob;

  MemoryJsonData m_json;
  bool m_conversationalHasBeenSet = false;
  bool m_blobHasBeenSet = false;
  bool m_jsonHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
