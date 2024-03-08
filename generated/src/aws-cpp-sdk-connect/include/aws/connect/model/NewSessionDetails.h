/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/ParticipantDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/ChatStreamingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Payload of chat properties to apply when starting a new
   * contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/NewSessionDetails">AWS
   * API Reference</a></p>
   */
  class NewSessionDetails
  {
  public:
    AWS_CONNECT_API NewSessionDetails();
    AWS_CONNECT_API NewSessionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API NewSessionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The supported chat message content types. Supported types are
     * <code>text/plain</code>, <code>text/markdown</code>,
     * <code>application/json</code>,
     * <code>application/vnd.amazonaws.connect.message.interactive</code>, and
     * <code>application/vnd.amazonaws.connect.message.interactive.response</code>.
     * </p> <p>Content types must always contain <code> text/plain</code>. You can then
     * put any other supported type in the list. For example, all the following lists
     * are valid because they contain <code>text/plain</code>: <code>[text/plain,
     * text/markdown, application/json]</code>, <code> [text/markdown,
     * text/plain]</code>, <code>[text/plain, application/json,
     * application/vnd.amazonaws.connect.message.interactive.response]</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedMessagingContentTypes() const{ return m_supportedMessagingContentTypes; }

    /**
     * <p> The supported chat message content types. Supported types are
     * <code>text/plain</code>, <code>text/markdown</code>,
     * <code>application/json</code>,
     * <code>application/vnd.amazonaws.connect.message.interactive</code>, and
     * <code>application/vnd.amazonaws.connect.message.interactive.response</code>.
     * </p> <p>Content types must always contain <code> text/plain</code>. You can then
     * put any other supported type in the list. For example, all the following lists
     * are valid because they contain <code>text/plain</code>: <code>[text/plain,
     * text/markdown, application/json]</code>, <code> [text/markdown,
     * text/plain]</code>, <code>[text/plain, application/json,
     * application/vnd.amazonaws.connect.message.interactive.response]</code>. </p>
     */
    inline bool SupportedMessagingContentTypesHasBeenSet() const { return m_supportedMessagingContentTypesHasBeenSet; }

    /**
     * <p> The supported chat message content types. Supported types are
     * <code>text/plain</code>, <code>text/markdown</code>,
     * <code>application/json</code>,
     * <code>application/vnd.amazonaws.connect.message.interactive</code>, and
     * <code>application/vnd.amazonaws.connect.message.interactive.response</code>.
     * </p> <p>Content types must always contain <code> text/plain</code>. You can then
     * put any other supported type in the list. For example, all the following lists
     * are valid because they contain <code>text/plain</code>: <code>[text/plain,
     * text/markdown, application/json]</code>, <code> [text/markdown,
     * text/plain]</code>, <code>[text/plain, application/json,
     * application/vnd.amazonaws.connect.message.interactive.response]</code>. </p>
     */
    inline void SetSupportedMessagingContentTypes(const Aws::Vector<Aws::String>& value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes = value; }

    /**
     * <p> The supported chat message content types. Supported types are
     * <code>text/plain</code>, <code>text/markdown</code>,
     * <code>application/json</code>,
     * <code>application/vnd.amazonaws.connect.message.interactive</code>, and
     * <code>application/vnd.amazonaws.connect.message.interactive.response</code>.
     * </p> <p>Content types must always contain <code> text/plain</code>. You can then
     * put any other supported type in the list. For example, all the following lists
     * are valid because they contain <code>text/plain</code>: <code>[text/plain,
     * text/markdown, application/json]</code>, <code> [text/markdown,
     * text/plain]</code>, <code>[text/plain, application/json,
     * application/vnd.amazonaws.connect.message.interactive.response]</code>. </p>
     */
    inline void SetSupportedMessagingContentTypes(Aws::Vector<Aws::String>&& value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes = std::move(value); }

    /**
     * <p> The supported chat message content types. Supported types are
     * <code>text/plain</code>, <code>text/markdown</code>,
     * <code>application/json</code>,
     * <code>application/vnd.amazonaws.connect.message.interactive</code>, and
     * <code>application/vnd.amazonaws.connect.message.interactive.response</code>.
     * </p> <p>Content types must always contain <code> text/plain</code>. You can then
     * put any other supported type in the list. For example, all the following lists
     * are valid because they contain <code>text/plain</code>: <code>[text/plain,
     * text/markdown, application/json]</code>, <code> [text/markdown,
     * text/plain]</code>, <code>[text/plain, application/json,
     * application/vnd.amazonaws.connect.message.interactive.response]</code>. </p>
     */
    inline NewSessionDetails& WithSupportedMessagingContentTypes(const Aws::Vector<Aws::String>& value) { SetSupportedMessagingContentTypes(value); return *this;}

    /**
     * <p> The supported chat message content types. Supported types are
     * <code>text/plain</code>, <code>text/markdown</code>,
     * <code>application/json</code>,
     * <code>application/vnd.amazonaws.connect.message.interactive</code>, and
     * <code>application/vnd.amazonaws.connect.message.interactive.response</code>.
     * </p> <p>Content types must always contain <code> text/plain</code>. You can then
     * put any other supported type in the list. For example, all the following lists
     * are valid because they contain <code>text/plain</code>: <code>[text/plain,
     * text/markdown, application/json]</code>, <code> [text/markdown,
     * text/plain]</code>, <code>[text/plain, application/json,
     * application/vnd.amazonaws.connect.message.interactive.response]</code>. </p>
     */
    inline NewSessionDetails& WithSupportedMessagingContentTypes(Aws::Vector<Aws::String>&& value) { SetSupportedMessagingContentTypes(std::move(value)); return *this;}

    /**
     * <p> The supported chat message content types. Supported types are
     * <code>text/plain</code>, <code>text/markdown</code>,
     * <code>application/json</code>,
     * <code>application/vnd.amazonaws.connect.message.interactive</code>, and
     * <code>application/vnd.amazonaws.connect.message.interactive.response</code>.
     * </p> <p>Content types must always contain <code> text/plain</code>. You can then
     * put any other supported type in the list. For example, all the following lists
     * are valid because they contain <code>text/plain</code>: <code>[text/plain,
     * text/markdown, application/json]</code>, <code> [text/markdown,
     * text/plain]</code>, <code>[text/plain, application/json,
     * application/vnd.amazonaws.connect.message.interactive.response]</code>. </p>
     */
    inline NewSessionDetails& AddSupportedMessagingContentTypes(const Aws::String& value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes.push_back(value); return *this; }

    /**
     * <p> The supported chat message content types. Supported types are
     * <code>text/plain</code>, <code>text/markdown</code>,
     * <code>application/json</code>,
     * <code>application/vnd.amazonaws.connect.message.interactive</code>, and
     * <code>application/vnd.amazonaws.connect.message.interactive.response</code>.
     * </p> <p>Content types must always contain <code> text/plain</code>. You can then
     * put any other supported type in the list. For example, all the following lists
     * are valid because they contain <code>text/plain</code>: <code>[text/plain,
     * text/markdown, application/json]</code>, <code> [text/markdown,
     * text/plain]</code>, <code>[text/plain, application/json,
     * application/vnd.amazonaws.connect.message.interactive.response]</code>. </p>
     */
    inline NewSessionDetails& AddSupportedMessagingContentTypes(Aws::String&& value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes.push_back(std::move(value)); return *this; }

    /**
     * <p> The supported chat message content types. Supported types are
     * <code>text/plain</code>, <code>text/markdown</code>,
     * <code>application/json</code>,
     * <code>application/vnd.amazonaws.connect.message.interactive</code>, and
     * <code>application/vnd.amazonaws.connect.message.interactive.response</code>.
     * </p> <p>Content types must always contain <code> text/plain</code>. You can then
     * put any other supported type in the list. For example, all the following lists
     * are valid because they contain <code>text/plain</code>: <code>[text/plain,
     * text/markdown, application/json]</code>, <code> [text/markdown,
     * text/plain]</code>, <code>[text/plain, application/json,
     * application/vnd.amazonaws.connect.message.interactive.response]</code>. </p>
     */
    inline NewSessionDetails& AddSupportedMessagingContentTypes(const char* value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes.push_back(value); return *this; }


    
    inline const ParticipantDetails& GetParticipantDetails() const{ return m_participantDetails; }

    
    inline bool ParticipantDetailsHasBeenSet() const { return m_participantDetailsHasBeenSet; }

    
    inline void SetParticipantDetails(const ParticipantDetails& value) { m_participantDetailsHasBeenSet = true; m_participantDetails = value; }

    
    inline void SetParticipantDetails(ParticipantDetails&& value) { m_participantDetailsHasBeenSet = true; m_participantDetails = std::move(value); }

    
    inline NewSessionDetails& WithParticipantDetails(const ParticipantDetails& value) { SetParticipantDetails(value); return *this;}

    
    inline NewSessionDetails& WithParticipantDetails(ParticipantDetails&& value) { SetParticipantDetails(std::move(value)); return *this;}


    /**
     * <p> A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p> There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p> A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p> There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters. </p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p> A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p> There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters. </p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p> A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p> There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters. </p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p> A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p> There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters. </p>
     */
    inline NewSessionDetails& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p> A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p> There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters. </p>
     */
    inline NewSessionDetails& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p> A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p> There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters. </p>
     */
    inline NewSessionDetails& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p> A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p> There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters. </p>
     */
    inline NewSessionDetails& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p> A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p> There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters. </p>
     */
    inline NewSessionDetails& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p> There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters. </p>
     */
    inline NewSessionDetails& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p> There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters. </p>
     */
    inline NewSessionDetails& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p> There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters. </p>
     */
    inline NewSessionDetails& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p> A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p> There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters. </p>
     */
    inline NewSessionDetails& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    
    inline const ChatStreamingConfiguration& GetStreamingConfiguration() const{ return m_streamingConfiguration; }

    
    inline bool StreamingConfigurationHasBeenSet() const { return m_streamingConfigurationHasBeenSet; }

    
    inline void SetStreamingConfiguration(const ChatStreamingConfiguration& value) { m_streamingConfigurationHasBeenSet = true; m_streamingConfiguration = value; }

    
    inline void SetStreamingConfiguration(ChatStreamingConfiguration&& value) { m_streamingConfigurationHasBeenSet = true; m_streamingConfiguration = std::move(value); }

    
    inline NewSessionDetails& WithStreamingConfiguration(const ChatStreamingConfiguration& value) { SetStreamingConfiguration(value); return *this;}

    
    inline NewSessionDetails& WithStreamingConfiguration(ChatStreamingConfiguration&& value) { SetStreamingConfiguration(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_supportedMessagingContentTypes;
    bool m_supportedMessagingContentTypesHasBeenSet = false;

    ParticipantDetails m_participantDetails;
    bool m_participantDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    ChatStreamingConfiguration m_streamingConfiguration;
    bool m_streamingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
