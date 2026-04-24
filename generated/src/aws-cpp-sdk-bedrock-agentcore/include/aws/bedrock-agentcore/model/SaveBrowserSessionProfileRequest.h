/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 */
class SaveBrowserSessionProfileRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API SaveBrowserSessionProfileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SaveBrowserSessionProfile"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The trace identifier for request tracking.</p>
   */
  inline const Aws::String& GetTraceId() const { return m_traceId; }
  inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
  template <typename TraceIdT = Aws::String>
  void SetTraceId(TraceIdT&& value) {
    m_traceIdHasBeenSet = true;
    m_traceId = std::forward<TraceIdT>(value);
  }
  template <typename TraceIdT = Aws::String>
  SaveBrowserSessionProfileRequest& WithTraceId(TraceIdT&& value) {
    SetTraceId(std::forward<TraceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parent trace information for distributed tracing.</p>
   */
  inline const Aws::String& GetTraceParent() const { return m_traceParent; }
  inline bool TraceParentHasBeenSet() const { return m_traceParentHasBeenSet; }
  template <typename TraceParentT = Aws::String>
  void SetTraceParent(TraceParentT&& value) {
    m_traceParentHasBeenSet = true;
    m_traceParent = std::forward<TraceParentT>(value);
  }
  template <typename TraceParentT = Aws::String>
  SaveBrowserSessionProfileRequest& WithTraceParent(TraceParentT&& value) {
    SetTraceParent(std::forward<TraceParentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the browser profile. This identifier is used to
   * reference the profile when starting new browser sessions. The identifier must
   * follow the pattern of an alphanumeric name (up to 48 characters) followed by a
   * hyphen and a 10-character alphanumeric suffix.</p>
   */
  inline const Aws::String& GetProfileIdentifier() const { return m_profileIdentifier; }
  inline bool ProfileIdentifierHasBeenSet() const { return m_profileIdentifierHasBeenSet; }
  template <typename ProfileIdentifierT = Aws::String>
  void SetProfileIdentifier(ProfileIdentifierT&& value) {
    m_profileIdentifierHasBeenSet = true;
    m_profileIdentifier = std::forward<ProfileIdentifierT>(value);
  }
  template <typename ProfileIdentifierT = Aws::String>
  SaveBrowserSessionProfileRequest& WithProfileIdentifier(ProfileIdentifierT&& value) {
    SetProfileIdentifier(std::forward<ProfileIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the browser associated with the session from which
   * to save the profile.</p>
   */
  inline const Aws::String& GetBrowserIdentifier() const { return m_browserIdentifier; }
  inline bool BrowserIdentifierHasBeenSet() const { return m_browserIdentifierHasBeenSet; }
  template <typename BrowserIdentifierT = Aws::String>
  void SetBrowserIdentifier(BrowserIdentifierT&& value) {
    m_browserIdentifierHasBeenSet = true;
    m_browserIdentifier = std::forward<BrowserIdentifierT>(value);
  }
  template <typename BrowserIdentifierT = Aws::String>
  SaveBrowserSessionProfileRequest& WithBrowserIdentifier(BrowserIdentifierT&& value) {
    SetBrowserIdentifier(std::forward<BrowserIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the browser session from which to save the profile.
   * The session must be active when saving the profile.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  SaveBrowserSessionProfileRequest& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the API request completes
   * no more than one time. If this token matches a previous request, Amazon Bedrock
   * AgentCore ignores the request, but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  SaveBrowserSessionProfileRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_traceId;

  Aws::String m_traceParent;

  Aws::String m_profileIdentifier;

  Aws::String m_browserIdentifier;

  Aws::String m_sessionId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_traceIdHasBeenSet = false;
  bool m_traceParentHasBeenSet = false;
  bool m_profileIdentifierHasBeenSet = false;
  bool m_browserIdentifierHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
