/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/IngestPayloadType.h>
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
 * <p>The content included directly in the request as one or more payload
 * items.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/InlineMemoryContent">AWS
 * API Reference</a></p>
 */
class InlineMemoryContent {
 public:
  AWS_BEDROCKAGENTCORE_API InlineMemoryContent() = default;
  AWS_BEDROCKAGENTCORE_API InlineMemoryContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API InlineMemoryContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of content payload items to ingest.</p>
   */
  inline const Aws::Vector<IngestPayloadType>& GetPayload() const { return m_payload; }
  inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
  template <typename PayloadT = Aws::Vector<IngestPayloadType>>
  void SetPayload(PayloadT&& value) {
    m_payloadHasBeenSet = true;
    m_payload = std::forward<PayloadT>(value);
  }
  template <typename PayloadT = Aws::Vector<IngestPayloadType>>
  InlineMemoryContent& WithPayload(PayloadT&& value) {
    SetPayload(std::forward<PayloadT>(value));
    return *this;
  }
  template <typename PayloadT = IngestPayloadType>
  InlineMemoryContent& AddPayload(PayloadT&& value) {
    m_payloadHasBeenSet = true;
    m_payload.emplace_back(std::forward<PayloadT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<IngestPayloadType> m_payload;
  bool m_payloadHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
