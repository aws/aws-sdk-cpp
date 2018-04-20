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

#include <aws/ssm/model/InventoryDeletionStatusItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InventoryDeletionStatusItem::InventoryDeletionStatusItem() : 
    m_deletionIdHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_deletionStartTimeHasBeenSet(false),
    m_lastStatus(InventoryDeletionStatus::NOT_SET),
    m_lastStatusHasBeenSet(false),
    m_lastStatusMessageHasBeenSet(false),
    m_deletionSummaryHasBeenSet(false),
    m_lastStatusUpdateTimeHasBeenSet(false)
{
}

InventoryDeletionStatusItem::InventoryDeletionStatusItem(const JsonValue& jsonValue) : 
    m_deletionIdHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_deletionStartTimeHasBeenSet(false),
    m_lastStatus(InventoryDeletionStatus::NOT_SET),
    m_lastStatusHasBeenSet(false),
    m_lastStatusMessageHasBeenSet(false),
    m_deletionSummaryHasBeenSet(false),
    m_lastStatusUpdateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

InventoryDeletionStatusItem& InventoryDeletionStatusItem::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DeletionId"))
  {
    m_deletionId = jsonValue.GetString("DeletionId");

    m_deletionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TypeName"))
  {
    m_typeName = jsonValue.GetString("TypeName");

    m_typeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletionStartTime"))
  {
    m_deletionStartTime = jsonValue.GetDouble("DeletionStartTime");

    m_deletionStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastStatus"))
  {
    m_lastStatus = InventoryDeletionStatusMapper::GetInventoryDeletionStatusForName(jsonValue.GetString("LastStatus"));

    m_lastStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastStatusMessage"))
  {
    m_lastStatusMessage = jsonValue.GetString("LastStatusMessage");

    m_lastStatusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletionSummary"))
  {
    m_deletionSummary = jsonValue.GetObject("DeletionSummary");

    m_deletionSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastStatusUpdateTime"))
  {
    m_lastStatusUpdateTime = jsonValue.GetDouble("LastStatusUpdateTime");

    m_lastStatusUpdateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue InventoryDeletionStatusItem::Jsonize() const
{
  JsonValue payload;

  if(m_deletionIdHasBeenSet)
  {
   payload.WithString("DeletionId", m_deletionId);

  }

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("TypeName", m_typeName);

  }

  if(m_deletionStartTimeHasBeenSet)
  {
   payload.WithDouble("DeletionStartTime", m_deletionStartTime.SecondsWithMSPrecision());
  }

  if(m_lastStatusHasBeenSet)
  {
   payload.WithString("LastStatus", InventoryDeletionStatusMapper::GetNameForInventoryDeletionStatus(m_lastStatus));
  }

  if(m_lastStatusMessageHasBeenSet)
  {
   payload.WithString("LastStatusMessage", m_lastStatusMessage);

  }

  if(m_deletionSummaryHasBeenSet)
  {
   payload.WithObject("DeletionSummary", m_deletionSummary.Jsonize());

  }

  if(m_lastStatusUpdateTimeHasBeenSet)
  {
   payload.WithDouble("LastStatusUpdateTime", m_lastStatusUpdateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
