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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediaconvert/model/PricingPlan.h>
#include <aws/mediaconvert/model/ReservationPlan.h>
#include <aws/mediaconvert/model/QueueStatus.h>
#include <aws/mediaconvert/model/Type.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * You can use queues to manage the resources that are available to your AWS
   * account for running multiple transcoding jobs at the same time. If you don't
   * specify a queue, the service sends all jobs through the default queue. For more
   * information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-queues.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Queue">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API Queue
  {
  public:
    Queue();
    Queue(Aws::Utils::Json::JsonView jsonValue);
    Queue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline Queue& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline Queue& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline Queue& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The timestamp in epoch seconds for when you created the queue.
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * The timestamp in epoch seconds for when you created the queue.
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * The timestamp in epoch seconds for when you created the queue.
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * The timestamp in epoch seconds for when you created the queue.
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * The timestamp in epoch seconds for when you created the queue.
     */
    inline Queue& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * The timestamp in epoch seconds for when you created the queue.
     */
    inline Queue& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * An optional description that you create for each queue.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * An optional description that you create for each queue.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * An optional description that you create for each queue.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * An optional description that you create for each queue.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * An optional description that you create for each queue.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * An optional description that you create for each queue.
     */
    inline Queue& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * An optional description that you create for each queue.
     */
    inline Queue& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * An optional description that you create for each queue.
     */
    inline Queue& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The timestamp in epoch seconds for when you most recently updated the queue.
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * The timestamp in epoch seconds for when you most recently updated the queue.
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * The timestamp in epoch seconds for when you most recently updated the queue.
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * The timestamp in epoch seconds for when you most recently updated the queue.
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * The timestamp in epoch seconds for when you most recently updated the queue.
     */
    inline Queue& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * The timestamp in epoch seconds for when you most recently updated the queue.
     */
    inline Queue& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * A name that you create for each queue. Each name must be unique within your
     * account.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * A name that you create for each queue. Each name must be unique within your
     * account.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * A name that you create for each queue. Each name must be unique within your
     * account.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * A name that you create for each queue. Each name must be unique within your
     * account.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * A name that you create for each queue. Each name must be unique within your
     * account.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * A name that you create for each queue. Each name must be unique within your
     * account.
     */
    inline Queue& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A name that you create for each queue. Each name must be unique within your
     * account.
     */
    inline Queue& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A name that you create for each queue. Each name must be unique within your
     * account.
     */
    inline Queue& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Specifies whether the pricing plan for the queue is on-demand or reserved. For
     * on-demand, you pay per minute, billed in increments of .01 minute. For reserved,
     * you pay for the transcoding capacity of the entire queue, regardless of how much
     * or how little you use it. Reserved pricing requires a 12-month commitment.
     */
    inline const PricingPlan& GetPricingPlan() const{ return m_pricingPlan; }

    /**
     * Specifies whether the pricing plan for the queue is on-demand or reserved. For
     * on-demand, you pay per minute, billed in increments of .01 minute. For reserved,
     * you pay for the transcoding capacity of the entire queue, regardless of how much
     * or how little you use it. Reserved pricing requires a 12-month commitment.
     */
    inline bool PricingPlanHasBeenSet() const { return m_pricingPlanHasBeenSet; }

    /**
     * Specifies whether the pricing plan for the queue is on-demand or reserved. For
     * on-demand, you pay per minute, billed in increments of .01 minute. For reserved,
     * you pay for the transcoding capacity of the entire queue, regardless of how much
     * or how little you use it. Reserved pricing requires a 12-month commitment.
     */
    inline void SetPricingPlan(const PricingPlan& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = value; }

    /**
     * Specifies whether the pricing plan for the queue is on-demand or reserved. For
     * on-demand, you pay per minute, billed in increments of .01 minute. For reserved,
     * you pay for the transcoding capacity of the entire queue, regardless of how much
     * or how little you use it. Reserved pricing requires a 12-month commitment.
     */
    inline void SetPricingPlan(PricingPlan&& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = std::move(value); }

    /**
     * Specifies whether the pricing plan for the queue is on-demand or reserved. For
     * on-demand, you pay per minute, billed in increments of .01 minute. For reserved,
     * you pay for the transcoding capacity of the entire queue, regardless of how much
     * or how little you use it. Reserved pricing requires a 12-month commitment.
     */
    inline Queue& WithPricingPlan(const PricingPlan& value) { SetPricingPlan(value); return *this;}

    /**
     * Specifies whether the pricing plan for the queue is on-demand or reserved. For
     * on-demand, you pay per minute, billed in increments of .01 minute. For reserved,
     * you pay for the transcoding capacity of the entire queue, regardless of how much
     * or how little you use it. Reserved pricing requires a 12-month commitment.
     */
    inline Queue& WithPricingPlan(PricingPlan&& value) { SetPricingPlan(std::move(value)); return *this;}


    /**
     * The estimated number of jobs with a PROGRESSING status.
     */
    inline int GetProgressingJobsCount() const{ return m_progressingJobsCount; }

    /**
     * The estimated number of jobs with a PROGRESSING status.
     */
    inline bool ProgressingJobsCountHasBeenSet() const { return m_progressingJobsCountHasBeenSet; }

    /**
     * The estimated number of jobs with a PROGRESSING status.
     */
    inline void SetProgressingJobsCount(int value) { m_progressingJobsCountHasBeenSet = true; m_progressingJobsCount = value; }

    /**
     * The estimated number of jobs with a PROGRESSING status.
     */
    inline Queue& WithProgressingJobsCount(int value) { SetProgressingJobsCount(value); return *this;}


    /**
     * Details about the pricing plan for your reserved queue. Required for reserved
     * queues and not applicable to on-demand queues.
     */
    inline const ReservationPlan& GetReservationPlan() const{ return m_reservationPlan; }

    /**
     * Details about the pricing plan for your reserved queue. Required for reserved
     * queues and not applicable to on-demand queues.
     */
    inline bool ReservationPlanHasBeenSet() const { return m_reservationPlanHasBeenSet; }

    /**
     * Details about the pricing plan for your reserved queue. Required for reserved
     * queues and not applicable to on-demand queues.
     */
    inline void SetReservationPlan(const ReservationPlan& value) { m_reservationPlanHasBeenSet = true; m_reservationPlan = value; }

    /**
     * Details about the pricing plan for your reserved queue. Required for reserved
     * queues and not applicable to on-demand queues.
     */
    inline void SetReservationPlan(ReservationPlan&& value) { m_reservationPlanHasBeenSet = true; m_reservationPlan = std::move(value); }

    /**
     * Details about the pricing plan for your reserved queue. Required for reserved
     * queues and not applicable to on-demand queues.
     */
    inline Queue& WithReservationPlan(const ReservationPlan& value) { SetReservationPlan(value); return *this;}

    /**
     * Details about the pricing plan for your reserved queue. Required for reserved
     * queues and not applicable to on-demand queues.
     */
    inline Queue& WithReservationPlan(ReservationPlan&& value) { SetReservationPlan(std::move(value)); return *this;}


    /**
     * Queues can be ACTIVE or PAUSED. If you pause a queue, the service won't begin
     * processing jobs in that queue. Jobs that are running when you pause the queue
     * continue to run until they finish or result in an error.
     */
    inline const QueueStatus& GetStatus() const{ return m_status; }

    /**
     * Queues can be ACTIVE or PAUSED. If you pause a queue, the service won't begin
     * processing jobs in that queue. Jobs that are running when you pause the queue
     * continue to run until they finish or result in an error.
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * Queues can be ACTIVE or PAUSED. If you pause a queue, the service won't begin
     * processing jobs in that queue. Jobs that are running when you pause the queue
     * continue to run until they finish or result in an error.
     */
    inline void SetStatus(const QueueStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * Queues can be ACTIVE or PAUSED. If you pause a queue, the service won't begin
     * processing jobs in that queue. Jobs that are running when you pause the queue
     * continue to run until they finish or result in an error.
     */
    inline void SetStatus(QueueStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * Queues can be ACTIVE or PAUSED. If you pause a queue, the service won't begin
     * processing jobs in that queue. Jobs that are running when you pause the queue
     * continue to run until they finish or result in an error.
     */
    inline Queue& WithStatus(const QueueStatus& value) { SetStatus(value); return *this;}

    /**
     * Queues can be ACTIVE or PAUSED. If you pause a queue, the service won't begin
     * processing jobs in that queue. Jobs that are running when you pause the queue
     * continue to run until they finish or result in an error.
     */
    inline Queue& WithStatus(QueueStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * The estimated number of jobs with a SUBMITTED status.
     */
    inline int GetSubmittedJobsCount() const{ return m_submittedJobsCount; }

    /**
     * The estimated number of jobs with a SUBMITTED status.
     */
    inline bool SubmittedJobsCountHasBeenSet() const { return m_submittedJobsCountHasBeenSet; }

    /**
     * The estimated number of jobs with a SUBMITTED status.
     */
    inline void SetSubmittedJobsCount(int value) { m_submittedJobsCountHasBeenSet = true; m_submittedJobsCount = value; }

    /**
     * The estimated number of jobs with a SUBMITTED status.
     */
    inline Queue& WithSubmittedJobsCount(int value) { SetSubmittedJobsCount(value); return *this;}


    /**
     * Specifies whether this on-demand queue is system or custom. System queues are
     * built in. You can't modify or delete system queues. You can create and modify
     * custom queues.
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * Specifies whether this on-demand queue is system or custom. System queues are
     * built in. You can't modify or delete system queues. You can create and modify
     * custom queues.
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * Specifies whether this on-demand queue is system or custom. System queues are
     * built in. You can't modify or delete system queues. You can create and modify
     * custom queues.
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * Specifies whether this on-demand queue is system or custom. System queues are
     * built in. You can't modify or delete system queues. You can create and modify
     * custom queues.
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * Specifies whether this on-demand queue is system or custom. System queues are
     * built in. You can't modify or delete system queues. You can create and modify
     * custom queues.
     */
    inline Queue& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * Specifies whether this on-demand queue is system or custom. System queues are
     * built in. You can't modify or delete system queues. You can create and modify
     * custom queues.
     */
    inline Queue& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    PricingPlan m_pricingPlan;
    bool m_pricingPlanHasBeenSet;

    int m_progressingJobsCount;
    bool m_progressingJobsCountHasBeenSet;

    ReservationPlan m_reservationPlan;
    bool m_reservationPlanHasBeenSet;

    QueueStatus m_status;
    bool m_statusHasBeenSet;

    int m_submittedJobsCount;
    bool m_submittedJobsCountHasBeenSet;

    Type m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
