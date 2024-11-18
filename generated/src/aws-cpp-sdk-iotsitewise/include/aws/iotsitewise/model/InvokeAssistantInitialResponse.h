/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/http/HttpTypes.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{

  class InvokeAssistantInitialResponse
  {
  public:
    AWS_IOTSITEWISE_API InvokeAssistantInitialResponse();
    AWS_IOTSITEWISE_API InvokeAssistantInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API InvokeAssistantInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API InvokeAssistantInitialResponse(const Http::HeaderValueCollection& responseHeaders);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the conversation, in UUID format. This ID uniquely identifies the
     * conversation within IoT SiteWise.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }
    inline InvokeAssistantInitialResponse& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}
    inline InvokeAssistantInitialResponse& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}
    inline InvokeAssistantInitialResponse& WithConversationId(const char* value) { SetConversationId(value); return *this;}
    ///@}
  private:

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
