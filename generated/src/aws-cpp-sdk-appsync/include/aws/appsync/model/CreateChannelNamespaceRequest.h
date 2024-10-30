/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateChannelNamespaceRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API CreateChannelNamespaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChannelNamespace"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>Api</code> ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline CreateChannelNamespaceRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline CreateChannelNamespaceRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline CreateChannelNamespaceRequest& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>ChannelNamespace</code>. This name must be unique
     * within the <code>Api</code> </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateChannelNamespaceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateChannelNamespaceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateChannelNamespaceRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization mode to use for subscribing to messages on the channel
     * namespace. This configuration overrides the default <code>Api</code>
     * authorization configuration.</p>
     */
    inline const Aws::Vector<AuthMode>& GetSubscribeAuthModes() const{ return m_subscribeAuthModes; }
    inline bool SubscribeAuthModesHasBeenSet() const { return m_subscribeAuthModesHasBeenSet; }
    inline void SetSubscribeAuthModes(const Aws::Vector<AuthMode>& value) { m_subscribeAuthModesHasBeenSet = true; m_subscribeAuthModes = value; }
    inline void SetSubscribeAuthModes(Aws::Vector<AuthMode>&& value) { m_subscribeAuthModesHasBeenSet = true; m_subscribeAuthModes = std::move(value); }
    inline CreateChannelNamespaceRequest& WithSubscribeAuthModes(const Aws::Vector<AuthMode>& value) { SetSubscribeAuthModes(value); return *this;}
    inline CreateChannelNamespaceRequest& WithSubscribeAuthModes(Aws::Vector<AuthMode>&& value) { SetSubscribeAuthModes(std::move(value)); return *this;}
    inline CreateChannelNamespaceRequest& AddSubscribeAuthModes(const AuthMode& value) { m_subscribeAuthModesHasBeenSet = true; m_subscribeAuthModes.push_back(value); return *this; }
    inline CreateChannelNamespaceRequest& AddSubscribeAuthModes(AuthMode&& value) { m_subscribeAuthModesHasBeenSet = true; m_subscribeAuthModes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authorization mode to use for publishing messages on the channel
     * namespace. This configuration overrides the default <code>Api</code>
     * authorization configuration.</p>
     */
    inline const Aws::Vector<AuthMode>& GetPublishAuthModes() const{ return m_publishAuthModes; }
    inline bool PublishAuthModesHasBeenSet() const { return m_publishAuthModesHasBeenSet; }
    inline void SetPublishAuthModes(const Aws::Vector<AuthMode>& value) { m_publishAuthModesHasBeenSet = true; m_publishAuthModes = value; }
    inline void SetPublishAuthModes(Aws::Vector<AuthMode>&& value) { m_publishAuthModesHasBeenSet = true; m_publishAuthModes = std::move(value); }
    inline CreateChannelNamespaceRequest& WithPublishAuthModes(const Aws::Vector<AuthMode>& value) { SetPublishAuthModes(value); return *this;}
    inline CreateChannelNamespaceRequest& WithPublishAuthModes(Aws::Vector<AuthMode>&& value) { SetPublishAuthModes(std::move(value)); return *this;}
    inline CreateChannelNamespaceRequest& AddPublishAuthModes(const AuthMode& value) { m_publishAuthModesHasBeenSet = true; m_publishAuthModes.push_back(value); return *this; }
    inline CreateChannelNamespaceRequest& AddPublishAuthModes(AuthMode&& value) { m_publishAuthModesHasBeenSet = true; m_publishAuthModes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The event handler functions that run custom business logic to process
     * published events and subscribe requests.</p>
     */
    inline const Aws::String& GetCodeHandlers() const{ return m_codeHandlers; }
    inline bool CodeHandlersHasBeenSet() const { return m_codeHandlersHasBeenSet; }
    inline void SetCodeHandlers(const Aws::String& value) { m_codeHandlersHasBeenSet = true; m_codeHandlers = value; }
    inline void SetCodeHandlers(Aws::String&& value) { m_codeHandlersHasBeenSet = true; m_codeHandlers = std::move(value); }
    inline void SetCodeHandlers(const char* value) { m_codeHandlersHasBeenSet = true; m_codeHandlers.assign(value); }
    inline CreateChannelNamespaceRequest& WithCodeHandlers(const Aws::String& value) { SetCodeHandlers(value); return *this;}
    inline CreateChannelNamespaceRequest& WithCodeHandlers(Aws::String&& value) { SetCodeHandlers(std::move(value)); return *this;}
    inline CreateChannelNamespaceRequest& WithCodeHandlers(const char* value) { SetCodeHandlers(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateChannelNamespaceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateChannelNamespaceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateChannelNamespaceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateChannelNamespaceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateChannelNamespaceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateChannelNamespaceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateChannelNamespaceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateChannelNamespaceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateChannelNamespaceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
