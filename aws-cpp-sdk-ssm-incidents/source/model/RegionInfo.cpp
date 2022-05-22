/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/RegionInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

RegionInfo::RegionInfo() : 
    m_sseKmsKeyIdHasBeenSet(false),
    m_status(RegionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_statusUpdateDateTimeHasBeenSet(false)
{
}

RegionInfo::RegionInfo(JsonView jsonValue) : 
    m_sseKmsKeyIdHasBeenSet(false),
    m_status(RegionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_statusUpdateDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

RegionInfo& RegionInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sseKmsKeyId"))
  {
    m_sseKmsKeyId = jsonValue.GetString("sseKmsKeyId");

    m_sseKmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = RegionStatusMapper::GetRegionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusUpdateDateTime"))
  {
    m_statusUpdateDateTime = jsonValue.GetDouble("statusUpdateDateTime");

    m_statusUpdateDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue RegionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_sseKmsKeyIdHasBeenSet)
  {
   payload.WithString("sseKmsKeyId", m_sseKmsKeyId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", RegionStatusMapper::GetNameForRegionStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_statusUpdateDateTimeHasBeenSet)
  {
   payload.WithDouble("statusUpdateDateTime", m_statusUpdateDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
