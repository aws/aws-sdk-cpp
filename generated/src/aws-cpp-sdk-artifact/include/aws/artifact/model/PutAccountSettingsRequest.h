/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/ArtifactRequest.h>
#include <aws/artifact/model/NotificationSubscriptionStatus.h>
#include <utility>

namespace Aws
{
namespace Artifact
{
namespace Model
{

  /**
   */
  class PutAccountSettingsRequest : public ArtifactRequest
  {
  public:
    AWS_ARTIFACT_API PutAccountSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountSettings"; }

    AWS_ARTIFACT_API Aws::String SerializePayload() const override;


    /**
     * <p>Desired notification subscription status.</p>
     */
    inline const NotificationSubscriptionStatus& GetNotificationSubscriptionStatus() const{ return m_notificationSubscriptionStatus; }

    /**
     * <p>Desired notification subscription status.</p>
     */
    inline bool NotificationSubscriptionStatusHasBeenSet() const { return m_notificationSubscriptionStatusHasBeenSet; }

    /**
     * <p>Desired notification subscription status.</p>
     */
    inline void SetNotificationSubscriptionStatus(const NotificationSubscriptionStatus& value) { m_notificationSubscriptionStatusHasBeenSet = true; m_notificationSubscriptionStatus = value; }

    /**
     * <p>Desired notification subscription status.</p>
     */
    inline void SetNotificationSubscriptionStatus(NotificationSubscriptionStatus&& value) { m_notificationSubscriptionStatusHasBeenSet = true; m_notificationSubscriptionStatus = std::move(value); }

    /**
     * <p>Desired notification subscription status.</p>
     */
    inline PutAccountSettingsRequest& WithNotificationSubscriptionStatus(const NotificationSubscriptionStatus& value) { SetNotificationSubscriptionStatus(value); return *this;}

    /**
     * <p>Desired notification subscription status.</p>
     */
    inline PutAccountSettingsRequest& WithNotificationSubscriptionStatus(NotificationSubscriptionStatus&& value) { SetNotificationSubscriptionStatus(std::move(value)); return *this;}

  private:

    NotificationSubscriptionStatus m_notificationSubscriptionStatus;
    bool m_notificationSubscriptionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
