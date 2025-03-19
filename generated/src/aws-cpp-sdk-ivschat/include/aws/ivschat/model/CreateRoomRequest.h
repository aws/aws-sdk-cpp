/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/ivschat/IvschatRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivschat/model/MessageReviewHandler.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ivschat
{
namespace Model
{

  /**
   */
  class CreateRoomRequest : public IvschatRequest
  {
  public:
    AWS_IVSCHAT_API CreateRoomRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRoom"; }

    AWS_IVSCHAT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateRoomRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of messages per second that can be sent to the room (by all
     * clients). Default: 10. </p>
     */
    inline int GetMaximumMessageRatePerSecond() const { return m_maximumMessageRatePerSecond; }
    inline bool MaximumMessageRatePerSecondHasBeenSet() const { return m_maximumMessageRatePerSecondHasBeenSet; }
    inline void SetMaximumMessageRatePerSecond(int value) { m_maximumMessageRatePerSecondHasBeenSet = true; m_maximumMessageRatePerSecond = value; }
    inline CreateRoomRequest& WithMaximumMessageRatePerSecond(int value) { SetMaximumMessageRatePerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of characters in a single message. Messages are expected to be
     * UTF-8 encoded and this limit applies specifically to rune/code-point count, not
     * number of bytes. Default: 500.</p>
     */
    inline int GetMaximumMessageLength() const { return m_maximumMessageLength; }
    inline bool MaximumMessageLengthHasBeenSet() const { return m_maximumMessageLengthHasBeenSet; }
    inline void SetMaximumMessageLength(int value) { m_maximumMessageLengthHasBeenSet = true; m_maximumMessageLength = value; }
    inline CreateRoomRequest& WithMaximumMessageLength(int value) { SetMaximumMessageLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for optional review of messages.</p>
     */
    inline const MessageReviewHandler& GetMessageReviewHandler() const { return m_messageReviewHandler; }
    inline bool MessageReviewHandlerHasBeenSet() const { return m_messageReviewHandlerHasBeenSet; }
    template<typename MessageReviewHandlerT = MessageReviewHandler>
    void SetMessageReviewHandler(MessageReviewHandlerT&& value) { m_messageReviewHandlerHasBeenSet = true; m_messageReviewHandler = std::forward<MessageReviewHandlerT>(value); }
    template<typename MessageReviewHandlerT = MessageReviewHandler>
    CreateRoomRequest& WithMessageReviewHandler(MessageReviewHandlerT&& value) { SetMessageReviewHandler(std::forward<MessageReviewHandlerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/best-practices-and-strats.html">Best
     * practices and strategies</a> in <i>Tagging Amazon Web Services Resources and Tag
     * Editor</i> for details, including restrictions that apply to tags and "Tag
     * naming limits and requirements"; Amazon IVS Chat has no constraints beyond what
     * is documented there.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateRoomRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateRoomRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Array of logging-configuration identifiers attached to the room.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoggingConfigurationIdentifiers() const { return m_loggingConfigurationIdentifiers; }
    inline bool LoggingConfigurationIdentifiersHasBeenSet() const { return m_loggingConfigurationIdentifiersHasBeenSet; }
    template<typename LoggingConfigurationIdentifiersT = Aws::Vector<Aws::String>>
    void SetLoggingConfigurationIdentifiers(LoggingConfigurationIdentifiersT&& value) { m_loggingConfigurationIdentifiersHasBeenSet = true; m_loggingConfigurationIdentifiers = std::forward<LoggingConfigurationIdentifiersT>(value); }
    template<typename LoggingConfigurationIdentifiersT = Aws::Vector<Aws::String>>
    CreateRoomRequest& WithLoggingConfigurationIdentifiers(LoggingConfigurationIdentifiersT&& value) { SetLoggingConfigurationIdentifiers(std::forward<LoggingConfigurationIdentifiersT>(value)); return *this;}
    template<typename LoggingConfigurationIdentifiersT = Aws::String>
    CreateRoomRequest& AddLoggingConfigurationIdentifiers(LoggingConfigurationIdentifiersT&& value) { m_loggingConfigurationIdentifiersHasBeenSet = true; m_loggingConfigurationIdentifiers.emplace_back(std::forward<LoggingConfigurationIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_maximumMessageRatePerSecond{0};
    bool m_maximumMessageRatePerSecondHasBeenSet = false;

    int m_maximumMessageLength{0};
    bool m_maximumMessageLengthHasBeenSet = false;

    MessageReviewHandler m_messageReviewHandler;
    bool m_messageReviewHandlerHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_loggingConfigurationIdentifiers;
    bool m_loggingConfigurationIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
