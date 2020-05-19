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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/NotificationTarget.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The targeted recipient for a streaming configuration
   * notification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/StreamingNotificationTarget">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API StreamingNotificationTarget
  {
  public:
    StreamingNotificationTarget();
    StreamingNotificationTarget(Aws::Utils::Json::JsonView jsonValue);
    StreamingNotificationTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The streaming notification target.</p>
     */
    inline const NotificationTarget& GetNotificationTarget() const{ return m_notificationTarget; }

    /**
     * <p>The streaming notification target.</p>
     */
    inline bool NotificationTargetHasBeenSet() const { return m_notificationTargetHasBeenSet; }

    /**
     * <p>The streaming notification target.</p>
     */
    inline void SetNotificationTarget(const NotificationTarget& value) { m_notificationTargetHasBeenSet = true; m_notificationTarget = value; }

    /**
     * <p>The streaming notification target.</p>
     */
    inline void SetNotificationTarget(NotificationTarget&& value) { m_notificationTargetHasBeenSet = true; m_notificationTarget = std::move(value); }

    /**
     * <p>The streaming notification target.</p>
     */
    inline StreamingNotificationTarget& WithNotificationTarget(const NotificationTarget& value) { SetNotificationTarget(value); return *this;}

    /**
     * <p>The streaming notification target.</p>
     */
    inline StreamingNotificationTarget& WithNotificationTarget(NotificationTarget&& value) { SetNotificationTarget(std::move(value)); return *this;}

  private:

    NotificationTarget m_notificationTarget;
    bool m_notificationTargetHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
