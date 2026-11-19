/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridgev2/EventBridgeV2Request.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/WebhookCredential.h>

#include <utility>

namespace Aws {
namespace EventBridgeV2 {
namespace Model {

/**
 */
class RotateWebhookCredentialsRequest : public EventBridgeV2Request {
 public:
  AWS_EVENTBRIDGEV2_API RotateWebhookCredentialsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RotateWebhookCredentials"; }

  AWS_EVENTBRIDGEV2_API Aws::String SerializePayload() const override;

  AWS_EVENTBRIDGEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ARN of the webhook EventSource.</p>
   */
  inline const Aws::String& GetEventSourceArn() const { return m_eventSourceArn; }
  inline bool EventSourceArnHasBeenSet() const { return m_eventSourceArnHasBeenSet; }
  template <typename EventSourceArnT = Aws::String>
  void SetEventSourceArn(EventSourceArnT&& value) {
    m_eventSourceArnHasBeenSet = true;
    m_eventSourceArn = std::forward<EventSourceArnT>(value);
  }
  template <typename EventSourceArnT = Aws::String>
  RotateWebhookCredentialsRequest& WithEventSourceArn(EventSourceArnT&& value) {
    SetEventSourceArn(std::forward<EventSourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new credential. Set the member that matches the authentication type of
   * the EventSource. If you set a member that does not match the authentication
   * type, EventBridge returns InvalidInputException. If you omit Credential,
   * EventBridge generates a value.</p>
   */
  inline const WebhookCredential& GetCredential() const { return m_credential; }
  inline bool CredentialHasBeenSet() const { return m_credentialHasBeenSet; }
  template <typename CredentialT = WebhookCredential>
  void SetCredential(CredentialT&& value) {
    m_credentialHasBeenSet = true;
    m_credential = std::forward<CredentialT>(value);
  }
  template <typename CredentialT = WebhookCredential>
  RotateWebhookCredentialsRequest& WithCredential(CredentialT&& value) {
    SetCredential(std::forward<CredentialT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique, case-sensitive identifier that ensures the idempotency of the
   * request. The SDK generates one automatically when the field is omitted.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  RotateWebhookCredentialsRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventSourceArn;

  WebhookCredential m_credential;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_eventSourceArnHasBeenSet = false;
  bool m_credentialHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
