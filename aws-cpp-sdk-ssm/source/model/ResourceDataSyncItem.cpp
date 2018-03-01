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

#include <aws/ssm/model/ResourceDataSyncItem.h>
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

ResourceDataSyncItem::ResourceDataSyncItem() : 
    m_syncNameHasBeenSet(false),
    m_s3DestinationHasBeenSet(false),
    m_lastSyncTimeHasBeenSet(false),
    m_lastSuccessfulSyncTimeHasBeenSet(false),
    m_lastStatus(LastResourceDataSyncStatus::NOT_SET),
    m_lastStatusHasBeenSet(false),
    m_syncCreatedTimeHasBeenSet(false),
    m_lastSyncStatusMessageHasBeenSet(false)
{
}

ResourceDataSyncItem::ResourceDataSyncItem(const JsonValue& jsonValue) : 
    m_syncNameHasBeenSet(false),
    m_s3DestinationHasBeenSet(false),
    m_lastSyncTimeHasBeenSet(false),
    m_lastSuccessfulSyncTimeHasBeenSet(false),
    m_lastStatus(LastResourceDataSyncStatus::NOT_SET),
    m_lastStatusHasBeenSet(false),
    m_syncCreatedTimeHasBeenSet(false),
    m_lastSyncStatusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDataSyncItem& ResourceDataSyncItem::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SyncName"))
  {
    m_syncName = jsonValue.GetString("SyncName");

    m_syncNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Destination"))
  {
    m_s3Destination = jsonValue.GetObject("S3Destination");

    m_s3DestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSyncTime"))
  {
    m_lastSyncTime = jsonValue.GetDouble("LastSyncTime");

    m_lastSyncTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSuccessfulSyncTime"))
  {
    m_lastSuccessfulSyncTime = jsonValue.GetDouble("LastSuccessfulSyncTime");

    m_lastSuccessfulSyncTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastStatus"))
  {
    m_lastStatus = LastResourceDataSyncStatusMapper::GetLastResourceDataSyncStatusForName(jsonValue.GetString("LastStatus"));

    m_lastStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SyncCreatedTime"))
  {
    m_syncCreatedTime = jsonValue.GetDouble("SyncCreatedTime");

    m_syncCreatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSyncStatusMessage"))
  {
    m_lastSyncStatusMessage = jsonValue.GetString("LastSyncStatusMessage");

    m_lastSyncStatusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDataSyncItem::Jsonize() const
{
  JsonValue payload;

  if(m_syncNameHasBeenSet)
  {
   payload.WithString("SyncName", m_syncName);

  }

  if(m_s3DestinationHasBeenSet)
  {
   payload.WithObject("S3Destination", m_s3Destination.Jsonize());

  }

  if(m_lastSyncTimeHasBeenSet)
  {
   payload.WithDouble("LastSyncTime", m_lastSyncTime.SecondsWithMSPrecision());
  }

  if(m_lastSuccessfulSyncTimeHasBeenSet)
  {
   payload.WithDouble("LastSuccessfulSyncTime", m_lastSuccessfulSyncTime.SecondsWithMSPrecision());
  }

  if(m_lastStatusHasBeenSet)
  {
   payload.WithString("LastStatus", LastResourceDataSyncStatusMapper::GetNameForLastResourceDataSyncStatus(m_lastStatus));
  }

  if(m_syncCreatedTimeHasBeenSet)
  {
   payload.WithDouble("SyncCreatedTime", m_syncCreatedTime.SecondsWithMSPrecision());
  }

  if(m_lastSyncStatusMessageHasBeenSet)
  {
   payload.WithString("LastSyncStatusMessage", m_lastSyncStatusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
