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
    AWS_CONNECT_API NewSessionDetails() = default;
    AWS_CONNECT_API NewSessionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API NewSessionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline const Aws::Vector<Aws::String>& GetSupportedMessagingContentTypes() const { return m_supportedMessagingContentTypes; }
    inline bool SupportedMessagingContentTypesHasBeenSet() const { return m_supportedMessagingContentTypesHasBeenSet; }
    template<typename SupportedMessagingContentTypesT = Aws::Vector<Aws::String>>
    void SetSupportedMessagingContentTypes(SupportedMessagingContentTypesT&& value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes = std::forward<SupportedMessagingContentTypesT>(value); }
    template<typename SupportedMessagingContentTypesT = Aws::Vector<Aws::String>>
    NewSessionDetails& WithSupportedMessagingContentTypes(SupportedMessagingContentTypesT&& value) { SetSupportedMessagingContentTypes(std::forward<SupportedMessagingContentTypesT>(value)); return *this;}
    template<typename SupportedMessagingContentTypesT = Aws::String>
    NewSessionDetails& AddSupportedMessagingContentTypes(SupportedMessagingContentTypesT&& value) { m_supportedMessagingContentTypesHasBeenSet = true; m_supportedMessagingContentTypes.emplace_back(std::forward<SupportedMessagingContentTypesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ParticipantDetails& GetParticipantDetails() const { return m_participantDetails; }
    inline bool ParticipantDetailsHasBeenSet() const { return m_participantDetailsHasBeenSet; }
    template<typename ParticipantDetailsT = ParticipantDetails>
    void SetParticipantDetails(ParticipantDetailsT&& value) { m_participantDetailsHasBeenSet = true; m_participantDetails = std::forward<ParticipantDetailsT>(value); }
    template<typename ParticipantDetailsT = ParticipantDetails>
    NewSessionDetails& WithParticipantDetails(ParticipantDetailsT&& value) { SetParticipantDetails(std::forward<ParticipantDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes. They can be accessed in flows just like any other
     * contact attributes. </p> <p> There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    NewSessionDetails& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    NewSessionDetails& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const ChatStreamingConfiguration& GetStreamingConfiguration() const { return m_streamingConfiguration; }
    inline bool StreamingConfigurationHasBeenSet() const { return m_streamingConfigurationHasBeenSet; }
    template<typename StreamingConfigurationT = ChatStreamingConfiguration>
    void SetStreamingConfiguration(StreamingConfigurationT&& value) { m_streamingConfigurationHasBeenSet = true; m_streamingConfiguration = std::forward<StreamingConfigurationT>(value); }
    template<typename StreamingConfigurationT = ChatStreamingConfiguration>
    NewSessionDetails& WithStreamingConfiguration(StreamingConfigurationT&& value) { SetStreamingConfiguration(std::forward<StreamingConfigurationT>(value)); return *this;}
    ///@}
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
