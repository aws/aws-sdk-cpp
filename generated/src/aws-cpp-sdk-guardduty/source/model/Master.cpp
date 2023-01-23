/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Master.h>
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

Master::Master() : 
    m_accountIdHasBeenSet(false),
    m_invitationIdHasBeenSet(false),
    m_relationshipStatusHasBeenSet(false),
    m_invitedAtHasBeenSet(false)
{
}

Master::Master(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_invitationIdHasBeenSet(false),
    m_relationshipStatusHasBeenSet(false),
    m_invitedAtHasBeenSet(false)
{
  *this = jsonValue;
}

Master& Master::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("invitationId"))
  {
    m_invitationId = jsonValue.GetString("invitationId");

    m_invitationIdHasBeenSet = true;
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

  return *this;
}

JsonValue Master::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_invitationIdHasBeenSet)
  {
   payload.WithString("invitationId", m_invitationId);

  }

  if(m_relationshipStatusHasBeenSet)
  {
   payload.WithString("relationshipStatus", m_relationshipStatus);

  }

  if(m_invitedAtHasBeenSet)
  {
   payload.WithString("invitedAt", m_invitedAt);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
