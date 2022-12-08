/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Specifies channel-specific content and settings for a message template that
   * can be used in push notifications that are sent through the APNs (Apple Push
   * Notification service) channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/APNSPushNotificationTemplate">AWS
   * API Reference</a></p>
   */
  class APNSPushNotificationTemplate
  {
  public:
    AWS_PINPOINT_API APNSPushNotificationTemplate();
    AWS_PINPOINT_API APNSPushNotificationTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API APNSPushNotificationTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action to occur if a recipient taps a push notification that's based on
     * the message template. Valid values are:</p> <ul><li><p>OPEN_APP - Your app opens
     * or it becomes the foreground app if it was sent to the background. This is the
     * default action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a
     * designated user interface in the app. This setting uses the deep-linking
     * features of the iOS platform.</p></li> <li><p>URL - The default mobile browser
     * on the recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>The action to occur if a recipient taps a push notification that's based on
     * the message template. Valid values are:</p> <ul><li><p>OPEN_APP - Your app opens
     * or it becomes the foreground app if it was sent to the background. This is the
     * default action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a
     * designated user interface in the app. This setting uses the deep-linking
     * features of the iOS platform.</p></li> <li><p>URL - The default mobile browser
     * on the recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action to occur if a recipient taps a push notification that's based on
     * the message template. Valid values are:</p> <ul><li><p>OPEN_APP - Your app opens
     * or it becomes the foreground app if it was sent to the background. This is the
     * default action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a
     * designated user interface in the app. This setting uses the deep-linking
     * features of the iOS platform.</p></li> <li><p>URL - The default mobile browser
     * on the recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to occur if a recipient taps a push notification that's based on
     * the message template. Valid values are:</p> <ul><li><p>OPEN_APP - Your app opens
     * or it becomes the foreground app if it was sent to the background. This is the
     * default action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a
     * designated user interface in the app. This setting uses the deep-linking
     * features of the iOS platform.</p></li> <li><p>URL - The default mobile browser
     * on the recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action to occur if a recipient taps a push notification that's based on
     * the message template. Valid values are:</p> <ul><li><p>OPEN_APP - Your app opens
     * or it becomes the foreground app if it was sent to the background. This is the
     * default action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a
     * designated user interface in the app. This setting uses the deep-linking
     * features of the iOS platform.</p></li> <li><p>URL - The default mobile browser
     * on the recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline APNSPushNotificationTemplate& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>The action to occur if a recipient taps a push notification that's based on
     * the message template. Valid values are:</p> <ul><li><p>OPEN_APP - Your app opens
     * or it becomes the foreground app if it was sent to the background. This is the
     * default action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a
     * designated user interface in the app. This setting uses the deep-linking
     * features of the iOS platform.</p></li> <li><p>URL - The default mobile browser
     * on the recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline APNSPushNotificationTemplate& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The message body to use in push notifications that are based on the message
     * template.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>The message body to use in push notifications that are based on the message
     * template.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The message body to use in push notifications that are based on the message
     * template.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The message body to use in push notifications that are based on the message
     * template.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The message body to use in push notifications that are based on the message
     * template.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>The message body to use in push notifications that are based on the message
     * template.</p>
     */
    inline APNSPushNotificationTemplate& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The message body to use in push notifications that are based on the message
     * template.</p>
     */
    inline APNSPushNotificationTemplate& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>The message body to use in push notifications that are based on the message
     * template.</p>
     */
    inline APNSPushNotificationTemplate& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>The URL of an image or video to display in push notifications that are based
     * on the message template.</p>
     */
    inline const Aws::String& GetMediaUrl() const{ return m_mediaUrl; }

    /**
     * <p>The URL of an image or video to display in push notifications that are based
     * on the message template.</p>
     */
    inline bool MediaUrlHasBeenSet() const { return m_mediaUrlHasBeenSet; }

    /**
     * <p>The URL of an image or video to display in push notifications that are based
     * on the message template.</p>
     */
    inline void SetMediaUrl(const Aws::String& value) { m_mediaUrlHasBeenSet = true; m_mediaUrl = value; }

    /**
     * <p>The URL of an image or video to display in push notifications that are based
     * on the message template.</p>
     */
    inline void SetMediaUrl(Aws::String&& value) { m_mediaUrlHasBeenSet = true; m_mediaUrl = std::move(value); }

    /**
     * <p>The URL of an image or video to display in push notifications that are based
     * on the message template.</p>
     */
    inline void SetMediaUrl(const char* value) { m_mediaUrlHasBeenSet = true; m_mediaUrl.assign(value); }

    /**
     * <p>The URL of an image or video to display in push notifications that are based
     * on the message template.</p>
     */
    inline APNSPushNotificationTemplate& WithMediaUrl(const Aws::String& value) { SetMediaUrl(value); return *this;}

    /**
     * <p>The URL of an image or video to display in push notifications that are based
     * on the message template.</p>
     */
    inline APNSPushNotificationTemplate& WithMediaUrl(Aws::String&& value) { SetMediaUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of an image or video to display in push notifications that are based
     * on the message template.</p>
     */
    inline APNSPushNotificationTemplate& WithMediaUrl(const char* value) { SetMediaUrl(value); return *this;}


    /**
     * <p>The raw, JSON-formatted string to use as the payload for push notifications
     * that are based on the message template. If specified, this value overrides all
     * other content for the message template.</p>
     */
    inline const Aws::String& GetRawContent() const{ return m_rawContent; }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for push notifications
     * that are based on the message template. If specified, this value overrides all
     * other content for the message template.</p>
     */
    inline bool RawContentHasBeenSet() const { return m_rawContentHasBeenSet; }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for push notifications
     * that are based on the message template. If specified, this value overrides all
     * other content for the message template.</p>
     */
    inline void SetRawContent(const Aws::String& value) { m_rawContentHasBeenSet = true; m_rawContent = value; }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for push notifications
     * that are based on the message template. If specified, this value overrides all
     * other content for the message template.</p>
     */
    inline void SetRawContent(Aws::String&& value) { m_rawContentHasBeenSet = true; m_rawContent = std::move(value); }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for push notifications
     * that are based on the message template. If specified, this value overrides all
     * other content for the message template.</p>
     */
    inline void SetRawContent(const char* value) { m_rawContentHasBeenSet = true; m_rawContent.assign(value); }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for push notifications
     * that are based on the message template. If specified, this value overrides all
     * other content for the message template.</p>
     */
    inline APNSPushNotificationTemplate& WithRawContent(const Aws::String& value) { SetRawContent(value); return *this;}

    /**
     * <p>The raw, JSON-formatted string to use as the payload for push notifications
     * that are based on the message template. If specified, this value overrides all
     * other content for the message template.</p>
     */
    inline APNSPushNotificationTemplate& WithRawContent(Aws::String&& value) { SetRawContent(std::move(value)); return *this;}

    /**
     * <p>The raw, JSON-formatted string to use as the payload for push notifications
     * that are based on the message template. If specified, this value overrides all
     * other content for the message template.</p>
     */
    inline APNSPushNotificationTemplate& WithRawContent(const char* value) { SetRawContent(value); return *this;}


    /**
     * <p>The key for the sound to play when the recipient receives a push notification
     * that's based on the message template. The value for this key is the name of a
     * sound file in your app's main bundle or the Library/Sounds folder in your app's
     * data container. If the sound file can't be found or you specify default for the
     * value, the system plays the default alert sound.</p>
     */
    inline const Aws::String& GetSound() const{ return m_sound; }

    /**
     * <p>The key for the sound to play when the recipient receives a push notification
     * that's based on the message template. The value for this key is the name of a
     * sound file in your app's main bundle or the Library/Sounds folder in your app's
     * data container. If the sound file can't be found or you specify default for the
     * value, the system plays the default alert sound.</p>
     */
    inline bool SoundHasBeenSet() const { return m_soundHasBeenSet; }

    /**
     * <p>The key for the sound to play when the recipient receives a push notification
     * that's based on the message template. The value for this key is the name of a
     * sound file in your app's main bundle or the Library/Sounds folder in your app's
     * data container. If the sound file can't be found or you specify default for the
     * value, the system plays the default alert sound.</p>
     */
    inline void SetSound(const Aws::String& value) { m_soundHasBeenSet = true; m_sound = value; }

    /**
     * <p>The key for the sound to play when the recipient receives a push notification
     * that's based on the message template. The value for this key is the name of a
     * sound file in your app's main bundle or the Library/Sounds folder in your app's
     * data container. If the sound file can't be found or you specify default for the
     * value, the system plays the default alert sound.</p>
     */
    inline void SetSound(Aws::String&& value) { m_soundHasBeenSet = true; m_sound = std::move(value); }

    /**
     * <p>The key for the sound to play when the recipient receives a push notification
     * that's based on the message template. The value for this key is the name of a
     * sound file in your app's main bundle or the Library/Sounds folder in your app's
     * data container. If the sound file can't be found or you specify default for the
     * value, the system plays the default alert sound.</p>
     */
    inline void SetSound(const char* value) { m_soundHasBeenSet = true; m_sound.assign(value); }

    /**
     * <p>The key for the sound to play when the recipient receives a push notification
     * that's based on the message template. The value for this key is the name of a
     * sound file in your app's main bundle or the Library/Sounds folder in your app's
     * data container. If the sound file can't be found or you specify default for the
     * value, the system plays the default alert sound.</p>
     */
    inline APNSPushNotificationTemplate& WithSound(const Aws::String& value) { SetSound(value); return *this;}

    /**
     * <p>The key for the sound to play when the recipient receives a push notification
     * that's based on the message template. The value for this key is the name of a
     * sound file in your app's main bundle or the Library/Sounds folder in your app's
     * data container. If the sound file can't be found or you specify default for the
     * value, the system plays the default alert sound.</p>
     */
    inline APNSPushNotificationTemplate& WithSound(Aws::String&& value) { SetSound(std::move(value)); return *this;}

    /**
     * <p>The key for the sound to play when the recipient receives a push notification
     * that's based on the message template. The value for this key is the name of a
     * sound file in your app's main bundle or the Library/Sounds folder in your app's
     * data container. If the sound file can't be found or you specify default for the
     * value, the system plays the default alert sound.</p>
     */
    inline APNSPushNotificationTemplate& WithSound(const char* value) { SetSound(value); return *this;}


    /**
     * <p>The title to use in push notifications that are based on the message
     * template. This title appears above the notification message on a recipient's
     * device.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title to use in push notifications that are based on the message
     * template. This title appears above the notification message on a recipient's
     * device.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title to use in push notifications that are based on the message
     * template. This title appears above the notification message on a recipient's
     * device.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title to use in push notifications that are based on the message
     * template. This title appears above the notification message on a recipient's
     * device.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title to use in push notifications that are based on the message
     * template. This title appears above the notification message on a recipient's
     * device.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title to use in push notifications that are based on the message
     * template. This title appears above the notification message on a recipient's
     * device.</p>
     */
    inline APNSPushNotificationTemplate& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title to use in push notifications that are based on the message
     * template. This title appears above the notification message on a recipient's
     * device.</p>
     */
    inline APNSPushNotificationTemplate& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title to use in push notifications that are based on the message
     * template. This title appears above the notification message on a recipient's
     * device.</p>
     */
    inline APNSPushNotificationTemplate& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps a push notification that's based on the message template and the value of
     * the Action property is URL.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps a push notification that's based on the message template and the value of
     * the Action property is URL.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps a push notification that's based on the message template and the value of
     * the Action property is URL.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps a push notification that's based on the message template and the value of
     * the Action property is URL.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps a push notification that's based on the message template and the value of
     * the Action property is URL.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps a push notification that's based on the message template and the value of
     * the Action property is URL.</p>
     */
    inline APNSPushNotificationTemplate& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps a push notification that's based on the message template and the value of
     * the Action property is URL.</p>
     */
    inline APNSPushNotificationTemplate& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps a push notification that's based on the message template and the value of
     * the Action property is URL.</p>
     */
    inline APNSPushNotificationTemplate& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Action m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_mediaUrl;
    bool m_mediaUrlHasBeenSet = false;

    Aws::String m_rawContent;
    bool m_rawContentHasBeenSet = false;

    Aws::String m_sound;
    bool m_soundHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
