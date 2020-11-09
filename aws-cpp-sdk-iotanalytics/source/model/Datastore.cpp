/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/Datastore.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

Datastore::Datastore() : 
    m_nameHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_status(DatastoreStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_retentionPeriodHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_lastMessageArrivalTimeHasBeenSet(false)
{
}

Datastore::Datastore(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_status(DatastoreStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_retentionPeriodHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_lastMessageArrivalTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Datastore& Datastore::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storage"))
  {
    m_storage = jsonValue.GetObject("storage");

    m_storageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DatastoreStatusMapper::GetDatastoreStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retentionPeriod"))
  {
    m_retentionPeriod = jsonValue.GetObject("retentionPeriod");

    m_retentionPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("lastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastMessageArrivalTime"))
  {
    m_lastMessageArrivalTime = jsonValue.GetDouble("lastMessageArrivalTime");

    m_lastMessageArrivalTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Datastore::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_storageHasBeenSet)
  {
   payload.WithObject("storage", m_storage.Jsonize());

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DatastoreStatusMapper::GetNameForDatastoreStatus(m_status));
  }

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithObject("retentionPeriod", m_retentionPeriod.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  if(m_lastMessageArrivalTimeHasBeenSet)
  {
   payload.WithDouble("lastMessageArrivalTime", m_lastMessageArrivalTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
