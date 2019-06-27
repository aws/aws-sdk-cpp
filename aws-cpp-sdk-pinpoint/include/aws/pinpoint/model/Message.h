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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/Action.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the content and settings for a push notification that's sent to
   * recipients of a campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/Message">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API Message
  {
  public:
    Message();
    Message(Aws::Utils::Json::JsonView jsonValue);
    Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action to occur if a recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This setting uses the deep-linking features of iOS and
     * Android.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>The action to occur if a recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This setting uses the deep-linking features of iOS and
     * Android.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action to occur if a recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This setting uses the deep-linking features of iOS and
     * Android.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to occur if a recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This setting uses the deep-linking features of iOS and
     * Android.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action to occur if a recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This setting uses the deep-linking features of iOS and
     * Android.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline Message& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>The action to occur if a recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This setting uses the deep-linking features of iOS and
     * Android.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline Message& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The body of the notification message. The maximum number of characters is
     * 200.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>The body of the notification message. The maximum number of characters is
     * 200.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The body of the notification message. The maximum number of characters is
     * 200.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The body of the notification message. The maximum number of characters is
     * 200.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The body of the notification message. The maximum number of characters is
     * 200.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>The body of the notification message. The maximum number of characters is
     * 200.</p>
     */
    inline Message& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The body of the notification message. The maximum number of characters is
     * 200.</p>
     */
    inline Message& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>The body of the notification message. The maximum number of characters is
     * 200.</p>
     */
    inline Message& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>The URL of the image to display as the push-notification icon, such as the
     * icon for the app.</p>
     */
    inline const Aws::String& GetImageIconUrl() const{ return m_imageIconUrl; }

    /**
     * <p>The URL of the image to display as the push-notification icon, such as the
     * icon for the app.</p>
     */
    inline bool ImageIconUrlHasBeenSet() const { return m_imageIconUrlHasBeenSet; }

    /**
     * <p>The URL of the image to display as the push-notification icon, such as the
     * icon for the app.</p>
     */
    inline void SetImageIconUrl(const Aws::String& value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl = value; }

    /**
     * <p>The URL of the image to display as the push-notification icon, such as the
     * icon for the app.</p>
     */
    inline void SetImageIconUrl(Aws::String&& value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl = std::move(value); }

    /**
     * <p>The URL of the image to display as the push-notification icon, such as the
     * icon for the app.</p>
     */
    inline void SetImageIconUrl(const char* value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl.assign(value); }

    /**
     * <p>The URL of the image to display as the push-notification icon, such as the
     * icon for the app.</p>
     */
    inline Message& WithImageIconUrl(const Aws::String& value) { SetImageIconUrl(value); return *this;}

    /**
     * <p>The URL of the image to display as the push-notification icon, such as the
     * icon for the app.</p>
     */
    inline Message& WithImageIconUrl(Aws::String&& value) { SetImageIconUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the image to display as the push-notification icon, such as the
     * icon for the app.</p>
     */
    inline Message& WithImageIconUrl(const char* value) { SetImageIconUrl(value); return *this;}


    /**
     * <p>The URL of the image to display as the small, push-notification icon, such as
     * a small version of the icon for the app.</p>
     */
    inline const Aws::String& GetImageSmallIconUrl() const{ return m_imageSmallIconUrl; }

    /**
     * <p>The URL of the image to display as the small, push-notification icon, such as
     * a small version of the icon for the app.</p>
     */
    inline bool ImageSmallIconUrlHasBeenSet() const { return m_imageSmallIconUrlHasBeenSet; }

    /**
     * <p>The URL of the image to display as the small, push-notification icon, such as
     * a small version of the icon for the app.</p>
     */
    inline void SetImageSmallIconUrl(const Aws::String& value) { m_imageSmallIconUrlHasBeenSet = true; m_imageSmallIconUrl = value; }

    /**
     * <p>The URL of the image to display as the small, push-notification icon, such as
     * a small version of the icon for the app.</p>
     */
    inline void SetImageSmallIconUrl(Aws::String&& value) { m_imageSmallIconUrlHasBeenSet = true; m_imageSmallIconUrl = std::move(value); }

    /**
     * <p>The URL of the image to display as the small, push-notification icon, such as
     * a small version of the icon for the app.</p>
     */
    inline void SetImageSmallIconUrl(const char* value) { m_imageSmallIconUrlHasBeenSet = true; m_imageSmallIconUrl.assign(value); }

    /**
     * <p>The URL of the image to display as the small, push-notification icon, such as
     * a small version of the icon for the app.</p>
     */
    inline Message& WithImageSmallIconUrl(const Aws::String& value) { SetImageSmallIconUrl(value); return *this;}

    /**
     * <p>The URL of the image to display as the small, push-notification icon, such as
     * a small version of the icon for the app.</p>
     */
    inline Message& WithImageSmallIconUrl(Aws::String&& value) { SetImageSmallIconUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the image to display as the small, push-notification icon, such as
     * a small version of the icon for the app.</p>
     */
    inline Message& WithImageSmallIconUrl(const char* value) { SetImageSmallIconUrl(value); return *this;}


    /**
     * <p>The URL of an image to display in the push notification.</p>
     */
    inline const Aws::String& GetImageUrl() const{ return m_imageUrl; }

    /**
     * <p>The URL of an image to display in the push notification.</p>
     */
    inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }

    /**
     * <p>The URL of an image to display in the push notification.</p>
     */
    inline void SetImageUrl(const Aws::String& value) { m_imageUrlHasBeenSet = true; m_imageUrl = value; }

    /**
     * <p>The URL of an image to display in the push notification.</p>
     */
    inline void SetImageUrl(Aws::String&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::move(value); }

    /**
     * <p>The URL of an image to display in the push notification.</p>
     */
    inline void SetImageUrl(const char* value) { m_imageUrlHasBeenSet = true; m_imageUrl.assign(value); }

    /**
     * <p>The URL of an image to display in the push notification.</p>
     */
    inline Message& WithImageUrl(const Aws::String& value) { SetImageUrl(value); return *this;}

    /**
     * <p>The URL of an image to display in the push notification.</p>
     */
    inline Message& WithImageUrl(Aws::String&& value) { SetImageUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of an image to display in the push notification.</p>
     */
    inline Message& WithImageUrl(const char* value) { SetImageUrl(value); return *this;}


    /**
     * <p>The JSON payload to use for a silent push notification.</p>
     */
    inline const Aws::String& GetJsonBody() const{ return m_jsonBody; }

    /**
     * <p>The JSON payload to use for a silent push notification.</p>
     */
    inline bool JsonBodyHasBeenSet() const { return m_jsonBodyHasBeenSet; }

    /**
     * <p>The JSON payload to use for a silent push notification.</p>
     */
    inline void SetJsonBody(const Aws::String& value) { m_jsonBodyHasBeenSet = true; m_jsonBody = value; }

    /**
     * <p>The JSON payload to use for a silent push notification.</p>
     */
    inline void SetJsonBody(Aws::String&& value) { m_jsonBodyHasBeenSet = true; m_jsonBody = std::move(value); }

    /**
     * <p>The JSON payload to use for a silent push notification.</p>
     */
    inline void SetJsonBody(const char* value) { m_jsonBodyHasBeenSet = true; m_jsonBody.assign(value); }

    /**
     * <p>The JSON payload to use for a silent push notification.</p>
     */
    inline Message& WithJsonBody(const Aws::String& value) { SetJsonBody(value); return *this;}

    /**
     * <p>The JSON payload to use for a silent push notification.</p>
     */
    inline Message& WithJsonBody(Aws::String&& value) { SetJsonBody(std::move(value)); return *this;}

    /**
     * <p>The JSON payload to use for a silent push notification.</p>
     */
    inline Message& WithJsonBody(const char* value) { SetJsonBody(value); return *this;}


    /**
     * <p>The URL of the image or video to display in the push notification.</p>
     */
    inline const Aws::String& GetMediaUrl() const{ return m_mediaUrl; }

    /**
     * <p>The URL of the image or video to display in the push notification.</p>
     */
    inline bool MediaUrlHasBeenSet() const { return m_mediaUrlHasBeenSet; }

    /**
     * <p>The URL of the image or video to display in the push notification.</p>
     */
    inline void SetMediaUrl(const Aws::String& value) { m_mediaUrlHasBeenSet = true; m_mediaUrl = value; }

    /**
     * <p>The URL of the image or video to display in the push notification.</p>
     */
    inline void SetMediaUrl(Aws::String&& value) { m_mediaUrlHasBeenSet = true; m_mediaUrl = std::move(value); }

    /**
     * <p>The URL of the image or video to display in the push notification.</p>
     */
    inline void SetMediaUrl(const char* value) { m_mediaUrlHasBeenSet = true; m_mediaUrl.assign(value); }

    /**
     * <p>The URL of the image or video to display in the push notification.</p>
     */
    inline Message& WithMediaUrl(const Aws::String& value) { SetMediaUrl(value); return *this;}

    /**
     * <p>The URL of the image or video to display in the push notification.</p>
     */
    inline Message& WithMediaUrl(Aws::String&& value) { SetMediaUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the image or video to display in the push notification.</p>
     */
    inline Message& WithMediaUrl(const char* value) { SetMediaUrl(value); return *this;}


    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. This value overrides other values for the message.</p>
     */
    inline const Aws::String& GetRawContent() const{ return m_rawContent; }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. This value overrides other values for the message.</p>
     */
    inline bool RawContentHasBeenSet() const { return m_rawContentHasBeenSet; }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. This value overrides other values for the message.</p>
     */
    inline void SetRawContent(const Aws::String& value) { m_rawContentHasBeenSet = true; m_rawContent = value; }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. This value overrides other values for the message.</p>
     */
    inline void SetRawContent(Aws::String&& value) { m_rawContentHasBeenSet = true; m_rawContent = std::move(value); }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. This value overrides other values for the message.</p>
     */
    inline void SetRawContent(const char* value) { m_rawContentHasBeenSet = true; m_rawContent.assign(value); }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. This value overrides other values for the message.</p>
     */
    inline Message& WithRawContent(const Aws::String& value) { SetRawContent(value); return *this;}

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. This value overrides other values for the message.</p>
     */
    inline Message& WithRawContent(Aws::String&& value) { SetRawContent(std::move(value)); return *this;}

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. This value overrides other values for the message.</p>
     */
    inline Message& WithRawContent(const char* value) { SetRawContent(value); return *this;}


    /**
     * <p>Specifies whether the notification is a silent push notification, which is a
     * push notification that doesn't display on a recipient's device. Silent push
     * notifications can be used for cases such as updating an app's configuration,
     * displaying messages in an in-app message center, or supporting phone home
     * functionality.</p>
     */
    inline bool GetSilentPush() const{ return m_silentPush; }

    /**
     * <p>Specifies whether the notification is a silent push notification, which is a
     * push notification that doesn't display on a recipient's device. Silent push
     * notifications can be used for cases such as updating an app's configuration,
     * displaying messages in an in-app message center, or supporting phone home
     * functionality.</p>
     */
    inline bool SilentPushHasBeenSet() const { return m_silentPushHasBeenSet; }

    /**
     * <p>Specifies whether the notification is a silent push notification, which is a
     * push notification that doesn't display on a recipient's device. Silent push
     * notifications can be used for cases such as updating an app's configuration,
     * displaying messages in an in-app message center, or supporting phone home
     * functionality.</p>
     */
    inline void SetSilentPush(bool value) { m_silentPushHasBeenSet = true; m_silentPush = value; }

    /**
     * <p>Specifies whether the notification is a silent push notification, which is a
     * push notification that doesn't display on a recipient's device. Silent push
     * notifications can be used for cases such as updating an app's configuration,
     * displaying messages in an in-app message center, or supporting phone home
     * functionality.</p>
     */
    inline Message& WithSilentPush(bool value) { SetSilentPush(value); return *this;}


    /**
     * <p>The number of seconds that the push-notification service should keep the
     * message, if the service is unable to deliver the notification the first time.
     * This value is converted to an expiration value when it's sent to a
     * push-notification service. If this value is 0, the service treats the
     * notification as if it expires immediately and the service doesn't store or try
     * to deliver the notification again.</p> <p>This value doesn't apply to messages
     * that are sent through the Amazon Device Messaging (ADM) service.</p>
     */
    inline int GetTimeToLive() const{ return m_timeToLive; }

    /**
     * <p>The number of seconds that the push-notification service should keep the
     * message, if the service is unable to deliver the notification the first time.
     * This value is converted to an expiration value when it's sent to a
     * push-notification service. If this value is 0, the service treats the
     * notification as if it expires immediately and the service doesn't store or try
     * to deliver the notification again.</p> <p>This value doesn't apply to messages
     * that are sent through the Amazon Device Messaging (ADM) service.</p>
     */
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }

    /**
     * <p>The number of seconds that the push-notification service should keep the
     * message, if the service is unable to deliver the notification the first time.
     * This value is converted to an expiration value when it's sent to a
     * push-notification service. If this value is 0, the service treats the
     * notification as if it expires immediately and the service doesn't store or try
     * to deliver the notification again.</p> <p>This value doesn't apply to messages
     * that are sent through the Amazon Device Messaging (ADM) service.</p>
     */
    inline void SetTimeToLive(int value) { m_timeToLiveHasBeenSet = true; m_timeToLive = value; }

    /**
     * <p>The number of seconds that the push-notification service should keep the
     * message, if the service is unable to deliver the notification the first time.
     * This value is converted to an expiration value when it's sent to a
     * push-notification service. If this value is 0, the service treats the
     * notification as if it expires immediately and the service doesn't store or try
     * to deliver the notification again.</p> <p>This value doesn't apply to messages
     * that are sent through the Amazon Device Messaging (ADM) service.</p>
     */
    inline Message& WithTimeToLive(int value) { SetTimeToLive(value); return *this;}


    /**
     * <p>The title to display above the notification message on a recipient's
     * device.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title to display above the notification message on a recipient's
     * device.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title to display above the notification message on a recipient's
     * device.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title to display above the notification message on a recipient's
     * device.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title to display above the notification message on a recipient's
     * device.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title to display above the notification message on a recipient's
     * device.</p>
     */
    inline Message& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title to display above the notification message on a recipient's
     * device.</p>
     */
    inline Message& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title to display above the notification message on a recipient's
     * device.</p>
     */
    inline Message& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The URL to open in a recipient's default mobile browser, if a recipient taps
     * the push notification and the value of the Action property is URL.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL to open in a recipient's default mobile browser, if a recipient taps
     * the push notification and the value of the Action property is URL.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL to open in a recipient's default mobile browser, if a recipient taps
     * the push notification and the value of the Action property is URL.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL to open in a recipient's default mobile browser, if a recipient taps
     * the push notification and the value of the Action property is URL.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL to open in a recipient's default mobile browser, if a recipient taps
     * the push notification and the value of the Action property is URL.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL to open in a recipient's default mobile browser, if a recipient taps
     * the push notification and the value of the Action property is URL.</p>
     */
    inline Message& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL to open in a recipient's default mobile browser, if a recipient taps
     * the push notification and the value of the Action property is URL.</p>
     */
    inline Message& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL to open in a recipient's default mobile browser, if a recipient taps
     * the push notification and the value of the Action property is URL.</p>
     */
    inline Message& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Action m_action;
    bool m_actionHasBeenSet;

    Aws::String m_body;
    bool m_bodyHasBeenSet;

    Aws::String m_imageIconUrl;
    bool m_imageIconUrlHasBeenSet;

    Aws::String m_imageSmallIconUrl;
    bool m_imageSmallIconUrlHasBeenSet;

    Aws::String m_imageUrl;
    bool m_imageUrlHasBeenSet;

    Aws::String m_jsonBody;
    bool m_jsonBodyHasBeenSet;

    Aws::String m_mediaUrl;
    bool m_mediaUrlHasBeenSet;

    Aws::String m_rawContent;
    bool m_rawContentHasBeenSet;

    bool m_silentPush;
    bool m_silentPushHasBeenSet;

    int m_timeToLive;
    bool m_timeToLiveHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;

    Aws::String m_url;
    bool m_urlHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
