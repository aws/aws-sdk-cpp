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
   * <p>Specifies the default settings and content for a push notification that's
   * sent directly to an endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DefaultPushNotificationMessage">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API DefaultPushNotificationMessage
  {
  public:
    DefaultPushNotificationMessage();
    DefaultPushNotificationMessage(Aws::Utils::Json::JsonView jsonValue);
    DefaultPushNotificationMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default action to occur if a recipient taps the push notification. Valid
     * values are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the
     * foreground app if it was sent to the background. This is the default
     * action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a designated
     * user interface in the app. This setting uses the deep-linking features of the
     * iOS and Android platforms.</p></li> <li><p>URL - The default mobile browser on
     * the recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>The default action to occur if a recipient taps the push notification. Valid
     * values are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the
     * foreground app if it was sent to the background. This is the default
     * action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a designated
     * user interface in the app. This setting uses the deep-linking features of the
     * iOS and Android platforms.</p></li> <li><p>URL - The default mobile browser on
     * the recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The default action to occur if a recipient taps the push notification. Valid
     * values are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the
     * foreground app if it was sent to the background. This is the default
     * action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a designated
     * user interface in the app. This setting uses the deep-linking features of the
     * iOS and Android platforms.</p></li> <li><p>URL - The default mobile browser on
     * the recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The default action to occur if a recipient taps the push notification. Valid
     * values are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the
     * foreground app if it was sent to the background. This is the default
     * action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a designated
     * user interface in the app. This setting uses the deep-linking features of the
     * iOS and Android platforms.</p></li> <li><p>URL - The default mobile browser on
     * the recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The default action to occur if a recipient taps the push notification. Valid
     * values are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the
     * foreground app if it was sent to the background. This is the default
     * action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a designated
     * user interface in the app. This setting uses the deep-linking features of the
     * iOS and Android platforms.</p></li> <li><p>URL - The default mobile browser on
     * the recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline DefaultPushNotificationMessage& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>The default action to occur if a recipient taps the push notification. Valid
     * values are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the
     * foreground app if it was sent to the background. This is the default
     * action.</p></li> <li><p>DEEP_LINK - Your app opens and displays a designated
     * user interface in the app. This setting uses the deep-linking features of the
     * iOS and Android platforms.</p></li> <li><p>URL - The default mobile browser on
     * the recipient's device opens and loads the web page at a URL that you
     * specify.</p></li></ul>
     */
    inline DefaultPushNotificationMessage& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The default body of the notification message.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>The default body of the notification message.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The default body of the notification message.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The default body of the notification message.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The default body of the notification message.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>The default body of the notification message.</p>
     */
    inline DefaultPushNotificationMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The default body of the notification message.</p>
     */
    inline DefaultPushNotificationMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>The default body of the notification message.</p>
     */
    inline DefaultPushNotificationMessage& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>The JSON data payload to use for the default push notification, if the
     * notification is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetData() const{ return m_data; }

    /**
     * <p>The JSON data payload to use for the default push notification, if the
     * notification is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The JSON data payload to use for the default push notification, if the
     * notification is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline void SetData(const Aws::Map<Aws::String, Aws::String>& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The JSON data payload to use for the default push notification, if the
     * notification is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline void SetData(Aws::Map<Aws::String, Aws::String>&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The JSON data payload to use for the default push notification, if the
     * notification is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline DefaultPushNotificationMessage& WithData(const Aws::Map<Aws::String, Aws::String>& value) { SetData(value); return *this;}

    /**
     * <p>The JSON data payload to use for the default push notification, if the
     * notification is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline DefaultPushNotificationMessage& WithData(Aws::Map<Aws::String, Aws::String>&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The JSON data payload to use for the default push notification, if the
     * notification is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline DefaultPushNotificationMessage& AddData(const Aws::String& key, const Aws::String& value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }

    /**
     * <p>The JSON data payload to use for the default push notification, if the
     * notification is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline DefaultPushNotificationMessage& AddData(Aws::String&& key, const Aws::String& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }

    /**
     * <p>The JSON data payload to use for the default push notification, if the
     * notification is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline DefaultPushNotificationMessage& AddData(const Aws::String& key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The JSON data payload to use for the default push notification, if the
     * notification is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline DefaultPushNotificationMessage& AddData(Aws::String&& key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The JSON data payload to use for the default push notification, if the
     * notification is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline DefaultPushNotificationMessage& AddData(const char* key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The JSON data payload to use for the default push notification, if the
     * notification is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline DefaultPushNotificationMessage& AddData(Aws::String&& key, const char* value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }

    /**
     * <p>The JSON data payload to use for the default push notification, if the
     * notification is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline DefaultPushNotificationMessage& AddData(const char* key, const char* value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }


    /**
     * <p>Specifies whether the default notification is a silent push notification,
     * which is a push notification that doesn't display on a recipient's device.
     * Silent push notifications can be used for cases such as updating an app's
     * configuration or delivering messages to an in-app notification center.</p>
     */
    inline bool GetSilentPush() const{ return m_silentPush; }

    /**
     * <p>Specifies whether the default notification is a silent push notification,
     * which is a push notification that doesn't display on a recipient's device.
     * Silent push notifications can be used for cases such as updating an app's
     * configuration or delivering messages to an in-app notification center.</p>
     */
    inline bool SilentPushHasBeenSet() const { return m_silentPushHasBeenSet; }

    /**
     * <p>Specifies whether the default notification is a silent push notification,
     * which is a push notification that doesn't display on a recipient's device.
     * Silent push notifications can be used for cases such as updating an app's
     * configuration or delivering messages to an in-app notification center.</p>
     */
    inline void SetSilentPush(bool value) { m_silentPushHasBeenSet = true; m_silentPush = value; }

    /**
     * <p>Specifies whether the default notification is a silent push notification,
     * which is a push notification that doesn't display on a recipient's device.
     * Silent push notifications can be used for cases such as updating an app's
     * configuration or delivering messages to an in-app notification center.</p>
     */
    inline DefaultPushNotificationMessage& WithSilentPush(bool value) { SetSilentPush(value); return *this;}


    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline DefaultPushNotificationMessage& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline DefaultPushNotificationMessage& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline DefaultPushNotificationMessage& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline DefaultPushNotificationMessage& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline DefaultPushNotificationMessage& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline DefaultPushNotificationMessage& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline DefaultPushNotificationMessage& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline DefaultPushNotificationMessage& AddSubstitutions(const char* key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }


    /**
     * <p>The default title to display above the notification message on a recipient's
     * device.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The default title to display above the notification message on a recipient's
     * device.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The default title to display above the notification message on a recipient's
     * device.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The default title to display above the notification message on a recipient's
     * device.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The default title to display above the notification message on a recipient's
     * device.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The default title to display above the notification message on a recipient's
     * device.</p>
     */
    inline DefaultPushNotificationMessage& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The default title to display above the notification message on a recipient's
     * device.</p>
     */
    inline DefaultPushNotificationMessage& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The default title to display above the notification message on a recipient's
     * device.</p>
     */
    inline DefaultPushNotificationMessage& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The default URL to open in a recipient's default mobile browser, if a
     * recipient taps the push notification and the value of the Action property is
     * URL.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The default URL to open in a recipient's default mobile browser, if a
     * recipient taps the push notification and the value of the Action property is
     * URL.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The default URL to open in a recipient's default mobile browser, if a
     * recipient taps the push notification and the value of the Action property is
     * URL.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The default URL to open in a recipient's default mobile browser, if a
     * recipient taps the push notification and the value of the Action property is
     * URL.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The default URL to open in a recipient's default mobile browser, if a
     * recipient taps the push notification and the value of the Action property is
     * URL.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The default URL to open in a recipient's default mobile browser, if a
     * recipient taps the push notification and the value of the Action property is
     * URL.</p>
     */
    inline DefaultPushNotificationMessage& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The default URL to open in a recipient's default mobile browser, if a
     * recipient taps the push notification and the value of the Action property is
     * URL.</p>
     */
    inline DefaultPushNotificationMessage& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The default URL to open in a recipient's default mobile browser, if a
     * recipient taps the push notification and the value of the Action property is
     * URL.</p>
     */
    inline DefaultPushNotificationMessage& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Action m_action;
    bool m_actionHasBeenSet;

    Aws::String m_body;
    bool m_bodyHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_data;
    bool m_dataHasBeenSet;

    bool m_silentPush;
    bool m_silentPushHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_substitutions;
    bool m_substitutionsHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;

    Aws::String m_url;
    bool m_urlHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
