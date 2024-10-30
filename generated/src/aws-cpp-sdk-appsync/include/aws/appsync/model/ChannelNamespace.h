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
    AWS_APPSYNC_API ChannelNamespace();
    AWS_APPSYNC_API ChannelNamespace(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API ChannelNamespace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>Api</code> ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline ChannelNamespace& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline ChannelNamespace& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline ChannelNamespace& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the channel namespace. This name must be unique within the
     * <code>Api</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ChannelNamespace& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ChannelNamespace& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ChannelNamespace& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization mode to use for subscribing to messages on the channel
     * namespace. This configuration overrides the default
     * <code>Api</code>authorization configuration.</p>
     */
    inline const Aws::Vector<AuthMode>& GetSubscribeAuthModes() const{ return m_subscribeAuthModes; }
    inline bool SubscribeAuthModesHasBeenSet() const { return m_subscribeAuthModesHasBeenSet; }
    inline void SetSubscribeAuthModes(const Aws::Vector<AuthMode>& value) { m_subscribeAuthModesHasBeenSet = true; m_subscribeAuthModes = value; }
    inline void SetSubscribeAuthModes(Aws::Vector<AuthMode>&& value) { m_subscribeAuthModesHasBeenSet = true; m_subscribeAuthModes = std::move(value); }
    inline ChannelNamespace& WithSubscribeAuthModes(const Aws::Vector<AuthMode>& value) { SetSubscribeAuthModes(value); return *this;}
    inline ChannelNamespace& WithSubscribeAuthModes(Aws::Vector<AuthMode>&& value) { SetSubscribeAuthModes(std::move(value)); return *this;}
    inline ChannelNamespace& AddSubscribeAuthModes(const AuthMode& value) { m_subscribeAuthModesHasBeenSet = true; m_subscribeAuthModes.push_back(value); return *this; }
    inline ChannelNamespace& AddSubscribeAuthModes(AuthMode&& value) { m_subscribeAuthModesHasBeenSet = true; m_subscribeAuthModes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authorization mode to use for publishing messages on the channel
     * namespace. This configuration overrides the default
     * <code>Api</code>authorization configuration.</p>
     */
    inline const Aws::Vector<AuthMode>& GetPublishAuthModes() const{ return m_publishAuthModes; }
    inline bool PublishAuthModesHasBeenSet() const { return m_publishAuthModesHasBeenSet; }
    inline void SetPublishAuthModes(const Aws::Vector<AuthMode>& value) { m_publishAuthModesHasBeenSet = true; m_publishAuthModes = value; }
    inline void SetPublishAuthModes(Aws::Vector<AuthMode>&& value) { m_publishAuthModesHasBeenSet = true; m_publishAuthModes = std::move(value); }
    inline ChannelNamespace& WithPublishAuthModes(const Aws::Vector<AuthMode>& value) { SetPublishAuthModes(value); return *this;}
    inline ChannelNamespace& WithPublishAuthModes(Aws::Vector<AuthMode>&& value) { SetPublishAuthModes(std::move(value)); return *this;}
    inline ChannelNamespace& AddPublishAuthModes(const AuthMode& value) { m_publishAuthModesHasBeenSet = true; m_publishAuthModes.push_back(value); return *this; }
    inline ChannelNamespace& AddPublishAuthModes(AuthMode&& value) { m_publishAuthModesHasBeenSet = true; m_publishAuthModes.push_back(std::move(value)); return *this; }
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
    inline ChannelNamespace& WithCodeHandlers(const Aws::String& value) { SetCodeHandlers(value); return *this;}
    inline ChannelNamespace& WithCodeHandlers(Aws::String&& value) { SetCodeHandlers(std::move(value)); return *this;}
    inline ChannelNamespace& WithCodeHandlers(const char* value) { SetCodeHandlers(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ChannelNamespace& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ChannelNamespace& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ChannelNamespace& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ChannelNamespace& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ChannelNamespace& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ChannelNamespace& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ChannelNamespace& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ChannelNamespace& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ChannelNamespace& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the <code>ChannelNamespace</code>.</p>
     */
    inline const Aws::String& GetChannelNamespaceArn() const{ return m_channelNamespaceArn; }
    inline bool ChannelNamespaceArnHasBeenSet() const { return m_channelNamespaceArnHasBeenSet; }
    inline void SetChannelNamespaceArn(const Aws::String& value) { m_channelNamespaceArnHasBeenSet = true; m_channelNamespaceArn = value; }
    inline void SetChannelNamespaceArn(Aws::String&& value) { m_channelNamespaceArnHasBeenSet = true; m_channelNamespaceArn = std::move(value); }
    inline void SetChannelNamespaceArn(const char* value) { m_channelNamespaceArnHasBeenSet = true; m_channelNamespaceArn.assign(value); }
    inline ChannelNamespace& WithChannelNamespaceArn(const Aws::String& value) { SetChannelNamespaceArn(value); return *this;}
    inline ChannelNamespace& WithChannelNamespaceArn(Aws::String&& value) { SetChannelNamespaceArn(std::move(value)); return *this;}
    inline ChannelNamespace& WithChannelNamespaceArn(const char* value) { SetChannelNamespaceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the <code>ChannelNamespace</code> was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline ChannelNamespace& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline ChannelNamespace& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the <code>ChannelNamespace</code> was last
     * changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }
    inline ChannelNamespace& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline ChannelNamespace& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
