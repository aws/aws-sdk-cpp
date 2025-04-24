/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appsync/model/HandlerConfigs.h>
#include <aws/appsync/model/AuthMode.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes a channel namespace associated with an <code>Api</code>. The
   * <code>ChannelNamespace</code> contains the definitions for code handlers for the
   * <code>Api</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ChannelNamespace">AWS
   * API Reference</a></p>
   */
  class ChannelNamespace
  {
  public:
    AWS_APPSYNC_API ChannelNamespace() = default;
    AWS_APPSYNC_API ChannelNamespace(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API ChannelNamespace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>Api</code> ID.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    ChannelNamespace& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the channel namespace. This name must be unique within the
     * <code>Api</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ChannelNamespace& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization mode to use for subscribing to messages on the channel
     * namespace. This configuration overrides the default
     * <code>Api</code>authorization configuration.</p>
     */
    inline const Aws::Vector<AuthMode>& GetSubscribeAuthModes() const { return m_subscribeAuthModes; }
    inline bool SubscribeAuthModesHasBeenSet() const { return m_subscribeAuthModesHasBeenSet; }
    template<typename SubscribeAuthModesT = Aws::Vector<AuthMode>>
    void SetSubscribeAuthModes(SubscribeAuthModesT&& value) { m_subscribeAuthModesHasBeenSet = true; m_subscribeAuthModes = std::forward<SubscribeAuthModesT>(value); }
    template<typename SubscribeAuthModesT = Aws::Vector<AuthMode>>
    ChannelNamespace& WithSubscribeAuthModes(SubscribeAuthModesT&& value) { SetSubscribeAuthModes(std::forward<SubscribeAuthModesT>(value)); return *this;}
    template<typename SubscribeAuthModesT = AuthMode>
    ChannelNamespace& AddSubscribeAuthModes(SubscribeAuthModesT&& value) { m_subscribeAuthModesHasBeenSet = true; m_subscribeAuthModes.emplace_back(std::forward<SubscribeAuthModesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authorization mode to use for publishing messages on the channel
     * namespace. This configuration overrides the default
     * <code>Api</code>authorization configuration.</p>
     */
    inline const Aws::Vector<AuthMode>& GetPublishAuthModes() const { return m_publishAuthModes; }
    inline bool PublishAuthModesHasBeenSet() const { return m_publishAuthModesHasBeenSet; }
    template<typename PublishAuthModesT = Aws::Vector<AuthMode>>
    void SetPublishAuthModes(PublishAuthModesT&& value) { m_publishAuthModesHasBeenSet = true; m_publishAuthModes = std::forward<PublishAuthModesT>(value); }
    template<typename PublishAuthModesT = Aws::Vector<AuthMode>>
    ChannelNamespace& WithPublishAuthModes(PublishAuthModesT&& value) { SetPublishAuthModes(std::forward<PublishAuthModesT>(value)); return *this;}
    template<typename PublishAuthModesT = AuthMode>
    ChannelNamespace& AddPublishAuthModes(PublishAuthModesT&& value) { m_publishAuthModesHasBeenSet = true; m_publishAuthModes.emplace_back(std::forward<PublishAuthModesT>(value)); return *this; }
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
    ChannelNamespace& WithCodeHandlers(CodeHandlersT&& value) { SetCodeHandlers(std::forward<CodeHandlersT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ChannelNamespace& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ChannelNamespace& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the <code>ChannelNamespace</code>.</p>
     */
    inline const Aws::String& GetChannelNamespaceArn() const { return m_channelNamespaceArn; }
    inline bool ChannelNamespaceArnHasBeenSet() const { return m_channelNamespaceArnHasBeenSet; }
    template<typename ChannelNamespaceArnT = Aws::String>
    void SetChannelNamespaceArn(ChannelNamespaceArnT&& value) { m_channelNamespaceArnHasBeenSet = true; m_channelNamespaceArn = std::forward<ChannelNamespaceArnT>(value); }
    template<typename ChannelNamespaceArnT = Aws::String>
    ChannelNamespace& WithChannelNamespaceArn(ChannelNamespaceArnT&& value) { SetChannelNamespaceArn(std::forward<ChannelNamespaceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the <code>ChannelNamespace</code> was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    ChannelNamespace& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the <code>ChannelNamespace</code> was last
     * changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    ChannelNamespace& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
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
    ChannelNamespace& WithHandlerConfigs(HandlerConfigsT&& value) { SetHandlerConfigs(std::forward<HandlerConfigsT>(value)); return *this;}
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

    Aws::String m_channelNamespaceArn;
    bool m_channelNamespaceArnHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified{};
    bool m_lastModifiedHasBeenSet = false;

    HandlerConfigs m_handlerConfigs;
    bool m_handlerConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
