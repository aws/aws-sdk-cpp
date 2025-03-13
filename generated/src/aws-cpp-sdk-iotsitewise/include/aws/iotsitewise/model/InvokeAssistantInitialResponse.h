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
    AWS_IOTSITEWISE_API InvokeAssistantInitialResponse() = default;
    AWS_IOTSITEWISE_API InvokeAssistantInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API InvokeAssistantInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API InvokeAssistantInitialResponse(const Http::HeaderValueCollection& responseHeaders);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the conversation, in UUID format. This ID uniquely identifies the
     * conversation within IoT SiteWise.</p>
     */
    inline const Aws::String& GetConversationId() const { return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    template<typename ConversationIdT = Aws::String>
    void SetConversationId(ConversationIdT&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::forward<ConversationIdT>(value); }
    template<typename ConversationIdT = Aws::String>
    InvokeAssistantInitialResponse& WithConversationId(ConversationIdT&& value) { SetConversationId(std::forward<ConversationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
