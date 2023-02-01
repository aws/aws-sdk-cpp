/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/SyncJobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

SyncJobSummary::SyncJobSummary() : 
    m_arnHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_syncSourceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false)
{
}

SyncJobSummary::SyncJobSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_syncSourceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

SyncJobSummary& SyncJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workspaceId"))
  {
    m_workspaceId = jsonValue.GetString("workspaceId");

    m_workspaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("syncSource"))
  {
    m_syncSource = jsonValue.GetString("syncSource");

    m_syncSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateDateTime"))
  {
    m_updateDateTime = jsonValue.GetDouble("updateDateTime");

    m_updateDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue SyncJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_workspaceIdHasBeenSet)
  {
   payload.WithString("workspaceId", m_workspaceId);

  }

  if(m_syncSourceHasBeenSet)
  {
   payload.WithString("syncSource", m_syncSource);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("status", m_status.Jsonize());

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_updateDateTimeHasBeenSet)
  {
   payload.WithDouble("updateDateTime", m_updateDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
