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
    AWS_ARTIFACT_API PutAccountSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountSettings"; }

    AWS_ARTIFACT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Desired notification subscription status.</p>
     */
    inline NotificationSubscriptionStatus GetNotificationSubscriptionStatus() const { return m_notificationSubscriptionStatus; }
    inline bool NotificationSubscriptionStatusHasBeenSet() const { return m_notificationSubscriptionStatusHasBeenSet; }
    inline void SetNotificationSubscriptionStatus(NotificationSubscriptionStatus value) { m_notificationSubscriptionStatusHasBeenSet = true; m_notificationSubscriptionStatus = value; }
    inline PutAccountSettingsRequest& WithNotificationSubscriptionStatus(NotificationSubscriptionStatus value) { SetNotificationSubscriptionStatus(value); return *this;}
    ///@}
  private:

    NotificationSubscriptionStatus m_notificationSubscriptionStatus{NotificationSubscriptionStatus::NOT_SET};
    bool m_notificationSubscriptionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
