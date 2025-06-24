/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/LatestMpaApprovalTeamUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

LatestMpaApprovalTeamUpdate::LatestMpaApprovalTeamUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

LatestMpaApprovalTeamUpdate& LatestMpaApprovalTeamUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MpaSessionArn"))
  {
    m_mpaSessionArn = jsonValue.GetString("MpaSessionArn");
    m_mpaSessionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = MpaSessionStatusMapper::GetMpaSessionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InitiationDate"))
  {
    m_initiationDate = jsonValue.GetDouble("InitiationDate");
    m_initiationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpiryDate"))
  {
    m_expiryDate = jsonValue.GetDouble("ExpiryDate");
    m_expiryDateHasBeenSet = true;
  }
  return *this;
}

JsonValue LatestMpaApprovalTeamUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_mpaSessionArnHasBeenSet)
  {
   payload.WithString("MpaSessionArn", m_mpaSessionArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", MpaSessionStatusMapper::GetNameForMpaSessionStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_initiationDateHasBeenSet)
  {
   payload.WithDouble("InitiationDate", m_initiationDate.SecondsWithMSPrecision());
  }

  if(m_expiryDateHasBeenSet)
  {
   payload.WithDouble("ExpiryDate", m_expiryDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
