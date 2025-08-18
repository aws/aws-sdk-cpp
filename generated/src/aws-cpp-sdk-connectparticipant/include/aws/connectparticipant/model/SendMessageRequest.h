/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/ConnectParticipantRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

  /**
   */
  class SendMessageRequest : public ConnectParticipantRequest
  {
  public:
    AWS_CONNECTPARTICIPANT_API SendMessageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendMessage"; }

    AWS_CONNECTPARTICIPANT_API Aws::String SerializePayload() const override;

    AWS_CONNECTPARTICIPANT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The type of the content. Possible types are <code>text/plain</code>,
     * <code>text/markdown</code>, <code>application/json</code>, and
     * <code>application/vnd.amazonaws.connect.message.interactive.response</code>.
     * </p> <p>Supported types on the contact are configured through
     * <code>SupportedMessagingContentTypes</code> on <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartChatContact.html">StartChatContact</a>
     * and <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartOutboundChatContact.html">StartOutboundChatContact</a>.</p>
     * <p> For Apple Messages for Business, SMS, and WhatsApp Business Messaging
     * contacts, only <code>text/plain</code> is supported.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    SendMessageRequest& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the message. </p> <ul> <li> <p>For <code>text/plain</code> and
     * <code>text/markdown</code>, the Length Constraints are Minimum of 1, Maximum of
     * 1024. </p> </li> <li> <p>For <code>application/json</code>, the Length
     * Constraints are Minimum of 1, Maximum of 12000. </p> </li> <li> <p>For
     * <code>application/vnd.amazonaws.connect.message.interactive.response</code>, the
     * Length Constraints are Minimum of 1, Maximum of 12288.</p> </li> </ul>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    SendMessageRequest& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    SendMessageRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication token associated with the connection.</p>
     */
    inline const Aws::String& GetConnectionToken() const { return m_connectionToken; }
    inline bool ConnectionTokenHasBeenSet() const { return m_connectionTokenHasBeenSet; }
    template<typename ConnectionTokenT = Aws::String>
    void SetConnectionToken(ConnectionTokenT&& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = std::forward<ConnectionTokenT>(value); }
    template<typename ConnectionTokenT = Aws::String>
    SendMessageRequest& WithConnectionToken(ConnectionTokenT&& value) { SetConnectionToken(std::forward<ConnectionTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_connectionToken;
    bool m_connectionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
