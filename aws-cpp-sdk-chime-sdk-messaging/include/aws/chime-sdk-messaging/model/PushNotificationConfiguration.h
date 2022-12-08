/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/PushNotificationType.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>The push notification configuration of the message.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/PushNotificationConfiguration">AWS
   * API Reference</a></p>
   */
  class PushNotificationConfiguration
  {
  public:
    AWS_CHIMESDKMESSAGING_API PushNotificationConfiguration();
    AWS_CHIMESDKMESSAGING_API PushNotificationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API PushNotificationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The title of the push notification.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the push notification.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the push notification.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the push notification.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the push notification.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the push notification.</p>
     */
    inline PushNotificationConfiguration& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the push notification.</p>
     */
    inline PushNotificationConfiguration& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the push notification.</p>
     */
    inline PushNotificationConfiguration& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The body of the push notification.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>The body of the push notification.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The body of the push notification.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The body of the push notification.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The body of the push notification.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>The body of the push notification.</p>
     */
    inline PushNotificationConfiguration& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The body of the push notification.</p>
     */
    inline PushNotificationConfiguration& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>The body of the push notification.</p>
     */
    inline PushNotificationConfiguration& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>Enum value that indicates the type of the push notification for a message.
     * <code>DEFAULT</code>: Normal mobile push notification. <code>VOIP</code>: VOIP
     * mobile push notification.</p>
     */
    inline const PushNotificationType& GetType() const{ return m_type; }

    /**
     * <p>Enum value that indicates the type of the push notification for a message.
     * <code>DEFAULT</code>: Normal mobile push notification. <code>VOIP</code>: VOIP
     * mobile push notification.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Enum value that indicates the type of the push notification for a message.
     * <code>DEFAULT</code>: Normal mobile push notification. <code>VOIP</code>: VOIP
     * mobile push notification.</p>
     */
    inline void SetType(const PushNotificationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Enum value that indicates the type of the push notification for a message.
     * <code>DEFAULT</code>: Normal mobile push notification. <code>VOIP</code>: VOIP
     * mobile push notification.</p>
     */
    inline void SetType(PushNotificationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Enum value that indicates the type of the push notification for a message.
     * <code>DEFAULT</code>: Normal mobile push notification. <code>VOIP</code>: VOIP
     * mobile push notification.</p>
     */
    inline PushNotificationConfiguration& WithType(const PushNotificationType& value) { SetType(value); return *this;}

    /**
     * <p>Enum value that indicates the type of the push notification for a message.
     * <code>DEFAULT</code>: Normal mobile push notification. <code>VOIP</code>: VOIP
     * mobile push notification.</p>
     */
    inline PushNotificationConfiguration& WithType(PushNotificationType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    PushNotificationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
