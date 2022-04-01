/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Member.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

Member::Member() : 
    m_accountIdHasBeenSet(false),
    m_detectorIdHasBeenSet(false),
    m_masterIdHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_relationshipStatusHasBeenSet(false),
    m_invitedAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

Member::Member(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_detectorIdHasBeenSet(false),
    m_masterIdHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_relationshipStatusHasBeenSet(false),
    m_invitedAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

Member& Member::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detectorId"))
  {
    m_detectorId = jsonValue.GetString("detectorId");

    m_detectorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("masterId"))
  {
    m_masterId = jsonValue.GetString("masterId");

    m_masterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetString("email");

    m_emailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relationshipStatus"))
  {
    m_relationshipStatus = jsonValue.GetString("relationshipStatus");

    m_relationshipStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("invitedAt"))
  {
    m_invitedAt = jsonValue.GetString("invitedAt");

    m_invitedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue Member::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_detectorIdHasBeenSet)
  {
   payload.WithString("detectorId", m_detectorId);

  }

  if(m_masterIdHasBeenSet)
  {
   payload.WithString("masterId", m_masterId);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  if(m_relationshipStatusHasBeenSet)
  {
   payload.WithString("relationshipStatus", m_relationshipStatus);

  }

  if(m_invitedAtHasBeenSet)
  {
   payload.WithString("invitedAt", m_invitedAt);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
