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
   * <p>Specifies the settings for a one-time message that's sent directly to an
   * endpoint through the APNs (Apple Push Notification service)
   * channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/APNSMessage">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API APNSMessage
  {
  public:
    APNSMessage();
    APNSMessage(Aws::Utils::Json::JsonView jsonValue);
    APNSMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action to occur if the recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This setting uses the deep-linking features of the iOS
     * platform.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>The action to occur if the recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This setting uses the deep-linking features of the iOS
     * platform.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action to occur if the recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This setting uses the deep-linking features of the iOS
     * platform.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to occur if the recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This setting uses the deep-linking features of the iOS
     * platform.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action to occur if the recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This setting uses the deep-linking features of the iOS
     * platform.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline APNSMessage& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>The action to occur if the recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This setting uses the deep-linking features of the iOS
     * platform.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline APNSMessage& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The key that indicates whether and how to modify the badge of your app's icon
     * when the recipient receives the push notification. If this key isn't included in
     * the dictionary, the badge doesn't change. To remove the badge, set this value to
     * 0.</p>
     */
    inline int GetBadge() const{ return m_badge; }

    /**
     * <p>The key that indicates whether and how to modify the badge of your app's icon
     * when the recipient receives the push notification. If this key isn't included in
     * the dictionary, the badge doesn't change. To remove the badge, set this value to
     * 0.</p>
     */
    inline bool BadgeHasBeenSet() const { return m_badgeHasBeenSet; }

    /**
     * <p>The key that indicates whether and how to modify the badge of your app's icon
     * when the recipient receives the push notification. If this key isn't included in
     * the dictionary, the badge doesn't change. To remove the badge, set this value to
     * 0.</p>
     */
    inline void SetBadge(int value) { m_badgeHasBeenSet = true; m_badge = value; }

    /**
     * <p>The key that indicates whether and how to modify the badge of your app's icon
     * when the recipient receives the push notification. If this key isn't included in
     * the dictionary, the badge doesn't change. To remove the badge, set this value to
     * 0.</p>
     */
    inline APNSMessage& WithBadge(int value) { SetBadge(value); return *this;}


    /**
     * <p>The body of the notification message.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>The body of the notification message.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The body of the notification message.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The body of the notification message.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The body of the notification message.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>The body of the notification message.</p>
     */
    inline APNSMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The body of the notification message.</p>
     */
    inline APNSMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>The body of the notification message.</p>
     */
    inline APNSMessage& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>The key that indicates the notification type for the push notification. This
     * key is a value that's defined by the identifier property of one of your app's
     * registered categories.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * <p>The key that indicates the notification type for the push notification. This
     * key is a value that's defined by the identifier property of one of your app's
     * registered categories.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The key that indicates the notification type for the push notification. This
     * key is a value that's defined by the identifier property of one of your app's
     * registered categories.</p>
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The key that indicates the notification type for the push notification. This
     * key is a value that's defined by the identifier property of one of your app's
     * registered categories.</p>
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The key that indicates the notification type for the push notification. This
     * key is a value that's defined by the identifier property of one of your app's
     * registered categories.</p>
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * <p>The key that indicates the notification type for the push notification. This
     * key is a value that's defined by the identifier property of one of your app's
     * registered categories.</p>
     */
    inline APNSMessage& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * <p>The key that indicates the notification type for the push notification. This
     * key is a value that's defined by the identifier property of one of your app's
     * registered categories.</p>
     */
    inline APNSMessage& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p>The key that indicates the notification type for the push notification. This
     * key is a value that's defined by the identifier property of one of your app's
     * registered categories.</p>
     */
    inline APNSMessage& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * <p>An arbitrary identifier that, if assigned to multiple messages, APNs uses to
     * coalesce the messages into a single push notification instead of delivering each
     * message individually. This value can't exceed 64 bytes.</p> <p>Amazon Pinpoint
     * specifies this value in the apns-collapse-id request header when it sends the
     * notification message to APNs.</p>
     */
    inline const Aws::String& GetCollapseId() const{ return m_collapseId; }

    /**
     * <p>An arbitrary identifier that, if assigned to multiple messages, APNs uses to
     * coalesce the messages into a single push notification instead of delivering each
     * message individually. This value can't exceed 64 bytes.</p> <p>Amazon Pinpoint
     * specifies this value in the apns-collapse-id request header when it sends the
     * notification message to APNs.</p>
     */
    inline bool CollapseIdHasBeenSet() const { return m_collapseIdHasBeenSet; }

    /**
     * <p>An arbitrary identifier that, if assigned to multiple messages, APNs uses to
     * coalesce the messages into a single push notification instead of delivering each
     * message individually. This value can't exceed 64 bytes.</p> <p>Amazon Pinpoint
     * specifies this value in the apns-collapse-id request header when it sends the
     * notification message to APNs.</p>
     */
    inline void SetCollapseId(const Aws::String& value) { m_collapseIdHasBeenSet = true; m_collapseId = value; }

    /**
     * <p>An arbitrary identifier that, if assigned to multiple messages, APNs uses to
     * coalesce the messages into a single push notification instead of delivering each
     * message individually. This value can't exceed 64 bytes.</p> <p>Amazon Pinpoint
     * specifies this value in the apns-collapse-id request header when it sends the
     * notification message to APNs.</p>
     */
    inline void SetCollapseId(Aws::String&& value) { m_collapseIdHasBeenSet = true; m_collapseId = std::move(value); }

    /**
     * <p>An arbitrary identifier that, if assigned to multiple messages, APNs uses to
     * coalesce the messages into a single push notification instead of delivering each
     * message individually. This value can't exceed 64 bytes.</p> <p>Amazon Pinpoint
     * specifies this value in the apns-collapse-id request header when it sends the
     * notification message to APNs.</p>
     */
    inline void SetCollapseId(const char* value) { m_collapseIdHasBeenSet = true; m_collapseId.assign(value); }

    /**
     * <p>An arbitrary identifier that, if assigned to multiple messages, APNs uses to
     * coalesce the messages into a single push notification instead of delivering each
     * message individually. This value can't exceed 64 bytes.</p> <p>Amazon Pinpoint
     * specifies this value in the apns-collapse-id request header when it sends the
     * notification message to APNs.</p>
     */
    inline APNSMessage& WithCollapseId(const Aws::String& value) { SetCollapseId(value); return *this;}

    /**
     * <p>An arbitrary identifier that, if assigned to multiple messages, APNs uses to
     * coalesce the messages into a single push notification instead of delivering each
     * message individually. This value can't exceed 64 bytes.</p> <p>Amazon Pinpoint
     * specifies this value in the apns-collapse-id request header when it sends the
     * notification message to APNs.</p>
     */
    inline APNSMessage& WithCollapseId(Aws::String&& value) { SetCollapseId(std::move(value)); return *this;}

    /**
     * <p>An arbitrary identifier that, if assigned to multiple messages, APNs uses to
     * coalesce the messages into a single push notification instead of delivering each
     * message individually. This value can't exceed 64 bytes.</p> <p>Amazon Pinpoint
     * specifies this value in the apns-collapse-id request header when it sends the
     * notification message to APNs.</p>
     */
    inline APNSMessage& WithCollapseId(const char* value) { SetCollapseId(value); return *this;}


    /**
     * <p>The JSON payload to use for a silent push notification. This payload is added
     * to the data.pinpoint.jsonBody object of the notification.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetData() const{ return m_data; }

    /**
     * <p>The JSON payload to use for a silent push notification. This payload is added
     * to the data.pinpoint.jsonBody object of the notification.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The JSON payload to use for a silent push notification. This payload is added
     * to the data.pinpoint.jsonBody object of the notification.</p>
     */
    inline void SetData(const Aws::Map<Aws::String, Aws::String>& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The JSON payload to use for a silent push notification. This payload is added
     * to the data.pinpoint.jsonBody object of the notification.</p>
     */
    inline void SetData(Aws::Map<Aws::String, Aws::String>&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The JSON payload to use for a silent push notification. This payload is added
     * to the data.pinpoint.jsonBody object of the notification.</p>
     */
    inline APNSMessage& WithData(const Aws::Map<Aws::String, Aws::String>& value) { SetData(value); return *this;}

    /**
     * <p>The JSON payload to use for a silent push notification. This payload is added
     * to the data.pinpoint.jsonBody object of the notification.</p>
     */
    inline APNSMessage& WithData(Aws::Map<Aws::String, Aws::String>&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The JSON payload to use for a silent push notification. This payload is added
     * to the data.pinpoint.jsonBody object of the notification.</p>
     */
    inline APNSMessage& AddData(const Aws::String& key, const Aws::String& value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }

    /**
     * <p>The JSON payload to use for a silent push notification. This payload is added
     * to the data.pinpoint.jsonBody object of the notification.</p>
     */
    inline APNSMessage& AddData(Aws::String&& key, const Aws::String& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }

    /**
     * <p>The JSON payload to use for a silent push notification. This payload is added
     * to the data.pinpoint.jsonBody object of the notification.</p>
     */
    inline APNSMessage& AddData(const Aws::String& key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The JSON payload to use for a silent push notification. This payload is added
     * to the data.pinpoint.jsonBody object of the notification.</p>
     */
    inline APNSMessage& AddData(Aws::String&& key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The JSON payload to use for a silent push notification. This payload is added
     * to the data.pinpoint.jsonBody object of the notification.</p>
     */
    inline APNSMessage& AddData(const char* key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The JSON payload to use for a silent push notification. This payload is added
     * to the data.pinpoint.jsonBody object of the notification.</p>
     */
    inline APNSMessage& AddData(Aws::String&& key, const char* value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }

    /**
     * <p>The JSON payload to use for a silent push notification. This payload is added
     * to the data.pinpoint.jsonBody object of the notification.</p>
     */
    inline APNSMessage& AddData(const char* key, const char* value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }


    /**
     * <p>The URL of an image or video to display in the push notification.</p>
     */
    inline const Aws::String& GetMediaUrl() const{ return m_mediaUrl; }

    /**
     * <p>The URL of an image or video to display in the push notification.</p>
     */
    inline bool MediaUrlHasBeenSet() const { return m_mediaUrlHasBeenSet; }

    /**
     * <p>The URL of an image or video to display in the push notification.</p>
     */
    inline void SetMediaUrl(const Aws::String& value) { m_mediaUrlHasBeenSet = true; m_mediaUrl = value; }

    /**
     * <p>The URL of an image or video to display in the push notification.</p>
     */
    inline void SetMediaUrl(Aws::String&& value) { m_mediaUrlHasBeenSet = true; m_mediaUrl = std::move(value); }

    /**
     * <p>The URL of an image or video to display in the push notification.</p>
     */
    inline void SetMediaUrl(const char* value) { m_mediaUrlHasBeenSet = true; m_mediaUrl.assign(value); }

    /**
     * <p>The URL of an image or video to display in the push notification.</p>
     */
    inline APNSMessage& WithMediaUrl(const Aws::String& value) { SetMediaUrl(value); return *this;}

    /**
     * <p>The URL of an image or video to display in the push notification.</p>
     */
    inline APNSMessage& WithMediaUrl(Aws::String&& value) { SetMediaUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of an image or video to display in the push notification.</p>
     */
    inline APNSMessage& WithMediaUrl(const char* value) { SetMediaUrl(value); return *this;}


    /**
     * <p>The authentication method that you want Amazon Pinpoint to use when
     * authenticating with Apple Push Notification service (APNs), CERTIFICATE or
     * TOKEN.</p>
     */
    inline const Aws::String& GetPreferredAuthenticationMethod() const{ return m_preferredAuthenticationMethod; }

    /**
     * <p>The authentication method that you want Amazon Pinpoint to use when
     * authenticating with Apple Push Notification service (APNs), CERTIFICATE or
     * TOKEN.</p>
     */
    inline bool PreferredAuthenticationMethodHasBeenSet() const { return m_preferredAuthenticationMethodHasBeenSet; }

    /**
     * <p>The authentication method that you want Amazon Pinpoint to use when
     * authenticating with Apple Push Notification service (APNs), CERTIFICATE or
     * TOKEN.</p>
     */
    inline void SetPreferredAuthenticationMethod(const Aws::String& value) { m_preferredAuthenticationMethodHasBeenSet = true; m_preferredAuthenticationMethod = value; }

    /**
     * <p>The authentication method that you want Amazon Pinpoint to use when
     * authenticating with Apple Push Notification service (APNs), CERTIFICATE or
     * TOKEN.</p>
     */
    inline void SetPreferredAuthenticationMethod(Aws::String&& value) { m_preferredAuthenticationMethodHasBeenSet = true; m_preferredAuthenticationMethod = std::move(value); }

    /**
     * <p>The authentication method that you want Amazon Pinpoint to use when
     * authenticating with Apple Push Notification service (APNs), CERTIFICATE or
     * TOKEN.</p>
     */
    inline void SetPreferredAuthenticationMethod(const char* value) { m_preferredAuthenticationMethodHasBeenSet = true; m_preferredAuthenticationMethod.assign(value); }

    /**
     * <p>The authentication method that you want Amazon Pinpoint to use when
     * authenticating with Apple Push Notification service (APNs), CERTIFICATE or
     * TOKEN.</p>
     */
    inline APNSMessage& WithPreferredAuthenticationMethod(const Aws::String& value) { SetPreferredAuthenticationMethod(value); return *this;}

    /**
     * <p>The authentication method that you want Amazon Pinpoint to use when
     * authenticating with Apple Push Notification service (APNs), CERTIFICATE or
     * TOKEN.</p>
     */
    inline APNSMessage& WithPreferredAuthenticationMethod(Aws::String&& value) { SetPreferredAuthenticationMethod(std::move(value)); return *this;}

    /**
     * <p>The authentication method that you want Amazon Pinpoint to use when
     * authenticating with Apple Push Notification service (APNs), CERTIFICATE or
     * TOKEN.</p>
     */
    inline APNSMessage& WithPreferredAuthenticationMethod(const char* value) { SetPreferredAuthenticationMethod(value); return *this;}


    /**
     * <p>para>5 - Low priority, the notification might be delayed, delivered as part
     * of a group, or throttled.</p>/listitem> <li><p>10 - High priority, the
     * notification is sent immediately. This is the default value. A high priority
     * notification should trigger an alert, play a sound, or badge your app's icon on
     * the recipient's device.</p></li>/para> <p>Amazon Pinpoint specifies this value
     * in the apns-priority request header when it sends the notification message to
     * APNs.</p> <p>The equivalent values for Firebase Cloud Messaging (FCM), formerly
     * Google Cloud Messaging (GCM), are normal, for 5, and high, for 10. If you
     * specify an FCM value for this property, Amazon Pinpoint accepts and converts the
     * value to the corresponding APNs value.</p>
     */
    inline const Aws::String& GetPriority() const{ return m_priority; }

    /**
     * <p>para>5 - Low priority, the notification might be delayed, delivered as part
     * of a group, or throttled.</p>/listitem> <li><p>10 - High priority, the
     * notification is sent immediately. This is the default value. A high priority
     * notification should trigger an alert, play a sound, or badge your app's icon on
     * the recipient's device.</p></li>/para> <p>Amazon Pinpoint specifies this value
     * in the apns-priority request header when it sends the notification message to
     * APNs.</p> <p>The equivalent values for Firebase Cloud Messaging (FCM), formerly
     * Google Cloud Messaging (GCM), are normal, for 5, and high, for 10. If you
     * specify an FCM value for this property, Amazon Pinpoint accepts and converts the
     * value to the corresponding APNs value.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>para>5 - Low priority, the notification might be delayed, delivered as part
     * of a group, or throttled.</p>/listitem> <li><p>10 - High priority, the
     * notification is sent immediately. This is the default value. A high priority
     * notification should trigger an alert, play a sound, or badge your app's icon on
     * the recipient's device.</p></li>/para> <p>Amazon Pinpoint specifies this value
     * in the apns-priority request header when it sends the notification message to
     * APNs.</p> <p>The equivalent values for Firebase Cloud Messaging (FCM), formerly
     * Google Cloud Messaging (GCM), are normal, for 5, and high, for 10. If you
     * specify an FCM value for this property, Amazon Pinpoint accepts and converts the
     * value to the corresponding APNs value.</p>
     */
    inline void SetPriority(const Aws::String& value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>para>5 - Low priority, the notification might be delayed, delivered as part
     * of a group, or throttled.</p>/listitem> <li><p>10 - High priority, the
     * notification is sent immediately. This is the default value. A high priority
     * notification should trigger an alert, play a sound, or badge your app's icon on
     * the recipient's device.</p></li>/para> <p>Amazon Pinpoint specifies this value
     * in the apns-priority request header when it sends the notification message to
     * APNs.</p> <p>The equivalent values for Firebase Cloud Messaging (FCM), formerly
     * Google Cloud Messaging (GCM), are normal, for 5, and high, for 10. If you
     * specify an FCM value for this property, Amazon Pinpoint accepts and converts the
     * value to the corresponding APNs value.</p>
     */
    inline void SetPriority(Aws::String&& value) { m_priorityHasBeenSet = true; m_priority = std::move(value); }

    /**
     * <p>para>5 - Low priority, the notification might be delayed, delivered as part
     * of a group, or throttled.</p>/listitem> <li><p>10 - High priority, the
     * notification is sent immediately. This is the default value. A high priority
     * notification should trigger an alert, play a sound, or badge your app's icon on
     * the recipient's device.</p></li>/para> <p>Amazon Pinpoint specifies this value
     * in the apns-priority request header when it sends the notification message to
     * APNs.</p> <p>The equivalent values for Firebase Cloud Messaging (FCM), formerly
     * Google Cloud Messaging (GCM), are normal, for 5, and high, for 10. If you
     * specify an FCM value for this property, Amazon Pinpoint accepts and converts the
     * value to the corresponding APNs value.</p>
     */
    inline void SetPriority(const char* value) { m_priorityHasBeenSet = true; m_priority.assign(value); }

    /**
     * <p>para>5 - Low priority, the notification might be delayed, delivered as part
     * of a group, or throttled.</p>/listitem> <li><p>10 - High priority, the
     * notification is sent immediately. This is the default value. A high priority
     * notification should trigger an alert, play a sound, or badge your app's icon on
     * the recipient's device.</p></li>/para> <p>Amazon Pinpoint specifies this value
     * in the apns-priority request header when it sends the notification message to
     * APNs.</p> <p>The equivalent values for Firebase Cloud Messaging (FCM), formerly
     * Google Cloud Messaging (GCM), are normal, for 5, and high, for 10. If you
     * specify an FCM value for this property, Amazon Pinpoint accepts and converts the
     * value to the corresponding APNs value.</p>
     */
    inline APNSMessage& WithPriority(const Aws::String& value) { SetPriority(value); return *this;}

    /**
     * <p>para>5 - Low priority, the notification might be delayed, delivered as part
     * of a group, or throttled.</p>/listitem> <li><p>10 - High priority, the
     * notification is sent immediately. This is the default value. A high priority
     * notification should trigger an alert, play a sound, or badge your app's icon on
     * the recipient's device.</p></li>/para> <p>Amazon Pinpoint specifies this value
     * in the apns-priority request header when it sends the notification message to
     * APNs.</p> <p>The equivalent values for Firebase Cloud Messaging (FCM), formerly
     * Google Cloud Messaging (GCM), are normal, for 5, and high, for 10. If you
     * specify an FCM value for this property, Amazon Pinpoint accepts and converts the
     * value to the corresponding APNs value.</p>
     */
    inline APNSMessage& WithPriority(Aws::String&& value) { SetPriority(std::move(value)); return *this;}

    /**
     * <p>para>5 - Low priority, the notification might be delayed, delivered as part
     * of a group, or throttled.</p>/listitem> <li><p>10 - High priority, the
     * notification is sent immediately. This is the default value. A high priority
     * notification should trigger an alert, play a sound, or badge your app's icon on
     * the recipient's device.</p></li>/para> <p>Amazon Pinpoint specifies this value
     * in the apns-priority request header when it sends the notification message to
     * APNs.</p> <p>The equivalent values for Firebase Cloud Messaging (FCM), formerly
     * Google Cloud Messaging (GCM), are normal, for 5, and high, for 10. If you
     * specify an FCM value for this property, Amazon Pinpoint accepts and converts the
     * value to the corresponding APNs value.</p>
     */
    inline APNSMessage& WithPriority(const char* value) { SetPriority(value); return *this;}


    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. This value overrides the message.</p>
     */
    inline const Aws::String& GetRawContent() const{ return m_rawContent; }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. This value overrides the message.</p>
     */
    inline bool RawContentHasBeenSet() const { return m_rawContentHasBeenSet; }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. This value overrides the message.</p>
     */
    inline void SetRawContent(const Aws::String& value) { m_rawContentHasBeenSet = true; m_rawContent = value; }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. This value overrides the message.</p>
     */
    inline void SetRawContent(Aws::String&& value) { m_rawContentHasBeenSet = true; m_rawContent = std::move(value); }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. This value overrides the message.</p>
     */
    inline void SetRawContent(const char* value) { m_rawContentHasBeenSet = true; m_rawContent.assign(value); }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. This value overrides the message.</p>
     */
    inline APNSMessage& WithRawContent(const Aws::String& value) { SetRawContent(value); return *this;}

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. This value overrides the message.</p>
     */
    inline APNSMessage& WithRawContent(Aws::String&& value) { SetRawContent(std::move(value)); return *this;}

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. This value overrides the message.</p>
     */
    inline APNSMessage& WithRawContent(const char* value) { SetRawContent(value); return *this;}


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
    inline APNSMessage& WithSilentPush(bool value) { SetSilentPush(value); return *this;}


    /**
     * <p>The key for the sound to play when the recipient receives the push
     * notification. The value of this key is the name of a sound file in your app's
     * main bundle or the Library/Sounds folder in your app's data container. If the
     * sound file can't be found or you specify default for the value, the system plays
     * the default alert sound.</p>
     */
    inline const Aws::String& GetSound() const{ return m_sound; }

    /**
     * <p>The key for the sound to play when the recipient receives the push
     * notification. The value of this key is the name of a sound file in your app's
     * main bundle or the Library/Sounds folder in your app's data container. If the
     * sound file can't be found or you specify default for the value, the system plays
     * the default alert sound.</p>
     */
    inline bool SoundHasBeenSet() const { return m_soundHasBeenSet; }

    /**
     * <p>The key for the sound to play when the recipient receives the push
     * notification. The value of this key is the name of a sound file in your app's
     * main bundle or the Library/Sounds folder in your app's data container. If the
     * sound file can't be found or you specify default for the value, the system plays
     * the default alert sound.</p>
     */
    inline void SetSound(const Aws::String& value) { m_soundHasBeenSet = true; m_sound = value; }

    /**
     * <p>The key for the sound to play when the recipient receives the push
     * notification. The value of this key is the name of a sound file in your app's
     * main bundle or the Library/Sounds folder in your app's data container. If the
     * sound file can't be found or you specify default for the value, the system plays
     * the default alert sound.</p>
     */
    inline void SetSound(Aws::String&& value) { m_soundHasBeenSet = true; m_sound = std::move(value); }

    /**
     * <p>The key for the sound to play when the recipient receives the push
     * notification. The value of this key is the name of a sound file in your app's
     * main bundle or the Library/Sounds folder in your app's data container. If the
     * sound file can't be found or you specify default for the value, the system plays
     * the default alert sound.</p>
     */
    inline void SetSound(const char* value) { m_soundHasBeenSet = true; m_sound.assign(value); }

    /**
     * <p>The key for the sound to play when the recipient receives the push
     * notification. The value of this key is the name of a sound file in your app's
     * main bundle or the Library/Sounds folder in your app's data container. If the
     * sound file can't be found or you specify default for the value, the system plays
     * the default alert sound.</p>
     */
    inline APNSMessage& WithSound(const Aws::String& value) { SetSound(value); return *this;}

    /**
     * <p>The key for the sound to play when the recipient receives the push
     * notification. The value of this key is the name of a sound file in your app's
     * main bundle or the Library/Sounds folder in your app's data container. If the
     * sound file can't be found or you specify default for the value, the system plays
     * the default alert sound.</p>
     */
    inline APNSMessage& WithSound(Aws::String&& value) { SetSound(std::move(value)); return *this;}

    /**
     * <p>The key for the sound to play when the recipient receives the push
     * notification. The value of this key is the name of a sound file in your app's
     * main bundle or the Library/Sounds folder in your app's data container. If the
     * sound file can't be found or you specify default for the value, the system plays
     * the default alert sound.</p>
     */
    inline APNSMessage& WithSound(const char* value) { SetSound(value); return *this;}


    /**
     * <p>The default message variables to use in the notification message. You can
     * override these default variables with individual address variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override these default variables with individual address variables.</p>
     */
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override these default variables with individual address variables.</p>
     */
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override these default variables with individual address variables.</p>
     */
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override these default variables with individual address variables.</p>
     */
    inline APNSMessage& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}

    /**
     * <p>The default message variables to use in the notification message. You can
     * override these default variables with individual address variables.</p>
     */
    inline APNSMessage& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}

    /**
     * <p>The default message variables to use in the notification message. You can
     * override these default variables with individual address variables.</p>
     */
    inline APNSMessage& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override these default variables with individual address variables.</p>
     */
    inline APNSMessage& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override these default variables with individual address variables.</p>
     */
    inline APNSMessage& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override these default variables with individual address variables.</p>
     */
    inline APNSMessage& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override these default variables with individual address variables.</p>
     */
    inline APNSMessage& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override these default variables with individual address variables.</p>
     */
    inline APNSMessage& AddSubstitutions(const char* key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }


    /**
     * <p>The key that represents your app-specific identifier for grouping
     * notifications. If you provide a Notification Content app extension, you can use
     * this value to group your notifications together.</p>
     */
    inline const Aws::String& GetThreadId() const{ return m_threadId; }

    /**
     * <p>The key that represents your app-specific identifier for grouping
     * notifications. If you provide a Notification Content app extension, you can use
     * this value to group your notifications together.</p>
     */
    inline bool ThreadIdHasBeenSet() const { return m_threadIdHasBeenSet; }

    /**
     * <p>The key that represents your app-specific identifier for grouping
     * notifications. If you provide a Notification Content app extension, you can use
     * this value to group your notifications together.</p>
     */
    inline void SetThreadId(const Aws::String& value) { m_threadIdHasBeenSet = true; m_threadId = value; }

    /**
     * <p>The key that represents your app-specific identifier for grouping
     * notifications. If you provide a Notification Content app extension, you can use
     * this value to group your notifications together.</p>
     */
    inline void SetThreadId(Aws::String&& value) { m_threadIdHasBeenSet = true; m_threadId = std::move(value); }

    /**
     * <p>The key that represents your app-specific identifier for grouping
     * notifications. If you provide a Notification Content app extension, you can use
     * this value to group your notifications together.</p>
     */
    inline void SetThreadId(const char* value) { m_threadIdHasBeenSet = true; m_threadId.assign(value); }

    /**
     * <p>The key that represents your app-specific identifier for grouping
     * notifications. If you provide a Notification Content app extension, you can use
     * this value to group your notifications together.</p>
     */
    inline APNSMessage& WithThreadId(const Aws::String& value) { SetThreadId(value); return *this;}

    /**
     * <p>The key that represents your app-specific identifier for grouping
     * notifications. If you provide a Notification Content app extension, you can use
     * this value to group your notifications together.</p>
     */
    inline APNSMessage& WithThreadId(Aws::String&& value) { SetThreadId(std::move(value)); return *this;}

    /**
     * <p>The key that represents your app-specific identifier for grouping
     * notifications. If you provide a Notification Content app extension, you can use
     * this value to group your notifications together.</p>
     */
    inline APNSMessage& WithThreadId(const char* value) { SetThreadId(value); return *this;}


    /**
     * <p>The amount of time, in seconds, that APNs should store and attempt to deliver
     * the push notification, if the service is unable to deliver the notification the
     * first time. If this value is 0, APNs treats the notification as if it expires
     * immediately and the service doesn't store or try to deliver the notification
     * again.</p> <p>Amazon Pinpoint specifies this value in the apns-expiration
     * request header when it sends the notification message to APNs.</p>
     */
    inline int GetTimeToLive() const{ return m_timeToLive; }

    /**
     * <p>The amount of time, in seconds, that APNs should store and attempt to deliver
     * the push notification, if the service is unable to deliver the notification the
     * first time. If this value is 0, APNs treats the notification as if it expires
     * immediately and the service doesn't store or try to deliver the notification
     * again.</p> <p>Amazon Pinpoint specifies this value in the apns-expiration
     * request header when it sends the notification message to APNs.</p>
     */
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, that APNs should store and attempt to deliver
     * the push notification, if the service is unable to deliver the notification the
     * first time. If this value is 0, APNs treats the notification as if it expires
     * immediately and the service doesn't store or try to deliver the notification
     * again.</p> <p>Amazon Pinpoint specifies this value in the apns-expiration
     * request header when it sends the notification message to APNs.</p>
     */
    inline void SetTimeToLive(int value) { m_timeToLiveHasBeenSet = true; m_timeToLive = value; }

    /**
     * <p>The amount of time, in seconds, that APNs should store and attempt to deliver
     * the push notification, if the service is unable to deliver the notification the
     * first time. If this value is 0, APNs treats the notification as if it expires
     * immediately and the service doesn't store or try to deliver the notification
     * again.</p> <p>Amazon Pinpoint specifies this value in the apns-expiration
     * request header when it sends the notification message to APNs.</p>
     */
    inline APNSMessage& WithTimeToLive(int value) { SetTimeToLive(value); return *this;}


    /**
     * <p>The title to display above the notification message on the recipient's
     * device.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title to display above the notification message on the recipient's
     * device.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title to display above the notification message on the recipient's
     * device.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title to display above the notification message on the recipient's
     * device.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title to display above the notification message on the recipient's
     * device.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title to display above the notification message on the recipient's
     * device.</p>
     */
    inline APNSMessage& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title to display above the notification message on the recipient's
     * device.</p>
     */
    inline APNSMessage& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title to display above the notification message on the recipient's
     * device.</p>
     */
    inline APNSMessage& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps the push notification and the value of the Action property is URL.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps the push notification and the value of the Action property is URL.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps the push notification and the value of the Action property is URL.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps the push notification and the value of the Action property is URL.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps the push notification and the value of the Action property is URL.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps the push notification and the value of the Action property is URL.</p>
     */
    inline APNSMessage& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps the push notification and the value of the Action property is URL.</p>
     */
    inline APNSMessage& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps the push notification and the value of the Action property is URL.</p>
     */
    inline APNSMessage& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Action m_action;
    bool m_actionHasBeenSet;

    int m_badge;
    bool m_badgeHasBeenSet;

    Aws::String m_body;
    bool m_bodyHasBeenSet;

    Aws::String m_category;
    bool m_categoryHasBeenSet;

    Aws::String m_collapseId;
    bool m_collapseIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_data;
    bool m_dataHasBeenSet;

    Aws::String m_mediaUrl;
    bool m_mediaUrlHasBeenSet;

    Aws::String m_preferredAuthenticationMethod;
    bool m_preferredAuthenticationMethodHasBeenSet;

    Aws::String m_priority;
    bool m_priorityHasBeenSet;

    Aws::String m_rawContent;
    bool m_rawContentHasBeenSet;

    bool m_silentPush;
    bool m_silentPushHasBeenSet;

    Aws::String m_sound;
    bool m_soundHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_substitutions;
    bool m_substitutionsHasBeenSet;

    Aws::String m_threadId;
    bool m_threadIdHasBeenSet;

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
