﻿/*
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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * Baidu Message.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/BaiduMessage">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API BaiduMessage
  {
  public:
    BaiduMessage();
    BaiduMessage(Aws::Utils::Json::JsonView jsonValue);
    BaiduMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The action that occurs if the user taps a push notification delivered by the
     * campaign: OPEN_APP - Your app launches, or it becomes the foreground app if it
     * has been sent to the background. This is the default action. DEEP_LINK - Uses
     * deep linking features in iOS and Android to open your app and display a
     * designated user interface within the app. URL - The default mobile browser on
     * the user's device launches and opens a web page at the URL you specify. Possible
     * values include: OPEN_APP | DEEP_LINK | URL
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * The action that occurs if the user taps a push notification delivered by the
     * campaign: OPEN_APP - Your app launches, or it becomes the foreground app if it
     * has been sent to the background. This is the default action. DEEP_LINK - Uses
     * deep linking features in iOS and Android to open your app and display a
     * designated user interface within the app. URL - The default mobile browser on
     * the user's device launches and opens a web page at the URL you specify. Possible
     * values include: OPEN_APP | DEEP_LINK | URL
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * The action that occurs if the user taps a push notification delivered by the
     * campaign: OPEN_APP - Your app launches, or it becomes the foreground app if it
     * has been sent to the background. This is the default action. DEEP_LINK - Uses
     * deep linking features in iOS and Android to open your app and display a
     * designated user interface within the app. URL - The default mobile browser on
     * the user's device launches and opens a web page at the URL you specify. Possible
     * values include: OPEN_APP | DEEP_LINK | URL
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * The action that occurs if the user taps a push notification delivered by the
     * campaign: OPEN_APP - Your app launches, or it becomes the foreground app if it
     * has been sent to the background. This is the default action. DEEP_LINK - Uses
     * deep linking features in iOS and Android to open your app and display a
     * designated user interface within the app. URL - The default mobile browser on
     * the user's device launches and opens a web page at the URL you specify. Possible
     * values include: OPEN_APP | DEEP_LINK | URL
     */
    inline BaiduMessage& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * The action that occurs if the user taps a push notification delivered by the
     * campaign: OPEN_APP - Your app launches, or it becomes the foreground app if it
     * has been sent to the background. This is the default action. DEEP_LINK - Uses
     * deep linking features in iOS and Android to open your app and display a
     * designated user interface within the app. URL - The default mobile browser on
     * the user's device launches and opens a web page at the URL you specify. Possible
     * values include: OPEN_APP | DEEP_LINK | URL
     */
    inline BaiduMessage& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * The message body of the notification.
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * The message body of the notification.
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * The message body of the notification.
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * The message body of the notification.
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * The message body of the notification.
     */
    inline BaiduMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * The message body of the notification.
     */
    inline BaiduMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * The message body of the notification.
     */
    inline BaiduMessage& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetData() const{ return m_data; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline void SetData(const Aws::Map<Aws::String, Aws::String>& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline void SetData(Aws::Map<Aws::String, Aws::String>&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline BaiduMessage& WithData(const Aws::Map<Aws::String, Aws::String>& value) { SetData(value); return *this;}

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline BaiduMessage& WithData(Aws::Map<Aws::String, Aws::String>&& value) { SetData(std::move(value)); return *this;}

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline BaiduMessage& AddData(const Aws::String& key, const Aws::String& value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline BaiduMessage& AddData(Aws::String&& key, const Aws::String& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline BaiduMessage& AddData(const Aws::String& key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline BaiduMessage& AddData(Aws::String&& key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline BaiduMessage& AddData(const char* key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline BaiduMessage& AddData(Aws::String&& key, const char* value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline BaiduMessage& AddData(const char* key, const char* value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }


    /**
     * The icon image name of the asset saved in your application.
     */
    inline const Aws::String& GetIconReference() const{ return m_iconReference; }

    /**
     * The icon image name of the asset saved in your application.
     */
    inline void SetIconReference(const Aws::String& value) { m_iconReferenceHasBeenSet = true; m_iconReference = value; }

    /**
     * The icon image name of the asset saved in your application.
     */
    inline void SetIconReference(Aws::String&& value) { m_iconReferenceHasBeenSet = true; m_iconReference = std::move(value); }

    /**
     * The icon image name of the asset saved in your application.
     */
    inline void SetIconReference(const char* value) { m_iconReferenceHasBeenSet = true; m_iconReference.assign(value); }

    /**
     * The icon image name of the asset saved in your application.
     */
    inline BaiduMessage& WithIconReference(const Aws::String& value) { SetIconReference(value); return *this;}

    /**
     * The icon image name of the asset saved in your application.
     */
    inline BaiduMessage& WithIconReference(Aws::String&& value) { SetIconReference(std::move(value)); return *this;}

    /**
     * The icon image name of the asset saved in your application.
     */
    inline BaiduMessage& WithIconReference(const char* value) { SetIconReference(value); return *this;}


    /**
     * The URL that points to an image used as the large icon to the notification
     * content view.
     */
    inline const Aws::String& GetImageIconUrl() const{ return m_imageIconUrl; }

    /**
     * The URL that points to an image used as the large icon to the notification
     * content view.
     */
    inline void SetImageIconUrl(const Aws::String& value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl = value; }

    /**
     * The URL that points to an image used as the large icon to the notification
     * content view.
     */
    inline void SetImageIconUrl(Aws::String&& value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl = std::move(value); }

    /**
     * The URL that points to an image used as the large icon to the notification
     * content view.
     */
    inline void SetImageIconUrl(const char* value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl.assign(value); }

    /**
     * The URL that points to an image used as the large icon to the notification
     * content view.
     */
    inline BaiduMessage& WithImageIconUrl(const Aws::String& value) { SetImageIconUrl(value); return *this;}

    /**
     * The URL that points to an image used as the large icon to the notification
     * content view.
     */
    inline BaiduMessage& WithImageIconUrl(Aws::String&& value) { SetImageIconUrl(std::move(value)); return *this;}

    /**
     * The URL that points to an image used as the large icon to the notification
     * content view.
     */
    inline BaiduMessage& WithImageIconUrl(const char* value) { SetImageIconUrl(value); return *this;}


    /**
     * The URL that points to an image used in the push notification.
     */
    inline const Aws::String& GetImageUrl() const{ return m_imageUrl; }

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
    inline BaiduMessage& WithImageUrl(const Aws::String& value) { SetImageUrl(value); return *this;}

    /**
     * The URL that points to an image used in the push notification.
     */
    inline BaiduMessage& WithImageUrl(Aws::String&& value) { SetImageUrl(std::move(value)); return *this;}

    /**
     * The URL that points to an image used in the push notification.
     */
    inline BaiduMessage& WithImageUrl(const char* value) { SetImageUrl(value); return *this;}


    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline const Aws::String& GetRawContent() const{ return m_rawContent; }

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
    inline BaiduMessage& WithRawContent(const Aws::String& value) { SetRawContent(value); return *this;}

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline BaiduMessage& WithRawContent(Aws::String&& value) { SetRawContent(std::move(value)); return *this;}

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline BaiduMessage& WithRawContent(const char* value) { SetRawContent(value); return *this;}


    /**
     * Indicates if the message should display on the users device. Silent pushes can
     * be used for Remote Configuration and Phone Home use cases.
     */
    inline bool GetSilentPush() const{ return m_silentPush; }

    /**
     * Indicates if the message should display on the users device. Silent pushes can
     * be used for Remote Configuration and Phone Home use cases.
     */
    inline void SetSilentPush(bool value) { m_silentPushHasBeenSet = true; m_silentPush = value; }

    /**
     * Indicates if the message should display on the users device. Silent pushes can
     * be used for Remote Configuration and Phone Home use cases.
     */
    inline BaiduMessage& WithSilentPush(bool value) { SetSilentPush(value); return *this;}


    /**
     * The URL that points to an image used as the small icon for the notification
     * which will be used to represent the notification in the status bar and content
     * view
     */
    inline const Aws::String& GetSmallImageIconUrl() const{ return m_smallImageIconUrl; }

    /**
     * The URL that points to an image used as the small icon for the notification
     * which will be used to represent the notification in the status bar and content
     * view
     */
    inline void SetSmallImageIconUrl(const Aws::String& value) { m_smallImageIconUrlHasBeenSet = true; m_smallImageIconUrl = value; }

    /**
     * The URL that points to an image used as the small icon for the notification
     * which will be used to represent the notification in the status bar and content
     * view
     */
    inline void SetSmallImageIconUrl(Aws::String&& value) { m_smallImageIconUrlHasBeenSet = true; m_smallImageIconUrl = std::move(value); }

    /**
     * The URL that points to an image used as the small icon for the notification
     * which will be used to represent the notification in the status bar and content
     * view
     */
    inline void SetSmallImageIconUrl(const char* value) { m_smallImageIconUrlHasBeenSet = true; m_smallImageIconUrl.assign(value); }

    /**
     * The URL that points to an image used as the small icon for the notification
     * which will be used to represent the notification in the status bar and content
     * view
     */
    inline BaiduMessage& WithSmallImageIconUrl(const Aws::String& value) { SetSmallImageIconUrl(value); return *this;}

    /**
     * The URL that points to an image used as the small icon for the notification
     * which will be used to represent the notification in the status bar and content
     * view
     */
    inline BaiduMessage& WithSmallImageIconUrl(Aws::String&& value) { SetSmallImageIconUrl(std::move(value)); return *this;}

    /**
     * The URL that points to an image used as the small icon for the notification
     * which will be used to represent the notification in the status bar and content
     * view
     */
    inline BaiduMessage& WithSmallImageIconUrl(const char* value) { SetSmallImageIconUrl(value); return *this;}


    /**
     * Indicates a sound to play when the device receives the notification. Supports
     * default, or the filename of a sound resource bundled in the app. Android sound
     * files must reside in /res/raw/
     */
    inline const Aws::String& GetSound() const{ return m_sound; }

    /**
     * Indicates a sound to play when the device receives the notification. Supports
     * default, or the filename of a sound resource bundled in the app. Android sound
     * files must reside in /res/raw/
     */
    inline void SetSound(const Aws::String& value) { m_soundHasBeenSet = true; m_sound = value; }

    /**
     * Indicates a sound to play when the device receives the notification. Supports
     * default, or the filename of a sound resource bundled in the app. Android sound
     * files must reside in /res/raw/
     */
    inline void SetSound(Aws::String&& value) { m_soundHasBeenSet = true; m_sound = std::move(value); }

    /**
     * Indicates a sound to play when the device receives the notification. Supports
     * default, or the filename of a sound resource bundled in the app. Android sound
     * files must reside in /res/raw/
     */
    inline void SetSound(const char* value) { m_soundHasBeenSet = true; m_sound.assign(value); }

    /**
     * Indicates a sound to play when the device receives the notification. Supports
     * default, or the filename of a sound resource bundled in the app. Android sound
     * files must reside in /res/raw/
     */
    inline BaiduMessage& WithSound(const Aws::String& value) { SetSound(value); return *this;}

    /**
     * Indicates a sound to play when the device receives the notification. Supports
     * default, or the filename of a sound resource bundled in the app. Android sound
     * files must reside in /res/raw/
     */
    inline BaiduMessage& WithSound(Aws::String&& value) { SetSound(std::move(value)); return *this;}

    /**
     * Indicates a sound to play when the device receives the notification. Supports
     * default, or the filename of a sound resource bundled in the app. Android sound
     * files must reside in /res/raw/
     */
    inline BaiduMessage& WithSound(const char* value) { SetSound(value); return *this;}


    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline BaiduMessage& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline BaiduMessage& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline BaiduMessage& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline BaiduMessage& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline BaiduMessage& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline BaiduMessage& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline BaiduMessage& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline BaiduMessage& AddSubstitutions(const char* key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }


    /**
     * This parameter specifies how long (in seconds) the message should be kept in
     * Baidu storage if the device is offline. The and the default value and the
     * maximum time to live supported is 7 days (604800 seconds)
     */
    inline int GetTimeToLive() const{ return m_timeToLive; }

    /**
     * This parameter specifies how long (in seconds) the message should be kept in
     * Baidu storage if the device is offline. The and the default value and the
     * maximum time to live supported is 7 days (604800 seconds)
     */
    inline void SetTimeToLive(int value) { m_timeToLiveHasBeenSet = true; m_timeToLive = value; }

    /**
     * This parameter specifies how long (in seconds) the message should be kept in
     * Baidu storage if the device is offline. The and the default value and the
     * maximum time to live supported is 7 days (604800 seconds)
     */
    inline BaiduMessage& WithTimeToLive(int value) { SetTimeToLive(value); return *this;}


    /**
     * The message title that displays above the message on the user's device.
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

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
    inline BaiduMessage& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * The message title that displays above the message on the user's device.
     */
    inline BaiduMessage& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * The message title that displays above the message on the user's device.
     */
    inline BaiduMessage& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

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
    inline BaiduMessage& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline BaiduMessage& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline BaiduMessage& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Action m_action;
    bool m_actionHasBeenSet;

    Aws::String m_body;
    bool m_bodyHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_data;
    bool m_dataHasBeenSet;

    Aws::String m_iconReference;
    bool m_iconReferenceHasBeenSet;

    Aws::String m_imageIconUrl;
    bool m_imageIconUrlHasBeenSet;

    Aws::String m_imageUrl;
    bool m_imageUrlHasBeenSet;

    Aws::String m_rawContent;
    bool m_rawContentHasBeenSet;

    bool m_silentPush;
    bool m_silentPushHasBeenSet;

    Aws::String m_smallImageIconUrl;
    bool m_smallImageIconUrlHasBeenSet;

    Aws::String m_sound;
    bool m_soundHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_substitutions;
    bool m_substitutionsHasBeenSet;

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
