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
   * Message to send<p><h3>See Also:</h3>   <a
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
     * The action that occurs if the user taps a push notification delivered by the
     * campaign:
OPEN_APP - Your app launches, or it becomes the foreground app if it
     * has been sent to the background. This is the default action.

DEEP_LINK - Uses
     * deep linking features in iOS and Android to open your app and display a
     * designated user interface within the app.

URL - The default mobile browser on
     * the user's device launches and opens a web page at the URL you specify.
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * The action that occurs if the user taps a push notification delivered by the
     * campaign:
OPEN_APP - Your app launches, or it becomes the foreground app if it
     * has been sent to the background. This is the default action.

DEEP_LINK - Uses
     * deep linking features in iOS and Android to open your app and display a
     * designated user interface within the app.

URL - The default mobile browser on
     * the user's device launches and opens a web page at the URL you specify.
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * The action that occurs if the user taps a push notification delivered by the
     * campaign:
OPEN_APP - Your app launches, or it becomes the foreground app if it
     * has been sent to the background. This is the default action.

DEEP_LINK - Uses
     * deep linking features in iOS and Android to open your app and display a
     * designated user interface within the app.

URL - The default mobile browser on
     * the user's device launches and opens a web page at the URL you specify.
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * The action that occurs if the user taps a push notification delivered by the
     * campaign:
OPEN_APP - Your app launches, or it becomes the foreground app if it
     * has been sent to the background. This is the default action.

DEEP_LINK - Uses
     * deep linking features in iOS and Android to open your app and display a
     * designated user interface within the app.

URL - The default mobile browser on
     * the user's device launches and opens a web page at the URL you specify.
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * The action that occurs if the user taps a push notification delivered by the
     * campaign:
OPEN_APP - Your app launches, or it becomes the foreground app if it
     * has been sent to the background. This is the default action.

DEEP_LINK - Uses
     * deep linking features in iOS and Android to open your app and display a
     * designated user interface within the app.

URL - The default mobile browser on
     * the user's device launches and opens a web page at the URL you specify.
     */
    inline Message& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * The action that occurs if the user taps a push notification delivered by the
     * campaign:
OPEN_APP - Your app launches, or it becomes the foreground app if it
     * has been sent to the background. This is the default action.

DEEP_LINK - Uses
     * deep linking features in iOS and Android to open your app and display a
     * designated user interface within the app.

