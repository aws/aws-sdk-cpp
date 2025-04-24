/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appsync/model/HandlerConfigs.h>
#include <aws/appsync/model/AuthMode.h>
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   */
  class UpdateChannelNamespaceRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API UpdateChannelNamespaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChannelNamespace"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>Api</code> ID.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    UpdateChannelNamespaceRequest& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>ChannelNamespace</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateChannelNamespaceRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization mode to use for subscribing to messages on the channel
     * namespace. This configuration overrides the default <code>Api</code>
     * authorization configuration.</p>
     */
    inline const Aws::Vector<AuthMode>& GetSubscribeAuthModes() const { return m_subscribeAuthModes; }
    inline bool SubscribeAuthModesHasBeenSet() const { return m_subscribeAuthModesHasBeenSet; }
    template<typename SubscribeAuthModesT = Aws::Vector<AuthMode>>
    void SetSubscribeAuthModes(SubscribeAuthModesT&& value) { m_subscribeAuthModesHasBeenSet = true; m_subscribeAuthModes = std::forward<SubscribeAuthModesT>(value); }
    template<typename SubscribeAuthModesT = Aws::Vector<AuthMode>>
    UpdateChannelNamespaceRequest& WithSubscribeAuthModes(SubscribeAuthModesT&& value) { SetSubscribeAuthModes(std::forward<SubscribeAuthModesT>(value)); return *this;}
    template<typename SubscribeAuthModesT = AuthMode>
    UpdateChannelNamespaceRequest& AddSubscribeAuthModes(SubscribeAuthModesT&& value) { m_subscribeAuthModesHasBeenSet = true; m_subscribeAuthModes.emplace_back(std::forward<SubscribeAuthModesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authorization mode to use for publishing messages on the channel
     * namespace. This configuration overrides the default <code>Api</code>
     * authorization configuration.</p>
     */
    inline const Aws::Vector<AuthMode>& GetPublishAuthModes() const { return m_publishAuthModes; }
    inline bool PublishAuthModesHasBeenSet() const { return m_publishAuthModesHasBeenSet; }
    template<typename PublishAuthModesT = Aws::Vector<AuthMode>>
    void SetPublishAuthModes(PublishAuthModesT&& value) { m_publishAuthModesHasBeenSet = true; m_publishAuthModes = std::forward<PublishAuthModesT>(value); }
    template<typename PublishAuthModesT = Aws::Vector<AuthMode>>
    UpdateChannelNamespaceRequest& WithPublishAuthModes(PublishAuthModesT&& value) { SetPublishAuthModes(std::forward<PublishAuthModesT>(value)); return *this;}
    template<typename PublishAuthModesT = AuthMode>
    UpdateChannelNamespaceRequest& AddPublishAuthModes(PublishAuthModesT&& value) { m_publishAuthModesHasBeenSet = true; m_publishAuthModes.emplace_back(std::forward<PublishAuthModesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The event handler functions that run custom business logic to process
     * published events and subscribe requests.</p>
     */
    inline const Aws::String& GetCodeHandlers() const { return m_codeHandlers; }
    inline bool CodeHandlersHasBeenSet() const { return m_codeHandlersHasBeenSet; }
    template<typename CodeHandlersT = Aws::String>
    void SetCodeHandlers(CodeHandlersT&& value) { m_codeHandlersHasBeenSet = true; m_codeHandlers = std::forward<CodeHandlersT>(value); }
    template<typename CodeHandlersT = Aws::String>
    UpdateChannelNamespaceRequest& WithCodeHandlers(CodeHandlersT&& value) { SetCodeHandlers(std::forward<CodeHandlersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the <code>OnPublish</code> and <code>OnSubscribe</code>
     * handlers.</p>
     */
    inline const HandlerConfigs& GetHandlerConfigs() const { return m_handlerConfigs; }
    inline bool HandlerConfigsHasBeenSet() const { return m_handlerConfigsHasBeenSet; }
    template<typename HandlerConfigsT = HandlerConfigs>
    void SetHandlerConfigs(HandlerConfigsT&& value) { m_handlerConfigsHasBeenSet = true; m_handlerConfigs = std::forward<HandlerConfigsT>(value); }
    template<typename HandlerConfigsT = HandlerConfigs>
    UpdateChannelNamespaceRequest& WithHandlerConfigs(HandlerConfigsT&& value) { SetHandlerConfigs(std::forward<HandlerConfigsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<AuthMode> m_subscribeAuthModes;
    bool m_subscribeAuthModesHasBeenSet = false;

    Aws::Vector<AuthMode> m_publishAuthModes;
    bool m_publishAuthModesHasBeenSet = false;

    Aws::String m_codeHandlers;
    bool m_codeHandlersHasBeenSet = false;

    HandlerConfigs m_handlerConfigs;
    bool m_handlerConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
