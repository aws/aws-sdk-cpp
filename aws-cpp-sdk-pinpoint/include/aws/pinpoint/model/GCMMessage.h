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
   * GCM Message.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GCMMessage">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API GCMMessage
  {
  public:
    GCMMessage();
    GCMMessage(Aws::Utils::Json::JsonView jsonValue);
    GCMMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

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
    inline GCMMessage& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * The action that occurs if the user taps a push notification delivered by the
     * campaign: OPEN_APP - Your app launches, or it becomes the foreground app if it
     * has been sent to the background. This is the default action. DEEP_LINK - Uses
     * deep linking features in iOS and Android to open your app and display a
     * designated user interface within the app. URL - The default mobile browser on
     * the user's device launches and opens a web page at the URL you specify. Possible
     * values include: OPEN_APP | DEEP_LINK | URL
     */
    inline GCMMessage& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * The message body of the notification.
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * The message body of the notification.
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

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
    inline GCMMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * The message body of the notification.
     */
    inline GCMMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * The message body of the notification.
     */
    inline GCMMessage& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * This parameter identifies a group of messages (e.g., with collapse_key: "Updates
     * Available") that can be collapsed, so that only the last message gets sent when
     * delivery can be resumed. This is intended to avoid sending too many of the same
     * messages when the device comes back online or becomes active.
     */
    inline const Aws::String& GetCollapseKey() const{ return m_collapseKey; }

    /**
     * This parameter identifies a group of messages (e.g., with collapse_key: "Updates
     * Available") that can be collapsed, so that only the last message gets sent when
     * delivery can be resumed. This is intended to avoid sending too many of the same
     * messages when the device comes back online or becomes active.
     */
    inline bool CollapseKeyHasBeenSet() const { return m_collapseKeyHasBeenSet; }

    /**
     * This parameter identifies a group of messages (e.g., with collapse_key: "Updates
     * Available") that can be collapsed, so that only the last message gets sent when
     * delivery can be resumed. This is intended to avoid sending too many of the same
     * messages when the device comes back online or becomes active.
     */
    inline void SetCollapseKey(const Aws::String& value) { m_collapseKeyHasBeenSet = true; m_collapseKey = value; }

    /**
     * This parameter identifies a group of messages (e.g., with collapse_key: "Updates
     * Available") that can be collapsed, so that only the last message gets sent when
     * delivery can be resumed. This is intended to avoid sending too many of the same
     * messages when the device comes back online or becomes active.
     */
    inline void SetCollapseKey(Aws::String&& value) { m_collapseKeyHasBeenSet = true; m_collapseKey = std::move(value); }

    /**
     * This parameter identifies a group of messages (e.g., with collapse_key: "Updates
     * Available") that can be collapsed, so that only the last message gets sent when
     * delivery can be resumed. This is intended to avoid sending too many of the same
     * messages when the device comes back online or becomes active.
     */
    inline void SetCollapseKey(const char* value) { m_collapseKeyHasBeenSet = true; m_collapseKey.assign(value); }

    /**
     * This parameter identifies a group of messages (e.g., with collapse_key: "Updates
     * Available") that can be collapsed, so that only the last message gets sent when
     * delivery can be resumed. This is intended to avoid sending too many of the same
     * messages when the device comes back online or becomes active.
     */
    inline GCMMessage& WithCollapseKey(const Aws::String& value) { SetCollapseKey(value); return *this;}

    /**
     * This parameter identifies a group of messages (e.g., with collapse_key: "Updates
     * Available") that can be collapsed, so that only the last message gets sent when
     * delivery can be resumed. This is intended to avoid sending too many of the same
     * messages when the device comes back online or becomes active.
     */
    inline GCMMessage& WithCollapseKey(Aws::String&& value) { SetCollapseKey(std::move(value)); return *this;}

    /**
     * This parameter identifies a group of messages (e.g., with collapse_key: "Updates
     * Available") that can be collapsed, so that only the last message gets sent when
     * delivery can be resumed. This is intended to avoid sending too many of the same
     * messages when the device comes back online or becomes active.
     */
    inline GCMMessage& WithCollapseKey(const char* value) { SetCollapseKey(value); return *this;}


    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetData() const{ return m_data; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

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
    inline GCMMessage& WithData(const Aws::Map<Aws::String, Aws::String>& value) { SetData(value); return *this;}

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline GCMMessage& WithData(Aws::Map<Aws::String, Aws::String>&& value) { SetData(std::move(value)); return *this;}

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline GCMMessage& AddData(const Aws::String& key, const Aws::String& value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline GCMMessage& AddData(Aws::String&& key, const Aws::String& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline GCMMessage& AddData(const Aws::String& key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline GCMMessage& AddData(Aws::String&& key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline GCMMessage& AddData(const char* key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline GCMMessage& AddData(Aws::String&& key, const char* value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }

    /**
     * The data payload used for a silent push. This payload is added to the
     * notifications' data.pinpoint.jsonBody' object
     */
    inline GCMMessage& AddData(const char* key, const char* value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }


    /**
     * The icon image name of the asset saved in your application.
     */
    inline const Aws::String& GetIconReference() const{ return m_iconReference; }

    /**
     * The icon image name of the asset saved in your application.
     */
    inline bool IconReferenceHasBeenSet() const { return m_iconReferenceHasBeenSet; }

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
    inline GCMMessage& WithIconReference(const Aws::String& value) { SetIconReference(value); return *this;}

    /**
     * The icon image name of the asset saved in your application.
     */
    inline GCMMessage& WithIconReference(Aws::String&& value) { SetIconReference(std::move(value)); return *this;}

    /**
     * The icon image name of the asset saved in your application.
     */
    inline GCMMessage& WithIconReference(const char* value) { SetIconReference(value); return *this;}


    /**
     * The URL that points to an image used as the large icon to the notification
     * content view.
     */
    inline const Aws::String& GetImageIconUrl() const{ return m_imageIconUrl; }

    /**
     * The URL that points to an image used as the large icon to the notification
     * content view.
     */
    inline bool ImageIconUrlHasBeenSet() const { return m_imageIconUrlHasBeenSet; }

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
    inline GCMMessage& WithImageIconUrl(const Aws::String& value) { SetImageIconUrl(value); return *this;}

    /**
     * The URL that points to an image used as the large icon to the notification
     * content view.
     */
    inline GCMMessage& WithImageIconUrl(Aws::String&& value) { SetImageIconUrl(std::move(value)); return *this;}

    /**
     * The URL that points to an image used as the large icon to the notification
     * content view.
     */
    inline GCMMessage& WithImageIconUrl(const char* value) { SetImageIconUrl(value); return *this;}


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
    inline GCMMessage& WithImageUrl(const Aws::String& value) { SetImageUrl(value); return *this;}

    /**
     * The URL that points to an image used in the push notification.
     */
    inline GCMMessage& WithImageUrl(Aws::String&& value) { SetImageUrl(std::move(value)); return *this;}

    /**
     * The URL that points to an image used in the push notification.
     */
    inline GCMMessage& WithImageUrl(const char* value) { SetImageUrl(value); return *this;}


    /**
     * The message priority. Amazon Pinpoint uses this value to set the FCM or GCM
     * priority parameter when it sends the message. Accepts the following
     * values:

"Normal" - Messages might be delayed. Delivery is optimized for battery
     * usage on the receiving device. Use normal priority unless immediate delivery is
     * required.

"High" - Messages are sent immediately and might wake a sleeping
     * device.

The equivalent values for APNs messages are "5" and "10". Amazon
     * Pinpoint accepts these values here and converts them.

For more information, see
     * About FCM Messages in the Firebase documentation.
     */
    inline const Aws::String& GetPriority() const{ return m_priority; }

    /**
     * The message priority. Amazon Pinpoint uses this value to set the FCM or GCM
     * priority parameter when it sends the message. Accepts the following
     * values:

"Normal" - Messages might be delayed. Delivery is optimized for battery
     * usage on the receiving device. Use normal priority unless immediate delivery is
     * required.

"High" - Messages are sent immediately and might wake a sleeping
     * device.

The equivalent values for APNs messages are "5" and "10". Amazon
     * Pinpoint accepts these values here and converts them.

For more information, see
     * About FCM Messages in the Firebase documentation.
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * The message priority. Amazon Pinpoint uses this value to set the FCM or GCM
     * priority parameter when it sends the message. Accepts the following
     * values:

"Normal" - Messages might be delayed. Delivery is optimized for battery
     * usage on the receiving device. Use normal priority unless immediate delivery is
     * required.

"High" - Messages are sent immediately and might wake a sleeping
     * device.

The equivalent values for APNs messages are "5" and "10". Amazon
     * Pinpoint accepts these values here and converts them.

For more information, see
     * About FCM Messages in the Firebase documentation.
     */
    inline void SetPriority(const Aws::String& value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * The message priority. Amazon Pinpoint uses this value to set the FCM or GCM
     * priority parameter when it sends the message. Accepts the following
     * values:

"Normal" - Messages might be delayed. Delivery is optimized for battery
     * usage on the receiving device. Use normal priority unless immediate delivery is
     * required.

"High" - Messages are sent immediately and might wake a sleeping
     * device.

The equivalent values for APNs messages are "5" and "10". Amazon
     * Pinpoint accepts these values here and converts them.

For more information, see
     * About FCM Messages in the Firebase documentation.
     */
    inline void SetPriority(Aws::String&& value) { m_priorityHasBeenSet = true; m_priority = std::move(value); }

    /**
     * The message priority. Amazon Pinpoint uses this value to set the FCM or GCM
     * priority parameter when it sends the message. Accepts the following
     * values:

"Normal" - Messages might be delayed. Delivery is optimized for battery
     * usage on the receiving device. Use normal priority unless immediate delivery is
     * required.

"High" - Messages are sent immediately and might wake a sleeping
     * device.

The equivalent values for APNs messages are "5" and "10". Amazon
     * Pinpoint accepts these values here and converts them.

For more information, see
     * About FCM Messages in the Firebase documentation.
     */
    inline void SetPriority(const char* value) { m_priorityHasBeenSet = true; m_priority.assign(value); }

    /**
     * The message priority. Amazon Pinpoint uses this value to set the FCM or GCM
     * priority parameter when it sends the message. Accepts the following
     * values:

"Normal" - Messages might be delayed. Delivery is optimized for battery
     * usage on the receiving device. Use normal priority unless immediate delivery is
     * required.

"High" - Messages are sent immediately and might wake a sleeping
     * device.

The equivalent values for APNs messages are "5" and "10". Amazon
     * Pinpoint accepts these values here and converts them.

For more information, see
     * About FCM Messages in the Firebase documentation.
     */
    inline GCMMessage& WithPriority(const Aws::String& value) { SetPriority(value); return *this;}

    /**
     * The message priority. Amazon Pinpoint uses this value to set the FCM or GCM
     * priority parameter when it sends the message. Accepts the following
     * values:

"Normal" - Messages might be delayed. Delivery is optimized for battery
     * usage on the receiving device. Use normal priority unless immediate delivery is
     * required.

"High" - Messages are sent immediately and might wake a sleeping
     * device.

The equivalent values for APNs messages are "5" and "10". Amazon
     * Pinpoint accepts these values here and converts them.

For more information, see
     * About FCM Messages in the Firebase documentation.
     */
    inline GCMMessage& WithPriority(Aws::String&& value) { SetPriority(std::move(value)); return *this;}

    /**
     * The message priority. Amazon Pinpoint uses this value to set the FCM or GCM
     * priority parameter when it sends the message. Accepts the following
     * values:

"Normal" - Messages might be delayed. Delivery is optimized for battery
     * usage on the receiving device. Use normal priority unless immediate delivery is
     * required.

"High" - Messages are sent immediately and might wake a sleeping
     * device.

The equivalent values for APNs messages are "5" and "10". Amazon
     * Pinpoint accepts these values here and converts them.

For more information, see
     * About FCM Messages in the Firebase documentation.
     */
    inline GCMMessage& WithPriority(const char* value) { SetPriority(value); return *this;}


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
    inline GCMMessage& WithRawContent(const Aws::String& value) { SetRawContent(value); return *this;}

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline GCMMessage& WithRawContent(Aws::String&& value) { SetRawContent(std::move(value)); return *this;}

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline GCMMessage& WithRawContent(const char* value) { SetRawContent(value); return *this;}


    /**
     * This parameter specifies the package name of the application where the
     * registration tokens must match in order to receive the message.
     */
    inline const Aws::String& GetRestrictedPackageName() const{ return m_restrictedPackageName; }

    /**
     * This parameter specifies the package name of the application where the
     * registration tokens must match in order to receive the message.
     */
    inline bool RestrictedPackageNameHasBeenSet() const { return m_restrictedPackageNameHasBeenSet; }

    /**
     * This parameter specifies the package name of the application where the
     * registration tokens must match in order to receive the message.
     */
    inline void SetRestrictedPackageName(const Aws::String& value) { m_restrictedPackageNameHasBeenSet = true; m_restrictedPackageName = value; }

    /**
     * This parameter specifies the package name of the application where the
     * registration tokens must match in order to receive the message.
     */
    inline void SetRestrictedPackageName(Aws::String&& value) { m_restrictedPackageNameHasBeenSet = true; m_restrictedPackageName = std::move(value); }

    /**
     * This parameter specifies the package name of the application where the
     * registration tokens must match in order to receive the message.
     */
    inline void SetRestrictedPackageName(const char* value) { m_restrictedPackageNameHasBeenSet = true; m_restrictedPackageName.assign(value); }

    /**
     * This parameter specifies the package name of the application where the
     * registration tokens must match in order to receive the message.
     */
    inline GCMMessage& WithRestrictedPackageName(const Aws::String& value) { SetRestrictedPackageName(value); return *this;}

    /**
     * This parameter specifies the package name of the application where the
     * registration tokens must match in order to receive the message.
     */
    inline GCMMessage& WithRestrictedPackageName(Aws::String&& value) { SetRestrictedPackageName(std::move(value)); return *this;}

    /**
     * This parameter specifies the package name of the application where the
     * registration tokens must match in order to receive the message.
     */
    inline GCMMessage& WithRestrictedPackageName(const char* value) { SetRestrictedPackageName(value); return *this;}


    /**
     * Indicates if the message should display on the users device. Silent pushes can
     * be used for Remote Configuration and Phone Home use cases.
     */
    inline bool GetSilentPush() const{ return m_silentPush; }

    /**
     * Indicates if the message should display on the users device. Silent pushes can
     * be used for Remote Configuration and Phone Home use cases.
     */
    inline bool SilentPushHasBeenSet() const { return m_silentPushHasBeenSet; }

    /**
     * Indicates if the message should display on the users device. Silent pushes can
     * be used for Remote Configuration and Phone Home use cases.
     */
    inline void SetSilentPush(bool value) { m_silentPushHasBeenSet = true; m_silentPush = value; }

    /**
     * Indicates if the message should display on the users device. Silent pushes can
     * be used for Remote Configuration and Phone Home use cases.
     */
    inline GCMMessage& WithSilentPush(bool value) { SetSilentPush(value); return *this;}


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
    inline bool SmallImageIconUrlHasBeenSet() const { return m_smallImageIconUrlHasBeenSet; }

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
    inline GCMMessage& WithSmallImageIconUrl(const Aws::String& value) { SetSmallImageIconUrl(value); return *this;}

    /**
     * The URL that points to an image used as the small icon for the notification
     * which will be used to represent the notification in the status bar and content
     * view
     */
    inline GCMMessage& WithSmallImageIconUrl(Aws::String&& value) { SetSmallImageIconUrl(std::move(value)); return *this;}

    /**
     * The URL that points to an image used as the small icon for the notification
     * which will be used to represent the notification in the status bar and content
     * view
     */
    inline GCMMessage& WithSmallImageIconUrl(const char* value) { SetSmallImageIconUrl(value); return *this;}


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
    inline bool SoundHasBeenSet() const { return m_soundHasBeenSet; }

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
    inline GCMMessage& WithSound(const Aws::String& value) { SetSound(value); return *this;}

    /**
     * Indicates a sound to play when the device receives the notification. Supports
     * default, or the filename of a sound resource bundled in the app. Android sound
     * files must reside in /res/raw/
     */
    inline GCMMessage& WithSound(Aws::String&& value) { SetSound(std::move(value)); return *this;}

    /**
     * Indicates a sound to play when the device receives the notification. Supports
     * default, or the filename of a sound resource bundled in the app. Android sound
     * files must reside in /res/raw/
     */
    inline GCMMessage& WithSound(const char* value) { SetSound(value); return *this;}


    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }

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
    inline GCMMessage& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline GCMMessage& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline GCMMessage& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline GCMMessage& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline GCMMessage& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline GCMMessage& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline GCMMessage& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * Default message substitutions. Can be overridden by individual address
     * substitutions.
     */
    inline GCMMessage& AddSubstitutions(const char* key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }


    /**
     * The length of time (in seconds) that FCM or GCM stores and attempts to deliver
     * the message. If unspecified, the value defaults to the maximum, which is
     * 2,419,200 seconds (28 days). Amazon Pinpoint uses this value to set the FCM or
     * GCM time_to_live parameter.
     */
    inline int GetTimeToLive() const{ return m_timeToLive; }

    /**
     * The length of time (in seconds) that FCM or GCM stores and attempts to deliver
     * the message. If unspecified, the value defaults to the maximum, which is
     * 2,419,200 seconds (28 days). Amazon Pinpoint uses this value to set the FCM or
     * GCM time_to_live parameter.
     */
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }

    /**
     * The length of time (in seconds) that FCM or GCM stores and attempts to deliver
     * the message. If unspecified, the value defaults to the maximum, which is
     * 2,419,200 seconds (28 days). Amazon Pinpoint uses this value to set the FCM or
     * GCM time_to_live parameter.
     */
    inline void SetTimeToLive(int value) { m_timeToLiveHasBeenSet = true; m_timeToLive = value; }

    /**
     * The length of time (in seconds) that FCM or GCM stores and attempts to deliver
     * the message. If unspecified, the value defaults to the maximum, which is
     * 2,419,200 seconds (28 days). Amazon Pinpoint uses this value to set the FCM or
     * GCM time_to_live parameter.
     */
    inline GCMMessage& WithTimeToLive(int value) { SetTimeToLive(value); return *this;}


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
    inline GCMMessage& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * The message title that displays above the message on the user's device.
     */
    inline GCMMessage& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * The message title that displays above the message on the user's device.
     */
    inline GCMMessage& WithTitle(const char* value) { SetTitle(value); return *this;}


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
    inline GCMMessage& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline GCMMessage& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * The URL to open in the user's mobile browser. Used if the value for Action is
     * URL.
     */
    inline GCMMessage& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Action m_action;
    bool m_actionHasBeenSet;

    Aws::String m_body;
    bool m_bodyHasBeenSet;

    Aws::String m_collapseKey;
    bool m_collapseKeyHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_data;
    bool m_dataHasBeenSet;

    Aws::String m_iconReference;
    bool m_iconReferenceHasBeenSet;

    Aws::String m_imageIconUrl;
    bool m_imageIconUrlHasBeenSet;

    Aws::String m_imageUrl;
    bool m_imageUrlHasBeenSet;

    Aws::String m_priority;
    bool m_priorityHasBeenSet;

    Aws::String m_rawContent;
    bool m_rawContentHasBeenSet;

    Aws::String m_restrictedPackageName;
    bool m_restrictedPackageNameHasBeenSet;

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
