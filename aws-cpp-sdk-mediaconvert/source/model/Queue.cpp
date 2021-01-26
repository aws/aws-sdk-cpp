/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Queue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

Queue::Queue() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pricingPlan(PricingPlan::NOT_SET),
    m_pricingPlanHasBeenSet(false),
    m_progressingJobsCount(0),
    m_progressingJobsCountHasBeenSet(false),
    m_reservationPlanHasBeenSet(false),
    m_status(QueueStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_submittedJobsCount(0),
    m_submittedJobsCountHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Queue::Queue(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pricingPlan(PricingPlan::NOT_SET),
    m_pricingPlanHasBeenSet(false),
    m_progressingJobsCount(0),
    m_progressingJobsCountHasBeenSet(false),
    m_reservationPlanHasBeenSet(false),
    m_status(QueueStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_submittedJobsCount(0),
    m_submittedJobsCountHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Queue& Queue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("lastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pricingPlan"))
  {
    m_pricingPlan = PricingPlanMapper::GetPricingPlanForName(jsonValue.GetString("pricingPlan"));

    m_pricingPlanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("progressingJobsCount"))
  {
    m_progressingJobsCount = jsonValue.GetInteger("progressingJobsCount");

    m_progressingJobsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reservationPlan"))
  {
    m_reservationPlan = jsonValue.GetObject("reservationPlan");

    m_reservationPlanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = QueueStatusMapper::GetQueueStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("submittedJobsCount"))
  {
    m_submittedJobsCount = jsonValue.GetInteger("submittedJobsCount");

    m_submittedJobsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = TypeMapper::GetTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Queue::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("lastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_pricingPlanHasBeenSet)
  {
   payload.WithString("pricingPlan", PricingPlanMapper::GetNameForPricingPlan(m_pricingPlan));
  }

  if(m_progressingJobsCountHasBeenSet)
  {
   payload.WithInteger("progressingJobsCount", m_progressingJobsCount);

  }

  if(m_reservationPlanHasBeenSet)
  {
   payload.WithObject("reservationPlan", m_reservationPlan.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", QueueStatusMapper::GetNameForQueueStatus(m_status));
  }

  if(m_submittedJobsCountHasBeenSet)
  {
   payload.WithInteger("submittedJobsCount", m_submittedJobsCount);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TypeMapper::GetNameForType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
