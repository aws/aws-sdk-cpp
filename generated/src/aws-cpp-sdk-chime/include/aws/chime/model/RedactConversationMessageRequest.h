/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class RedactConversationMessageRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API RedactConversationMessageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RedactConversationMessage"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline RedactConversationMessageRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline RedactConversationMessageRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline RedactConversationMessageRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conversation ID.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }
    inline RedactConversationMessageRequest& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}
    inline RedactConversationMessageRequest& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}
    inline RedactConversationMessageRequest& WithConversationId(const char* value) { SetConversationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message ID.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }
    inline RedactConversationMessageRequest& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline RedactConversationMessageRequest& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline RedactConversationMessageRequest& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
