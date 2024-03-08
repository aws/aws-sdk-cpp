/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/model/NotificationSubscriptionStatus.h>
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
namespace Artifact
{
namespace Model
{

  /**
   * <p>Account settings for the customer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/AccountSettings">AWS
   * API Reference</a></p>
   */
  class AccountSettings
  {
  public:
    AWS_ARTIFACT_API AccountSettings();
    AWS_ARTIFACT_API AccountSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARTIFACT_API AccountSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Notification subscription status of the customer.</p>
     */
    inline const NotificationSubscriptionStatus& GetNotificationSubscriptionStatus() const{ return m_notificationSubscriptionStatus; }

    /**
     * <p>Notification subscription status of the customer.</p>
     */
    inline bool NotificationSubscriptionStatusHasBeenSet() const { return m_notificationSubscriptionStatusHasBeenSet; }

    /**
     * <p>Notification subscription status of the customer.</p>
     */
    inline void SetNotificationSubscriptionStatus(const NotificationSubscriptionStatus& value) { m_notificationSubscriptionStatusHasBeenSet = true; m_notificationSubscriptionStatus = value; }

    /**
     * <p>Notification subscription status of the customer.</p>
     */
    inline void SetNotificationSubscriptionStatus(NotificationSubscriptionStatus&& value) { m_notificationSubscriptionStatusHasBeenSet = true; m_notificationSubscriptionStatus = std::move(value); }

    /**
     * <p>Notification subscription status of the customer.</p>
     */
    inline AccountSettings& WithNotificationSubscriptionStatus(const NotificationSubscriptionStatus& value) { SetNotificationSubscriptionStatus(value); return *this;}

    /**
     * <p>Notification subscription status of the customer.</p>
     */
    inline AccountSettings& WithNotificationSubscriptionStatus(NotificationSubscriptionStatus&& value) { SetNotificationSubscriptionStatus(std::move(value)); return *this;}

  private:

    NotificationSubscriptionStatus m_notificationSubscriptionStatus;
    bool m_notificationSubscriptionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
