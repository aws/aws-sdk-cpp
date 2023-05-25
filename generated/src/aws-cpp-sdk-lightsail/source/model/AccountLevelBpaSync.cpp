/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AccountLevelBpaSync.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

AccountLevelBpaSync::AccountLevelBpaSync() : 
    m_status(AccountLevelBpaSyncStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastSyncedAtHasBeenSet(false),
    m_message(BPAStatusMessage::NOT_SET),
    m_messageHasBeenSet(false),
    m_bpaImpactsLightsail(false),
    m_bpaImpactsLightsailHasBeenSet(false)
{
}

AccountLevelBpaSync::AccountLevelBpaSync(JsonView jsonValue) : 
    m_status(AccountLevelBpaSyncStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastSyncedAtHasBeenSet(false),
    m_message(BPAStatusMessage::NOT_SET),
    m_messageHasBeenSet(false),
    m_bpaImpactsLightsail(false),
    m_bpaImpactsLightsailHasBeenSet(false)
{
  *this = jsonValue;
}

AccountLevelBpaSync& AccountLevelBpaSync::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = AccountLevelBpaSyncStatusMapper::GetAccountLevelBpaSyncStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastSyncedAt"))
  {
    m_lastSyncedAt = jsonValue.GetDouble("lastSyncedAt");

    m_lastSyncedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = BPAStatusMessageMapper::GetBPAStatusMessageForName(jsonValue.GetString("message"));

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bpaImpactsLightsail"))
  {
    m_bpaImpactsLightsail = jsonValue.GetBool("bpaImpactsLightsail");

    m_bpaImpactsLightsailHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountLevelBpaSync::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AccountLevelBpaSyncStatusMapper::GetNameForAccountLevelBpaSyncStatus(m_status));
  }

  if(m_lastSyncedAtHasBeenSet)
  {
   payload.WithDouble("lastSyncedAt", m_lastSyncedAt.SecondsWithMSPrecision());
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", BPAStatusMessageMapper::GetNameForBPAStatusMessage(m_message));
  }

  if(m_bpaImpactsLightsailHasBeenSet)
  {
   payload.WithBool("bpaImpactsLightsail", m_bpaImpactsLightsail);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
