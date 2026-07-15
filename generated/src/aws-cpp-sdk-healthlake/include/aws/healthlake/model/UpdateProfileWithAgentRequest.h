/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLakeRequest.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/AgentInputMessage.h>
#include <aws/healthlake/model/SourceFormat.h>

#include <utility>

namespace Aws {
namespace HealthLake {
namespace Model {

/**
 * <p>The request parameters for the <code>UpdateProfileWithAgent</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/UpdateProfileWithAgentRequest">AWS
 * API Reference</a></p>
 */
class UpdateProfileWithAgentRequest : public HealthLakeRequest {
 public:
  AWS_HEALTHLAKE_API UpdateProfileWithAgentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateProfileWithAgent"; }

  AWS_HEALTHLAKE_API Aws::String SerializePayload() const override;

  AWS_HEALTHLAKE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the profile to update via the agent.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  UpdateProfileWithAgentRequest& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source data format for the transformation.</p>
   */
  inline SourceFormat GetSourceFormat() const { return m_sourceFormat; }
  inline bool SourceFormatHasBeenSet() const { return m_sourceFormatHasBeenSet; }
  inline void SetSourceFormat(SourceFormat value) {
    m_sourceFormatHasBeenSet = true;
    m_sourceFormat = value;
  }
  inline UpdateProfileWithAgentRequest& WithSourceFormat(SourceFormat value) {
    SetSourceFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The message to send to the agent.</p>
   */
  inline const AgentInputMessage& GetInputMessage() const { return m_inputMessage; }
  inline bool InputMessageHasBeenSet() const { return m_inputMessageHasBeenSet; }
  template <typename InputMessageT = AgentInputMessage>
  void SetInputMessage(InputMessageT&& value) {
    m_inputMessageHasBeenSet = true;
    m_inputMessage = std::forward<InputMessageT>(value);
  }
  template <typename InputMessageT = AgentInputMessage>
  UpdateProfileWithAgentRequest& WithInputMessage(InputMessageT&& value) {
    SetInputMessage(std::forward<InputMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The conversation identifier for multi-turn interactions. Omit to start a new
   * conversation.</p>
   */
  inline const Aws::String& GetConversationId() const { return m_conversationId; }
  inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
  template <typename ConversationIdT = Aws::String>
  void SetConversationId(ConversationIdT&& value) {
    m_conversationIdHasBeenSet = true;
    m_conversationId = std::forward<ConversationIdT>(value);
  }
  template <typename ConversationIdT = Aws::String>
  UpdateProfileWithAgentRequest& WithConversationId(ConversationIdT&& value) {
    SetConversationId(std::forward<ConversationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_profileId;

  SourceFormat m_sourceFormat{SourceFormat::NOT_SET};

  AgentInputMessage m_inputMessage;

  Aws::String m_conversationId;
  bool m_profileIdHasBeenSet = false;
  bool m_sourceFormatHasBeenSet = false;
  bool m_inputMessageHasBeenSet = false;
  bool m_conversationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
