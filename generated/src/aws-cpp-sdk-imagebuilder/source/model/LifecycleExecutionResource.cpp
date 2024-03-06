/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecycleExecutionResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

LifecycleExecutionResource::LifecycleExecutionResource() : 
    m_accountIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_snapshotsHasBeenSet(false),
    m_imageUrisHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

LifecycleExecutionResource::LifecycleExecutionResource(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_snapshotsHasBeenSet(false),
    m_imageUrisHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = jsonValue;
}

LifecycleExecutionResource& LifecycleExecutionResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetObject("state");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetObject("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshots"))
  {
    Aws::Utils::Array<JsonView> snapshotsJsonList = jsonValue.GetArray("snapshots");
    for(unsigned snapshotsIndex = 0; snapshotsIndex < snapshotsJsonList.GetLength(); ++snapshotsIndex)
    {
      m_snapshots.push_back(snapshotsJsonList[snapshotsIndex].AsObject());
    }
    m_snapshotsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageUris"))
  {
    Aws::Utils::Array<JsonView> imageUrisJsonList = jsonValue.GetArray("imageUris");
    for(unsigned imageUrisIndex = 0; imageUrisIndex < imageUrisJsonList.GetLength(); ++imageUrisIndex)
    {
      m_imageUris.push_back(imageUrisJsonList[imageUrisIndex].AsString());
    }
    m_imageUrisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecycleExecutionResource::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("state", m_state.Jsonize());

  }

  if(m_actionHasBeenSet)
  {
   payload.WithObject("action", m_action.Jsonize());

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_snapshotsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> snapshotsJsonList(m_snapshots.size());
   for(unsigned snapshotsIndex = 0; snapshotsIndex < snapshotsJsonList.GetLength(); ++snapshotsIndex)
   {
     snapshotsJsonList[snapshotsIndex].AsObject(m_snapshots[snapshotsIndex].Jsonize());
   }
   payload.WithArray("snapshots", std::move(snapshotsJsonList));

  }

  if(m_imageUrisHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> imageUrisJsonList(m_imageUris.size());
   for(unsigned imageUrisIndex = 0; imageUrisIndex < imageUrisJsonList.GetLength(); ++imageUrisIndex)
   {
     imageUrisJsonList[imageUrisIndex].AsString(m_imageUris[imageUrisIndex]);
   }
   payload.WithArray("imageUris", std::move(imageUrisJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
