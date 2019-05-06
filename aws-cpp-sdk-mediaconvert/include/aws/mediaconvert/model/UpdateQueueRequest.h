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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/ReservationPlanSettings.h>
#include <aws/mediaconvert/model/QueueStatus.h>
#include <utility>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class AWS_MEDIACONVERT_API UpdateQueueRequest : public MediaConvertRequest
  {
  public:
    UpdateQueueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQueue"; }

    Aws::String SerializePayload() const override;


    /**
     * The new description for the queue, if you are changing it.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * The new description for the queue, if you are changing it.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * The new description for the queue, if you are changing it.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * The new description for the queue, if you are changing it.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * The new description for the queue, if you are changing it.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * The new description for the queue, if you are changing it.
     */
    inline UpdateQueueRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * The new description for the queue, if you are changing it.
     */
    inline UpdateQueueRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * The new description for the queue, if you are changing it.
     */
    inline UpdateQueueRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The name of the queue that you are modifying.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the queue that you are modifying.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the queue that you are modifying.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the queue that you are modifying.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the queue that you are modifying.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the queue that you are modifying.
     */
    inline UpdateQueueRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the queue that you are modifying.
     */
    inline UpdateQueueRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the queue that you are modifying.
     */
    inline UpdateQueueRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The new details of your pricing plan for your reserved queue. When you set up a
     * new pricing plan to replace an expired one, you enter into another 12-month
     * commitment. When you add capacity to your queue by increasing the number of RTS,
     * you extend the term of your commitment to 12 months from when you add capacity.
     * After you make these commitments, you can't cancel them.
     */
    inline const ReservationPlanSettings& GetReservationPlanSettings() const{ return m_reservationPlanSettings; }

    /**
     * The new details of your pricing plan for your reserved queue. When you set up a
     * new pricing plan to replace an expired one, you enter into another 12-month
     * commitment. When you add capacity to your queue by increasing the number of RTS,
     * you extend the term of your commitment to 12 months from when you add capacity.
     * After you make these commitments, you can't cancel them.
     */
    inline bool ReservationPlanSettingsHasBeenSet() const { return m_reservationPlanSettingsHasBeenSet; }

    /**
     * The new details of your pricing plan for your reserved queue. When you set up a
     * new pricing plan to replace an expired one, you enter into another 12-month
     * commitment. When you add capacity to your queue by increasing the number of RTS,
     * you extend the term of your commitment to 12 months from when you add capacity.
     * After you make these commitments, you can't cancel them.
     */
    inline void SetReservationPlanSettings(const ReservationPlanSettings& value) { m_reservationPlanSettingsHasBeenSet = true; m_reservationPlanSettings = value; }

    /**
     * The new details of your pricing plan for your reserved queue. When you set up a
     * new pricing plan to replace an expired one, you enter into another 12-month
     * commitment. When you add capacity to your queue by increasing the number of RTS,
     * you extend the term of your commitment to 12 months from when you add capacity.
     * After you make these commitments, you can't cancel them.
     */
    inline void SetReservationPlanSettings(ReservationPlanSettings&& value) { m_reservationPlanSettingsHasBeenSet = true; m_reservationPlanSettings = std::move(value); }

    /**
     * The new details of your pricing plan for your reserved queue. When you set up a
     * new pricing plan to replace an expired one, you enter into another 12-month
     * commitment. When you add capacity to your queue by increasing the number of RTS,
     * you extend the term of your commitment to 12 months from when you add capacity.
     * After you make these commitments, you can't cancel them.
     */
    inline UpdateQueueRequest& WithReservationPlanSettings(const ReservationPlanSettings& value) { SetReservationPlanSettings(value); return *this;}

    /**
     * The new details of your pricing plan for your reserved queue. When you set up a
     * new pricing plan to replace an expired one, you enter into another 12-month
     * commitment. When you add capacity to your queue by increasing the number of RTS,
     * you extend the term of your commitment to 12 months from when you add capacity.
     * After you make these commitments, you can't cancel them.
     */
    inline UpdateQueueRequest& WithReservationPlanSettings(ReservationPlanSettings&& value) { SetReservationPlanSettings(std::move(value)); return *this;}


    /**
     * Pause or activate a queue by changing its status between ACTIVE and PAUSED. If
     * you pause a queue, jobs in that queue won't begin. Jobs that are running when
     * you pause the queue continue to run until they finish or result in an error.
     */
    inline const QueueStatus& GetStatus() const{ return m_status; }

    /**
     * Pause or activate a queue by changing its status between ACTIVE and PAUSED. If
     * you pause a queue, jobs in that queue won't begin. Jobs that are running when
     * you pause the queue continue to run until they finish or result in an error.
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * Pause or activate a queue by changing its status between ACTIVE and PAUSED. If
     * you pause a queue, jobs in that queue won't begin. Jobs that are running when
     * you pause the queue continue to run until they finish or result in an error.
     */
    inline void SetStatus(const QueueStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * Pause or activate a queue by changing its status between ACTIVE and PAUSED. If
     * you pause a queue, jobs in that queue won't begin. Jobs that are running when
     * you pause the queue continue to run until they finish or result in an error.
     */
    inline void SetStatus(QueueStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * Pause or activate a queue by changing its status between ACTIVE and PAUSED. If
     * you pause a queue, jobs in that queue won't begin. Jobs that are running when
     * you pause the queue continue to run until they finish or result in an error.
     */
    inline UpdateQueueRequest& WithStatus(const QueueStatus& value) { SetStatus(value); return *this;}

    /**
     * Pause or activate a queue by changing its status between ACTIVE and PAUSED. If
     * you pause a queue, jobs in that queue won't begin. Jobs that are running when
     * you pause the queue continue to run until they finish or result in an error.
     */
    inline UpdateQueueRequest& WithStatus(QueueStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ReservationPlanSettings m_reservationPlanSettings;
    bool m_reservationPlanSettingsHasBeenSet;

    QueueStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
