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
    AWS_CHIMESDKMESSAGING_API PushNotificationConfiguration() = default;
    AWS_CHIMESDKMESSAGING_API PushNotificationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API PushNotificationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title of the push notification.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    PushNotificationConfiguration& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of the push notification.</p>
     */
    inline const Aws::String& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    PushNotificationConfiguration& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enum value that indicates the type of the push notification for a message.
     * <code>DEFAULT</code>: Normal mobile push notification. <code>VOIP</code>: VOIP
     * mobile push notification.</p>
     */
    inline PushNotificationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PushNotificationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline PushNotificationConfiguration& WithType(PushNotificationType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    PushNotificationType m_type{PushNotificationType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
