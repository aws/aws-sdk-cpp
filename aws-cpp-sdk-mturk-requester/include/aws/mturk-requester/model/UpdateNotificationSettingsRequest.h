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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mturk-requester/model/NotificationSpecification.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AWS_MTURK_API UpdateNotificationSettingsRequest : public MTurkRequest
  {
  public:
    UpdateNotificationSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNotificationSettings"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The ID of the HIT type whose notification specification is being updated.
     * </p>
     */
    inline const Aws::String& GetHITTypeId() const{ return m_hITTypeId; }

    /**
     * <p> The ID of the HIT type whose notification specification is being updated.
     * </p>
     */
    inline bool HITTypeIdHasBeenSet() const { return m_hITTypeIdHasBeenSet; }

    /**
     * <p> The ID of the HIT type whose notification specification is being updated.
     * </p>
     */
    inline void SetHITTypeId(const Aws::String& value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId = value; }

    /**
     * <p> The ID of the HIT type whose notification specification is being updated.
     * </p>
     */
    inline void SetHITTypeId(Aws::String&& value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId = std::move(value); }

    /**
     * <p> The ID of the HIT type whose notification specification is being updated.
     * </p>
     */
    inline void SetHITTypeId(const char* value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId.assign(value); }

    /**
     * <p> The ID of the HIT type whose notification specification is being updated.
     * </p>
     */
    inline UpdateNotificationSettingsRequest& WithHITTypeId(const Aws::String& value) { SetHITTypeId(value); return *this;}

    /**
     * <p> The ID of the HIT type whose notification specification is being updated.
     * </p>
     */
    inline UpdateNotificationSettingsRequest& WithHITTypeId(Aws::String&& value) { SetHITTypeId(std::move(value)); return *this;}

    /**
     * <p> The ID of the HIT type whose notification specification is being updated.
     * </p>
     */
    inline UpdateNotificationSettingsRequest& WithHITTypeId(const char* value) { SetHITTypeId(value); return *this;}


    /**
     * <p> The notification specification for the HIT type. </p>
     */
    inline const NotificationSpecification& GetNotification() const{ return m_notification; }

    /**
     * <p> The notification specification for the HIT type. </p>
     */
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }

    /**
     * <p> The notification specification for the HIT type. </p>
     */
    inline void SetNotification(const NotificationSpecification& value) { m_notificationHasBeenSet = true; m_notification = value; }

    /**
     * <p> The notification specification for the HIT type. </p>
     */
    inline void SetNotification(NotificationSpecification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }

    /**
     * <p> The notification specification for the HIT type. </p>
     */
    inline UpdateNotificationSettingsRequest& WithNotification(const NotificationSpecification& value) { SetNotification(value); return *this;}

    /**
     * <p> The notification specification for the HIT type. </p>
     */
    inline UpdateNotificationSettingsRequest& WithNotification(NotificationSpecification&& value) { SetNotification(std::move(value)); return *this;}


    /**
     * <p> Specifies whether notifications are sent for HITs of this HIT type,
     * according to the notification specification. You must specify either the
     * Notification parameter or the Active parameter for the call to
     * UpdateNotificationSettings to succeed. </p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p> Specifies whether notifications are sent for HITs of this HIT type,
     * according to the notification specification. You must specify either the
     * Notification parameter or the Active parameter for the call to
     * UpdateNotificationSettings to succeed. </p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p> Specifies whether notifications are sent for HITs of this HIT type,
     * according to the notification specification. You must specify either the
     * Notification parameter or the Active parameter for the call to
     * UpdateNotificationSettings to succeed. </p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p> Specifies whether notifications are sent for HITs of this HIT type,
     * according to the notification specification. You must specify either the
     * Notification parameter or the Active parameter for the call to
     * UpdateNotificationSettings to succeed. </p>
     */
    inline UpdateNotificationSettingsRequest& WithActive(bool value) { SetActive(value); return *this;}

  private:

    Aws::String m_hITTypeId;
    bool m_hITTypeIdHasBeenSet;

    NotificationSpecification m_notification;
    bool m_notificationHasBeenSet;

    bool m_active;
    bool m_activeHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
