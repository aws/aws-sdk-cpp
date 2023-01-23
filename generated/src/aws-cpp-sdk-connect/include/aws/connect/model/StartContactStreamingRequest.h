/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ChatStreamingConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class StartContactStreamingRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API StartContactStreamingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartContactStreaming"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline StartContactStreamingRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline StartContactStreamingRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline StartContactStreamingRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline StartContactStreamingRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline StartContactStreamingRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline StartContactStreamingRequest& WithContactId(const char* value) { SetContactId(value); return *this;}


    /**
     * <p>The streaming configuration, such as the Amazon SNS streaming endpoint.</p>
     */
    inline const ChatStreamingConfiguration& GetChatStreamingConfiguration() const{ return m_chatStreamingConfiguration; }

    /**
     * <p>The streaming configuration, such as the Amazon SNS streaming endpoint.</p>
     */
    inline bool ChatStreamingConfigurationHasBeenSet() const { return m_chatStreamingConfigurationHasBeenSet; }

    /**
     * <p>The streaming configuration, such as the Amazon SNS streaming endpoint.</p>
     */
    inline void SetChatStreamingConfiguration(const ChatStreamingConfiguration& value) { m_chatStreamingConfigurationHasBeenSet = true; m_chatStreamingConfiguration = value; }

    /**
     * <p>The streaming configuration, such as the Amazon SNS streaming endpoint.</p>
     */
    inline void SetChatStreamingConfiguration(ChatStreamingConfiguration&& value) { m_chatStreamingConfigurationHasBeenSet = true; m_chatStreamingConfiguration = std::move(value); }

    /**
     * <p>The streaming configuration, such as the Amazon SNS streaming endpoint.</p>
     */
    inline StartContactStreamingRequest& WithChatStreamingConfiguration(const ChatStreamingConfiguration& value) { SetChatStreamingConfiguration(value); return *this;}

    /**
     * <p>The streaming configuration, such as the Amazon SNS streaming endpoint.</p>
     */
    inline StartContactStreamingRequest& WithChatStreamingConfiguration(ChatStreamingConfiguration&& value) { SetChatStreamingConfiguration(std::move(value)); return *this;}


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
    inline StartContactStreamingRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline StartContactStreamingRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline StartContactStreamingRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    ChatStreamingConfiguration m_chatStreamingConfiguration;
    bool m_chatStreamingConfigurationHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
