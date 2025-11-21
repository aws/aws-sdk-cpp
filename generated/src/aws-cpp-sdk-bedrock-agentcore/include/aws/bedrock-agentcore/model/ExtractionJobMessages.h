/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/MessageMetadata.h>
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
 * <p>The list of messages that compose this extraction job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ExtractionJobMessages">AWS
 * API Reference</a></p>
 */
class ExtractionJobMessages {
 public:
  AWS_BEDROCKAGENTCORE_API ExtractionJobMessages() = default;
  AWS_BEDROCKAGENTCORE_API ExtractionJobMessages(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ExtractionJobMessages& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of messages that compose this extraction job.</p>
   */
  inline const Aws::Vector<MessageMetadata>& GetMessagesList() const { return m_messagesList; }
  inline bool MessagesListHasBeenSet() const { return m_messagesListHasBeenSet; }
  template <typename MessagesListT = Aws::Vector<MessageMetadata>>
  void SetMessagesList(MessagesListT&& value) {
    m_messagesListHasBeenSet = true;
    m_messagesList = std::forward<MessagesListT>(value);
  }
  template <typename MessagesListT = Aws::Vector<MessageMetadata>>
  ExtractionJobMessages& WithMessagesList(MessagesListT&& value) {
    SetMessagesList(std::forward<MessagesListT>(value));
    return *this;
  }
  template <typename MessagesListT = MessageMetadata>
  ExtractionJobMessages& AddMessagesList(MessagesListT&& value) {
    m_messagesListHasBeenSet = true;
    m_messagesList.emplace_back(std::forward<MessagesListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MessageMetadata> m_messagesList;
  bool m_messagesListHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
