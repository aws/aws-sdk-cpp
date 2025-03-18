/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/ChatbotRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace chatbot
{
namespace Model
{

  /**
   */
  class AssociateToConfigurationRequest : public ChatbotRequest
  {
  public:
    AWS_CHATBOT_API AssociateToConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateToConfiguration"; }

    AWS_CHATBOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The resource Amazon Resource Name (ARN) to link.</p>
     */
    inline const Aws::String& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Aws::String>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Aws::String>
    AssociateToConfigurationRequest& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel configuration to associate with the resource.</p>
     */
    inline const Aws::String& GetChatConfiguration() const { return m_chatConfiguration; }
    inline bool ChatConfigurationHasBeenSet() const { return m_chatConfigurationHasBeenSet; }
    template<typename ChatConfigurationT = Aws::String>
    void SetChatConfiguration(ChatConfigurationT&& value) { m_chatConfigurationHasBeenSet = true; m_chatConfiguration = std::forward<ChatConfigurationT>(value); }
    template<typename ChatConfigurationT = Aws::String>
    AssociateToConfigurationRequest& WithChatConfiguration(ChatConfigurationT&& value) { SetChatConfiguration(std::forward<ChatConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_chatConfiguration;
    bool m_chatConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
