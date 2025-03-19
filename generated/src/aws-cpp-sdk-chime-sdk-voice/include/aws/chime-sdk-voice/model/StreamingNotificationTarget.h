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

  /**
   * <p>The target recipient for a streaming configuration
   * notification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/StreamingNotificationTarget">AWS
   * API Reference</a></p>
   */
  class StreamingNotificationTarget
  {
  public:
    AWS_CHIMESDKVOICE_API StreamingNotificationTarget() = default;
    AWS_CHIMESDKVOICE_API StreamingNotificationTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API StreamingNotificationTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The streaming notification target.</p>
     */
    inline NotificationTarget GetNotificationTarget() const { return m_notificationTarget; }
    inline bool NotificationTargetHasBeenSet() const { return m_notificationTargetHasBeenSet; }
    inline void SetNotificationTarget(NotificationTarget value) { m_notificationTargetHasBeenSet = true; m_notificationTarget = value; }
    inline StreamingNotificationTarget& WithNotificationTarget(NotificationTarget value) { SetNotificationTarget(value); return *this;}
    ///@}
  private:

    NotificationTarget m_notificationTarget{NotificationTarget::NOT_SET};
    bool m_notificationTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