URL - The default mobile browser on
     * the user's device launches and opens a web page at the URL you specify.
     */
    inline Message& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * The message body. Can include up to 140 characters.
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * The message body. Can include up to 140 characters.
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * The message body. Can include up to 140 characters.
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * The message body. Can include up to 140 characters.
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * The message body. Can include up to 140 characters.
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * The message body. Can include up to 140 characters.
     */
    inline Message& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * The message body. Can include up to 140 characters.
     */
    inline Message& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * The message body. Can include up to 140 characters.
     */
    inline Message& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * The URL that points to the icon image for the push notification icon, for
     * example, the app icon.
     */
    inline const Aws::String& GetImageIconUrl() const{ return m_imageIconUrl; }

    /**
     * The URL that points to the icon image for the push notification icon, for
     * example, the app icon.
     */
    inline bool ImageIconUrlHasBeenSet() const { return m_imageIconUrlHasBeenSet; }

    /**
     * The URL that points to the icon image for the push notification icon, for
     * example, the app icon.
     */
    inline void SetImageIconUrl(const Aws::String& value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl = value; }

    /**
     * The URL that points to the icon image for the push notification icon, for
     * example, the app icon.
     */
    inline void SetImageIconUrl(Aws::String&& value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl = std::move(value); }

    /**
     * The URL that points to the icon image for the push notification icon, for
     * example, the app icon.
     */
    inline void SetImageIconUrl(const char* value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl.assign(value); }

    /**
     * The URL that points to the icon image for the push notification icon, for
     * example, the app icon.
     */
    inline Message& WithImageIconUrl(const Aws::String& value) { SetImageIconUrl(value); return *this;}

    /**
     * The URL that points to the icon image for the push notification icon, for
     * example, the app icon.
     */
    inline Message& WithImageIconUrl(Aws::String&& value) { SetImageIconUrl(std::move(value)); return *this;}

    /**
     * The URL that points to the icon image for the push notification icon, for
     * example, the app icon.
     */
    inline Message& WithImageIconUrl(const char* value) { SetImageIconUrl(value); return *this;}


    /**
     * The URL that points to the small icon image for the push notification icon, for
     * example, the app icon.
     */
    inline const Aws::String& GetImageSmallIconUrl() const{ return m_imageSmallIconUrl; }

    /**
     * The URL that points to the small icon image for the push notification icon, for
     * example, the app icon.
     */
    inline bool ImageSmallIconUrlHasBeenSet() const { return m_imageSmallIconUrlHasBeenSet; }

    /**
     * The URL that points to the small icon image for the push notification icon, for
     * example, the app icon.
     */
    inline void SetImageSmallIconUrl(const Aws::String& value) { m_imageSmallIconUrlHasBeenSet = true; m_imageSmallIconUrl = value; }

    /**
     * The URL that points to the small icon image for the push notification icon, for
     * example, the app icon.
     */
    inline void SetImageSmallIconUrl(Aws::String&& value) { m_imageSmallIconUrlHasBeenSet = true; m_imageSmallIconUrl = std::move(value); }

    /**
     * The URL that points to the small icon image for the push notification icon, for
     * example, the app icon.
     */
    inline void SetImageSmallIconUrl(const char* value) { m_imageSmallIconUrlHasBeenSet = true; m_imageSmallIconUrl.assign(value); }

    /**
     * The URL that points to the small icon image for the push notification icon, for
     * example, the app icon.
     */
    inline Message& WithImageSmallIconUrl(const Aws::String& value) { SetImageSmallIconUrl(value); return *this;}

    /**
     * The URL that points to the small icon image for the push notification icon, for
     * example, the app icon.
     */
    inline Message& WithImageSmallIconUrl(Aws::String&& value) { SetImageSmallIconUrl(std::move(value)); return *this;}

    /**
     * The URL that points to the small icon image for the push notification icon, for
     * example, the app icon.
     */
    inline Message& WithImageSmallIconUrl(const char* value) { SetImageSmallIconUrl(value); return *this;}


    /**
     * The URL that points to an image used in the push notification.
     */
    inline const Aws::String& GetImageUrl() const{ return m_imageUrl; }

    /**
     * The URL that points to an image used in the push notification.
     */
    inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }

    /**
     * The URL that points to an image used in the push notification.
     */
    inline void SetImageUrl(const Aws::String& value) { m_imageUrlHasBeenSet = true; m_imageUrl = value; }

    /**
     * The URL that points to an image used in the push notification.
     */
    inline void SetImageUrl(Aws::String&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::move(value); }

    /**
     * The URL that points to an image used in the push notification.
     */
    inline void SetImageUrl(const char* value) { m_imageUrlHasBeenSet = true; m_imageUrl.assign(value); }

    /**
     * The URL that points to an image used in the push notification.
     */
    inline Message& WithImageUrl(const Aws::String& value) { SetImageUrl(value); return *this;}

    /**
     * The URL that points to an image used in the push notification.
     */
    inline Message& WithImageUrl(Aws::String&& value) { SetImageUrl(std::move(value)); return *this;}

    /**
     * The URL that points to an image used in the push notification.
     */
    inline Message& WithImageUrl(const char* value) { SetImageUrl(value); return *this;}


    /**
     * The JSON payload used for a silent push.
     */
    inline const Aws::String& GetJsonBody() const{ return m_jsonBody; }

    /**
     * The JSON payload used for a silent push.
     */
    inline bool JsonBodyHasBeenSet() const { return m_jsonBodyHasBeenSet; }

    /**
     * The JSON payload used for a silent push.
     */
    inline void SetJsonBody(const Aws::String& value) { m_jsonBodyHasBeenSet = true; m_jsonBody = value; }

    /**
     * The JSON payload used for a silent push.
     */
    inline void SetJsonBody(Aws::String&& value) { m_jsonBodyHasBeenSet = true; m_jsonBody = std::move(value); }

    /**
     * The JSON payload used for a silent push.
     */
    inline void SetJsonBody(const char* value) { m_jsonBodyHasBeenSet = true; m_jsonBody.assign(value); }

    /**
     * The JSON payload used for a silent push.
     */
    inline Message& WithJsonBody(const Aws::String& value) { SetJsonBody(value); return *this;}

    /**
     * The JSON payload used for a silent push.
     */
    inline Message& WithJsonBody(Aws::String&& value) { SetJsonBody(std::move(value)); return *this;}

    /**
     * The JSON payload used for a silent push.
     */
    inline Message& WithJsonBody(const char* value) { SetJsonBody(value); return *this;}


    /**
     * A URL that refers to the location of an image or video that you want to display
     * in the push notification.
     */
    inline const Aws::String& GetMediaUrl() const{ return m_mediaUrl; }

    /**
     * A URL that refers to the location of an image or video that you want to display
     * in the push notification.
     */
    inline bool MediaUrlHasBeenSet() const { return m_mediaUrlHasBeenSet; }

    /**
     * A URL that refers to the location of an image or video that you want to display
     * in the push notification.
     */
    inline void SetMediaUrl(const Aws::String& value) { m_mediaUrlHasBeenSet = true; m_mediaUrl = value; }

    /**
     * A URL that refers to the location of an image or video that you want to display
     * in the push notification.
     */
    inline void SetMediaUrl(Aws::String&& value) { m_mediaUrlHasBeenSet = true; m_mediaUrl = std::move(value); }

    /**
     * A URL that refers to the location of an image or video that you want to display
     * in the push notification.
     */
    inline void SetMediaUrl(const char* value) { m_mediaUrlHasBeenSet = true; m_mediaUrl.assign(value); }

    /**
     * A URL that refers to the location of an image or video that you want to display
     * in the push notification.
     */
    inline Message& WithMediaUrl(const Aws::String& value) { SetMediaUrl(value); return *this;}

    /**
     * A URL that refers to the location of an image or video that you want to display
     * in the push notification.
     */
    inline Message& WithMediaUrl(Aws::String&& value) { SetMediaUrl(std::move(value)); return *this;}

    /**
     * A URL that refers to the location of an image or video that you want to display
     * in the push notification.
     */
    inline Message& WithMediaUrl(const char* value) { SetMediaUrl(value); return *this;}


    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline const Aws::String& GetRawContent() const{ return m_rawContent; }

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline bool RawContentHasBeenSet() const { return m_rawContentHasBeenSet; }

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline void SetRawContent(const Aws::String& value) { m_rawContentHasBeenSet = true; m_rawContent = value; }

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline void SetRawContent(Aws::String&& value) { m_rawContentHasBeenSet = true; m_rawContent = std::move(value); }

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline void SetRawContent(const char* value) { m_rawContentHasBeenSet = true; m_rawContent.assign(value); }

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline Message& WithRawContent(const Aws::String& value) { SetRawContent(value); return *this;}

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline Message& WithRawContent(Aws::String&& value) { SetRawContent(std::move(value)); return *this;}

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline Message& WithRawContent(const char* value) { SetRawContent(value); return *this;}


    /**
     * Indicates if the message should display on the users device.

Silent pushes can
     * be used for Remote Configuration and Phone Home use cases. 
     */
    inline bool GetSilentPush() const{ return m_silentPush; }

    /**
     * Indicates if the message should display on the users device.

Silent pushes can
     * be used for Remote Configuration and Phone Home use cases. 
     */
    inline bool SilentPushHasBeenSet() const { return m_silentPushHasBeenSet; }

    /**
     * Indicates if the message should display on the users device.

Silent pushes can
     * be used for Remote Configuration and Phone Home use cases. 
     */
    inline void SetSilentPush(bool value) { m_silentPushHasBeenSet = true; m_silentPush = value; }

    /**
     * Indicates if the message should display on the users device.

Silent pushes can
     * be used for Remote Configuration and Phone Home use cases. 
     */
    inline Message& WithSilentPush(bool value) { SetSilentPush(value); return *this;}


    /**
     * This parameter specifies how long (in seconds) the message should be kept if the
     * service is unable to deliver the notification the first time. If the value is 0,
     * it treats the notification as if it expires immediately and does not store the
     * notification or attempt to redeliver it. This value is converted to the
     * expiration field when sent to the service. It only applies to APNs and GCM
     */
    inline int GetTimeToLive() const{ return m_timeToLive; }

    /**
     * This parameter specifies how long (in seconds) the message should be kept if the
     * service is unable to deliver the notification the first time. If the value is 0,
     * it treats the notification as if it expires immediately and does not store the
     * notification or attempt to redeliver it. This value is converted to the
     * expiration field when sent to the service. It only applies to APNs and GCM
     */
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }

    /**
     * This parameter specifies how long (in seconds) the message should be kept if the
     * service is unable to deliver the notification the first time. If the value is 0,
     * it treats the notification as if it expires immediately and does not store the
     * notification or attempt to redeliver it. This value is converted to the
     * expiration field when sent to the service. It only applies to APNs and GCM
     */
    inline void SetTimeToLive(int value) { m_timeToLiveHasBeenSet = true; m_timeToLive = value; }

    /**
     * This parameter specifies how long (in seconds) the message should be kept if the
     * service is unable to deliver the notification the first time. If the value is 0,
     * it treats the notification as if it expires immediately and does not store the
     * notification or attempt to redeliver it. This value is converted to the
     * expiration field when sent to the service. It only applies to APNs and GCM
     */
    inline Message& WithTimeToLive(int value) { SetTimeToLive(value); return *this;}


    /**
     * The message title that displays above the message on the user's device.
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * The message title that displays above the message on the user's device.
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * The message title that displays above the message on the user's device.
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * The message title that displays above the message on the user's device.
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * The message title that displays above the message on the user's device.
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * The message title that displays above the message on the user's device.
     */
    inline Message& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * The message title that displays above the message on the user's device.
     */
    inline Message& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * The message title that displays above the message on the user's device.
     */
    inline Message& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline Message& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline Message& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
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
