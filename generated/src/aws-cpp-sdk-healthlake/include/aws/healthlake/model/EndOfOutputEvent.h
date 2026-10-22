/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {

/**
 * <p>Contains the final response event from the agent, including the response
 * message, response options, and conversation ID.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/EndOfOutputEvent">AWS
 * API Reference</a></p>
 */
class EndOfOutputEvent {
 public:
  AWS_HEALTHLAKE_API EndOfOutputEvent() = default;
  AWS_HEALTHLAKE_API EndOfOutputEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API EndOfOutputEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The final response message from the agent.</p>
   */
  inline const Aws::String& GetFinalResponseMessage() const { return m_finalResponseMessage; }
  inline bool FinalResponseMessageHasBeenSet() const { return m_finalResponseMessageHasBeenSet; }
  template <typename FinalResponseMessageT = Aws::String>
  void SetFinalResponseMessage(FinalResponseMessageT&& value) {
    m_finalResponseMessageHasBeenSet = true;
    m_finalResponseMessage = std::forward<FinalResponseMessageT>(value);
  }
  template <typename FinalResponseMessageT = Aws::String>
  EndOfOutputEvent& WithFinalResponseMessage(FinalResponseMessageT&& value) {
    SetFinalResponseMessage(std::forward<FinalResponseMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The response options that you can use to easily answer follow-up questions
   * from the agent.</p>
   */
  inline const Aws::Vector<Aws::String>& GetOptions() const { return m_options; }
  inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
  template <typename OptionsT = Aws::Vector<Aws::String>>
  void SetOptions(OptionsT&& value) {
    m_optionsHasBeenSet = true;
    m_options = std::forward<OptionsT>(value);
  }
  template <typename OptionsT = Aws::Vector<Aws::String>>
  EndOfOutputEvent& WithOptions(OptionsT&& value) {
    SetOptions(std::forward<OptionsT>(value));
    return *this;
  }
  template <typename OptionsT = Aws::String>
  EndOfOutputEvent& AddOptions(OptionsT&& value) {
    m_optionsHasBeenSet = true;
    m_options.emplace_back(std::forward<OptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The conversation ID of the request. You can use this ID to continue the
   * profile mapping based on this request's context at a later time.</p>
   */
  inline const Aws::String& GetConversationId() const { return m_conversationId; }
  inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
  template <typename ConversationIdT = Aws::String>
  void SetConversationId(ConversationIdT&& value) {
    m_conversationIdHasBeenSet = true;
    m_conversationId = std::forward<ConversationIdT>(value);
  }
  template <typename ConversationIdT = Aws::String>
  EndOfOutputEvent& WithConversationId(ConversationIdT&& value) {
    SetConversationId(std::forward<ConversationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_finalResponseMessage;

  Aws::Vector<Aws::String> m_options;

  Aws::String m_conversationId;
  bool m_finalResponseMessageHasBeenSet = false;
  bool m_optionsHasBeenSet = false;
  bool m_conversationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
