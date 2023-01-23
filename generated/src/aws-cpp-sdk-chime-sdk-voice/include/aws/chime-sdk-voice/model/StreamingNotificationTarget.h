/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/NotificationTarget.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  class StreamingNotificationTarget
  {
  public:
    AWS_CHIMESDKVOICE_API StreamingNotificationTarget();
    AWS_CHIMESDKVOICE_API StreamingNotificationTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API StreamingNotificationTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const NotificationTarget& GetNotificationTarget() const{ return m_notificationTarget; }

    
    inline bool NotificationTargetHasBeenSet() const { return m_notificationTargetHasBeenSet; }

    
    inline void SetNotificationTarget(const NotificationTarget& value) { m_notificationTargetHasBeenSet = true; m_notificationTarget = value; }

    
    inline void SetNotificationTarget(NotificationTarget&& value) { m_notificationTargetHasBeenSet = true; m_notificationTarget = std::move(value); }

    
    inline StreamingNotificationTarget& WithNotificationTarget(const NotificationTarget& value) { SetNotificationTarget(value); return *this;}

    
    inline StreamingNotificationTarget& WithNotificationTarget(NotificationTarget&& value) { SetNotificationTarget(std::move(value)); return *this;}

  private:

    NotificationTarget m_notificationTarget;
    bool m_notificationTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
