/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ReservationPlan.h>
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

ReservationPlan::ReservationPlan() : 
    m_commitment(Commitment::NOT_SET),
    m_commitmentHasBeenSet(false),
    m_expiresAtHasBeenSet(false),
    m_purchasedAtHasBeenSet(false),
    m_renewalType(RenewalType::NOT_SET),
    m_renewalTypeHasBeenSet(false),
    m_reservedSlots(0),
    m_reservedSlotsHasBeenSet(false),
    m_status(ReservationPlanStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ReservationPlan::ReservationPlan(JsonView jsonValue) : 
    m_commitment(Commitment::NOT_SET),
    m_commitmentHasBeenSet(false),
    m_expiresAtHasBeenSet(false),
    m_purchasedAtHasBeenSet(false),
    m_renewalType(RenewalType::NOT_SET),
    m_renewalTypeHasBeenSet(false),
    m_reservedSlots(0),
    m_reservedSlotsHasBeenSet(false),
    m_status(ReservationPlanStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ReservationPlan& ReservationPlan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("commitment"))
  {
    m_commitment = CommitmentMapper::GetCommitmentForName(jsonValue.GetString("commitment"));

    m_commitmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expiresAt"))
  {
    m_expiresAt = jsonValue.GetDouble("expiresAt");

    m_expiresAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("purchasedAt"))
  {
    m_purchasedAt = jsonValue.GetDouble("purchasedAt");

    m_purchasedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("renewalType"))
  {
    m_renewalType = RenewalTypeMapper::GetRenewalTypeForName(jsonValue.GetString("renewalType"));

    m_renewalTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reservedSlots"))
  {
    m_reservedSlots = jsonValue.GetInteger("reservedSlots");

    m_reservedSlotsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReservationPlanStatusMapper::GetReservationPlanStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ReservationPlan::Jsonize() const
{
  JsonValue payload;

  if(m_commitmentHasBeenSet)
  {
   payload.WithString("commitment", CommitmentMapper::GetNameForCommitment(m_commitment));
  }

  if(m_expiresAtHasBeenSet)
  {
   payload.WithDouble("expiresAt", m_expiresAt.SecondsWithMSPrecision());
  }

  if(m_purchasedAtHasBeenSet)
  {
   payload.WithDouble("purchasedAt", m_purchasedAt.SecondsWithMSPrecision());
  }

  if(m_renewalTypeHasBeenSet)
  {
   payload.WithString("renewalType", RenewalTypeMapper::GetNameForRenewalType(m_renewalType));
  }

  if(m_reservedSlotsHasBeenSet)
  {
   payload.WithInteger("reservedSlots", m_reservedSlots);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReservationPlanStatusMapper::GetNameForReservationPlanStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
