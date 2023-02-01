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
  class SendEventRequest : public ConnectParticipantRequest
  {
  public:
    AWS_CONNECTPARTICIPANT_API SendEventRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendEvent"; }

    AWS_CONNECTPARTICIPANT_API Aws::String SerializePayload() const override;

    AWS_CONNECTPARTICIPANT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The content type of the request. Supported types are:</p> <ul> <li>
     * <p>application/vnd.amazonaws.connect.event.typing</p> </li> <li>
     * <p>application/vnd.amazonaws.connect.event.connection.acknowledged</p> </li>
     * <li> <p>application/vnd.amazonaws.connect.event.message.delivered</p> </li> <li>
     * <p>application/vnd.amazonaws.connect.event.message.read</p> </li> </ul>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content type of the request. Supported types are:</p> <ul> <li>
     * <p>application/vnd.amazonaws.connect.event.typing</p> </li> <li>
     * <p>application/vnd.amazonaws.connect.event.connection.acknowledged</p> </li>
     * <li> <p>application/vnd.amazonaws.connect.event.message.delivered</p> </li> <li>
     * <p>application/vnd.amazonaws.connect.event.message.read</p> </li> </ul>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The content type of the request. Supported types are:</p> <ul> <li>
     * <p>application/vnd.amazonaws.connect.event.typing</p> </li> <li>
     * <p>application/vnd.amazonaws.connect.event.connection.acknowledged</p> </li>
     * <li> <p>application/vnd.amazonaws.connect.event.message.delivered</p> </li> <li>
     * <p>application/vnd.amazonaws.connect.event.message.read</p> </li> </ul>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The content type of the request. Supported types are:</p> <ul> <li>
     * <p>application/vnd.amazonaws.connect.event.typing</p> </li> <li>
     * <p>application/vnd.amazonaws.connect.event.connection.acknowledged</p> </li>
     * <li> <p>application/vnd.amazonaws.connect.event.message.delivered</p> </li> <li>
     * <p>application/vnd.amazonaws.connect.event.message.read</p> </li> </ul>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The content type of the request. Supported types are:</p> <ul> <li>
     * <p>application/vnd.amazonaws.connect.event.typing</p> </li> <li>
     * <p>application/vnd.amazonaws.connect.event.connection.acknowledged</p> </li>
     * <li> <p>application/vnd.amazonaws.connect.event.message.delivered</p> </li> <li>
     * <p>application/vnd.amazonaws.connect.event.message.read</p> </li> </ul>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The content type of the request. Supported types are:</p> <ul> <li>
     * <p>application/vnd.amazonaws.connect.event.typing</p> </li> <li>
     * <p>application/vnd.amazonaws.connect.event.connection.acknowledged</p> </li>
     * <li> <p>application/vnd.amazonaws.connect.event.message.delivered</p> </li> <li>
     * <p>application/vnd.amazonaws.connect.event.message.read</p> </li> </ul>
     */
    inline SendEventRequest& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The content type of the request. Supported types are:</p> <ul> <li>
     * <p>application/vnd.amazonaws.connect.event.typing</p> </li> <li>
     * <p>application/vnd.amazonaws.connect.event.connection.acknowledged</p> </li>
     * <li> <p>application/vnd.amazonaws.connect.event.message.delivered</p> </li> <li>
     * <p>application/vnd.amazonaws.connect.event.message.read</p> </li> </ul>
     */
    inline SendEventRequest& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The content type of the request. Supported types are:</p> <ul> <li>
     * <p>application/vnd.amazonaws.connect.event.typing</p> </li> <li>
     * <p>application/vnd.amazonaws.connect.event.connection.acknowledged</p> </li>
     * <li> <p>application/vnd.amazonaws.connect.event.message.delivered</p> </li> <li>
     * <p>application/vnd.amazonaws.connect.event.message.read</p> </li> </ul>
     */
    inline SendEventRequest& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The content of the event to be sent (for example, message text). For content
     * related to message receipts, this is supported in the form of a JSON string.</p>
     * <p>Sample Content:
     * "{\"messageId\":\"11111111-aaaa-bbbb-cccc-EXAMPLE01234\"}"</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the event to be sent (for example, message text). For content
     * related to message receipts, this is supported in the form of a JSON string.</p>
     * <p>Sample Content:
     * "{\"messageId\":\"11111111-aaaa-bbbb-cccc-EXAMPLE01234\"}"</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the event to be sent (for example, message text). For content
     * related to message receipts, this is supported in the form of a JSON string.</p>
     * <p>Sample Content:
     * "{\"messageId\":\"11111111-aaaa-bbbb-cccc-EXAMPLE01234\"}"</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the event to be sent (for example, message text). For content
     * related to message receipts, this is supported in the form of a JSON string.</p>
     * <p>Sample Content:
     * "{\"messageId\":\"11111111-aaaa-bbbb-cccc-EXAMPLE01234\"}"</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the event to be sent (for example, message text). For content
     * related to message receipts, this is supported in the form of a JSON string.</p>
     * <p>Sample Content:
     * "{\"messageId\":\"11111111-aaaa-bbbb-cccc-EXAMPLE01234\"}"</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of the event to be sent (for example, message text). For content
     * related to message receipts, this is supported in the form of a JSON string.</p>
     * <p>Sample Content:
     * "{\"messageId\":\"11111111-aaaa-bbbb-cccc-EXAMPLE01234\"}"</p>
     */
    inline SendEventRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the event to be sent (for example, message text). For content
     * related to message receipts, this is supported in the form of a JSON string.</p>
     * <p>Sample Content:
     * "{\"messageId\":\"11111111-aaaa-bbbb-cccc-EXAMPLE01234\"}"</p>
     */
    inline SendEventRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the event to be sent (for example, message text). For content
     * related to message receipts, this is supported in the form of a JSON string.</p>
     * <p>Sample Content:
     * "{\"messageId\":\"11111111-aaaa-bbbb-cccc-EXAMPLE01234\"}"</p>
     */
    inline SendEventRequest& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline SendEventRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline SendEventRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline SendEventRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline const Aws::String& GetConnectionToken() const{ return m_connectionToken; }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline bool ConnectionTokenHasBeenSet() const { return m_connectionTokenHasBeenSet; }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline void SetConnectionToken(const Aws::String& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = value; }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline void SetConnectionToken(Aws::String&& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = std::move(value); }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline void SetConnectionToken(const char* value) { m_connectionTokenHasBeenSet = true; m_connectionToken.assign(value); }

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline SendEventRequest& WithConnectionToken(const Aws::String& value) { SetConnectionToken(value); return *this;}

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline SendEventRequest& WithConnectionToken(Aws::String&& value) { SetConnectionToken(std::move(value)); return *this;}

    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline SendEventRequest& WithConnectionToken(const char* value) { SetConnectionToken(value); return *this;}

  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_connectionToken;
    bool m_connectionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
