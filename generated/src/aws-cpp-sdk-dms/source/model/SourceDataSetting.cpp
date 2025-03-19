/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/SourceDataSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

SourceDataSetting::SourceDataSetting(JsonView jsonValue)
{
  *this = jsonValue;
}

SourceDataSetting& SourceDataSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CDCStartPosition"))
  {
    m_cDCStartPosition = jsonValue.GetString("CDCStartPosition");
    m_cDCStartPositionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CDCStartTime"))
  {
    m_cDCStartTime = jsonValue.GetString("CDCStartTime");
    m_cDCStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CDCStopTime"))
  {
    m_cDCStopTime = jsonValue.GetString("CDCStopTime");
    m_cDCStopTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SlotName"))
  {
    m_slotName = jsonValue.GetString("SlotName");
    m_slotNameHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceDataSetting::Jsonize() const
{
  JsonValue payload;

  if(m_cDCStartPositionHasBeenSet)
  {
   payload.WithString("CDCStartPosition", m_cDCStartPosition);

  }

  if(m_cDCStartTimeHasBeenSet)
  {
   payload.WithString("CDCStartTime", m_cDCStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_cDCStopTimeHasBeenSet)
  {
   payload.WithString("CDCStopTime", m_cDCStopTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_slotNameHasBeenSet)
  {
   payload.WithString("SlotName", m_slotName);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
