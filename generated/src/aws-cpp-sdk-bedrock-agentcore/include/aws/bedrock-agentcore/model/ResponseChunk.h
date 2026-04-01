/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ContentDeltaEvent.h>
#include <aws/bedrock-agentcore/model/ContentStartEvent.h>
#include <aws/bedrock-agentcore/model/ContentStopEvent.h>

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
 * <p>A structure representing a response chunk that contains exactly one of the
 * possible event types: <code>contentStart</code>, <code>contentDelta</code>, or
 * <code>contentStop</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ResponseChunk">AWS
 * API Reference</a></p>
 */
class ResponseChunk {
 public:
  AWS_BEDROCKAGENTCORE_API ResponseChunk() = default;
  AWS_BEDROCKAGENTCORE_API ResponseChunk(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ResponseChunk& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An event indicating the start of content streaming from the command
   * execution. This is the first chunk received.</p>
   */
  inline const ContentStartEvent& GetContentStart() const { return m_contentStart; }
  inline bool ContentStartHasBeenSet() const { return m_contentStartHasBeenSet; }
  template <typename ContentStartT = ContentStartEvent>
  void SetContentStart(ContentStartT&& value) {
    m_contentStartHasBeenSet = true;
    m_contentStart = std::forward<ContentStartT>(value);
  }
  template <typename ContentStartT = ContentStartEvent>
  ResponseChunk& WithContentStart(ContentStartT&& value) {
    SetContentStart(std::forward<ContentStartT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An event containing incremental output (stdout or stderr) from the command
   * execution. These are the middle chunks.</p>
   */
  inline const ContentDeltaEvent& GetContentDelta() const { return m_contentDelta; }
  inline bool ContentDeltaHasBeenSet() const { return m_contentDeltaHasBeenSet; }
  template <typename ContentDeltaT = ContentDeltaEvent>
  void SetContentDelta(ContentDeltaT&& value) {
    m_contentDeltaHasBeenSet = true;
    m_contentDelta = std::forward<ContentDeltaT>(value);
  }
  template <typename ContentDeltaT = ContentDeltaEvent>
  ResponseChunk& WithContentDelta(ContentDeltaT&& value) {
    SetContentDelta(std::forward<ContentDeltaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An event indicating the completion of the command execution, including the
   * exit code and final status. This is the last chunk received.</p>
   */
  inline const ContentStopEvent& GetContentStop() const { return m_contentStop; }
  inline bool ContentStopHasBeenSet() const { return m_contentStopHasBeenSet; }
  template <typename ContentStopT = ContentStopEvent>
  void SetContentStop(ContentStopT&& value) {
    m_contentStopHasBeenSet = true;
    m_contentStop = std::forward<ContentStopT>(value);
  }
  template <typename ContentStopT = ContentStopEvent>
  ResponseChunk& WithContentStop(ContentStopT&& value) {
    SetContentStop(std::forward<ContentStopT>(value));
    return *this;
  }
  ///@}
 private:
  ContentStartEvent m_contentStart;

  ContentDeltaEvent m_contentDelta;

  ContentStopEvent m_contentStop;
  bool m_contentStartHasBeenSet = false;
  bool m_contentDeltaHasBeenSet = false;
  bool m_contentStopHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
