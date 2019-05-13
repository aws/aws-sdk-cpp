/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/TagListEntry.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   * <p>CreateAgentRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateAgentRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API CreateAgentRequest : public DataSyncRequest
  {
  public:
    CreateAgentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAgent"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Your agent activation key. You can get the activation key either by sending
     * an HTTP GET request with redirects that enable you to get the agent IP address
     * (port 80). Alternatively, you can get it from the AWS DataSync console. </p>
     * <p>The redirect URL returned in the response provides you the activation key for
     * your agent in the query string parameter <code>activationKey</code>. It might
     * also include other activation-related parameters; however, these are merely
     * defaults. The arguments you pass to this API call determine the actual
     * configuration of your agent.</p> <p>For more information, see
     * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-agents.html#activating-agent"
     * (Activating a Agent) in the <i>AWS DataSync User Guide.</i> </p>
     */
    inline const Aws::String& GetActivationKey() const{ return m_activationKey; }

    /**
     * <p>Your agent activation key. You can get the activation key either by sending
     * an HTTP GET request with redirects that enable you to get the agent IP address
     * (port 80). Alternatively, you can get it from the AWS DataSync console. </p>
     * <p>The redirect URL returned in the response provides you the activation key for
     * your agent in the query string parameter <code>activationKey</code>. It might
     * also include other activation-related parameters; however, these are merely
     * defaults. The arguments you pass to this API call determine the actual
     * configuration of your agent.</p> <p>For more information, see
     * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-agents.html#activating-agent"
     * (Activating a Agent) in the <i>AWS DataSync User Guide.</i> </p>
     */
    inline bool ActivationKeyHasBeenSet() const { return m_activationKeyHasBeenSet; }

    /**
     * <p>Your agent activation key. You can get the activation key either by sending
     * an HTTP GET request with redirects that enable you to get the agent IP address
     * (port 80). Alternatively, you can get it from the AWS DataSync console. </p>
     * <p>The redirect URL returned in the response provides you the activation key for
     * your agent in the query string parameter <code>activationKey</code>. It might
     * also include other activation-related parameters; however, these are merely
     * defaults. The arguments you pass to this API call determine the actual
     * configuration of your agent.</p> <p>For more information, see
     * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-agents.html#activating-agent"
     * (Activating a Agent) in the <i>AWS DataSync User Guide.</i> </p>
     */
    inline void SetActivationKey(const Aws::String& value) { m_activationKeyHasBeenSet = true; m_activationKey = value; }

    /**
     * <p>Your agent activation key. You can get the activation key either by sending
     * an HTTP GET request with redirects that enable you to get the agent IP address
     * (port 80). Alternatively, you can get it from the AWS DataSync console. </p>
     * <p>The redirect URL returned in the response provides you the activation key for
     * your agent in the query string parameter <code>activationKey</code>. It might
     * also include other activation-related parameters; however, these are merely
     * defaults. The arguments you pass to this API call determine the actual
     * configuration of your agent.</p> <p>For more information, see
     * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-agents.html#activating-agent"
     * (Activating a Agent) in the <i>AWS DataSync User Guide.</i> </p>
     */
    inline void SetActivationKey(Aws::String&& value) { m_activationKeyHasBeenSet = true; m_activationKey = std::move(value); }

    /**
     * <p>Your agent activation key. You can get the activation key either by sending
     * an HTTP GET request with redirects that enable you to get the agent IP address
     * (port 80). Alternatively, you can get it from the AWS DataSync console. </p>
     * <p>The redirect URL returned in the response provides you the activation key for
     * your agent in the query string parameter <code>activationKey</code>. It might
     * also include other activation-related parameters; however, these are merely
     * defaults. The arguments you pass to this API call determine the actual
     * configuration of your agent.</p> <p>For more information, see
     * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-agents.html#activating-agent"
     * (Activating a Agent) in the <i>AWS DataSync User Guide.</i> </p>
     */
    inline void SetActivationKey(const char* value) { m_activationKeyHasBeenSet = true; m_activationKey.assign(value); }

    /**
     * <p>Your agent activation key. You can get the activation key either by sending
     * an HTTP GET request with redirects that enable you to get the agent IP address
     * (port 80). Alternatively, you can get it from the AWS DataSync console. </p>
     * <p>The redirect URL returned in the response provides you the activation key for
     * your agent in the query string parameter <code>activationKey</code>. It might
     * also include other activation-related parameters; however, these are merely
     * defaults. The arguments you pass to this API call determine the actual
     * configuration of your agent.</p> <p>For more information, see
     * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-agents.html#activating-agent"
     * (Activating a Agent) in the <i>AWS DataSync User Guide.</i> </p>
     */
    inline CreateAgentRequest& WithActivationKey(const Aws::String& value) { SetActivationKey(value); return *this;}

    /**
     * <p>Your agent activation key. You can get the activation key either by sending
     * an HTTP GET request with redirects that enable you to get the agent IP address
     * (port 80). Alternatively, you can get it from the AWS DataSync console. </p>
     * <p>The redirect URL returned in the response provides you the activation key for
     * your agent in the query string parameter <code>activationKey</code>. It might
     * also include other activation-related parameters; however, these are merely
     * defaults. The arguments you pass to this API call determine the actual
     * configuration of your agent.</p> <p>For more information, see
     * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-agents.html#activating-agent"
     * (Activating a Agent) in the <i>AWS DataSync User Guide.</i> </p>
     */
    inline CreateAgentRequest& WithActivationKey(Aws::String&& value) { SetActivationKey(std::move(value)); return *this;}

    /**
     * <p>Your agent activation key. You can get the activation key either by sending
     * an HTTP GET request with redirects that enable you to get the agent IP address
     * (port 80). Alternatively, you can get it from the AWS DataSync console. </p>
     * <p>The redirect URL returned in the response provides you the activation key for
     * your agent in the query string parameter <code>activationKey</code>. It might
     * also include other activation-related parameters; however, these are merely
     * defaults. The arguments you pass to this API call determine the actual
     * configuration of your agent.</p> <p>For more information, see
     * "https://docs.aws.amazon.com/datasync/latest/userguide/working-with-agents.html#activating-agent"
     * (Activating a Agent) in the <i>AWS DataSync User Guide.</i> </p>
     */
    inline CreateAgentRequest& WithActivationKey(const char* value) { SetActivationKey(value); return *this;}


    /**
     * <p>The name you configured for your agent. This value is a text reference that
     * is used to identify the agent in the console.</p>
     */
    inline const Aws::String& GetAgentName() const{ return m_agentName; }

    /**
     * <p>The name you configured for your agent. This value is a text reference that
     * is used to identify the agent in the console.</p>
     */
    inline bool AgentNameHasBeenSet() const { return m_agentNameHasBeenSet; }

    /**
     * <p>The name you configured for your agent. This value is a text reference that
     * is used to identify the agent in the console.</p>
     */
    inline void SetAgentName(const Aws::String& value) { m_agentNameHasBeenSet = true; m_agentName = value; }

    /**
     * <p>The name you configured for your agent. This value is a text reference that
     * is used to identify the agent in the console.</p>
     */
    inline void SetAgentName(Aws::String&& value) { m_agentNameHasBeenSet = true; m_agentName = std::move(value); }

    /**
     * <p>The name you configured for your agent. This value is a text reference that
     * is used to identify the agent in the console.</p>
     */
    inline void SetAgentName(const char* value) { m_agentNameHasBeenSet = true; m_agentName.assign(value); }

    /**
     * <p>The name you configured for your agent. This value is a text reference that
     * is used to identify the agent in the console.</p>
     */
    inline CreateAgentRequest& WithAgentName(const Aws::String& value) { SetAgentName(value); return *this;}

    /**
     * <p>The name you configured for your agent. This value is a text reference that
     * is used to identify the agent in the console.</p>
     */
    inline CreateAgentRequest& WithAgentName(Aws::String&& value) { SetAgentName(std::move(value)); return *this;}

    /**
     * <p>The name you configured for your agent. This value is a text reference that
     * is used to identify the agent in the console.</p>
     */
    inline CreateAgentRequest& WithAgentName(const char* value) { SetAgentName(value); return *this;}


    /**
     * <p>The key-value pair that represents the tag that you want to associate with
     * the agent. The value can be an empty string. This value helps you manage,
     * filter, and search for your agents.</p> <note> <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. </p> </note>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pair that represents the tag that you want to associate with
     * the agent. The value can be an empty string. This value helps you manage,
     * filter, and search for your agents.</p> <note> <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. </p> </note>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value pair that represents the tag that you want to associate with
     * the agent. The value can be an empty string. This value helps you manage,
     * filter, and search for your agents.</p> <note> <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. </p> </note>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pair that represents the tag that you want to associate with
     * the agent. The value can be an empty string. This value helps you manage,
     * filter, and search for your agents.</p> <note> <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. </p> </note>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value pair that represents the tag that you want to associate with
     * the agent. The value can be an empty string. This value helps you manage,
     * filter, and search for your agents.</p> <note> <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. </p> </note>
     */
    inline CreateAgentRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pair that represents the tag that you want to associate with
     * the agent. The value can be an empty string. This value helps you manage,
     * filter, and search for your agents.</p> <note> <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. </p> </note>
     */
    inline CreateAgentRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value pair that represents the tag that you want to associate with
     * the agent. The value can be an empty string. This value helps you manage,
     * filter, and search for your agents.</p> <note> <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. </p> </note>
     */
    inline CreateAgentRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key-value pair that represents the tag that you want to associate with
     * the agent. The value can be an empty string. This value helps you manage,
     * filter, and search for your agents.</p> <note> <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. </p> </note>
     */
    inline CreateAgentRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_activationKey;
    bool m_activationKeyHasBeenSet;

    Aws::String m_agentName;
    bool m_agentNameHasBeenSet;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
