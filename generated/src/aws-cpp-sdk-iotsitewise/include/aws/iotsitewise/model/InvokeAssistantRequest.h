﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/model/InvokeAssistantHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class InvokeAssistantRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API InvokeAssistantRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeAssistant"; }

    inline virtual bool HasEventStreamResponse() const override { return true; }
    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline const InvokeAssistantHandler& GetEventStreamHandler() const { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const InvokeAssistantHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline InvokeAssistantRequest& WithEventStreamHandler(const InvokeAssistantHandler& value) { SetEventStreamHandler(value); return *this; }


    ///@{
    /**
     * <p>The ID assigned to a conversation. IoT SiteWise automatically generates a
     * unique ID for you, and this parameter is never required. However, if you prefer
     * to have your own ID, you must specify it here in UUID format. If you specify
     * your own ID, it must be globally unique.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }
    inline InvokeAssistantRequest& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}
    inline InvokeAssistantRequest& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}
    inline InvokeAssistantRequest& WithConversationId(const char* value) { SetConversationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A text message sent to the SiteWise Assistant by the user.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline InvokeAssistantRequest& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline InvokeAssistantRequest& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline InvokeAssistantRequest& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if to turn trace on or not. It is used to track the SiteWise
     * Assistant's reasoning, and data access process.</p>
     */
    inline bool GetEnableTrace() const{ return m_enableTrace; }
    inline bool EnableTraceHasBeenSet() const { return m_enableTraceHasBeenSet; }
    inline void SetEnableTrace(bool value) { m_enableTraceHasBeenSet = true; m_enableTrace = value; }
    inline InvokeAssistantRequest& WithEnableTrace(bool value) { SetEnableTrace(value); return *this;}
    ///@}
  private:

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    bool m_enableTrace;
    bool m_enableTraceHasBeenSet = false;
    InvokeAssistantHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder;

  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
