/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/ivschat/IvschatRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivschat/model/MessageReviewHandler.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
    AWS_IVSCHAT_API CreateRoomRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRoom"; }

    AWS_IVSCHAT_API Aws::String SerializePayload() const override;


    /**
     * <p>Array of logging-configuration identifiers attached to the room.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoggingConfigurationIdentifiers() const{ return m_loggingConfigurationIdentifiers; }

    /**
     * <p>Array of logging-configuration identifiers attached to the room.</p>
     */
    inline bool LoggingConfigurationIdentifiersHasBeenSet() const { return m_loggingConfigurationIdentifiersHasBeenSet; }

    /**
     * <p>Array of logging-configuration identifiers attached to the room.</p>
     */
    inline void SetLoggingConfigurationIdentifiers(const Aws::Vector<Aws::String>& value) { m_loggingConfigurationIdentifiersHasBeenSet = true; m_loggingConfigurationIdentifiers = value; }

    /**
     * <p>Array of logging-configuration identifiers attached to the room.</p>
     */
    inline void SetLoggingConfigurationIdentifiers(Aws::Vector<Aws::String>&& value) { m_loggingConfigurationIdentifiersHasBeenSet = true; m_loggingConfigurationIdentifiers = std::move(value); }

    /**
     * <p>Array of logging-configuration identifiers attached to the room.</p>
     */
    inline CreateRoomRequest& WithLoggingConfigurationIdentifiers(const Aws::Vector<Aws::String>& value) { SetLoggingConfigurationIdentifiers(value); return *this;}

    /**
     * <p>Array of logging-configuration identifiers attached to the room.</p>
     */
    inline CreateRoomRequest& WithLoggingConfigurationIdentifiers(Aws::Vector<Aws::String>&& value) { SetLoggingConfigurationIdentifiers(std::move(value)); return *this;}

    /**
     * <p>Array of logging-configuration identifiers attached to the room.</p>
     */
    inline CreateRoomRequest& AddLoggingConfigurationIdentifiers(const Aws::String& value) { m_loggingConfigurationIdentifiersHasBeenSet = true; m_loggingConfigurationIdentifiers.push_back(value); return *this; }

    /**
     * <p>Array of logging-configuration identifiers attached to the room.</p>
     */
    inline CreateRoomRequest& AddLoggingConfigurationIdentifiers(Aws::String&& value) { m_loggingConfigurationIdentifiersHasBeenSet = true; m_loggingConfigurationIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>Array of logging-configuration identifiers attached to the room.</p>
     */
    inline CreateRoomRequest& AddLoggingConfigurationIdentifiers(const char* value) { m_loggingConfigurationIdentifiersHasBeenSet = true; m_loggingConfigurationIdentifiers.push_back(value); return *this; }


    /**
     * <p>Maximum number of characters in a single message. Messages are expected to be
     * UTF-8 encoded and this limit applies specifically to rune/code-point count, not
     * number of bytes. Default: 500.</p>
     */
    inline int GetMaximumMessageLength() const{ return m_maximumMessageLength; }

    /**
     * <p>Maximum number of characters in a single message. Messages are expected to be
     * UTF-8 encoded and this limit applies specifically to rune/code-point count, not
     * number of bytes. Default: 500.</p>
     */
    inline bool MaximumMessageLengthHasBeenSet() const { return m_maximumMessageLengthHasBeenSet; }

    /**
     * <p>Maximum number of characters in a single message. Messages are expected to be
     * UTF-8 encoded and this limit applies specifically to rune/code-point count, not
     * number of bytes. Default: 500.</p>
     */
    inline void SetMaximumMessageLength(int value) { m_maximumMessageLengthHasBeenSet = true; m_maximumMessageLength = value; }

    /**
     * <p>Maximum number of characters in a single message. Messages are expected to be
     * UTF-8 encoded and this limit applies specifically to rune/code-point count, not
     * number of bytes. Default: 500.</p>
     */
    inline CreateRoomRequest& WithMaximumMessageLength(int value) { SetMaximumMessageLength(value); return *this;}


    /**
     * <p>Maximum number of messages per second that can be sent to the room (by all
     * clients). Default: 10. </p>
     */
    inline int GetMaximumMessageRatePerSecond() const{ return m_maximumMessageRatePerSecond; }

    /**
     * <p>Maximum number of messages per second that can be sent to the room (by all
     * clients). Default: 10. </p>
     */
    inline bool MaximumMessageRatePerSecondHasBeenSet() const { return m_maximumMessageRatePerSecondHasBeenSet; }

    /**
     * <p>Maximum number of messages per second that can be sent to the room (by all
     * clients). Default: 10. </p>
     */
    inline void SetMaximumMessageRatePerSecond(int value) { m_maximumMessageRatePerSecondHasBeenSet = true; m_maximumMessageRatePerSecond = value; }

    /**
     * <p>Maximum number of messages per second that can be sent to the room (by all
     * clients). Default: 10. </p>
     */
    inline CreateRoomRequest& WithMaximumMessageRatePerSecond(int value) { SetMaximumMessageRatePerSecond(value); return *this;}


    /**
     * <p>Configuration information for optional review of messages.</p>
     */
    inline const MessageReviewHandler& GetMessageReviewHandler() const{ return m_messageReviewHandler; }

    /**
     * <p>Configuration information for optional review of messages.</p>
     */
    inline bool MessageReviewHandlerHasBeenSet() const { return m_messageReviewHandlerHasBeenSet; }

    /**
     * <p>Configuration information for optional review of messages.</p>
     */
    inline void SetMessageReviewHandler(const MessageReviewHandler& value) { m_messageReviewHandlerHasBeenSet = true; m_messageReviewHandler = value; }

    /**
     * <p>Configuration information for optional review of messages.</p>
     */
    inline void SetMessageReviewHandler(MessageReviewHandler&& value) { m_messageReviewHandlerHasBeenSet = true; m_messageReviewHandler = std::move(value); }

    /**
     * <p>Configuration information for optional review of messages.</p>
     */
    inline CreateRoomRequest& WithMessageReviewHandler(const MessageReviewHandler& value) { SetMessageReviewHandler(value); return *this;}

    /**
     * <p>Configuration information for optional review of messages.</p>
     */
    inline CreateRoomRequest& WithMessageReviewHandler(MessageReviewHandler&& value) { SetMessageReviewHandler(std::move(value)); return *this;}


    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline CreateRoomRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline CreateRoomRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline CreateRoomRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline CreateRoomRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline CreateRoomRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline CreateRoomRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline CreateRoomRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline CreateRoomRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline CreateRoomRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline CreateRoomRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline CreateRoomRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to attach to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline CreateRoomRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_loggingConfigurationIdentifiers;
    bool m_loggingConfigurationIdentifiersHasBeenSet = false;

    int m_maximumMessageLength;
    bool m_maximumMessageLengthHasBeenSet = false;

    int m_maximumMessageRatePerSecond;
    bool m_maximumMessageRatePerSecondHasBeenSet = false;

    MessageReviewHandler m_messageReviewHandler;
    bool m_messageReviewHandlerHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
