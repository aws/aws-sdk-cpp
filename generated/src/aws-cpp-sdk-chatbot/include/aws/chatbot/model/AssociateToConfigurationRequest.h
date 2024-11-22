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
    AWS_CHATBOT_API AssociateToConfigurationRequest();

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
    inline const Aws::String& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }
    inline AssociateToConfigurationRequest& WithResource(const Aws::String& value) { SetResource(value); return *this;}
    inline AssociateToConfigurationRequest& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}
    inline AssociateToConfigurationRequest& WithResource(const char* value) { SetResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel configuration to associate with the resource.</p>
     */
    inline const Aws::String& GetChatConfiguration() const{ return m_chatConfiguration; }
    inline bool ChatConfigurationHasBeenSet() const { return m_chatConfigurationHasBeenSet; }
    inline void SetChatConfiguration(const Aws::String& value) { m_chatConfigurationHasBeenSet = true; m_chatConfiguration = value; }
    inline void SetChatConfiguration(Aws::String&& value) { m_chatConfigurationHasBeenSet = true; m_chatConfiguration = std::move(value); }
    inline void SetChatConfiguration(const char* value) { m_chatConfigurationHasBeenSet = true; m_chatConfiguration.assign(value); }
    inline AssociateToConfigurationRequest& WithChatConfiguration(const Aws::String& value) { SetChatConfiguration(value); return *this;}
    inline AssociateToConfigurationRequest& WithChatConfiguration(Aws::String&& value) { SetChatConfiguration(std::move(value)); return *this;}
    inline AssociateToConfigurationRequest& WithChatConfiguration(const char* value) { SetChatConfiguration(value); return *this;}
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
